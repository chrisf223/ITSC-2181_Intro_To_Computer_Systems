//Write the code for the function foo, such that given an array of length n, it finds the sum and largest value in the array and updates the corresponding variables using the pointers.
void foo(int n, int a[n], int *sum, int *largest);

void foo(int n, int a[n], int *sum, int *largest) {
  *sum = 0;
  *largest = a[0];
  for (int i = 0; i < n; i++) {
      *sum += a[i];
      if (a[i] > *largest) {
          *largest = a[i];
      }
  }
}
