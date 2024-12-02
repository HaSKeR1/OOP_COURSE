#include <iostream>
#include <vector>
#include <queue>

void BFS(std::vector<std::vector<int>>& adj_list, const int node) {
    std::queue<int> queue;
    queue.push(node);

    std::vector<bool> visited(adj_list.size(), false);

    visited[node] = true;

    while (!queue.empty()) {
        int curr_node = queue.front();
        queue.pop();
        std::cout << curr_node << " ";

        for (auto& node_adj : adj_list[curr_node]) {
            if (!visited[node_adj]) {
                visited[node_adj] = true;
                queue.push(node_adj);
            }
        }
    }
}

int main() {
    std::vector<std::vector<int>> adj_list{ {1, 2, 3},{}, {1}, {4, 5}, {5}, {}};
    BFS(adj_list, 0);
    return 0;
}