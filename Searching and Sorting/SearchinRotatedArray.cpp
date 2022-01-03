// https://www.youtube.com/watch?v=1uu3g_uu8O0
int search(int* a, int n, int key) {
	// Write your code here.
	int low = 0 ;
	int high = n - 1;

	while (low <= high) {
		int mid = (low + high) / 2;

		if (a[mid] == key) {
			return mid;
		} else if (a[low] <= a[mid]) {
			// low to mid is sorted
			if (a[low] <= key && a[mid] > key) {
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		} else {
			// mid to high is sorted
			if (a[mid] < key && a[high] >= key ) {
				low = mid + 1;
			} else {
				high = mid - 1;
			}

		}
	}
	return -1;

}