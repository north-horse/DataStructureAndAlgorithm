//
// Created by K on 2022/12/16.
//

#include <iostream>
using namespace std;
int f[100], exp[100], len;
void primefactor(int n ){
    int d=2;
    while(1ll*d*d <= n && n > 1){
        int k=0;
        while(n%d==0){
            k++;
            n/=d;
        }
        if (k > 0){
            len++;
            f[len] = d;
            exp[len] = k;
        }
        d++;
    }
    if (n > 1){
        len++;
        f[len] = n;
        exp[len] = 1;
    }
}
int main(){
//    len = 0;
    primefactor(13);
    for (int i=1;i<=len;i++){
        cout << f[i] << " " << exp[i] << endl;
    }
    return 0;
}