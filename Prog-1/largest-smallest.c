//Calculate array size
#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])
int main()
{
    int arr[] = {3, 18, 10, 4, 2, 22, 150, 40, 23, 35, 60};
    int i, small, large;
    const int N = ARRAY_SIZE(arr);
    small = arr[0];
    large = arr[0];
    //iterate through the array
    for (i = 1; i < N; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    printf("Largest element is : %d\n", large);
    printf("Smallest element is : %d\n", small);
    return 0;
}

small = 2

large = 22
arr =  {3, 18, 10, 4, 2, 22, 150, 40, 23, 35, 60}
int i , small, large

initilization , condition-check, increment/decrement
for(int i = 1; i<N; i++){
		if( arr[i] < small ){
			small = arr[i];
		}

	if(arr[i] > large) {
		large = arr[i];
	}
}
 printf("Largest element is : %d\n", large);
 printf("Smallest element is : %d\n", small);
 return 0;
