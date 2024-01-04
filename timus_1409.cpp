/*
 * Problem statement - https://acm.timus.ru/problem.aspx?space=1&num=1409  
 */

#include <iostream>
#include <string>

using namespace std;

string shotted_cans(int harry, int larry){
    return to_string(larry - 1) + " " + to_string(harry - 1);
}

int main(){
    int harry, larry;
    cin >> harry >> larry;

    cout << shotted_cans(harry, larry) << endl;

    return 0;
}
