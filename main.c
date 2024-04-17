#include "actividadLib.h"
#include "MKL2574.h"
void A(int pin, int est);
char B(int pin);
void Prender(int pin, int est);  

int main()
{
    SIM->SCGCS|= SIM_SCGCS_PORTE_MASK;
    
    A(0,0);
    A(1,0);
    A(2,1);
    A(3,1);
    A(4,1);
    A(5,1);
    if(B(0) == 'I' && B(1) == 'I')
    {
        Prender(2,1);
    }  
    if(B(0) == 'A' && B(1) == 'I')
    {
        Prender(3,1);
    }   
    if(B(0) == 'I' && B(1) == 'A')
    {
        Prender(4,1);
    }   
    if(B(0) == 'A' && B(1) == 'A')
    {
        Prender(5,1);
    }     
    
    
}






