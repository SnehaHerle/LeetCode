
class OrderedStream {
private:
    int id = 1; 
    
    unordered_map<int, string> m;
public:
    OrderedStream(int n) {
        
    }
    
    vector<string> insert(int idKey, string value) {
        m[idKey] = value; 
        vector<string> res;
        
        while (m.find(id) != m.end()) {
            res.emplace_back(m[id]); 
            id++;
        }
        
        return res;
    }
};


/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
