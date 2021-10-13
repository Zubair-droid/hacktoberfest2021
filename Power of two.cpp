//Power of 2
// Asked in: Adobe
//efficient approach
//Expected Time Complexity: O(log N).
//Expected Auxiliary Space: O(1).
#include <iostream>
using namespace std;

bool isPow2(int n)
{
    if(n == 0)
        return true;
    
    return ((n & (n - 1)) == 0);
}
    
int main() {
	
	int n = 4;
	
	printf("%s", isPow2(n)? "true": "false");
}