#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int n;
    unordered_set<int> s;
    scanf("%d",&n);
    while(!s.count(n)){
        s.insert(n++);
        while(n%10==0) n/=10;
    }
    printf("%d\n", s.size());
}
