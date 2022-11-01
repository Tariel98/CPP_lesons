#include <iostream>
using namespace std;

void test()
{
static int var = 0;
++var;
}

int main()
{

test();
test();

return 0;
} 