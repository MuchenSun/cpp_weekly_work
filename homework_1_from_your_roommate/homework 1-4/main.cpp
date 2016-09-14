#include <iostream>
#include <math.h>

using namespace std;

/// Request: input two integers, count the summary of all the integers between them (include themselves)

int main(){
    ///int a,b;
    double a=1,b=1;
    int result;

    while(a*b+a+b){/// 'a*b+a+b==0' appears only when a==b==0;
        cout << "Input two integers (1.separated by space 2.input '0 0' to quit): ";
        cin >> a >> b;
        result = ((int)a+(int)b)*( fabs(((int)b-(int)a)) +1)/2; /// 'fabs()' used to count the amount of elements
        if(a*b+a+b)
            cout << "Result = " << result << endl;
    }

    return 0;
}

/*
Question:
    how to make the fault-tolerance better?
    is the circulation necessary?
*/
