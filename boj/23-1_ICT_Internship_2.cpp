#include<iostream>
#include<vector>
using namespace std;

int main() {

	int n, m;

	cin >> n;
	cin >> m;

	vector<vector<int>> mat(n, vector<int>(m,0));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mat[i][j];
		}
	}

	vector<int> before(m);
	for (int i = 0; i < m; i++) {
		before[i]=mat[0][i]; 
	}

	vector<int> energy(m);

	for (int i = 1; i < n; i++) { 

		for (int j = 0; j < m; j++) {

			if (j == 0) { //
				energy[j] = mat[i][j] + before[j];
				if (energy[j]> mat[i][j] + before[j + 1]) energy[j] = mat[i][j] + before[j+1];
			}
			else if (j == m - 1) { //
				energy[j] = mat[i][j] + before[j - 1];
				if (energy[j] > mat[i][j] + before[j]) energy[j] = mat[i][j] + before[j];
			}
			else { //
				energy[j] = mat[i][j] + before[j - 1];
				if (energy[j] > mat[i][j] + before[j]) energy[j] = mat[i][j] + before[j];
				if (energy[j] > mat[i][j] + before[j + 1]) energy[j] = mat[i][j] + before[j + 1];
			}

			cout << energy[j] << " ";

		}

		cout << endl;

		for (int j = 0; j < m; j++) {
			before[j] = energy[j];
		}
	}

	int minE = energy[0];
	for (int i = 1; i < m; i++) {
		if (minE > energy[i]) minE = energy[i];
	}
	cout << 100-minE;

	return 0;
}
