int flipBits(int* a, int n)
{
    // WRITE YOUR CODE HERE
    int mxDiff = 0;
    int onesCount = 0 ;
    int diff = 0;
    for (int i = 0 ; i < n; i++) {
        if (a[i] == 1) {
            onesCount++;
            diff--;
            if (diff < 0) {
                diff = 0;
            }
        } else {
            diff++;
            mxDiff = max(mxDiff, diff);
        }
    }
    return onesCount + mxDiff;


}