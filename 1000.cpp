#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

#define i64 long long int

using namespace std;

i64 Sum(i64 x, i64 y);

int main() {
    i64 c;
    i64 a, b;

    while (scanf("%lld %lld", &a, &b) != EOF) {     // EOF = End Of File [inputs] // 
        c = Sum(a, b);
        printf("%lld\n", c);                          
    }
    
    return 0;
}

long long int Sum(long long int x, long long int y) {
    long long int sum;
    sum = (x + y);
    return sum;
}
