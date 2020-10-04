
#ifndef NODOB_H
#define NODOB_H

#include <string>
#include <vector>
#include <list>
using namespace std;


/**
  * class NodoB
  * 
  */

template<class T>
class NodoB
{
public:

  /**
   * Empty Constructor
   */
  NodoB (T m_key): m_Grado(0), m_key(m_key) , m_pPadre(nullptr) {};

  /**
   * Empty Destructor
   */
  //virtual ~NodoB ();

  void show(){
    cout << "key: " <<m_key << endl;
    if(!m_Hijos.empty()){
      for(auto it:m_Hijos){
        it->show();
      }
    }
  }

  void showParent() {
    cout << "Parent key: " <<m_key << endl;
    if(!m_Hijos.empty()){
      for(auto it:m_Hijos){
        it->show();
      }
    }
  }

  NodoB<T>* find(T key) {
    if(m_key == key) return this;
    for(auto it: this->m_Hijos){
      
    }
    return nullptr;
  }

int m_Grado;

T m_key;
list< NodoB<T> * > m_Hijos;
NodoB<T> * m_pPadre;
private:
  

  

};

#endif // NODOB_H
