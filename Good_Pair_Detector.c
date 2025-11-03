#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); 

    int arr[100];  
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
        {
             even++; 
        }     
        else
        {
             odd++;
        }
            
    }

    int Pair = even * odd;

    printf("%d\n", Pair);

    return 0;
}
