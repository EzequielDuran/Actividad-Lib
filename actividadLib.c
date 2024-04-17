#include "actividadLib.h"
#include "MKL2574"
void A(int pin, int est) {
    PORTE -> PCR[pin] = PORT_PCR_MUX(est);
}
char B(int pin) {
    if(PTE -> PDIR&(1<<pin) == 0){
        return I;
    } else {
        return A;
    }
    
}
void Prender(int pin, int est){
    PTE -> PSOR|=(estu<<pin);
}