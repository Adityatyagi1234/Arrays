//Program for Matrix Addition?
#include <stdio.h>
void main()
{
    int a[100][100], b[100][100], c[100][100], i, j, n;
    printf("Enter the size of matrices: ");
    scanf("%d", &n);

    printf("Enter the elements of the first matrix: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the elements of the second matrix: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("The resultant matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}