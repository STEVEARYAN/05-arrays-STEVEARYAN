#include <stdio.h>
#include <assert.h>
#include <cs50.h>


int max(int a[], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }

int max(int a[], int n){
n=get_int("no of integer");
int maximum;

maximum=a[0];
for(int i=0;i<n;i++){
  if a[i]>a[0]{
    maximum=a[i];
  }
  return a[i];
}
}

