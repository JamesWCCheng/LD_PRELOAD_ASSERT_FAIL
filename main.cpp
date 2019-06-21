#include <cassert>
#include <iostream>
#include <string>
using namespace std;
void TestPreload()
{
  cout << "Internal TestPreload()" << endl;
}
int main()
{
  bool test = false;
  TestPreload();
  assert(test);
  return 0;
}