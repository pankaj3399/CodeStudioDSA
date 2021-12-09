long long maxSubarraySum(int a[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long maxSum = -1e9 ; 
    long long curr = 0; 
    
    for(int i=0 ;i<n;i++){
        curr+=a[i];
        maxSum = max(curr, maxSum);
        
        if(curr < 0){
            curr = 0 ;
        }
        
    }
    
    return maxSum > 0 ? maxSum : 0;
}