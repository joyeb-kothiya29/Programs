#include<stdio.h>
#include<stdlib.h>

struct tree{
    int info;
    struct tree *left_root;   // Changed: lowercase 'tree'
    struct tree *right_root;  // Changed: lowercase 'tree'
};

struct tree *root=NULL;
int item;

void create_tree();
void display_tree();
struct tree* insert(struct tree *node,int value);
void inorder(struct tree *node);

int main(){
    int j; // used for switch case
    
    while(1){
        printf("\n 1.Create Tree: ");
        printf("\n 2.Display Tree: ");
		printf("\n 3.Exit");
        printf("\nChoose Condition: ");
        scanf("%d",&j);
        
        switch(j){
            case 1:
                create_tree();
                break;
            
            case 2:
                display_tree();
                break;
                
            case 3:
            	exit(0);
                
            default:
                printf("\n Invalid Choice: \n");
                break;        
        }
    }    
}

void create_tree(){
    printf("\nEnter Elements: ");
    scanf("%d",&item);
    
    root=insert(root,item);
    printf("Root is :%d",root->info);
}

struct tree* insert(struct tree* node,int value){
    if(node==NULL){  // Added: Opening brace
        struct tree *newnode=(struct tree*)malloc(sizeof(struct tree));
        newnode->info=value;
        newnode->left_root=NULL;
        newnode->right_root=NULL;
        return newnode;
    }  // Added: Closing brace
    
    if(value < node->info)
        node->left_root=insert(node->left_root, value);
        
    else if(value > node->info)  // Fixed: Changed from value>node->right_root
        node->right_root=insert(node->right_root, value);
        
    return node;
}

void display_tree(){
	printf("\n Inorder Traversal of Binary Tree is: ");
    inorder(root);
    printf("\n");
}

void inorder(struct tree *node){
    if(node != NULL){  
        inorder(node->left_root);
        printf("%d ", node->info);  
        inorder(node->right_root);
    }
}
