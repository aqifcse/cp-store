/*
 * Problem statement - https://acm.timus.ru/problem.aspx?space=1&num=1293
 *
 * input
 * 5 2 3
 *
 * Output
 * 60
 *
 * */

#include <iostream>
using namespace std;

int weight_detection(int n, int a, int b){
    return n * a * b * 2;
}

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    cout << weight_detection(n, a, b) << endl;

    return 0;
}
