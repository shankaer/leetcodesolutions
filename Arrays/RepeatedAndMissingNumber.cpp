vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int n = A.size() , sum = 0  , sumn = (n * ( n + 1 ))/2, sqn = (n*( n + 1) *( 2*n + 1 ))/6,
    sq = 0  ;
    for( int i = 0 ; i < n ; ++i){
       sum += A[i];  
       sq+= (long long )A[i] *(long long ) A[i];
    }
    long long int aPlusB = ( sqn - sq ) / (sumn - sum);
    
   // cout<< sqn <<" "<< sq << " " << sumn << " " << sum <<" "<< aPlusB << " "<< endl;
    
    long long int n1 = (aPlusB + ( sumn - sum )) / 2 ;
    
    long long int  n2 = (aPlusB - ( sumn - sum))/2 ;
    
    //cout<<" 2 no "<< n1 <<" "<<n2<< endl;
    int rep , miss ; 
    if( (long long )sum + n1 == (long long )sumn + n2){
        rep = n2 ;
        miss = n1 ;
    }
    else{
        rep = n1 ;
        miss = n2 ;
    }
    
    

    vector <int> res ;
    res.push_back(rep); res.push_back(miss);
    return res ;
    
}
