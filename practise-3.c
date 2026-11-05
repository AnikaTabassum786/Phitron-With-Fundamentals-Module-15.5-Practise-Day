// Write a function named count_odd() which receives an array of integers and the size of that array and counts the number of odd elements in that array and returns that.Call that function in the main function and print the count there.

#include <stdio.h>

int count_odd(int a[], int n)
{
    
    int oddCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            oddCount++;
        }
    }
   return oddCount;
}

int main()
{

    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

   int result = count_odd(a, n);
   printf("%d",result);

    return 0;
}
