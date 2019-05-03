#include <iostream> 
#include <conio.h>
using namespace std;

int main()
{
    int x, product;
    
    cout << "Enter a number: ";
    cin >> x;
    cout << "Multiplication table of " << x << ":" << endl;
    for (int ctr=1; ctr<=10; ctr++){
    	product = ctr * x;
    	cout << ctr << " * " << x << " = " << product << endl;
	}
	getch();
    return 0;
}
