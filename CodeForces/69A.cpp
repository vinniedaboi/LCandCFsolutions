#include <cctype>
using namespace std;
 
int main() {
  int n;
  int sumx = 0, sumy = 0, sumz = 0;
 
  cin >> n;
 
  for(int i = 0; i < n; ++i){
    int x, y, z;
    cin >> x >> y >> z;
    
    sumx += x;
    sumy += y;
    sumz += z;
  }
 
  if(sumx == 0 && sumy == 0 && sumz == 0){
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
  
}