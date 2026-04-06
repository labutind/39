#include <iostream>
Using namespace std;

Int ** creat(int n, int m)
{
    Int **mas = new int *[n];
    For (int i = 0; i < n; ++i)
        Mas[i] = new int [m];
    For (int i = 0; i < n; ++i)
        For (int j = 0; j < m; ++j)
            Mas[i][j] = i + j;
    Return mas;
}

Int main()
{
    Int n = 5, m = 5;
    Int **a = creat(n, m);
    Print(a, n, m); // предполагается, что print определена ранее
    For (int i = 0; i < n; ++i)
        Delete [] a[i];
    Delete [] a;
    Return 0;
}