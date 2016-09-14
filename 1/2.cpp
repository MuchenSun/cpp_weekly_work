#include <iostream>




using namespace std;

float get_hamonlic_mean(float x,float y)
{
	return 2.0 * x * y / ( x + y);
}	

int main()
{
	float a,b;

	while(1){
		cout << "Input two number = ";
		cin >> a >> b;
		if(a == 0 || b==0)
			break;
		else
			cout<<"Harmolic Mean is " << get_hamonlic_mean(a, b) <<endl;
	}
	return 0;
}
