#include <iostream> 
#include <conio.h>
using namespace std;

int main()
{
    char package;
    int recent, prev;
    float total, meter;
    cout << "Recent Meter Reading per Gallon:";
    cin >> recent;
    cout << "Previous Meter Reading per Gallon:";
    cin >> prev;
    meter = recent + prev;
    total = 35;
    for (int ctr=0; ctr<meter; ctr++){
    	total +=1.10;
	}
    
    cout << "Bill: " <<total;
    getch();
    return 0;
}
