#include <ultra64.h>
#include "functions.h"
#include "variables.h"

#include "prop.h"

extern void func_803012F8(void);
extern f32 func_80256280(f32 arg0[3], f32 arg1[3]);
extern void func_8028BA00(s32);
extern void func_802C418C(void);
extern void func_802A6388(f32);
extern f32 func_802D6E4C(Actor *);
extern void func_80294AE8(f32);
extern f32 func_802CA748(Actor *);
extern int func_80259254(f32 vec[3], f32 x, f32 z, f32 val);
extern void func_80324DBC(f32, s32, s32, s32, s32, s32, s32);
extern void func_802EE354(Actor *, s32, s32, s32, f32, f32, f32, f32 arg8[3], s32, f32 arg10[2]);
extern void func_802D6264(f32, s32, s32, s32, s32, s32);
extern void func_8035644C(s32);
extern void func_8035646C(s32 arg0);
extern void func_80291634(ActorMarker *, s32);
extern void func_80291610(ActorMarker *, s32);
extern void func_80291AAC(void);
extern void func_8028D7B8(s32 arg0, ActorMarker *arg1, s32 arg2);

extern s32 carriedObject_actorID;
extern u8 D_8037BF60;
extern u8 D_8037BF61;
extern u8 D_8037BF62;
extern ActorMarker *playerMarker;
extern s32 D_8037BF74;
extern s32 D_8037BF7C;

extern s32 D_8037BF88;
extern ActorMarker *D_8037BF8C;
extern u8 D_8037BF90;


void func_8028D638(s32 arg0, s32 arg1);

s32 can_beak_barge(void){
    return func_802957D8(ABILITY_0_BARGE);
}

s32 func_8028A980(void){
    return func_802957D8(ABILITY_1_BEAK_BOMB);
}

s32 can_beak_bust(void){
    return func_802957D8(ABILITY_2_BEAK_BUSTER);
}

s32 func_8028A9C0(void){ 
    return func_802957D8(ABILITY_3_CAMERA_CONTROL);
}

s32 can_claw(void){ 
    return func_802957D8(ABILITY_4_BEAR_PUNCH);
}

s32 func_8028AA00(void){ 
    return func_802957D8(ABILITY_5_CLIMB);
}

int func_8028AA20(void){
    return func_802957D8(ABILITY_F_DIVE) 
        && !func_8029D66C() 
        && 100.0f < func_80294500() - func_80294438();
}

s32 can_egg(void){ 
    return func_802957D8(ABILITY_6_EGGS);
}

int can_flap(void){
    return func_802933D0(0x12) 
        && func_802933D0(0x5) 
        && func_802957D8(ABILITY_7_FLAP);
}

s32 can_flip(void){
    return func_802957D8(ABILITY_8_FLIP);
}

s32 func_8028AB28(void){
    return func_802957D8(ABILITY_9_FLY);
}

s32 func_8028AB48(void){
    return func_802957D8(ABILITY_A_HOLD_A_JUMP_HIGHER);
}

int can_peck(void){
    return func_802933D0(0x5)
        && func_802933D0(0x12)
        && func_802957D8(ABILITY_B_RATATAT_RAP);
}

int func_8028ABB8(void){
        if(func_802933C0(0x14) || func_802933C0(0x19))
            return 0;
        if(bs_getState() == BS_56_RECOIL)
            return 0;
        return 1;
}

s32 func_8028AC18(void){
    return func_802957D8(ABILITY_C_ROLL);
}

s32 func_8028AC38(void){
    return func_802957D8(ABILITY_D_SHOCK_JUMP);
}

s32 func_8028AC58(void){
    return func_802957D8(ABILITY_E_WADING_BOOTS);
}

s32 can_trot(void){
    return func_802957D8(ABILITY_10_TALON_TROT);
}

s32 func_8028AC98(void){
    return func_802957D8(ABILITY_10_TALON_TROT);
}

s32 can_wonderwing(void){
    return func_802957D8(ABILITY_12_WONDERWING);
}

int func_8028ACD8(void){
    if( func_803348C0() == MAP_27_FP_FREEZEEZY_PEAK && mapSpecificFlags_get(0xd)){
        return 0;
    }

    if(func_802C2B00() == 3)
        return 0;

    if(!func_8028B2E8() && !player_inWater())
        return 0;
    return 1;
}

int func_8028AD64(void){
    return bsant_inSet(bs_getState());
}

int func_8028AD8C(void){
    return bspumpkin_inSet(bs_getState());
}

int func_8028ADB4(void){
    return func_8032190C() && func_803348C0() != MAP_1_SM_SPIRAL_MOUNTAIN;
}

int func_8028ADF0(void){
    return func_803203FC(0x9d);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_39D0/func_8028AE10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_39D0/func_8028AED4.s")

int func_8028B094(void){
    return (60.0f < player_getYPosition() - func_80294438());
}

int func_8028B0E0(f32 arg0[3], f32 arg1){
    f32 sp1C[3];
    _player_getPosition(sp1C);
    return func_80259254(sp1C, arg0[0], arg0[2], arg1);
}

s32 func_8028B120(void){return 0;}

int func_8028B128(void){
    return func_802933C0(0x13);
}

int func_8028B148(void){
    return level_get() == LEVEL_9_RUSTY_BUCKET_BAY;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_39D0/func_8028B16C.s")

int player_shouldSlideTrot(void){
    return func_80291698(6)
        || (1.0 == get_slope_timer() && func_80294610(0x40));
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_39D0/func_8028B254.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_39D0/func_8028B2E8.s")

int player_isSliding(void){
    return func_80291698(5) 
        || 1.0 == get_slope_timer();
}

int func_8028B394(void){
    return func_8029CF20(4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_39D0/func_8028B3B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_39D0/func_8028B424.s")

extern s32 D_8037BF80[2];

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_39D0/func_8028B470.s")


int func_8028B4C4(void){
    return 135.0f < mlAbsF(mlDiffDegF(yaw_getIdeal(), yaw_get()));
}

int player_inWater(void){
    return D_8037BF61;
}

int func_8028B528(void){
    return D_8037BF62;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_39D0/func_8028B534.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_39D0/func_8028B59C.s")

void func_8028B6FC(void){
    D_8037BF60 = 1;
    D_8037BF61 = 0;
    D_8037BF62 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_39D0/func_8028B71C.s")



#ifdef NONMATCHING
s32 D_80363630[2] = {0x20, 0x1C};
s32 D_80363638[2] = {0x1C, 0x16};
s32 D_80363640[2] = {0x20, 0x01};
s32 D_80363648[2] = {0x1C, 0x18};
s32 D_80363650[2] = {0x20, 0x21};
s32 D_80363658[2] = {0x20, 0x28};
f32 D_80363660[3] = {350.0f, 0.0f, 600.0f};
u8 D_8036366C[] = {
    0xff, 0xff, 0x00,
    0xff, 0x00, 0x00,
    0x00, 0xff, 0x00,
    0x00, 0x00, 0xff,
    0xff, 0x00, 0xff,
    0x00, 0xff, 0xff,
    0x00, 0x00, 0x00,
    0x00, 0x00, 0xff,
    0x00, 0x00, 0x00,
    0x00, 0xff, 0x00,
    0x00, 0x00, 0xc8
};
#endif

#ifndef NONMATCHING
#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_39D0/func_8028B750.s")
#else
s32 *func_8028B750(void){
    if(D_8037BF80[0]){
        return D_8037BF80;
    }
    else{
        switch(player_getTransformation()){
            case TRANSFORM_2_TERMITE: //8028B7A0
                return &D_80363638; 
                break;

            case TRANSFORM_3_PUMPKIN: //8028B7AC
                return &D_80363640;
                break;

            case TRANSFORM_4_WALRUS: //8028B7B8
                return &D_80363650;
                break;

            case TRANSFORM_5_CROC: //8028B7C4
                return &D_80363648;
                break;

            case TRANSFORM_6_BEE: //8028B7D0:
                return &D_80363658;
                break;

            case TRANSFORM_1_BANJO: //8028B7DC
            default:
                return &D_80363630;
                break;
        }
    }
}
#endif


void func_8028B7F4(void){
    yaw_setIdeal(func_8029B41C());
    func_802991A8(1);
    func_8029957C(3);
    func_802978DC(2);
    func_80297970(0.0f);
    func_8029151C(0xC);
}

void func_8028B848(void){
    s32 s0 = 0;
    if(func_803348C0() == MAP_69_GL_MM_LOBBY){
        s0 = 0xf57;
    }
    else if(func_803348C0() == MAP_2_MM_MUMBOS_MOUNTAIN){
        s0 = 0xb45;
    }

    if(s0){
        if(player_getTransformation() ==  TRANSFORM_1_BANJO){
            func_8028B7F4();
        }
        func_80311480(s0, 0x2A, NULL, NULL, NULL, 0);
    }
}

void func_8028B8DC(void){
    func_8028F918(1);
    D_8037BF88 = 1;
}

void func_8028B904(s32 arg0, s32 arg1, s32 arg2, s32 arg3){
    f32 sp1C[3];

    sp1C[0] = reinterpret_cast(s16, arg0);
    sp1C[1] = reinterpret_cast(s16, arg1);
    sp1C[2] = reinterpret_cast(s16, arg2);

    func_80296CC0(&sp1C);
    func_80296CB4(arg3);
    if(func_802933C0(7)){
        func_8029CDA0();
    }
    else{
        if(bs_checkInterrupt(9) == 1){
            func_8029CDA0();
        }

    }
}


void func_8028B9A8(s32 arg0){
    s16 *tmp_v0;
    s32 sp18[3];

    tmp_v0 = func_803049CC(0x1F6, 0);
    func_80304D4C(tmp_v0, &sp18);
    func_802CA1CC(arg0);
    func_8032811C(0x47, &sp18, 0);
    func_8025A6EC(COMUSIC_2B_DING_B, 28000);
    
}

void func_8028BA00(s32 arg0){
    func_802C3C88(func_8028B9A8, arg0);
    if(arg0);
}


void func_8028BA2C(s32 arg0) {
    if (func_802FADD4(0x1B) == 0) {
        func_80345F24(ITEM_C_NOTE);
    } else {
        func_803463F4(ITEM_C_NOTE, 1);
    }
    if (item_getCount(ITEM_C_NOTE) < 100) {
        func_8025A6EC(SFX_NOTE_COLLECTED, 0x3E80);
        timedFunc_set_1(0.75f, func_8035644C, 3);
    }
    func_802F379C(arg0 + 4);
}

void func_8028BAB0(enum jiggy_e jiggy_id, s32 arg1, s32 arg2, s32 arg3){
    if(jiggyscore_isCollected(jiggy_id))
        return;

    if(mapSpecificFlags_get(arg1) && mapSpecificFlags_get(arg2)){
        mapSpecificFlags_set(arg3, 1);
    }
    mapSpecificFlags_set(arg1, 1);
    func_8030E6D4(SFX_90_SWITCH_PRESS);
}

void func_8028BB1C(s32 arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6){
    u32 sp24;
    if(arg0 != 1)
        return;
    
    if(func_8028ECAC() == 1)
        return;

    if(arg1 & 0x400000){
        sp24 = arg1 + 0xFFC00000;
        if(!func_803203FC(sp24)){
            func_803204E4(sp24, 1);
            func_8030E6D4(SFX_90_SWITCH_PRESS);
            func_803204E4(0xBF, 1);
            func_802D6264(1.0f, arg2, arg3, arg4, arg5, arg6);
        }
    }
    else{//L8028BBB8
        if(!func_8031FF1C(arg1)){
            func_80320004(arg1, 1);
            func_8030E6D4(SFX_90_SWITCH_PRESS);
            func_803204E4(0xBF, 1);
            func_802D6264(1.0f, arg2, arg3, arg4, arg5, arg6);
        }
    }
}

int func_8028BC20(ActorMarker *marker){
    return D_8037BF90 == 1 && func_8028E76C(marker) == 0x5;
}

int func_8028BC60(void){
    return D_8037BF90 == 1 && func_8028E76C(NULL) == 0x5;
} 



#ifndef NONMATCHING
//collisionSwitchCase
#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_39D0/func_8028BCA0.s")
#else
void func_8028BCA0(Prop *prop){
    if(*((u32*)(((u32)prop) + 8)) & 1){
        s32 spCC = 0;
        s32 spC8 = 0;
        s32 spC4;
        f32 tmp_f0;
        ActorMarker *marker = prop->actorProp.marker; //0xbc
        Actor *actor = NULL; //0xb8
        
        if(marker->unk3E_0){
            actor = marker_getActor(marker);
            if(actor->despawn_flag)
                return;

            if(actor->unk10_0 && func_802C9C14(actor))
                return;
            
        }//L8028BD1C
        spC4 = func_8028E76C(marker);
        if(func_8033D410(playerMarker, marker))
            return;
        
        switch(marker->unk14_20){
            //L8028BD84 0x1E6 <= x < 0x245
                //jtbl D_80373F88


            case 0x125: //L8028BE88
            case 0x126: //L8028BE88
                spC8 = 1;
                break;

            case 0x97: //L8028BE94
                spCC = 1;
                spC8 = 1;
                break;

            case 0xBA: //L8028BEA8
                if( marker->unk40_31 == 1
                    || marker->unk40_31 == 2
                    || marker->unk40_31 == 3
                    || marker->unk40_31 == 4
                    || marker->unk40_31 == 5
                    || marker->unk40_31 == 6
                ){
                    spC8 = 1;
                }
                break;

            case 0xB5: //L8028BEF4
                if(func_8028BC20(marker))
                    return;
                if(func_802D8E68(prop)){
                    marker_despawn(marker);
                }
                break;

            case 0x1E5: //L8028BF24
                if(func_8028BC20(marker))
                    return;
                
                if(func_802D8EDC(prop)){
                    marker_despawn(marker);
                }
                break;
            
            case 0x9E: //L8028BF54
            case 0xA1: //L8028BF54
                if(spC4 == 1){
                    func_802A02B4(1);
                    spC8 = 2;
                }
                break;

            case 0x28: //L8028BF74
                if( spC4 == 6){
                    func_8030E484(0x20);
                }
                else{
                    func_8030E6D4(0x65);
                }

                if(spC4 != 6){
                    spCC = 2;
                }
                break;

            case 0xF5: //L8028BFB0
                if(spC4 == 1)
                    func_8028BAB0(JIGGY_20_BGS_ELEVATED_WALKWAY, 1, 3, 7);
                break;
                
            case 0xFD: //L8028BFD4
                if(spC4 == 1)
                    func_8028BAB0(JIGGY_25_BGS_MAZE, 0xa, 0xc, 8);
                break;
                
            case 0xEC: //L8028BFF8
                if(spC4 == 1){
                    mapSpecificFlags_set(3, 1);
                    func_8030E6D4(SFX_90_SWITCH_PRESS);
                }
                break;
                
            case 0xF2: //L8028C01C
                if(spC4 == 1){
                    if(!mapSpecificFlags_get(0xD)){
                        mapSpecificFlags_set(0xD, 1);
                        func_8030E6D4(SFX_90_SWITCH_PRESS);
                        func_802BAFE4(0x14);
                        timedFunc_set_1(1.5f, func_8028BA00, 0xB);
                    }
                }
                break;

            case 0x15F: //L8028C070
                if(spC4 == 1){
                    if(!mapSpecificFlags_get(0)){
                        mapSpecificFlags_set(0,1);
                        func_8030E6D4(SFX_90_SWITCH_PRESS);
                        func_802BAFE4(0x7E);
                        timedFunc_set_1(1.5f, func_8028BA00, 0xf);
                    }
                }
                break;

            case 0xF1: //L8028C0C8
                if(func_8028ECAC() == 1)
                    return;
                if(!mapSpecificFlags_get(5)){
                    mapSpecificFlags_set(5, 1);
                    func_8030E6D4(SFX_90_SWITCH_PRESS);
                }
                break;
                
            case 0x231: //L8028C104
            case 0x244: //L8028C104
                {
                    f32 spAC[3];

                    if(func_8028ECAC() == 1)
                        return;
                    player_getPosition(spAC);
                    spAC[1] += 40.0f;
                    if(func_802458E0(spAC, actor, 0x87) == 0)
                        return;
                    func_803204E4(0x1E, 1);
                    if(func_8031FF1C(((actor->unkF4_8 - 1) ^ 1) + 0x49)){
                        actor->unk10_12 = 2;
                    }
                    else{
                        actor->unk10_12 = 1;
                    }
                }
                break;

            case 0xFE: //L8028C1A4
                if(spC4 == 1){
                    if(func_8028ECAC() == 1)
                        return;
                    if(!mapSpecificFlags_get(0)){
                        mapSpecificFlags_set(0,1);
                        func_8030E6D4(SFX_90_SWITCH_PRESS);
                    }
                }
                break;
            
            case 0x23F: //L8028C1EC
                if(spC4 == 1){
                    if(func_8028ECAC() == 1)
                        return;
                    if(!mapSpecificFlags_get(0)){
                        mapSpecificFlags_set(0,1);
                        func_8030E6D4(SFX_90_SWITCH_PRESS);
                    }
                }
                break;

            case 0x110: //L8028C238
                if(spC4 == 1){
                    if(func_8028ECAC() == 1)
                        return;
                    if(!mapSpecificFlags_get(0)){
                        mapSpecificFlags_set(0, 1);
                        func_8030E6D4(SFX_90_SWITCH_PRESS);
                    }
                }
                break;
                
            case 0x113: //L8028C284
                if(spC4 == 1){
                    if(func_8028ECAC() == 1)
                        return;
                    if(!mapSpecificFlags_get(1)){
                        mapSpecificFlags_set(1,1);
                        func_8030E6D4(SFX_90_SWITCH_PRESS);
                    }
                }
                break;
                
            case 0x115: //L8028C2D0
                if(spC4 == 1){
                    if(func_8028ECAC() == 1)
                        return;
                    if(!mapSpecificFlags_get(2)){
                        mapSpecificFlags_set(2,1);
                        func_8030E6D4(SFX_90_SWITCH_PRESS);
                    }
                }
                break;

            case 0x241: //L8028C31C
                func_8028BB1C(spC4, 0xC6, 0x6E, 0x81, 0x2C, 0xA, 0xC7);
                break;

            case 0x23C: //L8028C350
                func_8028BB1C(spC4, 0xA3, 0x92, 0x7F, 0x1A, 0xA, 0xA4);
                break;

            case 0x161: //L8028C384
                func_8028BB1C(spC4, 0x4000BE, 0x6E, 0x7D, 0x19, 0x14, 0xA0);
                break;

            case 0x162: //L8028C3BC
                func_8028BB1C(spC4, 0x4000BD, 0x71, 0x7C, 0x18, 0x14, 0x9F);
                break;
            case 0x166: //L8028C3F4
                func_8028BB1C(spC4, 0x4000BC, 0x6A, 0x7A, 0x17, 0x14, 0x9A);
                break;
           
            case 0x22B: //L8028C42C
                func_8028BB1C(spC4, 0x4000BB, 0x6F, 0x3A, 0x13, 0x15, 0x47);
                break;

            case 0x22A: //L8028C464
                func_8028BB1C(spC4, 0x4000BA, 0x79, 0x39, 0x12, 0x15, 0x46);
                break;

            case 0x103: //L8028C49C
                func_8028BB1C(spC4, 0x4000B6, 0x69, 0x26, 1, 4, 0x18);
                break;
                
            case 0x104: //L8028C4D4
                func_8028BB1C(spC4, 0x4000B7, 0x6F, 0x27, 2, 0x14, 0x19);
                break;
                
            case 0x105: //L8028C50C
                func_8028BB1C(spC4, 0x4000B8, 0x6D, 0x28, 3, 0x14, 0x1A);
                break;
                
            case 0x106: //L8028C544
                func_8028BB1C(spC4, 0x4000B9, 0x76, 0x29, 4, 0xe, 0x1C);
                break;
                
            case 0x11B: //L8028C57C
                func_8028BB1C(spC4, 0x22, 0x77, 0x2D, 5, 0xA, 0x23);
                break;
                
            case 0x11C: //L8028C5B0
                func_8028BB1C(spC4, 0x24, 0x77, 0x2E, 6, 0xA, 0x25);
                break;
                
            case 0x11D: //L8028C5E4
                func_8028BB1C(spC4, 0x26, 0x76, 0x2F, 0x7, 0xA, 0x27);
                break;

            case 0x232: //L8028C618
                func_8028BB1C(spC4, 0x53, 0x6b, 0x3b, 0x14, 0x12, 0x54);
                break;

            case 0xF3: //L8028C64C
                if(spC4 == 3){
                    mapSpecificFlags_set(6,1);
                    spC8 = 1;
                }
                break;


            case 0x52: //L8028C66C
                {
                    f32 spA0[3];
                    s32 sp9C;
                    if(func_8028BC20(marker))
                        return;
                    
                    player_getPosition(spA0);
                    sp9C = func_802C8088(actor);
                    if( sp9C != 0x2F
                        || (func_8028B2E8() && !(3600.0f < func_80256280(actor->position, spA0)))
                    ){
                        jiggyscore_8032108C(sp9C, 1);
                        func_803463F4(0x26, 1);
                        if(sp9C == 0x20 || sp9C == 0x25){
                            func_802D6924();
                        }
                        if(jiggyscore_total() < 3){
                            func_8028B848();
                        }

                        if(func_8025AD7C(0x30)){
                            func_8028B8DC();
                        }

                        func_802C3F04(func_8028B904, reinterpret_cast(u32, prop->actorProp.x), reinterpret_cast(u32, prop->actorProp.y), reinterpret_cast(u32, prop->actorProp.z), sp9C);
                        marker_despawn(marker);
                    }
                }
                break;

            case 0x53: //L8028C774
                {
                    s32 sp98;
                    if(func_8028BC20(marker))
                        return;
                    sp98 = func_802CA1C4(marker_getActor(marker));
                    if(sp98 != 0x12 || player_getTransformation() == TRANSFORM_3_PUMPKIN)
                    {
                        func_80321364(sp98, 1);
                        func_8025A6EC(COMUSIC_17_EMPTY_HONEYCOMB_COLLECTED, 28000);
                        timedFunc_set_1(2.0f, func_8035644C, 0xB);
                        func_80345F24(ITEM_13_EMPTY_HONEYCOMB);
                        if(!(item_getCount(ITEM_13_EMPTY_HONEYCOMB) < 6)){
                            func_80314AC8(0);
                        }
                        func_802F36DC(&prop->actorProp.x);
                        marker_despawn(marker);
                    }
                }
                break;

            case 0x54: //L8028C820
                func_8025A6EC(COMUSIC_19_LOW_PITCH_FLUTES, 28000);
                func_803012F8();
                func_802C3F04(func_802C418C, 0x4E, reinterpret_cast(u32, prop->actorProp.x), reinterpret_cast(u32, prop->actorProp.y), reinterpret_cast(u32, prop->actorProp.z));
                marker_despawn(marker);
                break;

            case 0x55: //L8028C86C
                if(func_8028BC20(marker))
                    return;
                
                if( func_803348C0() == MAP_8E_GL_FURNACE_FUN
                    && func_803203FC(0)
                    && !func_8031FF1C(BKPROG_A6_FURNACE_FUN_COMPLETE)
                ){
                    func_80356540(BKPROG_A6_FURNACE_FUN_COMPLETE);
                    func_8030E6D4(SFX_126_AUDIENCE_BOOING);
                }  

                func_8025A6EC(COMUSIC_16_HONEYCOMB_COLLECTED, 28000);
                timedFunc_set_1(0.75f, func_8035644C, 0xA);
                func_80345F24(ITEM_14_HEALTH);
                func_802F373C(&prop->actorProp.x);
                marker_despawn(marker);
                break;

            case 0x169: //L8028C908
                { //ONLY THIS CASE DOESN'T MATCH
                    volatile s32 sp94;
                    s32 sp88[3];
                    s32 sp7C;
                    s32 sp78;

                    switch (func_803348C0())
                    {
                    case 0x1D: //L8028C95C
                        sns_set_item_and_update_payload(6, 0, 1);
                        break;
                    case 0x61: //L8028C974
                        sns_set_item_and_update_payload(1, 0, 1);
                        break;
                    case 0x2C: //L8028C988
                        sns_set_item_and_update_payload(3, 0, 1);
                        break;
                    case 0x3F: //L8028C99C
                        sns_set_item_and_update_payload(2, 0, 1);
                        break;
                    case 0x92: //L8028C9B0
                        sns_set_item_and_update_payload(4, 0, 1);
                        break;
                    case 0x8F: //L8028C9C4
                        sns_set_item_and_update_payload(5, 0, 1);
                        break;
                    }
                    func_8025A70C(COMUSIC_88_BIG_SNS_FANFARE);
                    FUNC_8030E624(SFX_114_BRICKWALL_BREAKING, 0x1D4, 0x332);
                    tmp_f0 = 0.9f;
                    {
                        
                        s32 tmp_v0_2 = 3*(actor->unkF4_8 - 1);
                        f32 sp64[3] = D_80363660;
                        s32 sp60;
                        sp78 = 0xA;
                        sp94 = 0xAA;

                        for(sp7C = 0; sp7C < 4; sp7C++){ //L8028CA4C
                            int i;
                            for(i = 0 ; i < 3; i++){
                                sp88[i] = D_8036366C[tmp_v0_2 + i];
                            }
                            func_802EE354(actor, 0x3ED, 0x23, sp78, 0.2f, tmp_f0, 3.0f, sp88, 0, sp64);
                            
                            for(i = 0 ; i < 3; i++){
                                sp88[i] = 0xFF;
                            }
                            func_802EE354(actor, 0x3ED, 0xe, sp78, 0.2f, tmp_f0, 3.0f, sp88, 0, sp64);
                            
                            sp78 += 0x32;
                            tmp_f0 += -0.15;
                            if(tmp_f0 < 0.01){
                                tmp_f0 = 0.01f;
                            }
                    
                            sp64[0] -= 50.0f;
                            sp64[2] += 260.0f;
                            sp94 -= 0x1e;
                        }
                    
                        sp60 = sns_get_item_state(1, 0) + sns_get_item_state(2, 0) + sns_get_item_state(3, 0)
                            + sns_get_item_state(4, 0) + sns_get_item_state(5, 0) + sns_get_item_state(6, 0);
                        if(sp60 < 3){
                            func_80324DBC(2.5f, 0xDB2 + sp60, 0x20, 0, 0, 0, 0);
                        }
                    }
                    marker_despawn(marker);
                }
                break;
            case 0x168: //L8028CC7C
                sns_set_item_and_update_payload(7, 0, 1);
                func_8025A70C(COMUSIC_88_BIG_SNS_FANFARE);
                func_80324DBC(2.5f, 0xDB5, 0x20, 0, 0, 0, 0);
                marker_despawn(marker);
                break;
            
            case 0x5F: //L8028CCC8
                if(func_8028BC20(marker))
                    return;

                func_8028BA2C(prop);
                marker_despawn(marker);
                break;

            case 0x60: //L8028CCF0
                if(func_8028BC20(marker))
                    return;
                if(func_802D8DF0(prop)){
                    marker_despawn(marker);
                }
                break;

            case 0x6B: //L8028CD20
                if(func_8028EE84() == 2){
                    func_803463D4(ITEM_17_AIR, func_80301DBC(2));
                }
                break;

            case 0x61: //L8028CD50
                if(func_8028BC20(marker))
                    return;
                if( func_803348C0() == MAP_8E_GL_FURNACE_FUN
                    && func_803203FC(0)
                    && !func_8031FF1C(BKPROG_A6_FURNACE_FUN_COMPLETE)
                ){
                    func_80356540(BKPROG_A7_NEAR_PUZZLE_PODIUM_TEXT);
                    func_8030E6D4(SFX_127_AUDIENCE_MIXED);
                }
                func_8025A6EC(COMUSIC_15_EXTRA_LIFE_COLLECTED, 0x7FFF);
                timedFunc_set_1(1.5f, func_8035646C, 0xC);
                func_802F3B3C(&prop->actorProp.x);
                func_80345F24(ITEM_16_LIFE);
                marker_despawn(marker);
                break;
            


            case 0xD4: //L8028CDEC
            case 0x242: //L8028CDEC
                if(ability_isUnlocked(ABILITY_D_SHOCK_JUMP)){
                    func_802933E8(2);
                }else{
                    if(!func_80320454(0xC, 1)){
                        func_80311480(0xA24, 4, 0, 0, 0, 0);
                    }
                }
                break;

            case 0x45: //L8028CE3C
            case 0x240: //L8028CE3C
            case 0x261: //L8028CE3C
                if(ability_isUnlocked(ABILITY_9_FLY)){
                    func_802933E8(1);
                }
                else if(! func_80320454(0xD, 1)){
                    func_80311480(0xA25, 4, 0, 0, 0, 0);
                }
                break;

            case 0x11: //L8028CE8C
                if(func_8028BC20(marker))
                    return;
                if(func_8029A8F4() != TRANSFORM_1_BANJO)
                    return;
                if(func_8028F170())
                    return;
                if(func_8028F25C())
                    return;
                if(func_802D6E0C(actor) == 0)
                    return;
                
                func_802933E8(0xe);
                func_802A6388(func_802D6E4C(actor));
                bs_checkInterrupt(0x1B);
                func_802C3F04(func_802C418C, 0x4E, reinterpret_cast(u32, prop->actorProp.x), reinterpret_cast(u32, prop->actorProp.y), reinterpret_cast(u32, prop->actorProp.z));
                func_802D6E54(actor);
                break;

            case 0x38: //L8028CF38
                {
                    s32 tmp;
                    if(func_8028BC20(marker))
                        return;

                    tmp = func_8029A8F4();
                    if(tmp != TRANSFORM_1_BANJO && tmp != TRANSFORM_5_CROC)
                        return;
                    
                    if(func_8028F25C())
                        return;

                    if(func_8028F170())
                        return;
                    
                    if(func_802CA708(actor) == 0)
                        return;

                    func_802933E8(0x10);
                    func_80294AE8(func_802CA748(actor));
                    bs_checkInterrupt(0x1A);
                    func_802C3F04(func_802C418C, 0x4E, reinterpret_cast(u32, prop->actorProp.x), reinterpret_cast(u32, prop->actorProp.y), reinterpret_cast(u32, prop->actorProp.z));
                    func_802CA750(actor);
                }
                break;

            case 0x1AE: //L8028CFEC
                switch(spC4){
                    case 1:
                    case 2:
                    case 5:
                    case 6:
                        spC8 = 2;
                        break;
                    default:
                        spCC = 2;
                        break;
                }
                break;

            case 0x1B1: //L8028D024
                if(spC4 == 1)
                    spC8 = 1;
                break;
        }//L8028D034
        if(func_80297C6C() == 3){
            spCC = 0;
        }
        if(spC8){
            func_802933E8(8);
        }
        func_8032FFF4(playerMarker, marker, spCC);
        func_8032FFF4(marker, playerMarker, spC8);
        if(marker->unk3E_0){
            func_8032B258(actor, spC8);
        }
    }
    else if(prop->unk8_1)//L8028D0B0 //PropProp
    {
        s32 tmp = prop->propProp.unk0_31 + 0x2D1;
        switch (tmp)
        {
        case 0x2E8:
            func_802933E8(1); //on flight pad
            break;
        case 0x2DD: //on shock spring pad
            func_802933E8(2);
            break;
        default:
            func_80332790(tmp);
            break;
        }
    }
    else{//L8028D10C //SpriteProp
        s32 tmp = prop->spriteProp.unk0_31 + 0x572;
        switch (tmp)
        {
        case 0x6D6: //L8028D144
            if(!func_8028BC60()){
                prop->spriteProp.unk8_4 = 0;
                func_8028BA2C(prop);
            }
            break;
        case 0x6D7: //L8028D16C
            if(!func_8028BC60()){
                prop->spriteProp.unk8_4 = 0;
                func_802D8DF0(prop);
            }
            break;
        case 0x580: //L8028D194
            if(!func_8028BC60()){
                prop->spriteProp.unk8_4 = 0;
                func_802D8E68(prop);
            }
            break;
        case 0x6D1: //L8028D1BC
            if(!func_8028BC60()){
                prop->spriteProp.unk8_4 = 0;
                func_802D8EDC(prop);
            }
            break;
        default:
            func_80332790(tmp);
            break;
        }
    }
}
#endif

//player_initMarker
void func_8028D1FC(void){
    f32 sp1C[3];
    _player_getPosition(sp1C);
    playerMarker = func_8032FBE4(sp1C, func_80291AAC, 1, 0);
    playerMarker->unk2C_1 = 1;
    func_803300A8(playerMarker, NULL, func_80291634, func_80291610);
    func_803300B8(playerMarker, func_8028D7B8);
    func_802933FC(1);
    func_802933FC(2);
    func_802933FC(8);
    func_8028D638(0,0);
    func_8033D2F4();
    D_8037BF8C = 0;
    D_8037BF90 = 0xff;
    
}

//player_freeMarker
void func_8028D2BC(void){
    marker_free(playerMarker);
    playerMarker = NULL;
}

void func_80320ED8(ActorMarker *, f32, s32);

#ifndef NONMATCHING
#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_39D0/func_8028D2E4.s")
#else
void func_8028D2E4(void){
    s32 temp_s0;
    s32 *temp_s0_2;
    f32 sp174[3];
    f32 sp168[3];
    int i;
    s32 temp_s2;
    Prop *temp_s1;
    Prop *sp58[2];

    if ((D_8037BF88 != 0)){
        temp_s0 = func_8024FEEC(func_8025ADD4(0x30) & 0xFF);
        if((func_80259B8C() < 4 && temp_s0 >= 0xBB9) || !func_8025AD7C(0x30)){
            func_8028F918(0);
            D_8037BF88 = 0;
        }
    }//L8028D364
    func_802933FC(8);
    if(playerMarker->collidable){
        temp_s0_2 = func_8028B750();
        func_802933FC(1);
        func_802933FC(2);
        _player_getPosition(sp168);
        func_8032F64C(sp168, playerMarker);
        D_8037BF8C = NULL;
        temp_s2 = 0;
        for(i = 0; i < 2; i++){//L8028D3DC
            D_8037BF90 = i;
            func_80292284(sp174, i); //get top of player?
            playerMarker->unk38 = sp174[0] - sp168[0];
            playerMarker->unk3A = sp174[1] - sp168[1];
            playerMarker->unk3C = sp174[2] - sp168[2];
            func_80320ED8(playerMarker, temp_s0_2[i], 1);
            while(temp_s1 = func_8032F528()){//L8028D480
                if(!temp_s1->unk8_2){
                    if(!D_8037BF8C && temp_s1->markerFlag & 1 && temp_s1->unk8_1){
                        D_8037BF8C = temp_s1->actorProp.marker;
                    }
                    /* func_8028BCA0 */(temp_s1);
                    temp_s1->unk8_2 = 1;
                    sp58[temp_s2++] = temp_s1;
                }//L8028D4E0 
            }//L8028D4F0
        }
        D_8037BF90 = 0xff;

        for(i = 0; i < temp_s2; i++){//L8028D55C
            sp58[i]->unk8_2 = 0;
        }
    }
}
#endif

ActorMarker *player_getMarker(void){ //player_getMarker
    return playerMarker;
}

void func_8028D5DC(void){ //player_collisionOff
    playerMarker->collidable = 0;
}

void func_8028D5F4(void){ //player_collisionOn
    playerMarker->collidable = 1;
}

s32 func_8028D60C(void){ //player_isCollidable
    return (playerMarker->collidable)? 1 : 0;
}

void func_8028D638(s32 arg0, s32 arg1){
    D_8037BF80[0] = arg0;
    D_8037BF80[1] = arg1;
}

void func_8028D64C(s32 arg0){
    D_8037BF74 = arg0;
}

void carriedObject_setActorID(s32 arg0){
    carriedObject_actorID = arg0;
}

s32 func_8028D664(void){
    return D_8037BF74;
}

s32 carriedObject_getActorID(void){
    return carriedObject_actorID;
}

void func_8028D67C(s32 arg0){
    D_8037BF7C = arg0;
}

s32 func_8028D688(void){
    return D_8037BF7C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_39D0/func_8028D694.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_39D0/func_8028D6F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_39D0/func_8028D71C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/code_39D0/func_8028D7B8.s")
