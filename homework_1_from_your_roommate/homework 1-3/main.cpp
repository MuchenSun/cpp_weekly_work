#include <iostream>

using namespace std;

int grade_input(int * grade_result){
    int i;
    for(i=0;i<10;i++){
        cout << "Input " << i+1 << "th's grade(1.input '-1' to quit 2.10 times most): ";
        cin >> grade_result[i];
        if(-1==grade_result[i])
            break;
    }
    return i;
}

int grade_output(int * grade_result,int length){
    int i;
    cout << endl << "Result:" << endl;
    for(i=0;i<length;i++)
        cout << grade_result[i] << " ";
    cout << endl;
    return length;
}

void grade_average(int * grade_result,int length){
    int i;
    double sum;
    for(i=0;i<length;i++)
        sum+=grade_result[i];
    cout << endl << "Averge grade = " << sum/length << endl;
}

int main(){
    int grade_result[10];
    grade_average(grade_result,grade_output(grade_result,grade_input(grade_result)));
    return 0;
}
