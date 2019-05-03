#include <iostream> 
#include <conio.h>
using namespace std;

int main()
{
    int arr[22];
    
    cout << "Fibonacci number:" << endl;
    
    arr[0] = 0;
    arr[1] = 1;
    
    for (int ctr=2; ctr<22; ctr++){
		arr[ctr]=arr[ctr-2]+arr[ctr-1];
	}
    for (int i=0; i < 22; i++) 
    	if (i<21){
        	printf("%d, ", arr[i]);
		}else {
			printf("%d", arr[i]);
		}
	getch();
    return 0;
}
