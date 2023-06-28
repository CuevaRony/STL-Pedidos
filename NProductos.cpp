/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NProductos.cpp
 * Author: cueva
 * 
 * Created on 9 de julio de 2022, 08:07 PM
 */
#include <iostream>
#include "NProductos.h"
#include "Categoria1.h"
#include "Categoria2.h"
#include "Categoria3.h"

NProductos::NProductos() {
    prod = NULL;
}

NProductos::NProductos(const NProductos& orig) {
    this->prod = orig.prod;
}

NProductos::~NProductos() {
}

void NProductos::leeproductos(ifstream& arch){
    int categoria;
    
    arch >> categoria;
    if(arch.eof()) return;
    if(categoria==1)
        prod = new Categoria1;
    if(categoria==2)
        prod = new Categoria2;
    if(categoria==3)
        prod = new Categoria3;
    arch.get();
    prod->leeprod(arch);
}
void NProductos::imprimeproductos(ofstream& arch){
    prod->imprimeprod(arch);
    
}

int NProductos::getprioridad(){
   return prod->getPrioridad();  
}


int NProductos::getCodprod(){
    return prod->GetCodprod();
}

int NProductos::getstock(){
    return prod->GetStock();
}
/*
int NProductos::getstockmin(){
    return prod->getMinimo();
}
*/