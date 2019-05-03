#include <iostream> 
#include <conio.h>
using namespace std;

int main()
{
    int x, sum;
    
    do{
	    cout << "Enter a number: ";
	    cin >> x;
	    if (x>0){
	    	int arr [x];
	    	for (int ctr=1; ctr<=x; ctr++){
	    		sum += ctr;
			}
			cout << "The sum of all whole numbers from 1 to " << x << " is " << sum << "." << endl;
			sum=0;
		}
	}while(x>0);
    cout << "Thank you!";
	getch();
    return 0;
}
