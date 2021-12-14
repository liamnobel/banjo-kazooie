#include <ultra64.h>
#include "functions.h"
#include "variables.h"


extern f32 func_80309724(f32[3]);

typedef struct {
    f32 unk0;
    f32 unk4;
} ActorLocal_Core2_D89E0;

void func_80360828(Actor *this);

/* .data */
extern ActorAnimationInfo D_80373090[];
extern ActorInfo D_803730D8 = { 
    0x127, 0x163, 0x3CA, 
    0x1, D_80373090, 
    func_80360828, func_80326224, func_80325888, 
    { 0x9, 0xC4, 0x0, 0x0}, 0.9f, { 0x0, 0x0, 0x0, 0x0}
};


/* .rodata */
extern f64 D_803799C0;
extern f64 D_803799C8;

/* .code */
void func_8035F970(Actor *this){
    func_80328A84(this, 1);
    actor_loopAnimation(this);
}

void func_8035F99C(Actor *this){
    if(!func_803203FC(0xC1)){
        func_80328B8C(this, 2, 0.01f, 1);
        actor_playAnimationOnce(this);
        this->unk28 = 5.0f;
        FUNC_8030E8B4(0x419, 0x36B, 0x3ff, this->position, 0x4e2, 0x9c4);
    }
}

void func_8035FA0C(Actor *this){
    func_80328A84(this, 3);
    actor_loopAnimation(this);
    this->unk28 = 5.0f;
}

void func_8035FA48(Actor *this){
    func_80328A84(this, 4);
    actor_loopAnimation(this);
}

void func_8035FA74(Actor *this){
    ActorLocal_Core2_D89E0 *local = (ActorLocal_Core2_D89E0 *)&this->local;
    this->yaw_moving = local->unk4;
    func_80328A84(this, 5);
    actor_loopAnimation(this);
}

void func_8035FAA8(Actor *this){
    func_80328B8C(this, 6, 0.99f, 0);
    actor_playAnimationOnce(this);
}

void func_8035FAE0(Actor *this){
    func_80328B8C(this, 7, 0.01f, 1);
    actor_loopAnimation(this);
    this->yaw += 180.0f;
    this->unk28 = 20.0f;
    this->velocity_x = 300.0f;

}

int func_8035FB48(Actor * this, s32 dist){
    f32 f0 = this->position_x - this->unk1C_x;  
    f32 f2 = this->position_z - this->unk1C_z;  
    if(f0*f0 + f2*f2 < dist*dist)
        return 1;
    
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_D89E0/func_8035FBA8.s")

void func_8035FC20(Actor *this, f32 , f32);
#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_D89E0/func_8035FC20.s")

int func_8035FC98(Actor *this, f32 );
#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_D89E0/func_8035FC98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_D89E0/func_8035FD28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_D89E0/func_8035FDA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_D89E0/func_8035FEDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_D89E0/func_8035FF5C.s")

void func_8035FFAC(Actor *this, f32 arg1){
    if(arg1 < 0.0f && randf() < D_803799C0){
        this->velocity_y = 0.0f;
    }
    else if(randf() < D_803799C8){
        this->velocity_y = 1.0f;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_D89E0/func_80360044.s")

void func_80360130(Actor *this){
    if(0.0f < this->roll){
        this->roll -= 2.0;
    }
    else if(this->roll < 0.0f){
        this->roll += 2.0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_D89E0/func_80360198.s")

f32 func_803603AC(Actor *this, s32 arg1, s32 arg2);
#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_D89E0/func_803603AC.s")

int func_803604E8(Actor *this){
    f32 tmp_f0;
    this->yaw_moving = (f32) func_80329784(this);
    tmp_f0 = func_803603AC(this, 0xAA, 1);
    func_8035FFAC(this, tmp_f0);
    if(!func_80360198(this)){
        return 0;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_D89E0/func_8036054C.s")

void func_80360790(ActorMarker *this_marker, ActorMarker *other_marker){
    Actor *this = marker_getActor(this_marker);
    ActorLocal_Core2_D89E0 *local = (ActorLocal_Core2_D89E0 *)&this->local;
    func_8035FAE0(this);
    local->unk0 = 0.0f;
    this->marker->collidable = FALSE;
    FUNC_8030E8B4(SFX_115_BUZZBOMB_DEATH, 0x32C, 0x531, this->position, 1250, 2500);
}

void func_803607FC(ActorMarker *this_marker, ActorMarker *other_marker){
    Actor *this = marker_getActor(this_marker);
    ActorLocal_Core2_D89E0 *local = (ActorLocal_Core2_D89E0 *)&this->local;
    local->unk0 = 0.8f;
}

void func_80360828(Actor *this){
    f32 sp3C = time_getDelta();
    ActorLocal_Core2_D89E0 *local = (ActorLocal_Core2_D89E0 *)&this->local;
    f32 sp34;

    if(!this->initialized){
        this->initialized = TRUE;
        func_803300A8(this->marker, NULL, func_803607FC, func_80360790);
        this->unk38_0 = FALSE;
        this->unk28 = 0.0f;
        this->velocity_x = 0.0f;
        this->unk1C_x = this->position_x;
        this->unk1C_y = this->position_y;
        this->unk1C_z = this->position_z;
        local->unk4 = this->yaw;
    }
    if(local->unk0 <= 0.0){
        local->unk0 = 0.0f;
    }else{//L80360910
        local->unk0 -= sp3C;
        return;
    }

    switch(this->state){
        case 1: //L80360918
            if(func_8035FDA4(this)){
                func_8035F99C(this);
            }
            break;
        case 2: //L80360938
            if( 0.98 <  func_802877D8(this->animctrl)
                || !func_8035FD28(this)
            ){
                func_8035FA0C(this);
            }
            break;
        case 3: //L8036097C
            animctrl_setDuration(this->animctrl, 1.2 - this->velocity_y);
            if(!func_8035FDA4(this)){
                func_8035FA48(this);
            }
            else if(!func_803604E8(this)){
                func_8035FA48(this);
                this->unk38_31 = 0x3C;
            }
            else{
                if(!(func_8023DB5C() & 0xf)){
                    if(randf() < 0.35){
                        FUNC_8030E8B4(0x419, 0x36B, 0x3ff, this->position, 1250, 2500);
                    }
                }
            }//L80360A40
            if(actor_animationIsAt(this, 0.5f)){
                func_8030E878(SFX_2_CLAW_SWIPE, randf2(1.0f, 1.2f), 10000, this->position, 833.0f, 2500.0f);
            }
            break;
        case 4: //L80360A9C
            if(func_8035FDA4(this)){
                func_8035FA0C(this);
            } else if(func_8035FB48(this, 0x14)){
                func_8035FA74(this);
            } else{
                func_8036054C(this);
            }//L80360AE8

            if(actor_animationIsAt(this, 0.5f)){
                func_8030E878(SFX_2_CLAW_SWIPE, randf2(1.0f, 1.2f), 10000, this->position, 833.0f, 2500.0f);
            }
            break;
        case 5: //L80360B3C
            if(func_8035FDA4(this)){
                func_8035FA0C(this);
            } else if(func_8035FBA8(this, 1)){
                func_8035FAA8(this);
            } else{
                func_80328FB0(this, 5.0f);
                func_8035FC20(this, this->unk1C_y, 2.0f);
                func_80360130(this);
            }//L80360BA0

            if(actor_animationIsAt(this, 0.5f)){
                func_8030E878(SFX_2_CLAW_SWIPE, randf2(1.0f, 1.2f), 10000, this->position, 833.0f, 2500.0f);
            }
            break;
        case 6: //L80360BF4
            if(func_802877D8(this->animctrl) < 0.01){
                func_8035F970(this);
            }
            break;
        case 7: //L80360C28
            sp34 = time_getDelta();
            func_8032CA80(this, this->unk38_0 ? 0x13 : 0x4);
            if(func_8035FC98(this, this->velocity_x * sp34)){
                this->position_y =  func_80309724(this->position);
                func_80328B8C(this, 8, 0.01f, 1);
                actor_playAnimationOnce(this);
                func_8030E6A4(SFX_1F_HITTING_AN_ENEMY_3, 1.2f, 32200);
            }
            else{//L80360CC4
                this->position_y += this->velocity_x * sp34;
                this->velocity_x -=  1600.0f * sp34;
            }
            break;
        case 8: //L80360CF0
            if(actor_animationIsAt(this, 0.3f)){
                func_80326310(this);
            }
            break;
    }
}
