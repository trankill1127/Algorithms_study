//50. 영지선택(small)

#include<iostream>
using namespace std;

int main() {
	int H, W;
	cin >> H >> W;

	int ** land = new int*[H];
	for (int i = 0; i < H; i++) land[i] = new int[W];

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> land[i][j];
		}
	}

	int t_H, t_W;
	cin >> t_H >> t_W;

	int max_sum=0, sum=0;
	for (int i = 0; i < H - t_H +1; i++) {
		for (int j = 0; j < W - t_W +1; j++) {
			
			sum = 0;

			for (int ii = 0; ii < t_H; ii++) {
				for (int jj = 0; jj < t_W; jj++) {
					sum += land[i + ii][j + jj];
				}
			}

			if (max_sum < sum) max_sum = sum;

		}
	}

	cout << max_sum;

	for (int i = 0; i < H; i++) delete[] land;
	delete[] land;
	return 0;
}