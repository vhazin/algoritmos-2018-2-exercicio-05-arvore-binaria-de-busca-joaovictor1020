//  Created by João Victor Bravo on 10/09/18.
//  Copyright © 2018 João Victor Bravo. All rights reserved.

#include <stdio.h>
#include <stdlib.h>

typedef struct arvore{
    int c;
    struct arvore* right;
    struct arvore* left;
} arvore;

arvore* createarvore(){
    return NULL;
}

int arvorevazia(arvore* a){
    return a == NULL;
}

void entrada(arvore** a, int c){
    if (*a == NULL){
        *a = (arvore*)malloc(sizeof(arvore));
        (*a)->c == c;
        (*a)->left == NULL;
        (*a)->right == NULL;
    }
}
void momentum(arvore** a, int c){
    if (*a == NULL){
        *a = (arvore*)malloc(sizeof(arvore));
        (*a)->left == NULL;
        (*a)->c == c;
        (*a)->right == NULL;
    }
}

void final(arvore** a, int c){
    if (*a == NULL){
        *a = (arvore*)malloc(sizeof(arvore));
        (*a)->left == NULL;
        (*a)->right == NULL;
        (*a)->c == c;
    }
}
int pertence(arvore* a, int c){
    if(arvorevazia(a)){
        return 0;
    }
    return a -> c == c || pertence(a -> left, c) || pertence(a -> right, c);
}


int main()
{
    int c, num, y, counter = 0;
    scanf("%d", &c);
    for (int i = 0; i <= c; ++i){
        arvore* c = NULL;
        scanf("%d", &num);
        for(int j = 0; j <= num; ++j){
            scanf("%d", &y);
        }
        printf("Case %d: \n", counter);
        printf("Pre.:");
        printentrada(c);
        printf("\n");
        
        printf("In..:");
        printmomentum(c);
        printf("\n");
        
        printf("Post:");
        printfinal(c);
        printf("\n");
    }
    return 0;
}
