
struct Node{
    int data;
    struct Node *left;
   struct Node *right;
    Node(int val){
        data = val;
        left=right=NULL;
    }
}
int main(){
struct Node* root = new Node(2);
root->left = new Node(3);
root->right = new Node(4);
root->left->right = new Node(5);

}
