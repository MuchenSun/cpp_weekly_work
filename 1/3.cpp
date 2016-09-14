#include <iostream>

#define MAX 10

using namespace std;


//return actural length 
int  array_input(float a[], int len)
{
	int i;
	for(i=0; i<len && cin>>a[i]; i++);
	return i;
}


void array_display(float a[],int len)
{
	for(int i=0;i<len;i++)
		cout << a[i] <<" ";
	cout<<endl;
}


float array_average(float a[],int len)
{
	float sum=0;
	for(int i=0;i<len;i++)
		sum += a[i];
	return (sum / len);
}	
int main()
{
	float scores[MAX], avg;
	int len;

	cout << "Input your scores(no more than 10 scores,Ctrl + D to escape input):" << endl;
		
	len = array_input(scores, MAX);
	avg = array_average(scores, len);

	cout << "Your Golf Scores:" << endl;
	array_display(scores, len);
	cout << "Average=" << avg <<endl;
	
	return 0;
}	
