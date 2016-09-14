#include <iostream>

using namespace std;

const int div_minute = 60;
const int div_hour = 60;
const int div_day = 24;

int main(){///it's possible to use recursion ?
    long long Second; ///to be input
    int day,hour,minute; ///
    int remain_hour,remain_minute,remain_second;
    int result_test;

    cout << "Input Total Second: ";
    cin >> Second;

    ///test algorithm
    remain_second = Second%div_minute;
    minute = Second/div_minute;
    remain_minute = minute%div_hour;
    hour = minute/div_hour;
    remain_hour = hour%div_day;
    day = hour/div_day;

    cout << endl << "Second transfered to: " << day << " day(s) " << remain_hour << " hour(s) " << remain_minute << " min(s) " <<  remain_second <<  " second(s)" <<endl;
    result_test = day * div_day*div_hour*div_minute + remain_hour * div_hour*div_minute + remain_minute * div_minute + remain_second;
    cout << endl << "Test: Total second(s) = " << day << "*24*60*60 + " << remain_hour << "*60*60 + " << remain_minute << "*60 + " << remain_second << " = " << result_test << " s" << endl;

    return 0;
}

/*
Questions:
1.is it possible to use recursion?
2.use a child function to deal the data?
3.in 2's case, should use a struct or array to store the data?
*/
