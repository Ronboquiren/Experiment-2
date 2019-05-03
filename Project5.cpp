#include <iostream> 
#include <conio.h>
using namespace std;

int main()
{
    int arr[20];
    
    cout << "Counting..." << endl;
    
    for (int ctr=0; ctr<20; ctr++){
    	if(ctr<10){
    		arr[ctr]=ctr+1;
		}else if (ctr<30){
			arr[ctr]=arr[ctr-1]+2;
		}
	}
    for (int i=0; i < 20; i++) 
    	if (i<19){
        	printf("%d, ", arr[i]);
		}else {
			printf("%d", arr[i]);
		}
	getch();
    return 0;
}
