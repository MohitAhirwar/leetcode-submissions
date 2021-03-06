class MyHashSet {
public:
    /** Initialize your data structure here. */
    unordered_map<int,int> mp;
    MyHashSet() {
    }
    
    void add(int key) {
        mp[key]++;
    }
    
    void remove(int key) {
        mp.erase(key);     
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        if(mp.find(key) != mp.end())
            return 1;
        else
            return 0;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */