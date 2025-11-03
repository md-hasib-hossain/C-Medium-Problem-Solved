#include <stdio.h>
#include <string.h>

int main()
{
    char a[1001], b[1001];
    scanf("%s %s ", a, b);

    int start, end;
    scanf("%d %d", &start, &end);

    int length = strlen(a);
    for (int i = start; i <= end; i++)
    {
        a[length] = b[i];
        length++;
    }
    a[length] = '\0';
    printf("%s\n", a);

    return 0;
}
