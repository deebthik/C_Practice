#define max(x, y) (((x) > (y)) ? (x) : (y))
#define min(x, y) (((x) < (y)) ? (x) : (y))

int maxSubArraySum(int a[], int size)
{
    int max_so_far = -9999, max_ending_here = 0, max_element = 9999;
    
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max(max_ending_here + a[i], 0);
        max_so_far      = max(max_ending_here, max_so_far);
        max_element     = max(max_element, a[i]);
        
        if (max_so_far == 0)
            max_so_far = max_element;
    }
    return max_so_far;
}

/*Driver program to test maxSubArraySum*/
int main()
{
    int a[] = {-2, -3, -4, -5, -6, -7, -8, -9};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    printf("%d", max_sum);
    return 0;
}
