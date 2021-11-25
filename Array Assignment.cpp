#include <iostream>
#include <numeric>
using namespace std;
//137187 - Asher Yisrael Kutswa

int main(){
	int ten[] = {10,20,20,40,50,60,70,80,90,100};
	int sum = 0;
	int product = 1;
	float mean;
//For Loop for Sum of Array.
	for (int i=0; i<10; i++){
		sum=sum+ten[i];
	}
//For Loop for Product of Array.
 for (int i = 0; i < 10; i++)
    {
     product *= ten[i];
    }
//Function for finding the Average of the Array
mean = (float)sum / 10;
//Output of the Funtions on the Array
	cout<<"The values within the arrray ten are : \n\n";
	cout<<ten[0]<<"\n";
	cout<<ten[1]<<"\n";
	cout<<ten[2]<<"\n";
	cout<<ten[3]<<"\n";
	cout<<ten[4]<<"\n";
	cout<<ten[5]<<"\n";
	cout<<ten[6]<<"\n";
	cout<<ten[7]<<"\n";
	cout<<ten[8]<<"\n";
	cout<<ten[9]<<"\n\n";
	cout<<"1. The sum of the values within the arrray ten are : \n\n";
	cout<<sum<<"\n\n";
	cout<<"2. The product of the values within the arrray ten are : \n\n";
	cout<<product<<"\n\n"; 
	cout<<"3. The mean of the values within the arrray ten are : \n\n";
	cout<<mean<<"\n\n"; 
	return 0;
}
