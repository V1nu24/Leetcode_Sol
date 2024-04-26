class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        vector<int> ans ; 
        int ptr = 0 ; 
        int n = ast.size() ; 
        while(ptr < n && ast[ptr]< 0){
            ans.push_back(ast[ptr]);
            {
                ptr++; 
            }
        }

        vector<int> tmp ; 
        while(ptr < n){
            while(ptr < n && ast[ptr]>0){
                tmp.push_back(ast[ptr]);
                ptr++; 
            }

            while(ptr < n && tmp.size()>0 && ast[ptr]<0){
                int tp = tmp.back() ;; 
                int neu = abs(ast[ptr]) ;
                if(neu < tp){
                    ptr++; 
                }else if ( tp < neu){
                    tmp.pop_back() ; 
                }
                else if( tp == neu){
                    tmp.pop_back() ; 
                    ptr++; 
                }
            }

            // for(int i =0 ;i < tmp.size() ; i++){
            //     ans.push_back(tmp[i]);
            // }
            // tmp.clear(); 

            while(ptr<n && ast[ptr]<0){
                ans.push_back(ast[ptr]);
                ptr++ ;
            }

        }

    for(auto x : tmp){
        ans.push_back(x) ; 
    }

    return ans ; 
    }
};