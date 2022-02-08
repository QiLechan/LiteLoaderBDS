// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ArmorStand : public Mob {

#define AFTER_EXTRA
// Add Member There
public:
struct Pose {
    Pose() = delete;
    Pose(Pose const&) = delete;
    Pose(Pose const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORSTAND
public:
    class ArmorStand& operator=(class ArmorStand const&) = delete;
    ArmorStand(class ArmorStand const&) = delete;
    ArmorStand() = delete;
#endif

public:
    /*0*/ virtual ~ArmorStand();
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
    /*11*/ virtual float getShadowRadius() const;
    /*12*/ virtual void __unk_vfn_5();
    /*13*/ virtual void __unk_vfn_6();
    /*14*/ virtual void playerTouch(class Player&);
    /*15*/ virtual bool isPickable();
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
    /*26*/ virtual void onTame();
    /*27*/ virtual void onFailedTame();
    /*28*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*29*/ virtual bool isInvulnerableTo(class ActorDamageSource const&) const;
    /*30*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*31*/ virtual float getPickRadius();
    /*32*/ virtual void awardKillScore(class Actor&, int);
    /*33*/ virtual class HashedString const& queryEntityRenderer() const;
    /*34*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*35*/ virtual int getPortalWaitTime() const;
    /*36*/ virtual void __unk_vfn_15();
    /*37*/ virtual void __unk_vfn_16();
    /*38*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*39*/ virtual void __unk_vfn_17();
    /*40*/ virtual void __unk_vfn_18();
    /*41*/ virtual void __unk_vfn_19();
    /*42*/ virtual void __unk_vfn_20();
    /*43*/ virtual void __unk_vfn_21();
    /*44*/ virtual void __unk_vfn_22();
    /*45*/ virtual void __unk_vfn_23();
    /*46*/ virtual void __unk_vfn_24();
    /*47*/ virtual void __unk_vfn_25();
    /*48*/ virtual bool getInteraction(class Player&, class ActorInteraction&, class Vec3 const&);
    /*49*/ virtual void __unk_vfn_26();
    /*50*/ virtual void setAuxValue(int);
    /*51*/ virtual void stopSpinAttack();
    /*52*/ virtual void __unk_vfn_27();
    /*53*/ virtual void __unk_vfn_28();
    /*54*/ virtual void die(class ActorDamageSource const&);
    /*55*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*56*/ virtual void __unk_vfn_29();
    /*57*/ virtual bool _hurt(class ActorDamageSource const&, int, bool, bool);
    /*58*/ virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /*59*/ virtual void addAdditionalSaveData(class CompoundTag&);
    /*60*/ virtual void __unk_vfn_30();
    /*61*/ virtual void __unk_vfn_31();
    /*62*/ virtual void spawnAnim();
    /*63*/ virtual void pushActors();
    /*64*/ virtual int getItemUseDuration() const;
    /*65*/ virtual float getItemUseStartupProgress() const;
    /*66*/ virtual float getItemUseIntervalProgress() const;
    /*67*/ virtual void __unk_vfn_32();
    /*68*/ virtual void __unk_vfn_33();
    /*69*/ virtual void __unk_vfn_34();
    /*70*/ virtual void sendArmorDamage(class std::bitset<4> const&);
    /*71*/ virtual void onBorn(class Actor&, class Actor&);
    /*72*/ virtual int getAttackTime();
    /*73*/ virtual float _getWalkTargetValue(class BlockPos const&);
    /*74*/ virtual void __unk_vfn_35();
    /*75*/ virtual void _serverAiMobStep();
    /*76*/ virtual void __unk_vfn_36();
    /*
    inline bool interactPreventDefault(){
        bool (ArmorStand::*rv)();
        *((void**)&rv) = dlsym("?interactPreventDefault@ArmorStand@@UEAA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI ArmorStand(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    MCAPI int getNumSlotsFilled() const;
    MCAPI int getPoseIndex() const;

protected:

private:
    MCAPI void _causeDamage(float);
    MCAPI void _destroyWithEffects(class Vec3 const&);
    MCAPI void _dropHeldItems();
    MCAPI void _dropHeldItemsAndResource();
    MCAPI void _dropItem(class ItemStack const&);
    MCAPI bool _trySwapItem(class Player&, enum EquipmentSlot);
    MCAPI static struct ArmorStand::Pose const POSE_ATHENA;
    MCAPI static struct ArmorStand::Pose const POSE_BRANDISH;
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_A;
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_B;
    MCAPI static struct ArmorStand::Pose const POSE_DEFAULT;
    MCAPI static struct ArmorStand::Pose const POSE_ENTERTAIN;
    MCAPI static struct ArmorStand::Pose const POSE_HERO;
    MCAPI static struct ArmorStand::Pose const POSE_HONOR;
    MCAPI static struct ArmorStand::Pose const POSE_RIPOSTE;
    MCAPI static struct ArmorStand::Pose const POSE_SALUTE;
    MCAPI static struct ArmorStand::Pose const POSE_SOLEMN;
    MCAPI static struct ArmorStand::Pose const POSE_ZERO_ROTATION;
    MCAPI static struct ArmorStand::Pose const POSE_ZOMBIE;
    MCAPI static struct ArmorStand::Pose const* * STAND_POSES;

};