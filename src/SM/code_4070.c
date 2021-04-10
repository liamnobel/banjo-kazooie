#include <ultra64.h>
#include "functions.h"
#include "variables.h"

//extern
Actor *func_802D94B4(ActorMarker *, Gfx **, Mtx **, s32);
void func_80326224(Actor *);
void func_8024E55C(s32, void *);

//public
void func_8038A5D8(Actor *this);

/* .data */
/*
ActorInfo D_8038B0B0 = { 0x1ED, 0x3B9, 0, 1, NULL,
    func_8038A5D8, func_80326224, func_802D94B4,
    {0,0,0,0}, 0.0f, {0,0,0,0}
};
*/

/* .code */
#pragma GLOBAL_ASM("asm/nonmatchings/SM/code_4070/func_8038A460.s")

void func_8038A488(ActorMarker *caller, s32 text_id, s32 arg2);
#pragma GLOBAL_ASM("asm/nonmatchings/SM/code_4070/func_8038A488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/SM/code_4070/func_8038A4DC.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/SM/code_4070/func_8038A5D8.s")
void func_8038A5D8(Actor *this){
    f32 sp5C[3];
    s32 sp44[6];
    f32 sp40;
    Actor *temp_v0;
    s32 temp_a0;

    if(!this->initialized){
        temp_v0 = func_80326D68(this->position, 0x12b, -1, &sp40);
        if(temp_v0){
            this->unk1C = temp_v0->position_x;
            this->unk20 = temp_v0->position_y;
            this->unk24 = temp_v0->position_z;
        }
        else{//L8038A630
            this->unk1C = this->position_x;
            this->unk20 = this->position_y;
            this->unk24 = this->position_z;
        }//L8038A644
        this->initialized = 1;
    }//L8038A650

    func_8024E55C(0, sp44);
    switch (this->unk10_31)
    {
    case 1://L8038A688
        if(func_8031FF1C(0xdb)){
            marker_despawn(this->marker);
        }else{
            if(mapSpecificFlags_get(0xe)){
                func_8038A4DC(this, 2);
            }
        }
        break;
    
    case 2://L8038A6C8
        if(!func_803114B0()){
            if(mapSpecificFlags_get(8)){
                func_8038A460(this);
                ability_unlock(ABILITY_FLAP);
                func_80311480(0xdf7, 0xa, &this->unk1C, this->marker, func_8038A488, NULL);
                this->sm_4070.unk0 = 0xe1b;
                mapSpecificFlags_set(8,0);
            }//L8038A730

            if(mapSpecificFlags_get(9)){
                func_8038A460(this);
                ability_unlock(ABILITY_FLIP);
                func_80311480(0xdf8, 0xa, &this->unk1C, this->marker, func_8038A488, NULL);
                this->sm_4070.unk0 = 0xe1c;
                mapSpecificFlags_set(9,0);
            }//L8038A794

            if(mapSpecificFlags_get(0xa)){
                func_8038A460(this);
                func_8028F94C(2, &this->unk1C);
                
                if(!mapSpecificFlags_get(3) && func_802DA498()){
                    mapSpecificFlags_set(3,1);
                    temp_a0 = 0xe12;
                }else{
                    temp_a0 = 0xdf9;
                }

                func_80311480(temp_a0, 0xe, &this->unk1C, this->marker, func_8038A488, NULL);
                mapSpecificFlags_set(0xa,0);
                this->sm_4070.unk0 = 0;
            }
        }//L8038A828
        player_getPosition(sp5C);
        sp5C[0] = this->velocity_x;
        sp5C[2] = this->velocity_z;
        func_8028FAB0(sp5C);
        if( func_8028EFC8() 
            && sp44[1] == 1 
            && func_8028F20C()
        ){
            if(this->sm_4070.unk0)
                func_80311480(temp_a0 = this->sm_4070.unk0, 0, NULL, NULL, NULL, NULL);
        }
        break;
    
    case 3://L8038A8A0
        marker_despawn(this->marker);
        break;
    }//L8038A8AC
}