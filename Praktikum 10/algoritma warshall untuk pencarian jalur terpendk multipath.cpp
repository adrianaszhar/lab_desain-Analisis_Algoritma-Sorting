#include <iostream>
#include <cstring>
using namespace std;

const int N = 100;
int dist[N][N];

void floydWarshall(int n) {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah node pada graph: ";
    cin >> n;

    memset(dist, 0x3f, sizeof(dist)); // Initialize distances to a large value

    for (int i = 0; i < n; i++) {
        dist[i][i] = 0; // Distance to self is zero
    }

    cout << "Masukkan jarak antar node:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> dist[i][j];
        }
    }

    floydWarshall(n);

    cout << "Hasil jalur terpendek antar node:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == 0x3f3f3f3f) { // If distance is still large, it means no path
                cout << "INF ";
            } else {
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

