#include <iostream>
using namespace std;

namespace N {

    // Variable with namespace scope
    int namespaceVar = 10;
}

int main() {

    // Access variable using namespace
    cout << N::namespaceVar;

    return 0;
}
