class Solution {
public:
    bool isValid(string str) {
        
        stack <char> s ;
        
        for( int i = 0 ; i < str.size() ; ++i ){
            
            char c = str[i] ;
            if ( c == '{' || c == '[' || c == '('){
                s.push(c) ;
            }
            if ( c == '}' || c == ']' || c == ')'){
                
                if( !s.empty()){
                   char top = s.top() ;
                    
                    if( c == '}' && top == '{'){
                        s.pop() ;
                    }
                    else if( c == ']' && top == '['){
                        s.pop() ;
                    }
                    else if( c == ')' && top == '('){
                        s.pop() ;
                    }
                    else {
                        break ;
                    }
                }
                else if( s.empty() ){
                    s.push(c) ;
                    break ;
                }
              }
             }
        return s.empty() ;
    }
};
