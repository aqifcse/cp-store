/*
 * Peoble statement - https://acm.timus.ru/problem.aspx?space=1&num=1264
 * Input 
 * 3 1
 *
 * Output
 * 6
 */


#include <iostream>

using namespace std;

int workdays(int n, int m){
    int count_n = 0;
    int count_m = 0;

    for (int i = 0; i < n; i++){
        count_n = count_n + 1;
    }

    for (int j = 0; j <= m; j++){
        count_m = count_m + 1;
    }

    return count_n * count_m;
}

int main(){
    int n, m;

    cin >> n >> m;

    cout << workdays(n, m) << endl;

    return 0;
}
