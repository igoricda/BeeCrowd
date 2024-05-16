#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef unsigned Tdado;

//------------------------------------
// Definição da estrutura nó de árvore:
//------------------------------------
typedef struct TreeNode {
  Tdado info;             // dado armazenado no nó
  struct TreeNode *left;  // ponteiro para o ramo esquerdo
  struct TreeNode *right; // ponteiro para o nramo direito
} TreeNode;
int isLeaf(TreeNode* bt){
  return (bt->left == bt->right);
}
TreeNode *insertBinTree(Tdado x, TreeNode *bt) {
  TreeNode *aux;

  // verificar se o ponteiro é nulo
  if (!bt) {
    // insere o novo nó
    aux = (TreeNode *)malloc(sizeof(TreeNode));
    if (!aux) {
      printf("Erro: Memória insuficiente!\n");
      return bt;
    } else {
      aux->info = x;
      aux->left = NULL;
      aux->right = NULL;
      return aux;
    }
  } else if (x < bt->info) {
    // x é menor que o valor do no atual, desce pelo ramo esquerdo
    bt->left = insertBinTree(x, bt->left); // insere no ramo esquerdo
    return bt;
  } else {
    // x é maior que o valor do no atual, desce pelo direito
    bt->right = insertBinTree(x, bt->right); // insere no ramo direito
    return bt;
  }
}

/***************************************************
 * preordem:: Percorre a árvore em pré-ordem
 ***************************************************/
void preOrdem(TreeNode* bt){
  if(bt == NULL)
    return;
  printf(" %d", bt->info);
  preOrdem(bt->left);
  preOrdem(bt->right);
}
/***************************************************
 * preordem:: Percorre a árvore em ordem
 ***************************************************/
void emOrdem(TreeNode* bt){
  if(bt == NULL)
    return;
  emOrdem(bt->left);
  printf("% d", bt->info);
  emOrdem(bt->right);
}

/***************************************************
 * preordem:: Percorre a árvore em pós-ordem
 ***************************************************/
void posOrdem(TreeNode* bt){
  if(bt == NULL)
    return;
  posOrdem(bt->left);
  posOrdem(bt->right);
  printf(" %d", bt->info);
}
void freeBinTree(TreeNode* bt){
  if (!bt) {
    return;
  }
  freeBinTree(bt->left);
  freeBinTree(bt->right);
  free(bt);
  bt = NULL;
}
int main() {
  int c, n, caso = 0;
  Tdado x;
  scanf("%d", &c);
  for(int i = 0; i < c; i++){
    TreeNode *bt = NULL;
    scanf("%d", &n);
    for(int j = 0; j < n; j++){
      scanf("%d", &x);
      bt =insertBinTree( x, bt);
    }
    printf("Case %d:\n", ++caso);
    printf("Pre.:");
    preOrdem(bt);
    printf("\nIn..:");
    emOrdem(bt);
    printf("\nPost:");
    posOrdem(bt);
    printf("\n\n");
    freeBinTree(bt);
    
  }
   
  
  
  return 0; 
}
