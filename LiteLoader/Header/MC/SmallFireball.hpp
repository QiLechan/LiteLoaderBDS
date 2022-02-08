// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Fireball.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SmallFireball : public Fireball {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SMALLFIREBALL
public:
    class SmallFireball& operator=(class SmallFireball const&) = delete;
    SmallFireball(class SmallFireball const&) = delete;
    SmallFireball() = delete;
#endif

public:
    /*0*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const&);
    /*1*/ virtual ~SmallFireball();
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual float getInterpolatedHeadRot(float) const;
    /*5*/ virtual float getInterpolatedBodyYaw(float) const;
    /*6*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*7*/ virtual void __unk_vfn_2();
    /*8*/ virtual void lerpMotion(class Vec3 const&);
    /*9*/ virtual float getRidingHeight();
    /*10*/ virtual void __unk_vfn_3();
    /*11*/ virtual void __unk_vfn_4();
    /*12*/ virtual float getCameraOffset() const;
    /*13*/ virtual float getShadowHeightOffs();
    /*14*/ virtual void __unk_vfn_5();
    /*15*/ virtual float getBrightness(float) const;
    /*16*/ virtual void __unk_vfn_6();
    /*17*/ virtual void playerTouch(class Player&);
    /*18*/ virtual void __unk_vfn_7();
    /*19*/ virtual void __unk_vfn_8();
    /*20*/ virtual void __unk_vfn_9();
    /*21*/ virtual void setSleeping(bool);
    /*22*/ virtual void __unk_vfn_10();
    /*23*/ virtual void __unk_vfn_11();
    /*24*/ virtual void __unk_vfn_12();
    /*25*/ virtual void __unk_vfn_13();
    /*26*/ virtual void __unk_vfn_14();
    /*27*/ virtual void __unk_vfn_15();
    /*28*/ virtual void __unk_vfn_16();
    /*29*/ virtual void __unk_vfn_17();
    /*30*/ virtual class Actor* findAttackTarget();
    /*31*/ virtual void __unk_vfn_18();
    /*32*/ virtual void adjustDamageAmount(int&) const;
    /*33*/ virtual void onTame();
    /*34*/ virtual void onFailedTame();
    /*35*/ virtual void __unk_vfn_19();
    /*36*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*37*/ virtual void animateHurt();
    /*38*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*39*/ virtual float getPickRadius();
    /*40*/ virtual void awardKillScore(class Actor&, int);
    /*41*/ virtual enum ArmorMaterialType getArmorMaterialTypeInSlot(enum ArmorSlot) const;
    /*42*/ virtual enum ArmorTextureType getArmorMaterialTextureTypeInSlot(enum ArmorSlot) const;
    /*43*/ virtual float getArmorColorInSlot(enum ArmorSlot, int) const;
    /*44*/ virtual void setEquippedSlot(enum EquipmentSlot, class ItemStack const&);
    /*45*/ virtual class HashedString const& queryEntityRenderer() const;
    /*46*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*47*/ virtual void __unk_vfn_20();
    /*48*/ virtual int getPortalWaitTime() const;
    /*49*/ virtual void __unk_vfn_21();
    /*50*/ virtual void __unk_vfn_22();
    /*51*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*52*/ virtual void __unk_vfn_23();
    /*53*/ virtual void __unk_vfn_24();
    /*54*/ virtual void __unk_vfn_25();
    /*55*/ virtual void __unk_vfn_26();
    /*56*/ virtual void __unk_vfn_27();
    /*57*/ virtual void buildDebugInfo(std::string&) const;
    /*58*/ virtual int getDeathTime() const;
    /*59*/ virtual void swing();
    /*60*/ virtual void __unk_vfn_28();
    /*61*/ virtual void __unk_vfn_29();
    /*62*/ virtual float getYHeadRot() const;
    /*63*/ virtual void __unk_vfn_30();
    /*64*/ virtual void __unk_vfn_31();
    /*65*/ virtual void __unk_vfn_32();
    /*66*/ virtual void __unk_vfn_33();
    /*67*/ virtual void setAuxValue(int);
    /*68*/ virtual void stopSpinAttack();
    /*69*/ virtual void __unk_vfn_34();
    /*70*/ virtual void __unk_vfn_35();
    /*71*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*72*/ virtual void __unk_vfn_36();
    /*73*/ virtual void __unk_vfn_37();
    /*74*/ virtual void __unk_vfn_38();
    /*75*/ virtual void _onSizeUpdated();
    /*76*/ virtual void __unk_vfn_39();
    /*77*/ virtual void __unk_vfn_40();
    /*78*/ virtual enum ParticleType getTrailParticle();
    /*
    inline bool isPickable(){
        bool (SmallFireball::*rv)();
        *((void**)&rv) = dlsym("?isPickable@SmallFireball@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool _hurt(class ActorDamageSource const& a0, int a1, bool a2, bool a3){
        bool (SmallFireball::*rv)(class ActorDamageSource const&, int, bool, bool);
        *((void**)&rv) = dlsym("?_hurt@SmallFireball@@MEAA_NAEBVActorDamageSource@@H_N1@Z");
        return (this->*rv)(std::forward<class ActorDamageSource const&>(a0), std::forward<int>(a1), std::forward<bool>(a2), std::forward<bool>(a3));
    }
    */
    MCAPI SmallFireball(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

protected:

private:

};