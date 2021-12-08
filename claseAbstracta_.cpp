#include <iostream>
using namespace std;

//una clase abstracta es aquella que posee al menos un m�todo virtual puro.
class SerVivo{
    public:
	    virtual string FormaDeCrecer() = 0; /* M�todo virtual puro o abstracto */
};

class Humano: public SerVivo{
	public:
	    string FormaDeCrecer(){/* Implementacion espec�fica */
	        return "crece gracias a alimentos y sus nutrientes"; 
	    }
};

class Planta: public SerVivo{
    public:
	    string FormaDeCrecer(){/* Implementacion espec�fica */
	        return "crece gracias al agua y sus nutrientes";
	    }
};


int main(){
  Planta rosa;
  Humano juan;
  
  cout<< rosa.FormaDeCrecer() <<endl;
  cout<< juan.FormaDeCrecer() <<endl;
  return 0;
}