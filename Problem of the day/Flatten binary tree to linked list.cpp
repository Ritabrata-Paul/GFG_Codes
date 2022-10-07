class Solution
{
    public:
    void flatten(Node *root)
    {
        //code here
        while(root!=NULL)

        {

            if(root->left!=NULL)

            {

                Node* pre=root->left;

                while(pre->right!=NULL)

                pre=pre->right;

    

                pre->right=root->right;

                root->right=root->left;

                root->left=NULL;

            }

        root=root->right;

        }
    }
};