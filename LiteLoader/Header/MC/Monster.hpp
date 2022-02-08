// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Monster : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MONSTER
public:
    class Monster& operator=(class Monster const&) = delete;
    Monster(class Monster const&) = delete;
    Monster() = delete;
#endif

public:
    /*0*/ virtual ~Monster();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*4*/ virtual void __unk_vfn_2();
    /*5*/ virtual void lerpMotion(class Vec3 const&);
    /*6*/ virtual void normalTick();
    /*7*/ virtual float getRidingHeight();
    /*8*/ virtual void __unk_vfn_3();
    /*9*/ virtual void __unk_vfn_4();
    /*10*/ virtual float getCameraOffset() const;
    /*11*/ virtual void __unk_vfn_5();
    /*12*/ virtual void __unk_vfn_6();
    /*13*/ virtual void playerTouch(class Player&);
    /*14*/ virtual void __unk_vfn_7();
    /*15*/ virtual void __unk_vfn_8();
    /*16*/ virtual void __unk_vfn_9();
    /*17*/ virtual void __unk_vfn_10();
    /*18*/ virtual void __unk_vfn_11();
    /*19*/ virtual void __unk_vfn_12();
    /*20*/ virtual void __unk_vfn_13();
    /*21*/ virtual class Actor* findAttackTarget();
    /*22*/ virtual void __unk_vfn_14();
    /*23*/ virtual void adjustDamageAmount(int&) const;
    /*24*/ virtual void onTame();
    /*25*/ virtual void onFailedTame();
    /*26*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*27*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*28*/ virtual float getPickRadius();
    /*29*/ virtual void awardKillScore(class Actor&, int);
    /*30*/ virtual class HashedString const& queryEntityRenderer() const;
    /*31*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*32*/ virtual int getPortalWaitTime() const;
    /*33*/ virtual void __unk_vfn_15();
    /*34*/ virtual void __unk_vfn_16();
    /*35*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*36*/ virtual void __unk_vfn_17();
    /*37*/ virtual void __unk_vfn_18();
    /*38*/ virtual void __unk_vfn_19();
    /*39*/ virtual void __unk_vfn_20();
    /*40*/ virtual void __unk_vfn_21();
    /*41*/ virtual void __unk_vfn_22();
    /*42*/ virtual void __unk_vfn_23();
    /*43*/ virtual void __unk_vfn_24();
    /*44*/ virtual void __unk_vfn_25();
    /*45*/ virtual void __unk_vfn_26();
    /*46*/ virtual void setAuxValue(int);
    /*47*/ virtual void stopSpinAttack();
    /*48*/ virtual void __unk_vfn_27();
    /*49*/ virtual void __unk_vfn_28();
    /*50*/ virtual void __unk_vfn_29();
    /*51*/ virtual bool _hurt(class ActorDamageSource const&, int, bool, bool);
    /*52*/ virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /*53*/ virtual void addAdditionalSaveData(class CompoundTag&);
    /*54*/ virtual void __unk_vfn_30();
    /*55*/ virtual void __unk_vfn_31();
    /*56*/ virtual void spawnAnim();
    /*57*/ virtual void aiStep();
    /*58*/ virtual bool checkSpawnRules(bool);
    /*59*/ virtual int getItemUseDuration() const;
    /*60*/ virtual float getItemUseStartupProgress() const;
    /*61*/ virtual float getItemUseIntervalProgress() const;
    /*62*/ virtual void __unk_vfn_32();
    /*63*/ virtual void __unk_vfn_33();
    /*64*/ virtual void __unk_vfn_34();
    /*65*/ virtual void sendArmorDamage(class std::bitset<4> const&);
    /*66*/ virtual void onBorn(class Actor&, class Actor&);
    /*67*/ virtual int getAttackTime();
    /*68*/ virtual float _getWalkTargetValue(class BlockPos const&);
    /*69*/ virtual void __unk_vfn_35();
    /*70*/ virtual void _serverAiMobStep();
    /*71*/ virtual void __unk_vfn_36();
    /*72*/ virtual bool isDarkEnoughToSpawn() const;
    /*
    inline bool canExistInPeaceful() const{
        bool (Monster::*rv)() const;
        *((void**)&rv) = dlsym("?canExistInPeaceful@Monster@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline  ~Monster(){
         (Monster::*rv)();
        *((void**)&rv) = dlsym("??1Monster@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI Monster(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

protected:

private:

};