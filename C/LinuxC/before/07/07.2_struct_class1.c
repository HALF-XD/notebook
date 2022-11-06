#include <stdio.h>
// 结构体传参

struct complex_struct
{
  double x, y;
} z;
struct complex_struct add_complex(struct complex_struct z1, struct complex_struct z2)
{
  z1.x = z1.x + z2.x;
  z1.y = z1.y + z2.y;
  return z1;
};

int main(void)
{
  struct complex_struct z = {3.0, 4.0};
  z = add_complex(z, z);
  if (z.y < 0)
    printf("z=%f%fi\n", z.x, z.y);
  else
    printf("z=%f+%fi\n", z.x, z.y);
  return 0;
}