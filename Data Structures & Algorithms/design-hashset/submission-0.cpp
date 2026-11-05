class MyHashSet {
private:
    static const int size = 1000;
    vector<vector<int>> buckets;

    int hash(int key){
        return key % size;
    }
public:
    MyHashSet() {
        buckets.resize(size);
    }
    
    void add(int key) {
        int index = hash(key);
        for(int x : buckets[index]){
            if(x == key) return;
        }

        buckets[index].push_back(key);
    }


    
    void remove(int key) {
        int index = hash(key);

        for(int i = 0; i<buckets[index].size(); i++){
            if(buckets[index][i] == key){
                buckets[index].erase(buckets[index].begin() + i);
                return;
            }
        }
    }
    
    bool contains(int key) {
        int index = hash(key);
        for(int x: buckets[index]){
            if(x == key){
                return true;
            }
        }

        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */