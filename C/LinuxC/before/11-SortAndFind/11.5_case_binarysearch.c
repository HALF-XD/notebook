#include <stdio.h>
#include <assert.h>
// 11.6 例 11.5. 带有测试代码的折半查找
#define LEN 8
int a[LEN] = {1, 2, 2, 2, 4, 5, 6, 7};

int is_sorted()
{
  int i, sorted = 1;
  for (i = 1; i < LEN; i++)
    sorted = sorted && a[i - 1] <= a[i];
  return sorted;
}

int mustbe(int start, int end, int number)
{
  int i;
  for (i = 0; i < LEN; i++)
  {
    if (i >= start && i <= end)
      continue;
    if (a[i] == number)
      return 0;
  }
  return 1;
}

int binarysearch(int number)
{
  int mid, start = 0, end = LEN - 1;

  assert(is_sorted()); /* Precondition */
  while (start <= end)
  {
    assert(mustbe(start, end, number)); /* Maintenance */
    mid = (start + end) / 2;
    if (a[mid] < number)
      start = mid + 1;
    else if (a[mid] > number)
      end = mid - 1;
    else
      return mid;
  }
  assert(mustbe(start, end, number));
  return -1;
}

int main(void)
{
  printf("%d\n", binarysearch(2));
  return 0;
}
