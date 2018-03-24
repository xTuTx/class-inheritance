#include <iostream>
#include "mother.h"
#include "daughter.h"

using namespace std;

int main()
{
    mother mom;
    mom.sayhello();
    daughter sandy;
    sandy.sayhello();
    return 0;
}
