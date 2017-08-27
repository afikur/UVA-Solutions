#include <iostream>
#include <vector>

using namespace std;

vector <int> v[10001];
int vis[10001];
int n;

void dfsVisit(int x) {
    vis[x] = 1;

    for(int i = 0; i < v[x].size(); i++) {
        int temp = v[x][i];
        if(vis[temp] == 0) {
            dfsVisit(temp);
        }
    }
}

int main() {
    int t, m, l, n1, n2, x;
    cin >> t;

    while(t--) {
        cin >> n >> m >> l;

        for(int i = 0; i <= n; i++) {
            vis[i] = 0;
            v[i].clear();
        }

        while(m--) {
            cin >> n1 >> n2;
            v[n1].push_back(n2);
        }

        while(l--) {
            cin >> x;
            dfsVisit(x);
        }

        int counter = 0;

        for(int i = 0; i <= n; i++) {
            if(vis[i] == 1) ++counter;
        }

        cout << counter << endl;
    }

    return 0;
}
