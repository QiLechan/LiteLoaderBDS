// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Parrot : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARROT
public:
    class Parrot& operator=(class Parrot const&) = delete;
    Parrot(class Parrot const&) = delete;
    Parrot() = delete;
#endif

public:
    /*0*/ virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const&);
    /*1*/ virtual ~Parrot();
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual class Vec3 getInterpolatedRidingPosition(float) const;
    /*5*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*6*/ virtual void __unk_vfn_2();
    /*7*/ virtual void lerpMotion(class Vec3 const&);
    /*8*/ virtual float getRidingHeight();
    /*9*/ virtual void __unk_vfn_3();
    /*10*/ virtual void __unk_vfn_4();
    /*11*/ virtual float getCameraOffset() const;
    /*12*/ virtual float getShadowRadius() const;
    /*13*/ virtual void __unk_vfn_5();
    /*14*/ virtual void __unk_vfn_6();
    /*15*/ virtual void playerTouch(class Player&);
    /*16*/ virtual void __unk_vfn_7();
    /*17*/ virtual void __unk_vfn_8();
    /*18*/ virtual void __unk_vfn_9();
    /*19*/ virtual void __unk_vfn_10();
    /*20*/ virtual void __unk_vfn_11();
    /*21*/ virtual void __unk_vfn_12();
    /*22*/ virtual void __unk_vfn_13();
    /*23*/ virtual class Actor* findAttackTarget();
    /*24*/ virtual void __unk_vfn_14();
    /*25*/ virtual void adjustDamageAmount(int&) const;
    /*26*/ virtual void setSitting(bool);
    /*27*/ virtual void onTame();
    /*28*/ virtual void onFailedTame();
    /*29*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*30*/ virtual void playAmbientSound();
    /*31*/ virtual enum LevelSoundEvent getAmbientSound() const;
    /*32*/ virtual bool isInvulnerableTo(class ActorDamageSource const&) const;
    /*33*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*34*/ virtual float getPickRadius();
    /*35*/ virtual void awardKillScore(class Actor&, int);
    /*36*/ virtual class HashedString const& queryEntityRenderer() const;
    /*37*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*38*/ virtual int getPortalWaitTime() const;
    /*39*/ virtual void __unk_vfn_15();
    /*40*/ virtual void __unk_vfn_16();
    /*41*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*42*/ virtual void __unk_vfn_17();
    /*43*/ virtual bool canBePulledIntoVehicle() const;
    /*44*/ virtual void __unk_vfn_18();
    /*45*/ virtual void __unk_vfn_19();
    /*46*/ virtual void __unk_vfn_20();
    /*47*/ virtual void __unk_vfn_21();
    /*48*/ virtual void __unk_vfn_22();
    /*49*/ virtual void __unk_vfn_23();
    /*50*/ virtual void __unk_vfn_24();
    /*51*/ virtual void __unk_vfn_25();
    /*52*/ virtual void setAuxValue(int);
    /*53*/ virtual void stopSpinAttack();
    /*54*/ virtual void __unk_vfn_26();
    /*55*/ virtual void __unk_vfn_27();
    /*56*/ virtual void __unk_vfn_28();
    /*57*/ virtual void _playStepSound(class BlockPos const&, class Block const&);
    /*58*/ virtual void __unk_vfn_29();
    /*59*/ virtual void __unk_vfn_30();
    /*60*/ virtual void spawnAnim();
    /*61*/ virtual void aiStep();
    /*62*/ virtual int getItemUseDuration() const;
    /*63*/ virtual float getItemUseStartupProgress() const;
    /*64*/ virtual float getItemUseIntervalProgress() const;
    /*65*/ virtual void __unk_vfn_31();
    /*66*/ virtual void __unk_vfn_32();
    /*67*/ virtual void __unk_vfn_33();
    /*68*/ virtual void sendArmorDamage(class std::bitset<4> const&);
    /*69*/ virtual void onBorn(class Actor&, class Actor&);
    /*70*/ virtual int getAttackTime();
    /*71*/ virtual float _getWalkTargetValue(class BlockPos const&);
    /*72*/ virtual void __unk_vfn_34();
    /*73*/ virtual void _serverAiMobStep();
    /*74*/ virtual void __unk_vfn_35();
    /*
    inline bool useNewAi() const{
        bool (Parrot::*rv)() const;
        *((void**)&rv) = dlsym("?useNewAi@Parrot@@MEBA_NXZ");
        return (this->*rv)();
    }
    inline bool _makeFlySound() const{
        bool (Parrot::*rv)() const;
        *((void**)&rv) = dlsym("?_makeFlySound@Parrot@@MEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI Parrot(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    MCAPI float getFlap() const;
    MCAPI float getFlapSpeed() const;

protected:

private:

};