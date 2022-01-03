#include <iostream>
#include "Class/TreeBin.h"

int main() {

    TreeBin tree;
    tree.insert(8);
    tree.insert(10);
    tree.insert(14);
    tree.insert(13);
    tree.insert(3);
    tree.insert(1);
    tree.insert(4);
    tree.insert(7);

    std::cout << "Percorrendo em ordem: " << std::endl;
    tree.showInOrder(tree.getRaiz());
    return 0;
}
