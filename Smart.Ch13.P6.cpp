#include <iostream>
using namespace std;

class Inventory
{
	private:
		int itemNumber;
		int quantity;
		double cost;
		double totalCost;
	public:
		//default constructor set all items to value of 2
		//constructor 2 accepts an items number, cost, and quantity as arguments
		//should copy these values to appropriate member variables then call setTotalCost function
		int setItemNumber();
		int setQuantity();
		double setCost();
		double setTotalCost();
		int getItemNumber(int z);
		int getQuantity(int z);
		double getCost();
		double getTotalCost();
};
//Function prototypes

int main()
{
	
	return 0;
}