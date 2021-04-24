//**********************************************************************************************||
//	This program will update your outside IP address with your DDNS provider given you have 	||
//	an update URL.																				||
//	Kyle Smart 4/2021																			||

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#define REPORT "\
#/bin/bash \n\
curl https://freedns.afraid.org/dynamic/update.php?VEIxNmZ1RW9KOVE3T0ZUbDFuaGF0WEg1OjE5NjIzMDA0 \
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
         infile.close();  
      }
      void setoldip()
      {   
         string originalip;
         ifstream oldip;
         oldip.open("oldip.txt");
         if(oldip) 
         {
            getline(oldip, originalip);
            oldip.close();
         } 
         else 
         {
            system("dig +short myip.opendns.com @resolver1.opendns.com >> oldip.txt");
            system(REPORT);
            oldip.open("oldip.txt");
            if(oldip) 
            {
               getline(oldip, originalip);
               oldip.close();
            } 
            else
               cout << "File open failure!\n";
         }
         
         getline(oldip, originalip);
         oldip.close();
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