#include <bits/stdc++.h>

using namespace std;
struct Point {
    int x;
    int y;
};

double Dist(const Point& a, const Point& b) {
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<vector<Point>> p(n , vector<Point>(2));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> p[i][j].x >> p[i][j].y;
        }
    }
    vector<Point> q(m);
    for (int i = 0; i < m; i ++) {
        cin >> q[i].x >> q[i].y;
    }
    vector<vector<double>> qd(m, vector<double>(m));
    for (int i = 0;i < m; i++) {
        for (int j = 0; j < m; j++) {
            qd[i][j] = Dist(q[i], q[j]);
        }
    }
    vector<vector<vector<double>>> dp(1 << m, vector<vector<double>>(m , vector<double>(m , 1e30)));
    for (int i = 0; i < m; i++) {
        dp[1 << i][i][i] = 0;
    }
    for (int t = 0; t < (1 << m); t++) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                if (dp[t][i][j] < 1e20) {
                    for (int k = 0; k < m; k++) {
                        if (!(t & (1 << k))) {
                            int nt = t | (1 << k);
                            dp[nt][i][k] = min(dp[nt][i][k], dp[t][i][j] + qd[j][k]);
                        }
                    }
                }
            }
        }
    }
    vector<vector<vector<double>>> pqd(n, vector<vector<double>>(2, vector<double>(m)));
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < 2; k++) {
            for (int j = 0; j < m; j++) {
                pqd[i][k][j] = Dist(p[i][k], q[j]);
            }
        }
    }
    vector<vector<vector<vector<double>>>> cover(n, vector<vector<vector<double>>>(2, vector<vector<double>>(n, vector<double>(2, 1e30))));
    vector<double> dists;
    for (int i = 0; i < n; i++) {
        for (int x = 0; x < 2; x++) {
            for (int j = i + 1;j < m; j++) {
                for (int y =0; y < 2; y++) {
                    for (int v0 = 0; v0 < m; v0++) {
                        for (int v1 = 0; v1 < m; v1++) {
                            cover[i][x][j][y] = min(cover[i][x][j][y], pqd[i][x][v0] + dp[(1 << m) - 1][v0][v1] + pqd[j][y][v1]);
                        }
                    }
                    dists.push_back(cover[i][x][j][y]);
                }
            }
        }
    }
    sort(dists.begin(), dists.end());
    dists.resize(unique(dists.begin(), dists.end()) - dists.begin());
    int low = 0, high = (int) dists.size() - 1;
    while (low < high) {
        int mid = (low + high) >> 1;
    }
    vector<double> f(2);
    f[0] = f[1] = 0;
    for (int i = 1; i < n; i++) {
        vector<double> nf(2, 1e30);
        for (int x = 0; x < 2; x++) {
            for (int y = 0; y < 2; y++) {
                for (int j = 0; j < m; j++) {
                    for (int k = 0; k < m; k++) {
                        nf[y] = min(nf[y], f[x] + Dist(p[i - 1][x], q[j]) + dp[(1 << m) - 1][j][k] + Dist(q[k], p[i][y]));
                    }
                }
            }
        }
    }
    cout << fixed << setprecision(17) << min(f[0], f[1]) << '\n';
    return 0;
}