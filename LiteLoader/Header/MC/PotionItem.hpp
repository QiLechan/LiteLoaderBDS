// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Potion.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PotionItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POTIONITEM
public:
    class PotionItem& operator=(class PotionItem const&) = delete;
    PotionItem(class PotionItem const&) = delete;
    PotionItem() = delete;
#endif

public:
    /*0*/ virtual ~PotionItem();
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
    /*31*/ virtual bool isDestructive(int) const;
    /*32*/ virtual void __unk_vfn_18();
    /*33*/ virtual void __unk_vfn_19();
    /*34*/ virtual void __unk_vfn_20();
    /*35*/ virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;
    /*36*/ virtual void __unk_vfn_21();
    /*37*/ virtual int getEnchantSlot() const;
    /*38*/ virtual int getEnchantValue() const;
    /*39*/ virtual int getArmorValue() const;
    /*40*/ virtual void __unk_vfn_22();
    /*41*/ virtual bool isValidAuxValue(int) const;
    /*42*/ virtual float getViewDamping() const;
    /*43*/ virtual void __unk_vfn_23();
    /*44*/ virtual void __unk_vfn_24();
    /*45*/ virtual void __unk_vfn_25();
    /*46*/ virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;
    /*47*/ virtual void __unk_vfn_26();
    /*48*/ virtual void __unk_vfn_27();
    /*49*/ virtual void clearColor(class ItemStackBase&) const;
    /*50*/ virtual void clearColor(class CompoundTag*) const;
    /*51*/ virtual void setColor(class ItemStackBase&, class mce::Color const&) const;
    /*52*/ virtual void __unk_vfn_28();
    /*53*/ virtual void __unk_vfn_29();
    /*54*/ virtual void __unk_vfn_30();
    /*55*/ virtual void __unk_vfn_31();
    /*56*/ virtual void __unk_vfn_32();
    /*57*/ virtual class ItemStack& use(class ItemStack&, class Player&) const;
    /*58*/ virtual enum ItemUseMethod useTimeDepleted(class ItemStack&, class Level*, class Player*) const;
    /*59*/ virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;
    /*60*/ virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const;
    /*61*/ virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;
    /*62*/ virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;
    /*63*/ virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;
    /*64*/ virtual void __unk_vfn_33();
    /*65*/ virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;
    /*66*/ virtual std::string buildEffectDescriptionName(class ItemStackBase const&) const;
    /*67*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const&) const;
    /*68*/ virtual void __unk_vfn_34();
    /*69*/ virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const;
    /*70*/ virtual void fixupCommon(class ItemStackBase&, class Level&) const;
    /*71*/ virtual enum InHandUpdateType getInHandUpdateType(class Player const&, class ItemInstance const&, class ItemInstance const&, bool, bool) const;
    /*72*/ virtual enum InHandUpdateType getInHandUpdateType(class Player const&, class ItemStack const&, class ItemStack const&, bool, bool) const;
    /*73*/ virtual void __unk_vfn_35();
    /*74*/ virtual std::string getInteractText(class Player const&) const;
    /*75*/ virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;
    /*76*/ virtual struct TextureUVCoordinateSet const& getIcon(class ItemStackBase const&, int, bool) const;
    /*77*/ virtual int getIconYOffset() const;
    /*78*/ virtual class Item& setIcon(std::string const&, int);
    /*79*/ virtual void __unk_vfn_36();
    /*80*/ virtual void playSoundIncrementally(class ItemStack const&, class Mob&) const;
    /*81*/ virtual void __unk_vfn_37();
    /*82*/ virtual std::string getAuxValuesDescription() const;
    /*83*/ virtual void __unk_vfn_38();
    /*84*/ virtual enum Potion::PotionType getPotionType() const;
    /*
    inline bool uniqueAuxValues() const{
        bool (PotionItem::*rv)() const;
        *((void**)&rv) = dlsym("?uniqueAuxValues@PotionItem@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline  ~PotionItem(){
         (PotionItem::*rv)();
        *((void**)&rv) = dlsym("??1PotionItem@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI PotionItem(std::string const&, int);
    MCAPI static void applyEffect(class ThrownPotion*, class ItemStack const&);
    MCAPI static bool isDestructivePotion(enum Potion::PotionVariant);

protected:

private:

};