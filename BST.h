//
// Created by Antony on 2020-12-07.
//

#include <vector>
#include <iostream>
#include <string>
#include "node.h"

#ifndef TP3_STRUCTURE_DONNEE_BST_H
#define TP3_STRUCTURE_DONNEE_BST_H

using namespace std;

class BST {
private:
    node *root; // La racine de l’arbre binaire de recherche.
public:
    BST (node *root);                      // Construit l’arbre dont la racine est à l’adresse racine.
    ~BST( );                               // Supprime l’espace mémoire occupé par l’arbre dont la racine est à l’adresse racine.
    void Insert(int d);                    // insère le nœud de valeur d dans l’arbre.
    void Insert(int d, node* root);        // insère le nœud de valeur d dans l’arbre.
    void Delete(int d);                    // Supprime le nœud de valeur d de l’arbre.
    void Delete(int d, node *root);
    vector<int> GetLowerNodesValues(vector<int> values, node *root);
    void Show_Tree();                      //Affiche les éléments de l’arbre niveau par niveau.
    void Add_Tree_Element_To_Array(int* treeContent, node* Node, int currentHeight, int levelPosition);
    int Show_Height();                     //Affiche la hauteur de l’arbre.
    int Get_Height(node* root);            //Cherche la hauteur de l’arbre.
        void Show_Uppers(int d);           // Affiche les ascendants du nœud de valeur d.
    vector<int> Get_Uppers(node *currentRoot, vector<int> nodeValues);
    void Archive ();                       // Archiver en implémentation séquentielle l’arbre dont la racine est
                                           //dans un fichier texte que vous allez définir.
    void Generate_Archive(string *archive, node* root);
};


#endif //TP3_STRUCTURE_DONNEE_BST_H
