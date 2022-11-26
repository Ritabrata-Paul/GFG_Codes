
class Solution{
public:
    // function to construct tree from string
    Node *treeFromString(string str){
        // code here
        int curr = 0;
        string temp;
        while(curr<str.size() && isdigit(str[curr]))
        {
            temp += str[curr];
            curr++;
        }
        int x = stoi(temp);
        Node* root = new Node(x);
        root->data = x;
        
        for(int i = curr;i<str.size();i++)
        {
            int open = 1;
            string te;
            int j = i+1;
            while(open)
            {
                if(str[j]=='(')open++;
                else if(str[j]==')')open--;
                if(!open)   {j++;continue;}
                te += str[j];
                j++;
            }
            
            if(i==curr)
            {
                root->left = treeFromString(te);
            }
            else
            {
                root->right = treeFromString(te);
            }
            i = j - 1;
        }
        return root;
    }
};
