#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> umap;
    umap[1] = 10;
    umap[2] = 20;
    umap[3] = 30;
    umap[3] = 40;
    umap[3] = 50;

    int key = 3;
    if (umap.count(key)) {
        cout << "Key " << key << " exists in the map with value " << umap[key] << endl;
        // cout << umap.count(key) << endl;
    } else {
        cout << "Key " << key << " does not exist in the map" << endl;
    }

    return 0;
}
