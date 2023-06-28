/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Programa.cpp
 * Author: cueva
 * 
 * Created on 9 de julio de 2022, 08:02 PM
 */
#include <iostream>
#include "Programa.h"
#include "Nodo.h"


Programa::Programa() {
}

Programa::Programa(const Programa& orig) {
}

Programa::~Programa() {
}

void Programa::carga(){
    lpedidos.cargalista();
    cargaproductos();
}

void Programa::muestra(){
    muestraproductos();
    lpedidos.imprimelista();
}
void Programa::muestraproductos(){
    ofstream arch("Repproductos.txt",ios::out);
    if(!arch){
        cout << "No se puede abrir productos";
        exit(1);
    }

    for(vector<NProductos>::iterator it=vproductos.begin();
            it!=vproductos.end(); it++){
        it->imprimeproductos(arch);
    }
}

void Programa::cargaproductos(){
    NProductos naux;
    ifstream arch("Productos4.csv",ios::in);
    if(!arch){
        cout << "No se puede abrir Productos";
        exit(1);
    }
    while(1){
        naux.leeproductos(arch); 
        if(arch.eof()) break;
        vproductos.push_back(naux);
    }    
    
}

void Programa::actualiza(){

    lpedidos.actualizalista(vproductos);
    
}