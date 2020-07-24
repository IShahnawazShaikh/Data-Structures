  /*
------------------------------|بسم الله الرحمن الرحيم|------------------------------//
------------"IN THE NAME OF ALLAH, THE MOST GRACIUOS, THE MOST MERCIFUL"-------------//
__________________________________ShahnawazShaikh_____________________________________
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define int int64_t
int bS(vector<int> &arr, int l, int r, int x){ 
    while (l <= r) { 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x) 
             return mid; 
        if (arr[mid] < x) 
            l = mid + 1; 
        else
            r = mid - 1; 
    } 
    return -1; 
} 
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);  
  int n;
  cin >> n;
  vector<int> v(n);
  for(auto &i: v)
        cin >> i;
  int find;
  cin >> find;
  cout <<"status: "<<binary_search(v.begin(), v.end(), find) << endl;
  int pos = bS(v, 0, n-1, find);
  cout <<"position: "<<pos + 1 << endl;
  int freq = upper_bound(v.begin(), v.end(), find) - lower_bound(v.begin(), v.end(), find);
  cout <<"frequency: "<<freq << endl; 
    
 return 0;
}