#include <iostream>

using namespace std;

int main()
{
    long sec,min,hour,day;

	//Promote
	cout << "Seconds=";
	cin >> sec;

	//Caculate
	min = sec / 60;
	sec %= 60;

	hour = min /60;
	min %= 60;

	day = hour / 24;
	hour %= 24;

	//Output
	cout << day << " Days," << hour << " Hours,";
	cout << min << " Minutes," << sec <<" Seconds in total." << endl;
	
    return 0;
}
