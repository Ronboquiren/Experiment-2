#include <iostream> 
#include <conio.h>
using namespace std;

void bubbleSort(int arr[], int n) 
{ 
   int i, j, temp; 
   for (i = 0; i < n-1; i++)       	  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]){
        	temp = arr[j]; 
    		arr[j] = arr[j+1]; 
    		arr[j+1] = temp; 
		   } 
            //swap(&arr[j], &arr[j+1]); 
} 
int main()
{
    int arr[3];
    
    cout << "Enter first number: ";
    cin >> arr[0];
    cout << "Enter second number: ";
    cin >> arr[1];
    cout << "Enter third number: ";
    cin >> arr[2];
    
    bubbleSort(arr, 3);

    cout << "The LARGEST of the three numbers is "<< arr[2] << ".";
    getch();
    return 0;
}
