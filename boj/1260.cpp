#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

int n, m, v;
vector<vector<int>> edges;
vector<int> visited;

stack<int> s;
queue<int> q;

void DFS(int now) {

	if (visited[now] == 1) return;

	s.push(now);
	visited[now] = 1;
	cout << now << " ";

	for (int i = 1; i < n + 1; i++) {
		if (edges[now][i] == 1) {
			DFS(i);
		}
	}

	s.pop();

	return;
}

void BFS() {
	
	q.push(v);
	visited[v] = 1;

	int now;
	while (!q.empty()) {
		now=q.front();
		cout << now << " ";
		
		q.pop();

		for (int i = 1; i < n+1; i++) {
			if (edges[now][i] && visited[i]==0) {
				q.push(i);
				visited[i] = 1;
			}
		}
	}

	return;
}

int main() {

	cin >> n >> m >> v;//정점, 간선, 탐색 시작점

	edges = vector<vector<int>>(n + 1, vector<int>(n + 1));

	int v1, v2;
	
	for (int i = 0; i < m; i++) {
		cin >> v1 >> v2;
		edges[v1][v2]=1;
		edges[v2][v1]=1;
	}

	visited = vector<int>(n + 1);
	DFS(v);

	cout << endl;

	visited = vector<int>(n + 1);
	BFS();

	return 0;
}