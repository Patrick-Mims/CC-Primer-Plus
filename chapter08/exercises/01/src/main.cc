#include <iostream>

using namespace std;

inline void swap(int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void swapr(int &a, int &b)
{
  cout << a << "-----" << b << endl;
}

void swapp(int *a, int *b)
{
  cout << *a << "-----" << *b << endl;
}

void swapv(int a, int b)
{
  cout << a << "-----" << b << endl;
}

int main(void)
{
  int a = 10;
  int c = 20;
  int & b = c;

  cout << a << "-----" << b << endl;

  swapr(a, b);
  /*pass the address of the variable */
  swapp(&a, &b);
  swapv(a, b);
  swap(a, b);

  cout << a << "after swap-----" << b << endl;

  return 0;
}
