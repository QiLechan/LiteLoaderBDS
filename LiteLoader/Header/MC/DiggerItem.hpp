// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DiggerItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIGGERITEM
public:
    class DiggerItem& operator=(class DiggerItem const&) = delete;
    DiggerItem(class DiggerItem const&) = delete;
    DiggerItem() = delete;
#endif

public:
    /*0*/ virtual ~DiggerItem();
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
    /*25*/ virtual void __unk_vfn_14();
    /*26*/ virtual bool isGlint(class ItemStackBase const&) const;
    /*27*/ virtual void __unk_vfn_15();
    /*28*/ virtual int getPatternIndex() const;
    /*29*/ virtual void __unk_vfn_16();
    /*30*/ virtual void __unk_vfn_17();
    /*31*/ virtual void __unk_vfn_18();
    /*32*/ virtual void __unk_vfn_19();
    /*33*/ virtual void __unk_vfn_20();
    /*34*/ virtual void __unk_vfn_21();
    /*35*/ virtual void __unk_vfn_22();
    /*36*/ virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;
    /*37*/ virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;
    /*38*/ virtual int getEnchantSlot() const;
    /*39*/ virtual int getEnchantValue() const;
    /*40*/ virtual int getArmorValue() const;
    /*41*/ virtual void __unk_vfn_23();
    /*42*/ virtual void __unk_vfn_24();
    /*43*/ virtual float getViewDamping() const;
    /*44*/ virtual void __unk_vfn_25();
    /*45*/ virtual void __unk_vfn_26();
    /*46*/ virtual void __unk_vfn_27();
    /*47*/ virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;
    /*48*/ virtual void __unk_vfn_28();
    /*49*/ virtual void __unk_vfn_29();
    /*50*/ virtual void clearColor(class ItemStackBase&) const;
    /*51*/ virtual void clearColor(class CompoundTag*) const;
    /*52*/ virtual void setColor(class ItemStackBase&, class mce::Color const&) const;
    /*53*/ virtual void __unk_vfn_30();
    /*54*/ virtual void __unk_vfn_31();
    /*55*/ virtual void __unk_vfn_32();
    /*56*/ virtual void __unk_vfn_33();
    /*57*/ virtual void __unk_vfn_34();
    /*58*/ virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;
    /*59*/ virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const;
    /*60*/ virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;
    /*61*/ virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;
    /*62*/ virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;
    /*63*/ virtual void __unk_vfn_35();
    /*64*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const&) const;
    /*65*/ virtual void __unk_vfn_36();
    /*66*/ virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const;
    /*67*/ virtual void fixupCommon(class ItemStackBase&, class Level&) const;
    /*68*/ virtual enum InHandUpdateType getInHandUpdateType(class Player const&, class ItemInstance const&, class ItemInstance const&, bool, bool) const;
    /*69*/ virtual enum InHandUpdateType getInHandUpdateType(class Player const&, class ItemStack const&, class ItemStack const&, bool, bool) const;
    /*70*/ virtual void __unk_vfn_37();
    /*71*/ virtual std::string getInteractText(class Player const&) const;
    /*72*/ virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;
    /*73*/ virtual int getIconYOffset() const;
    /*74*/ virtual void __unk_vfn_38();
    /*75*/ virtual void playSoundIncrementally(class ItemStack const&, class Mob&) const;
    /*76*/ virtual void __unk_vfn_39();
    /*77*/ virtual std::string getAuxValuesDescription() const;
    /*78*/ virtual void __unk_vfn_40();
    /*
    inline bool isHandEquipped() const{
        bool (DiggerItem::*rv)() const;
        *((void**)&rv) = dlsym("?isHandEquipped@DiggerItem@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline  ~DiggerItem(){
         (DiggerItem::*rv)();
        *((void**)&rv) = dlsym("??1DiggerItem@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI void setBlocks(std::vector<class Block const* > const&);

protected:
    MCAPI DiggerItem(std::string const&, int, int, class Item::Tier const&, std::vector<class Block const* > const&);

private:

};