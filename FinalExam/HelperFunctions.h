int f1(int a[], int n, int &m) {
    int i;
    m = a[0];
    a[0] *= 10;
    for (i=1; i<n; i++) {
        m *= a[i];
        a[i] *= 10;
    }
    return a[i-1]/10;
};

int f(int n) {
    if (n<1)
        return 0;
    if (n%2 != 0)
        return n+f(n-1);
    else
        return -n+f(n-1);
};