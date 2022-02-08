// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "AbstractArrow.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Arrow : public AbstractArrow {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARROW
public:
    class Arrow& operator=(class Arrow const&) = delete;
    Arrow(class Arrow const&) = delete;
    Arrow() = delete;
#endif

public:
    /*0*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const&);
    /*1*/ virtual ~Arrow();
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual float getInterpolatedHeadRot(float) const;
    /*5*/ virtual float getInterpolatedBodyYaw(float) const;
    /*6*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*7*/ virtual void __unk_vfn_2();
    /*8*/ virtual void normalTick();
    /*9*/ virtual float getRidingHeight();
    /*10*/ virtual void __unk_vfn_3();
    /*11*/ virtual void __unk_vfn_4();
    /*12*/ virtual float getCameraOffset() const;
    /*13*/ virtual float getShadowHeightOffs();
    /*14*/ virtual void __unk_vfn_5();
    /*15*/ virtual void __unk_vfn_6();
    /*16*/ virtual void playerTouch(class Player&);
    /*17*/ virtual void __unk_vfn_7();
    /*18*/ virtual void __unk_vfn_8();
    /*19*/ virtual void __unk_vfn_9();
    /*20*/ virtual void setSleeping(bool);
    /*21*/ virtual void __unk_vfn_10();
    /*22*/ virtual void __unk_vfn_11();
    /*23*/ virtual void __unk_vfn_12();
    /*24*/ virtual void __unk_vfn_13();
    /*25*/ virtual void __unk_vfn_14();
    /*26*/ virtual void __unk_vfn_15();
    /*27*/ virtual void __unk_vfn_16();
    /*28*/ virtual void __unk_vfn_17();
    /*29*/ virtual class Actor* findAttackTarget();
    /*30*/ virtual void __unk_vfn_18();
    /*31*/ virtual void adjustDamageAmount(int&) const;
    /*32*/ virtual void onTame();
    /*33*/ virtual void onFailedTame();
    /*34*/ virtual void __unk_vfn_19();
    /*35*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*36*/ virtual void animateHurt();
    /*37*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*38*/ virtual float getPickRadius();
    /*39*/ virtual void awardKillScore(class Actor&, int);
    /*40*/ virtual enum ArmorMaterialType getArmorMaterialTypeInSlot(enum ArmorSlot) const;
    /*41*/ virtual enum ArmorTextureType getArmorMaterialTextureTypeInSlot(enum ArmorSlot) const;
    /*42*/ virtual float getArmorColorInSlot(enum ArmorSlot, int) const;
    /*43*/ virtual void setEquippedSlot(enum EquipmentSlot, class ItemStack const&);
    /*44*/ virtual class HashedString const& queryEntityRenderer() const;
    /*45*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*46*/ virtual void __unk_vfn_20();
    /*47*/ virtual int getPortalWaitTime() const;
    /*48*/ virtual void __unk_vfn_21();
    /*49*/ virtual void __unk_vfn_22();
    /*50*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*51*/ virtual void __unk_vfn_23();
    /*52*/ virtual void __unk_vfn_24();
    /*53*/ virtual void __unk_vfn_25();
    /*54*/ virtual void __unk_vfn_26();
    /*55*/ virtual void __unk_vfn_27();
    /*56*/ virtual void buildDebugInfo(std::string&) const;
    /*57*/ virtual int getDeathTime() const;
    /*58*/ virtual void swing();
    /*59*/ virtual void __unk_vfn_28();
    /*60*/ virtual void __unk_vfn_29();
    /*61*/ virtual float getYHeadRot() const;
    /*62*/ virtual void __unk_vfn_30();
    /*63*/ virtual void __unk_vfn_31();
    /*64*/ virtual void __unk_vfn_32();
    /*65*/ virtual void __unk_vfn_33();
    /*66*/ virtual void setAuxValue(int);
    /*67*/ virtual void stopSpinAttack();
    /*68*/ virtual void __unk_vfn_34();
    /*69*/ virtual void __unk_vfn_35();
    /*70*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*71*/ virtual void __unk_vfn_36();
    /*72*/ virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /*73*/ virtual void addAdditionalSaveData(class CompoundTag&);
    /*74*/ virtual void __unk_vfn_37();
    /*75*/ virtual void _onSizeUpdated();
    /*76*/ virtual void __unk_vfn_38();
    /*77*/ virtual void shoot(class Vec3 const&, float, float, class Vec3 const&);
    /*78*/ virtual class ItemStack _getPickupItem() const;
    /*79*/ virtual void applyParticleColor(class Particle*);
    /*80*/ virtual class mce::Color getEffectColor();
    /*
    inline bool canMakeStepSound() const{
        bool (Arrow::*rv)() const;
        *((void**)&rv) = dlsym("?canMakeStepSound@Arrow@@MEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI Arrow(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    MCAPI void addMobEffect(class MobEffectInstance);
    MCAPI int getAuxValue() const;
    MCAPI int getEnchantPunch() const;
    MCAPI void setCritical(bool);
    MCAPI void setEnchantFlame(int);
    MCAPI void setEnchantInfinity(int);
    MCAPI void setEnchantPower(int);
    MCAPI void setEnchantPunch(int);

protected:

private:

};