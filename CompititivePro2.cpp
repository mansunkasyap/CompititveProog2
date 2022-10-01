// PRODUCT OF ARRAY EXCEPT SELF
#include<stdio.h>
using namespace std;
void ProductOfArr(int [], int);
void ProductOfArr(int a[], int s)
{
    int res = 1;
    for (int i=0; i<s; i++)
    {
        for (int j = 0; j<s; j++)
        {
            if(i != j)
                res = res*a[j];
        }
        printf ("%d ", res);
        res = 1;
    }
}
int main ()
{
    int nums[10], s;
    printf ("Enter size of array: ");
    scanf ("%d", &s);
    printf ("Enter %d elements of  array: ", s);
    for(int i=0; i<s; i++)
    {
        scanf ("%d", &nums[i]);
    }
    ProductOfArr(nums, s);
    return 0;
}
