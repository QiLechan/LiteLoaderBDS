// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CompassItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPASSITEM
public:
    class CompassItem& operator=(class CompassItem const&) = delete;
    CompassItem(class CompassItem const&) = delete;
    CompassItem() = delete;
#endif

public:
    /*0*/ virtual ~CompassItem();
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
    /*40*/ virtual void __unk_vfn_24();
    /*41*/ virtual float getViewDamping() const;
    /*42*/ virtual void __unk_vfn_25();
    /*43*/ virtual void __unk_vfn_26();
    /*44*/ virtual void __unk_vfn_27();
    /*45*/ virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;
    /*46*/ virtual void __unk_vfn_28();
    /*47*/ virtual void __unk_vfn_29();
    /*48*/ virtual void clearColor(class ItemStackBase&) const;
    /*49*/ virtual void clearColor(class CompoundTag*) const;
    /*50*/ virtual void setColor(class ItemStackBase&, class mce::Color const&) const;
    /*51*/ virtual void __unk_vfn_30();
    /*52*/ virtual void __unk_vfn_31();
    /*53*/ virtual void __unk_vfn_32();
    /*54*/ virtual void __unk_vfn_33();
    /*55*/ virtual void __unk_vfn_34();
    /*56*/ virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;
    /*57*/ virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const;
    /*58*/ virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;
    /*59*/ virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;
    /*60*/ virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;
    /*61*/ virtual void __unk_vfn_35();
    /*62*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const&) const;
    /*63*/ virtual void __unk_vfn_36();
    /*64*/ virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const;
    /*65*/ virtual void fixupCommon(class ItemStackBase&, class Level&) const;
    /*66*/ virtual enum InHandUpdateType getInHandUpdateType(class Player const&, class ItemInstance const&, class ItemInstance const&, bool, bool) const;
    /*67*/ virtual enum InHandUpdateType getInHandUpdateType(class Player const&, class ItemStack const&, class ItemStack const&, bool, bool) const;
    /*68*/ virtual void __unk_vfn_37();
    /*69*/ virtual std::string getInteractText(class Player const&) const;
    /*70*/ virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;
    /*71*/ virtual struct TextureUVCoordinateSet const& getIcon(class ItemStackBase const&, int, bool) const;
    /*72*/ virtual int getIconYOffset() const;
    /*73*/ virtual void __unk_vfn_38();
    /*74*/ virtual void playSoundIncrementally(class ItemStack const&, class Mob&) const;
    /*75*/ virtual void __unk_vfn_39();
    /*76*/ virtual std::string getAuxValuesDescription() const;
    /*77*/ virtual void __unk_vfn_40();
    /*78*/ virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos, unsigned char, class Vec3 const&) const;
    MCAPI CompassItem(std::string const&, int);

protected:

private:

};