#include<stdio.h>

int countDigits(int numInput) {
  int count = 0;
  while( numInput != 0) {
    //int a = numInput % 10;
    numInput = numInput / 10;
    count = count + 1;
  }

  return count;
}

int main() {
  int num = 42;
  int numberToSplit = num;
  int sum = 0;
  int digitCount = countDigits(num);
  int arr[digitCount];
  int x = 0;
  int y = 0;
  printf("There are %d digits in %d\n", digitCount, numberToSplit);
  printf("Declared a array size of: %lu\n", sizeof(arr)/sizeof(int));
  while(num > 0) {
    int i = num % 10;
    num = num / 10;
    printf("%d\n", i);
    arr[x] = i;
    x = x + 1;
  }
  printf("Number of digits in %d is %lu\n", numberToSplit,sizeof(arr)/sizeof(int));
  while( y < sizeof(arr)/sizeof(int)) {
    sum = sum + arr[y];
    y = y + 1;
  }
  printf("The sum all digits is: %d \n", sum);
  if ( numberToSplit % sum == 0 ) {
    printf("%d is a Harshad number in base 10 \n", numberToSplit);
  } else {
    printf("%d is not a Harshod number in base 10 \n", numberToSplit);
  }
}
