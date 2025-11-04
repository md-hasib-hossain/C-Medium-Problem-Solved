#include<stdio.h>
int main()
{

    //selection sort
    // assending order
    int n;
    scanf("%d", &n);
    int arra[n];

    for (int i = 0; i <n; i++)
    {
        scanf("%d", &arra[i]);
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j =i+1; j <n; j++)
        {
            if (arra[i] > arra[j])
            {
                int temp = arra[i];
                arra[i] = arra[j];
                arra[j] = temp;
            }           
        }      
    }
    
      for (int i = 0; i <n; i++)
    {
        printf("%d ", arra[i]);
    }
    return 0;
}

//input:
// 4
// 5 3 2 6
