class Solution {
public:
    int Lines[8][3]={
            {0, 1, 2},{3, 4, 5},{6, 7, 8},
            {0, 3, 6},{1, 4, 7},{2, 5, 8},
            {0, 4, 8},{2, 4, 6}};
    char Board[10]="012345678";
    int check_win(){
        for(int* l: Lines){
            int x0=(Board[l[0]]=='X')?1:(Board[l[0]]=='O')?2:0;
            int x1=(Board[l[1]]=='X')?1:(Board[l[1]]=='O')?2:0;
            int x2=(Board[l[2]]=='X')?1:(Board[l[2]]=='O')?2:0;
        //    cout<<l[0]<<l[1]<<l[2]<<"-->"<<x0<<x1<<x2<<endl;
            int result=x0*x1+x1*x2+x2*x1;
            if (result==3) return 1;
            else if (result==12) return 2;
        }
        //cout<<"==========\n";
        return 0;
    }
    void print(){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout<<Board[3*i+j];
            }
            cout<<endl;         
        }
        cout<<"=====\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int n=moves.size();
        for(int i=0; i<n; i++){
            int idx=3*moves[i][0]+moves[i][1];
            if (i&1) Board[idx]='O';
            else Board[idx]='X';
        }
    //    print();
        if (check_win()==1) return "A";
        else if (check_win()==2) return "B";
        if (n==9) return "Draw";
        else return "Pending";
    }  
};