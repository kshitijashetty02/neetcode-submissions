/*lass Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int j=1,n=temperatures.size();
         vector <int>result ;
        for(int i =0;i<n;i++){
            int count=0;
            j=i+1;
            while( j<n){
            
            if(temperatures[i]<temperatures[j]){
                count=j-i;
                break;}
                
                j++;
            

        }
         result.push_back(count);
        } 
         return result ;
    }
};*/
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
            int n = temperatures.size();
                    vector<int> result(n, 0); 
                            stack<int> st;

                                    for (int i = 0; i < n; i++) {
                                                while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                                                                int prevIndex = st.top();
                                                                                st.pop();
                                                                                                result[prevIndex] = i - prevIndex;
                                                                                                            }
                                                                                                                        st.push(i);
                                                                                                                                }

                                                                                                                                        return result;
                                                                                                                                            }
                                                                                                                                            };
