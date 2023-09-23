#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){


    char a[11][11];

    int count = 0;

    for(int i = 1; i <= 10; i++){
    	for(int j = 1; j <= 10; j++){

    		cin >> a[i][j];


    		
    	}
    }

       int point = 0;
    for(int i = 1; i <= 10; i++){
    	for(int j = 1; j <= 10; j++){
    		if(a[i][j] == 'X'){
    			

    			if(i == 1 or i == 10 or j == 1 or j == 10){

    				point += 1;
    				 

    			}else if(((i == 2 or i == 9 ) and (j >= 2 and j <= 9))  or ((j == 2 or j == 9) and (i >= 2 and i <= 9 ))){

    				point += 2; 
    				

    			}else if(((i == 3 or i == 8 ) and (j >= 3 and j <= 8))  or ((j == 3 or j == 8) and (i >= 3 and i <= 8 ))){

    				point += 3;
    				

    			}else if(((i == 4 or i == 7 ) and (j >= 4 and j <= 7))  or ((j == 4 or j == 7) and (i >=4 and i <= 7 ))){

    				point += 4;
    				

    			}else {

    				point += 5;
    				
    			}

    		}
    	}
    }

    cout<< point << '\n';

}

    return 0;
}		