/*
 ============================================================================
 Name        : Test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
long long f(long long x){
    return x * (x - 1) / 2;
}
int main(){
    long long ans = 0;
    int T, n, m, k, ri = 1, x, y, z;
    scanf("%d", &T);
    while (T--){
        scanf("%d%d%d", &n, &m, &k);
        ans = 0;
        for (x = 1; x <= n; x++){
            y = k / x;
            z = k % x;
            if (y + (z?1:0) > m) continue;
            ans = max(f(x) * f(y) + y * f(z), ans);
        }
        for (x = 1; x <= m; x++){
            y = k / x;
            z = k % x;
            if (y + (z?1:0) > n) continue;
            ans = max(f(x) * f(y) + y * f(z), ans);
        }
        cout << "Case #" << ri++ << ": " << ans << endl;
    }
    return 0;
}
