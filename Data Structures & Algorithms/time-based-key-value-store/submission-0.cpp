class TimeMap {
public:
    unordered_map<string,unordered_map<int,vector<string>>> keystore;
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        keystore[key][timestamp].push_back(value);
    }
    
    string get(string key, int timestamp) {
        if(keystore.find(key)==keystore.end())
        return "";
        int seen=-1;
        for(const auto& [time,_]:keystore[key]){
            if(time<=timestamp){
                seen=max(time,seen);
            }

        }
        return seen==-1 ? "":keystore[key][seen].back();
    }
};
