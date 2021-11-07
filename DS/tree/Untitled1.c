# include <stdio.h>
# include <conio.h>
# include <stdlib.h>

typedef struct BST {
   int data;
   struct BST *lchild, *rchild;
} node;

void insert(node *, node *);
void inorder(node *);
void preorder(node *);
void postorder(node *);

void main() {
   int choice;
   int ans;
   int key;
   node *new_node, *root, *tmp, *parent;
   root = NULL;

   printf("\nProgram For Binary Search Tree ");
   do {
      printf("\n1.Create");
      printf("\n2.Traversals");
      printf("\n3.Exit");
      printf("\nEnter your choice :");
      scanf("%d", &choice);
      node *get_node();

      switch (choice) {
      case 1:
         do {
            new_node = get_node();
            printf("\nEnter The Element ");
            scanf("%d", &new_node->data);

            if (root == NULL)
               root = new_node;
            else
               insert(root, new_node);

            printf("\nEnter 1 to continue: ");
            scanf("%d",&ans);
         } while (ans == 1);
         break;

      case 2:
         if (root == NULL)
            printf("Tree Is Not Created");
         else {
            printf("\nThe Inorder display : ");
            inorder(root);
            printf("\nThe Preorder display : ");
            preorder(root);
            printf("\nThe Postorder display : ");
            postorder(root);
         }
         break;
      }
   } while (choice != 3);
}

node *get_node() {
   node *temp;
   temp = (node *) malloc(sizeof(node));
   temp->lchild = NULL;
   temp->rchild = NULL;
   return temp;
}

void insert(node *root, node *new_node) {
   if (new_node->data < root->data) {
      if (root->lchild == NULL)
         root->lchild = new_node;
      else
         insert(root->lchild, new_node);
   }

   if (new_node->data > root->data) {
      if (root->rchild == NULL)
         root->rchild = new_node;
      else
         insert(root->rchild, new_node);
   }
}

node *search(node *root, int key, node **parent) {
   node *temp;
   temp = root;
   while (temp != NULL) {
      if (temp->data == key) {
         printf("\nThe %d Element is Present", temp->data);
         return temp;
      }
      *parent = temp;

      if (temp->data > key)
         temp = temp->lchild;
      else
         temp = temp->rchild;
   }
   return NULL;
}

void inorder(node *temp) {
   if (temp != NULL) {
      inorder(temp->lchild);
      printf("%d->", temp->data);
      inorder(temp->rchild);
   }
}

void preorder(node *temp) {
   if (temp != NULL) {
      printf("%d->", temp->data);
      preorder(temp->lchild);
      preorder(temp->rchild);
   }
}

void postorder(node *temp) {
   if (temp != NULL) {
      postorder(temp->lchild);
      postorder(temp->rchild);
      printf("%d->", temp->data);
   }
}
