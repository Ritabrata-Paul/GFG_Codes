class Solution {
public:
	long long int NoOfChicks(int n){
	    // Code here
	    
	    vector<long long int> age(7);
	    age[1]=1;
	    long long int newborn=0;
	    
	    for(int i=2;i<=n;i++){
	        
	        // increasing ages of all chickens
	        for(int j=6;j>1;j--)
	            {age[j]=age[j-1];}
	        
	        
	        // calculating the newborn chickens
	        age[1]=0;
	        for(int j=1;j<=6;j++)
	            {newborn+=age[j]*2;}
	        
	        age[1]=newborn;
	        newborn=0;
	    }
	    
	    // adding all chickens between ages 1 and 6
	    long long int fans=0;
	    for(int i=1;i<7;i++)
	        {fans+=age[i];}
	    
	    return fans;
	}
};