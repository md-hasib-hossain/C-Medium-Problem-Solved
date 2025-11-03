// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int A[n], B[n], result[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &A[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &B[i]);
//     }

//     int j = n - 1;

//     for (int i = 0; i < n; i++, j--)
//     {
//         result[i] = A[i] + B[j];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", result[i]);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int A[100], B[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int x = A[i];
        int y = B[n - 1 - i];
        int sum = x + y;
        printf("%d ", sum);
    }

    return 0;
}
