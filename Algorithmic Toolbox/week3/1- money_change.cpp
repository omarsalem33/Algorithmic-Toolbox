#include <iostream>
using namespace std;


int main() {
    int Val , ans = 0; 
    cin >> Val ;
    ans += Val / 10; 
	ans += (Val % 10) / 5; 
	ans += ((Val % 10) % 5);
	cout << ans << '\n';
    return 0;
}