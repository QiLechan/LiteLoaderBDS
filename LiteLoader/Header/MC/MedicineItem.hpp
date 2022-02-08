// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MedicineItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MEDICINEITEM
public:
    class MedicineItem& operator=(class MedicineItem const&) = delete;
    MedicineItem(class MedicineItem const&) = delete;
    MedicineItem() = delete;
#endif

public:
    /*0*/ virtual ~MedicineItem();
    /*1*/ virtual void tearDown();
    /*2*/ virtual int getMaxUseDuration(class ItemStack const*) const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual void executeEvent(class ItemStackBase&, std::string const&, class RenderParams&) const;
    /*6*/ virtual void __unk_vfn_2();
    /*7*/ virtual void __unk_vfn_3();
    /*8*/ virtual void __unk_vfn_4();
    /*9*/ virtual void __unk_vfn_5();
    /*10*/ virtual void __unk_vfn_6();
    /*11*/ virtual void __unk_vfn_7();
    /*12*/ virtual void __unk_vfn_8();
    /*13*/ virtual enum ItemColor getItemColor() const;
    /*14*/ virtual void __unk_vfn_9();
    /*15*/ virtual void __unk_vfn_10();
    /*16*/ virtual void __unk_vfn_11();
    /*17*/ virtual void __unk_vfn_12();
    /*18*/ virtual class ItemComponent* getComponent(class HashedString const&) const;
    /*19*/ virtual class FuelItemComponent* getFuel() const;
    /*20*/ virtual enum BlockShape getBlockShape() const;
    /*21*/ virtual void __unk_vfn_13();
    /*22*/ virtual int getLevelDataForAuxValue(int) const;
    /*23*/ virtual short getMaxDamage() const;
    /*24*/ virtual int getAttackDamage() const;
    /*25*/ virtual bool isGlint(class ItemStackBase const&) const;
    /*26*/ virtual void __unk_vfn_14();
    /*27*/ virtual int getPatternIndex() const;
    /*28*/ virtual void __unk_vfn_15();
    /*29*/ virtual void __unk_vfn_16();
    /*30*/ virtual void __unk_vfn_17();
    /*31*/ virtual void __unk_vfn_18();
    /*32*/ virtual void __unk_vfn_19();
    /*33*/ virtual void __unk_vfn_20();
    /*34*/ virtual void __unk_vfn_21();
    /*35*/ virtual void __unk_vfn_22();
    /*36*/ virtual int getEnchantSlot() const;
    /*37*/ virtual int getEnchantValue() const;
    /*38*/ virtual int getArmorValue() const;
    /*39*/ virtual void __unk_vfn_23();
    /*40*/ virtual bool isValidAuxValue(int) const;
    /*41*/ virtual float getViewDamping() const;
    /*42*/ virtual void __unk_vfn_24();
    /*43*/ virtual void __unk_vfn_25();
    /*44*/ virtual void __unk_vfn_26();
    /*45*/ virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;
    /*46*/ virtual void __unk_vfn_27();
    /*47*/ virtual void __unk_vfn_28();
    /*48*/ virtual void clearColor(class ItemStackBase&) const;
    /*49*/ virtual void clearColor(class CompoundTag*) const;
    /*50*/ virtual void setColor(class ItemStackBase&, class mce::Color const&) const;
    /*51*/ virtual void __unk_vfn_29();
    /*52*/ virtual void __unk_vfn_30();
    /*53*/ virtual void __unk_vfn_31();
    /*54*/ virtual void __unk_vfn_32();
    /*55*/ virtual void __unk_vfn_33();
    /*56*/ virtual class ItemStack& use(class ItemStack&, class Player&) const;
    /*57*/ virtual enum ItemUseMethod useTimeDepleted(class ItemStack&, class Level*, class Player*) const;
    /*58*/ virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;
    /*59*/ virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const;
    /*60*/ virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;
    /*61*/ virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;
    /*62*/ virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;
    /*63*/ virtual void __unk_vfn_34();
    /*64*/ virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;
    /*65*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const&) const;
    /*66*/ virtual void __unk_vfn_35();
    /*67*/ virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const;
    /*68*/ virtual void fixupCommon(class ItemStackBase&) const;
    /*69*/ virtual void fixupCommon(class ItemStackBase&, class Level&) const;
    /*70*/ virtual enum InHandUpdateType getInHandUpdateType(class Player const&, class ItemInstance const&, class ItemInstance const&, bool, bool) const;
    /*71*/ virtual enum InHandUpdateType getInHandUpdateType(class Player const&, class ItemStack const&, class ItemStack const&, bool, bool) const;
    /*72*/ virtual void __unk_vfn_36();
    /*73*/ virtual std::string getInteractText(class Player const&) const;
    /*74*/ virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;
    /*75*/ virtual int getIconYOffset() const;
    /*76*/ virtual class Item& setIcon(std::string const&, int);
    /*77*/ virtual void __unk_vfn_37();
    /*78*/ virtual void playSoundIncrementally(class ItemStack const&, class Mob&) const;
    /*79*/ virtual void __unk_vfn_38();
    /*80*/ virtual std::string getAuxValuesDescription() const;
    /*81*/ virtual void __unk_vfn_39();
    MCAPI MedicineItem(std::string const&, int);
    MCAPI static class MobEffect const* getMobEffect(class ItemStack const&);

protected:

private:

};