#include <stdio.h>
#include <cs50.h>

float avg(int len ,int arr[]);

int main(void)
{
  int av_len = get_int("what's the avrage length: ");
    int arr[av_len];
  for(int j=0;j<av_len;j++){
      arr[j] = get_int("Enter anumber: ");
  }
  printf("the avragy is: %.2f \n", avg(av_len,arr));
}

float avg(int len ,int arr[])
{
    int sum=0;
    for(int i=0;i<len;i++){
        sum += arr[i];
    }
    return (float) sum/(float) len;
}