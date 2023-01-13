class OrderedStream {
public:
    int ptr = 0;
    vector<string> stream;

    OrderedStream(int n) 
    {
        stream.resize(n);   
    }
    
    vector<string> insert(int idKey, string value) 
    {
        vector<string> ans;
        
        stream[idKey-1] = value;
        
        while(ptr<stream.size() and stream[ptr] != ""){
            ans.push_back(stream[ptr]);
            ptr++;
        }
        
        return ans;
        
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */