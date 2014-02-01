#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
bool Opagjachki(int i,int w)
{
	return i>w;
}
int main()
{
    int n, m;
    cin >> n >> m;
 
    vector<int> v;
 
    for (int i=0; i<n; i++)
    {
        int xi;
        cin >> xi;
 
        v.push_back(xi);
    }
 
 
    sort(v.begin(), v.end(),Opagjachki);
    int rezultat = 0;
 
    for (int i=0; i<v.size(); i+=m)
    {
        rezultat += v[i];
        rezultat += v[i];
    }
 
    cout << rezultat << endl;
    return 0;
}