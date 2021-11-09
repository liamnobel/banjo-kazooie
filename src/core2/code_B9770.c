#include <ultra64.h>
#include "functions.h"
#include "variables.h"



extern struct56s **D_80371E70;
extern s32 D_80371E78;

f32 func_80340700(f32, f32, f32);
#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80340700.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80340748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80340760.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80340A4C.s")

void func_80340BE4(f32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 * arg4, f32 arg5[3]);
#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80340BE4.s")

void func_80341180(f32 arg0, s32 arg1, s32 arg2, f32 * arg3, f32 arg4[3]){
    func_80340BE4(arg0, arg1, arg2, arg2, arg3, arg4);
}


#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_803411B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80341A54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80341BA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80341BC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80341C78.s")

#ifndef NONMATCHING
#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80341D5C.s")
#else
s32 func_80341D5C(s32 arg0[3], s32 arg1[3]){
    int i, j;
    struct56s *a0;
    f32  *a2;
    f32 spC[3];
    f32 sp0[3];

    spC[0] = (f32)arg0[0];
    spC[1] = (f32)arg0[1];
    spC[2] = (f32)arg0[2];

    sp0[0] = (f32)arg1[0];
    sp0[1] = (f32)arg1[1];
    sp0[2] = (f32)arg1[2];

    for(i = 0; i < D_80371E78; i++){
        a2 = D_80371E70[i]->unk8;
        for(j = 0; j < D_80371E70[i]->unk0; j++){
            if( spC[0] == a2[j*3 + 0]
                && spC[1] == a2[j*3 + 1]
                && spC[2] == a2[j*3 + 2]
                && sp0[0] == a2[j*3 + 3]
                && sp0[1] == a2[j*3 + 4]
                && sp0[2] == a2[j*3 + 5]
            ){
                return i;
            }
        }
    }
    return -1;
}
#endif

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80341EC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80341EF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80341F2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80341F64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80341FB0.s")

struct56s *func_80342038(s32 indx){
    if(indx == -1)
        return NULL;
    return D_80371E70[indx];
}

int func_80342064(s32 arg0){
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80342070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_803420BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_803421A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80342244.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80342260.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_803422AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_803422D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_803430B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_803431D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80343654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80343694.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_803438E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80343D50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80343DEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80343E20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80343F00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80343F3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_B9770/func_80344040.s")
