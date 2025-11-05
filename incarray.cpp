#include <iostream>
#include <stdint.h>
using namespace std;
int main(){
uint32_t n;
uint64_t curr, ans, cmax;
cin >> n;
cin >> curr;
cmax = curr;
ans = 0;
for (uint32_t i = 1; i < n; i++) {
cin >> curr;
ans += (curr < cmax) ? (cmax - curr) : 0;
cmax = (curr > cmax) ? curr : cmax;
}
cout << ans << endl;
return 0;
}
		
		
	
