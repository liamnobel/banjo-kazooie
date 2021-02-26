#include <ultra64.h>
#include "functions.h"
#include "variables.h"

#include "prop.h"

void func_802EF5C8(Actor*, s32);
void func_802EF9F8(Actor*, f32);
void func_802EFA5C(Actor*, f32, f32);
void func_802EFB70(Actor*, f32, f32);
void func_802EFB84(Actor*, f32, f32);
void func_802EFE24(Actor*, f32, f32, f32, f32, f32, f32);
void func_802EFE5C(Actor*, f32, f32);
void func_802EFEC0(Actor*, f32, f32);
void func_8030E878(u32,f32,u32,f32*, f32, f32);
u32 func_8032886C(Actor*, f32);
Actor *func_80329958(Actor *);
void func_803869A0(Actor*, f32, f32);

extern s32 D_8038AB48;

extern s32 D_8038AB90;

extern s32 D_8038AB9C;

f32 D_8038B110 = 0.95f;
f64 D_8038B118 = 0.10;
f64 D_8038B120 = 0.01;

void func_803869A0(Actor *this, f32 arg1, f32 arg2) {
    if (func_8032886C(this, arg1)) {
        func_8030E878(0x98, arg2, 0x7D00, &this->position_x, 2000.0f, 4000.0f);
    }
}

void func_80386A00(Actor *this) {
    if (this->unk16C_4 <= 0) {
        if (func_8031FF1C(0xFC) == 0) {
            func_803282F4(this->marker);
            return;
        }
        actor_collisionOff(this);
        if(0);
        this->marker->propPtr->unk8_3 = 1;
        this->unk16C_4 = 1;
    }
    func_803869A0(this, 0.20f, 1.00f);
    func_803869A0(this, 0.27f, 1.05f);
    func_803869A0(this, 0.50f, 0.95f);
    func_803869A0(this, 0.65f, 1.05f);
    func_803869A0(this, 0.90f, 1.00f);
    func_803869A0(this, D_8038B110, D_8038B110);
}

void func_80386B04(Actor *this, s32 arg1, s32 arg2, f32 arg3) {
    func_802EF9F8(this, 0.6f);
    func_802EFA18(this, 4);
    func_802EFA5C(this, 0.00f, 0.75f);
    func_802EFAC8(this, 0x42E);
    func_802EFB54(this, arg1);
    func_802EFA70(this, 2);
    func_802EFB70(this, arg3, arg3);
    func_802EFB84(this, arg3, arg3);
    func_802EFE24(this, -100.0f, -100.0f, -100.0f, 100.0f, 100.0f, 100.0f);
    func_802EFE5C(this, 0.00f, 0.01f);
    func_802EFEC0(this, 2.0f, 2.0f);
    func_802EFD7C(this, &D_8038AB48);
    func_802EF5C8(this, arg2);
}

void func_80386C2C(Actor *this, s32 arg1, s32 arg2, f32 arg3) {
    func_802EFFA8(this, &D_8038AB90);
    func_802EF950(this, 0x700);
    func_802EFA5C(this, 0.00f, 0.01f);
    func_802EFA90(this, 0, 7);
    func_802EFB54(this, arg1);
    func_802EFB70(this, (arg3 * D_8038B118), (arg3 * 0.5));
    func_802EFB84(this, (arg3 * 1.5), (arg3 * 3.0));
    func_802EFE5C(this, 0.0f, 0.01f);
    func_802EFEC0(this, 1.5f, 2.0f);
    func_802EFD7C(this, &D_8038AB9C);
    func_802EF5C8(this, arg2);
}

// matches except for allocated stacksize
#pragma GLOBAL_ASM("asm/nonmatchings/SM/code_5B0/func_80386D68.s")
// void func_802C4218(s32, f32, f32, f32);
// Actor *func_802F0BD0(u32);
// void func_8030DBB4(s32, f32);
// u32 func_8030E8B4(s32, s32, s32);
// u32 *func_80326EEC(u32);

// void func_80386D68(Actor *this){
//     s32 temp_a0;
//     s32 temp_a1;

//     func_8030E8B4(0x7FFF409B, (temp_a1 = &this->position_x), 0x07D003E8);
//     this->pad44_31 = func_8030D90C();
//     func_8030DA80(this->pad44_31, 0x3F9);
//     func_8030DD14(this->pad44_31, 3);
//     func_8030DABC(this->pad44_31, 0x7D00);
//     func_8030DBB4(this->pad44_31, (0.01 < (2.0 - this->scale))? (2.0 - this->scale): 0.01);
//     func_8030E2C4(this->pad44_31);
//     func_80386B04(func_802F0BD0(0xA), *(u32 *)(&temp_a1), 0xA, this->scale);
//     func_80386C2C(func_802F0BD0(0x10), *(u32 *)(&temp_a1), 0x10, this->scale);

//     temp_a0 = this->unk100;
//     if(temp_a0 && func_803870E8(temp_a0)){
//         func_802CA1CC(0x18);
//         func_802C3F04(func_802C4218, 0x1F, *(u32 *)(&this->position_x), *(u32 *)(&this->position_y), *(u32 *)(&this->position_z));
//     }
//     func_803282F4(this->marker);
// }

void func_80386EB4(Actor *this, Actor *arg1) {
    Actor *temp_v0;
    temp_v0 = func_80329958(this);
    if ((temp_v0->unk10_31 ) == 2) {
        func_80386D68(temp_v0);
    }
}

void func_80386EF4(Actor *this) {
    u32 temp_t3;
    u32 *temp_v0_2;
    if ((this->unk16C_4) <= 0) {
        this->marker->propPtr->unk8_3 = 1;
        func_803300A8(this->marker, 0, 0, &func_80386EB4);
        this->unk38_31 = 0;
        this->unk138_31 = 1;
        this->unk16C_4 = 1;
    }
    if ((this->unk10_31) == 1) {
        temp_t3 = this->unk38_31++ ^ 2;
        if ((temp_t3) == 0) {
            temp_v0_2 = (u32 *)func_80326EEC(0x16E);
            if (0 != temp_v0_2) {
                this->unk100 = *temp_v0_2;
            } else {
                this->unk100 = NULL;
            }
            func_80328A84(this, 2);
        }
    }
}