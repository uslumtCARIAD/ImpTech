#pragma once
//E3BaseTypeU8 is a signal struct base type that has Val and Clas members
typedef struct _E3BaseTypeU8_ E3BaseTypeU8;
struct _E3BaseTypeU8_ {
   int Val;
   int Clas;
};

E3BaseTypeU8 Rte_ABS_IntvFrLe = {6,5};
E3BaseTypeU8 * Rte_Inst_ABS_IntvFrLe = &Rte_ABS_IntvFrLe;

