#include <iostream> 
#include <conio.h>
#include <cmath>
#include <iomanip>
using namespace std;

float round(float var) 
{ 
    // we use array of chars to store number 
    // as a string. 
    char str[40];  
  
    // Print in string the value of var  
    // with two decimal point 
    sprintf(str, "%.2f", var); 
  
    // scan string value in var  
    sscanf(str, "%f", &var);  
  
    return var;  
} 

int main()
{
    int x, y;
    float z=2.5, v;
    float total;
    cout << "Enter X:";
    cin >> x;
    cout << "Enter Y:";
    cin >> y;
    switch (x){
    	case 1: 
			if (y>1 && y<5){
    			v=x*y*z;
			}else if (y>=5){
				v=x+y/z;
			}else{
				v=x+y+z;
			}
		break;
		case 2: 
			if (y<=5){
    			v=abs((x-y)/z);
			}else if (y>5){
				v=x-sqrt(y+z);
			}else{
				v=x+y+z;
			}
		break;
		default:
			v=x+y+z;
		break;
	}
    //cout << setw(10) << round(v);
    printf("%.2f", v); setw(10);
    
    getch();
    return 0;
}
