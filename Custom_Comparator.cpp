#include <bits/stdc++.h>
using namespace std;
// --- Companion macros required for this debugger ---

#define f first
#define s second
// --- Master Debugger Block ---
// Debug Overloads
#ifdef SanG_05
#define debug(x) _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class... Args> void _print(unordered_set <Args...> v);
template <class... Args> void _print(unordered_multiset <Args...> v);
template <class... Args> void _print(unordered_map <Args...> v);
template <class... Args> void _print(unordered_multimap <Args...> v);
template <class... Args> void _print(list <Args...> v);
template <class... Args> void _print(forward_list <Args...> v);
template <class... Args> void _print(stack <Args...> v);
template <class... Args> void _print(queue <Args...> v);
template <class... Args> void _print(priority_queue <Args...> v);

template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.f); cerr << ","; _print(p.s); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class... Args> void _print(unordered_set <Args...> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class... Args> void _print(unordered_multiset <Args...> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class... Args> void _print(unordered_map <Args...> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class... Args> void _print(unordered_multimap <Args...> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class... Args> void _print(list <Args...> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class... Args> void _print(forward_list <Args...> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class... Args> void _print(stack <Args...> v) {cerr << "[ "; while (!v.empty()) {_print(v.top()); cerr << " "; v.pop();} cerr << "]";}
template <class... Args> void _print(queue <Args...> v) {cerr << "[ "; while (!v.empty()) {_print(v.front()); cerr << " "; v.pop();} cerr << "]";}
template <class... Args> void _print(priority_queue <Args...> v) {cerr << "[ "; while (!v.empty()) {_print(v.top()); cerr << " "; v.pop();} cerr << "]";}

typedef long long ll;
typedef pair<ll,ll> pll;
class someclass {
public:
    //whenever we write custom comparators-never use (<=,>=) for equal elements
    //kind of not define for equal elements, always use strict (<,>)
    //also use static functions(can use inline static too)
    //pass them by reference and const
    //for plain numbers
    static bool numComp(const ll& a, const ll& b){ return a>b;}// descending
    // pairs
    static bool pairComp(const pll& a, const pll& b){return a.second<b.second;}//increasing
    // vectors (works for vector<ll> elements)
    static bool vecComp(const vector<ll>& a, const vector<ll>& b){return a[2]<b[2];}
    //in above we compare for ex the 2nd element of 2 vectors
};
int main(){
    cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
    vector<ll> v1;
    sort(v1.begin(), v1.end(), someclass::numComp); //call with scope always

    vector<pll> v2;
    sort(v2.begin(), v2.end(), someclass::pairComp);

    vector<vector<ll>> v3;
    sort(v3.begin(), v3.end(), someclass::vecComp);
}  
int main(){
    cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
    //with priority queue:
    //use priority_queue<T,vector<T>,decltype(&someclass::func_name)> pq(someclass::func_name);
    priority_queue<ll,vector<ll>,decltype(&someclass::numComp)>  pq1(someclass::numComp);
    priority_queue<pll,vector<pll>,decltype(&someclass::pairComp)> pq2(someclass::pairComp);
    priority_queue<vector<ll>, vector<vector<ll>>, decltype(&someclass::vecComp)> pq3(someclass::vecComp);
}
int main(){
    cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
    //for maps, we can only sort by keys(not values-atleast not by custom comparator)
    set<pll, decltype(&someclass::pairComp)> s(someclass::pairComp); //set of pairs
    map<vector<ll>, int, decltype(&someclass::vecComp)> mp(someclass::vecComp); //set of vector<ll>, int
}










