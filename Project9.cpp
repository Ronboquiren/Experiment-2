#include <iostream> 
#include <conio.h>
using namespace std;

int main()
{
    int x, y;
    
    cout << "How many rows: ";
    cin >> x;
    cout << "How many columns: ";
    cin >> y;
    for (int ctr=0; ctr<x; ctr++){
    	for (int cnt=0; cnt<y; cnt++){
    		cout << "*";
		}
		cout << endl;
	}
	getch();
    return 0;
}
