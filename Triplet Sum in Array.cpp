
bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(m[X-A[i]-A[j]]!=0){
                    return true;
                }
            }
            m[A[i]]++;
        }
        return false;
    }
    // A+B+C=X
    // X-A-B=C and check C is present in map or not
