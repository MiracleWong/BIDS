#include <iostream>
#include <vector>

using namespace std;

int main(){
    const int n = 42;
    const int c = 2;
    int A1[n];
    vector<int> V1(n);
    for(int i = 0; i < n; ++i)
        A1[i] = c;
    vector<int> V2(4, c);
    vector<int> V3 = {1, 2, 3, 4, 5};
    for(size_t i=0; i < V3.size(); i++)
        cout << V3[i];
    cout << endl;
    for(size_t i=0; i < V2.size(); i++)
        cout << V2[i];
    cout << endl;
    cout << V3.size() << endl;
    V3.push_back(6);
    cout << V3.size() << endl;
    cout << V3.front() << " -->  " << V3.back() << endl;
    V3.pop_back();
    cout << V3.size() << endl ;
    cout << V3.front() << " --> " << V3.back() << endl;
    for(auto iter= V3.begin(); iter != V3.end(); ++iter)
    {
        *iter = c;
	cout << *iter << " " ;
    }
    cout << endl;
    return 0;
}
