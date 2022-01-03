//
// Created by SESI on 02/01/2022.
//

#ifndef SEARCHALGORITHM_NO_H
#define SEARCHALGORITHM_NO_H


#include <cstddef>

class No {
private:
    No *right, *left;
    int chave;

public:
    No(int chave){
        this->chave = chave;
        this->right = NULL;
        this->left = NULL;
    }
    int getChave(){
        return this->chave;
    }
    No *getLeft(){
        return this->left;
    }

    No *getRight(){
        return this->right;
    }

    void setRight(No *no){
        this->right = no;
    }

    void setLeft(No *no){
        this->left = no;
    }

};


#endif //SEARCHALGORITHM_NO_H
