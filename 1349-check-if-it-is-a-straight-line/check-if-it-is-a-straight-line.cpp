class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n= coordinates.size();
        if(n==2) return 1;
        int x=coordinates[0][0]-coordinates[1][0];
        int y=coordinates[0][1]-coordinates[1][1];
        for(int i=2;i<n;i++){
            int X=coordinates[i][0];
            int Y=coordinates[i][1];
            if(x*(Y-coordinates[0][1])!=y*(X-coordinates[0][0])) return 0;
            }
        return 1;
    }
};
