/**
Problem statement - https://acm.timus.ru/problem.aspx?num=1000&space=1

input
1 5

output
6

**/


#include <iostream>

using namespace std;

int add (int number1, int number2){
    return number1 + number2;
}

int main(){

    int num1, num2;
    
    cin >> num1 >> num2;

    cout << add(num1, num2) << endl;
    
    return 0;
}
