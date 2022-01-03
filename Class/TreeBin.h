//
// Created by SESI on 02/01/2022.
//

#ifndef SEARCHALGORITHM_TREEBIN_H
#define SEARCHALGORITHM_TREEBIN_H


#include <iostream>
#include "No.h"

class TreeBin {
private:
    No *raiz;
public:
    TreeBin(){
        raiz = NULL;
    }

    void insert(int chave){
        if(raiz == NULL)
            raiz = new No(chave);
        else
            insertAux(raiz, chave);
    }

    void insertAux(No *no, int chave)
    {
        if(chave < no->getChave()){
            if(no->getLeft() == NULL){
                No *novoNo = new No(chave);
                no->setLeft(novoNo);
            }
            else{
                insertAux(no->getLeft(), chave);
            }
        }
        else if(chave > no->getChave()){
            if(no->getRight() == NULL){
                No *novoNo = new No(chave);
                no->setRight(novoNo);
            }
            else{
                insertAux(no->getRight(), chave);
            }
        }

    }

    No *getRaiz(){
        return raiz;
    }
    void showInOrder(No *no){
        if(no != NULL){
            showInOrder(no->getLeft());
            std::cout << no->getChave() << " ";
            showInOrder(no->getRight());

        }
    }

};


#endif //SEARCHALGORITHM_TREEBIN_H
