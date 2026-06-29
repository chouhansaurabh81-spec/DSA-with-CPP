]<<",";

    for(int i=1 ; i<n ; i++){
        leftmax[i]=max(leftmax[i-1],heights[i-1]);
    }

    for(int i=n-2 ; i>=0 ; i--){
        rightmax[i]=max(rightmax[i+1],heights[i+1]);
        cout<<rightmax[i]<<",";
    }
     cout<<rightmax[0]<<",";
    cout<<endl;