//**********************************************************************************************
//	This program will update your outside IP address with your DDNS provider given you have 	   
//	an update URL.																				                     
//	Kyle Smart 4/2021																			                     

#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#define REPORT "\
#/bin/bash \n\
curl (ENTER YOUR URL HERE) \ //remove parentheses
"

class DDNS
{
   private:
      string currentip;
      string oldip;
   public:
      DDNS()
      {
         setcurrentip();
         setoldip();
      }
      void setcurrentip()
      {  
         string ip;
         ifstream infile;
         system("dig +short myip.opendns.com @resolver1.opendns.com >> currentip.txt");
         infile.open("currentip.txt");
         if (!infile)
            cout << "File open failure!\n";
            
         getline(infile, ip);
         currentip = ip;
         infile.close();  
      }
      void setoldip()
      {   
         string originalip;
         ifstream oldiptext;
         oldiptext.open("oldip.txt");
         if(oldiptext) 
         {
            getline(oldiptext, originalip);
            oldiptext.close();
         } 
         else 
         {
            system("dig +short myip.opendns.com @resolver1.opendns.com >> oldip.txt");
            system(REPORT);
            oldiptext.open("oldip.txt");
            if(oldiptext) 
            {
               getline(oldiptext, originalip);
               oldip = originalip;
               oldiptext.close();
            } 
            else
               cout << "File open failure!\n";
         }
         
         getline(oldiptext, originalip);
         oldip = originalip;
         oldiptext.close();
      }
      string getcurrent() const
      {   return currentip;   }
      string getold() const
      {   return oldip;   }
      void compareip(string ip, string ip2)
      {
         if (ip.compare(ip2) != 0)
         {
            ofstream outfile;
            cout << "New ip address\n";
            system("rm oldip2.txt");
            system(REPORT);
            outfile.open ("oldip.txt");
            if (!outfile)
            {
               cout << "File open failure\n";
            }
            outfile << currentip;
            outfile.close();
            system("rm currentip.txt");
         }
         else
         {
            cout << "Same ip. \n";
            system("rm currentip.txt");
         }
      }
};


int main()
{
   string currentip, oldip;
   DDNS compare;

   currentip = compare.getcurrent();
   oldip = compare.getold();
   compare.compareip(currentip, oldip);

   

   return 0;
}
