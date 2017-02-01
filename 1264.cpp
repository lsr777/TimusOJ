#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using  namespace std;

int Count(int N, int M) {
    int count = 0;
    count = (M+1) * N;
    return count;
}

int main() {
    int m, n;
    int count;

    scanf("%d %d", &n, &m);
    count = Count(n, m);
    printf("%d\n", count);

    return 0;
}

