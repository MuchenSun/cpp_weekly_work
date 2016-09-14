#include <iostream>


using namespace std;


int main()
{
	int min,max,i,sum=0;
	cout << "Input two integers:";
	cin >> min >> max;

   	if(min > max){
		//Swap them without third varibale;
		min = max + min;
		max = min -max;
		min = min -max;
	}
	
	for(i=min;i<=max;i++)
		sum += i;
	cout<< min <<" + ... +" << max << " = " << sum <<endl;
	return 0;
}
