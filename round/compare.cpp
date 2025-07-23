#include "compare.h"
double smaller(double a, double b){
    if(a>=b){
        return b;
    }else{
        return a;
    }
}
double bigger(double a, double b){
    if(a>=b){
        return a;
    }else{
        return b;
    }
}