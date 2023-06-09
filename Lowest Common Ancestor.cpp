

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    // Node* leftTraversal(Node* root,int v1){
        
    //     if( v1 == root->data){
    //         return root; 
    //     }
    //     leftTraversal(root->left,v1);
    //     leftTraversal(root->right,v1);
        
    // }
    Node *lca(Node *root, int v1,int v2) {
		// Write your code here.
        if(v1>v2){
            int temp=v1;
            v1=v2;
            v2=temp;
        }
        
       
        if(v1<root->data &&v2<root->data){
            while(v2<root->data){
                root=root->left;
            }
            return root;
        }else if(v1>root->data &&v2>root->data){
            while(v1>root->data){
                root=root->right;
            }
            return root; 
        }
        else if(v1<root->data && v2>root->data){
           return  root;
        }
        return root;   
    }

