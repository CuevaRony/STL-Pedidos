/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NProductos.h
 * Author: cueva
 *
 * Created on 9 de julio de 2022, 08:07 PM
 */
#include <fstream>
#include "Producto.h"

using namespace std;

#ifndef NPRODUCTOS_H
#define NPRODUCTOS_H

class NProductos {
public:
    NProductos();
    NProductos(const NProductos& orig);
    virtual ~NProductos();
    void leeproductos(ifstream &);
    void imprimeproductos(ofstream &);
    int getprioridad();
    int getCodprod();
    int getstock();
    int getstockmin();
private:
    Producto *prod;
};

#endif /* NPRODUCTOS_H */

