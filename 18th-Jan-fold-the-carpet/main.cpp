#include <iostream> 

using namespace std; 

int carpetBox(int A, int B, int C, int D){
        //code here
    int folds = 0; 
    int box_area = C*D; 
    
    if(A<C && B<D) return folds; 

    else if(A<=C && B>D){
        while(B>=D){
            B = B/2; 
            folds++; 
        }
    }

    else if(A>C && B<=D){
        while(A>=C){
            A = A/2; 
            folds++; 
        }
    }

    else if(A>C && B>D){
        if(check_fit(B,C,A,D) == true){
            return folds;
        }
        while(A>=C){
            A=A/2; 
            folds++
        }
        while(B)
    }

    return folds; 
}

//true method: 

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        //code here
        return min(find(A,C)+find(B,D),find(B,C)+find(A,D));
    }
    
    int find(int A,int B){
        int folds = 0; 
        while(A>B){
            A/=2; 
            folds++;
        }
        return folds; 
    }
};

bool check_fit(int A, int B, int C, int D){
    if(A<=C && B<=D){
        return true; 
    }
    else{
        return false; 
    }
}

int main(){
    cout<<carpetBox(5,13,6,10); 
}