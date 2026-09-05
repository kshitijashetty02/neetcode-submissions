
        class Solution {
            public:
                vector<int> topKFrequent(vector<int>& nums, int k) {
                        // Step 1: Count the frequency of each number using a Hash Map
                                unordered_map<int, int> counts;
                                        for (int num : nums) {
                                                    counts[num]++;
                                                            }
                                                                    
                                                                            // Step 2: Group numbers by their frequency using Bucket Sort
                                                                                    // The maximum possible frequency is the total size of the array (n)
                                                                                            int n = nums.size();
                                                                                                    vector<vector<int>> buckets(n + 1);
                                                                                                            for (auto& pair : counts) {
                                                                                                                        int num = pair.first;
                                                                                                                                    int freq = pair.second;
                                                                                                                                                buckets[freq].push_back(num);
                                                                                                                                                        }
                                                                                                                                                                
                                                                                                                                                                        // Step 3: Gather the top k elements by traversing buckets from highest to lowest frequency
                                                                                                                                                                                vector<int> res;
                                                                                                                                                                                        for (int i = n; i >= 0 && res.size() < k; i--) {
                                                                                                                                                                                                    for (int num : buckets[i]) {
                                                                                                                                                                                                                    res.push_back(num);
                                                                                                                                                                                                                                    if (res.size() == k) {
                                                                                                                                                                                                                                                        return res;
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                                                            return res;
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                };
        

