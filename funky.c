#include <stdio.h>

int helper1(int* ap, int size) {

  int *cp;
  printf("[ ");
  for (cp = ap; cp < (ap + size); cp++) {
    printf("%d ", *(cp));
  }
  printf("]\n");

  return 0;

}

int helper2(int* ap, int size) {

  int sum = 0;
  int* cp;
  for (cp = ap; cp < ap + size; cp++) {
    sum += *cp;
  }
  int avg = sum / size;
  return avg;

}

int helper3(int* ap, int* bp, int size) {

  int* cp;
  int* dp = bp;

  for (cp = ap; cp < ap + size; cp++) {
    *dp = *cp;
    dp++;
  }

  return 0;

}

int main() {

  int testarr[5] = {1,2,3,4,5};
  printf("array1: ");
  helper1(testarr, (sizeof(testarr)/ sizeof(int)));
  int avge = helper2(testarr, (sizeof testarr/ sizeof 2));
  printf("avg: %d\n", avge);
  int test2arr[5];
  helper3(testarr, test2arr, (sizeof testarr/ sizeof 2));
  printf("array2: ");
  helper1(test2arr, (sizeof testarr/ sizeof 2));

}

