#include <iostream> 
#include <conio.h>
using namespace std;

int main()
{
    char package;
    int hours;
    float total;
    cout << "What Package?\nPackage A\nPackage B\nPackage C\n";
    cin >> package;
    cout << "How many hours?\n";
    cin >> hours;
    
    if(package == 'a' || package == 'A'){
    	total = 995;
    	if (hours > 10){
    		hours -= 10;
    		for (int ctr=0; ctr<hours; ctr++){
    			total +=20;
			}
		}
	}else if(package == 'b' || package == 'B'){
    	total = 1495;
    	if (hours > 20){
    		hours -= 10;
    		for (int ctr=0; ctr<hours; ctr++){
    			total +=10;
			}
		}
	}else if(package == 'c' || package == 'C'){
    	total = 1995;
	}else{
		cout << "Incorrect Package";
	}
    cout << "Total Amount Due:" << total;
    
    getch();
    return 0;
}
