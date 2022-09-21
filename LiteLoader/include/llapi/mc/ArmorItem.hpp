/**
 * @file  ArmorItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ArmorItem.
 *
 */
class ArmorItem : public Item {

#define AFTER_EXTRA
// Add Member There
public:
class ArmorMaterial {
public:
    ArmorMaterial() = delete;
    ArmorMaterial(ArmorMaterial const&) = delete;
    ArmorMaterial(ArmorMaterial const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORITEM
public:
    class ArmorItem& operator=(class ArmorItem const &) = delete;
    ArmorItem(class ArmorItem const &) = delete;
    ArmorItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1668592064
     */
    virtual ~ArmorItem();
    /**
     * @vftbl  7
     * @hash   -1353918777
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -335047836
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol ?isArmor@ArmorItem@@UEBA_NXZ
     * @hash   211228187
     */
    virtual bool isArmor() const;
    /**
     * @vftbl  14
     * @hash   -332277273
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -330430231
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  18
     * @symbol ?isDyeable@ArmorItem@@UEBA_NXZ
     * @hash   -1512992634
     */
    virtual bool isDyeable() const;
    /**
     * @vftbl  52
     * @hash   -219607711
     */
    virtual void __unk_vfn_52();
    /**
     * @vftbl  54
     * @hash   -217760669
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@ArmorItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -1719986451
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  62
     * @symbol ?isValidRepairItem@ArmorItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
     * @hash   277933546
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @vftbl  63
     * @symbol ?getEnchantSlot@ArmorItem@@UEBAHXZ
     * @hash   -1704423574
     */
    virtual int getEnchantSlot() const;
    /**
     * @vftbl  64
     * @symbol ?getEnchantValue@ArmorItem@@UEBAHXZ
     * @hash   -1754508873
     */
    virtual int getEnchantValue() const;
    /**
     * @vftbl  65
     * @symbol ?getArmorValue@ArmorItem@@UEBAHXZ
     * @hash   -1520454751
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl  66
     * @symbol ?getToughnessValue@ArmorItem@@UEBAHXZ
     * @hash   621850846
     */
    virtual int getToughnessValue() const;
    /**
     * @vftbl  67
     * @hash   -186360955
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  69
     * @symbol ?getDamageChance@ArmorItem@@UEBAHH@Z
     * @hash   -489941637
     */
    virtual int getDamageChance(int) const;
    /**
     * @vftbl  71
     * @hash   -163272930
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -162349409
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  73
     * @hash   -161425888
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  74
     * @symbol ?getColor@ArmorItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
     * @hash   2043834263
     */
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @vftbl  75
     * @symbol ?hasCustomColor@ArmorItem@@UEBA_NPEBVCompoundTag@@@Z
     * @hash   1993177110
     */
    virtual bool hasCustomColor(class CompoundTag const *) const;
    /**
     * @vftbl  76
     * @hash   -158655325
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl  77
     * @symbol ?clearColor@ArmorItem@@UEBAXAEAVItemStackBase@@@Z
     * @hash   2112103530
     */
    virtual void clearColor(class ItemStackBase &) const;
    /**
     * @vftbl  79
     * @symbol ?setColor@ArmorItem@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
     * @hash   -1688013532
     */
    virtual void setColor(class ItemStackBase &, class mce::Color const &) const;
    /**
     * @vftbl  80
     * @hash   -1115441236
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  81
     * @hash   -1114517715
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  83
     * @symbol ?buildIdAux@ArmorItem@@UEBAHFPEBVCompoundTag@@@Z
     * @hash   673897224
     */
    virtual int buildIdAux(short, class CompoundTag const *) const;
    /**
     * @vftbl  85
     * @symbol ?use@ArmorItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     * @hash   287671756
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl  86
     * @symbol ?dispense@ArmorItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     * @hash   1185021502
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl  90
     * @symbol ?hurtActor@ArmorItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     * @hash   -866914832
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @vftbl  94
     * @symbol ?mineBlock@ArmorItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     * @hash   1422116521
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @vftbl  115
     * @symbol ?getEquipLocation@ArmorItem@@UEBA?AW4ActorLocation@@XZ
     * @hash   402135801
     */
    virtual enum class ActorLocation getEquipLocation() const;
    /**
     * @vftbl  116
     * @symbol ?getEquipSound@ArmorItem@@UEBA?AW4LevelSoundEvent@@XZ
     * @hash   -2113837286
     */
    virtual enum class LevelSoundEvent getEquipSound() const;
    /**
     * @vftbl  123
     * @symbol ?getIcon@ArmorItem@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     * @hash   -2115572171
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @vftbl  125
     * @symbol ?setIcon@ArmorItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   1354237370
     */
    virtual class Item & setIcon(std::string const &, int);
    /**
     * @vftbl  137
     * @symbol ?getArmorKnockbackResistance@ArmorItem@@UEBAMXZ
     * @hash   962221031
     */
    virtual float getArmorKnockbackResistance() const;
    /**
     * @symbol ??0ArmorItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVArmorMaterial@0@HW4ArmorSlot@@@Z
     * @hash   1939545135
     */
    MCAPI ArmorItem(std::string const &, int, class ArmorItem::ArmorMaterial const &, int, enum class ArmorSlot);
    /**
     * @symbol ?CHAIN@ArmorItem@@2VArmorMaterial@1@B
     * @hash   -1570360102
     */
    MCAPI static class ArmorItem::ArmorMaterial const CHAIN;
    /**
     * @symbol ?DIAMOND@ArmorItem@@2VArmorMaterial@1@B
     * @hash   1247439008
     */
    MCAPI static class ArmorItem::ArmorMaterial const DIAMOND;
    /**
     * @symbol ?ELYTRA@ArmorItem@@2VArmorMaterial@1@B
     * @hash   516918616
     */
    MCAPI static class ArmorItem::ArmorMaterial const ELYTRA;
    /**
     * @symbol ?GOLD@ArmorItem@@2VArmorMaterial@1@B
     * @hash   207562422
     */
    MCAPI static class ArmorItem::ArmorMaterial const GOLD;
    /**
     * @symbol ?IRON@ArmorItem@@2VArmorMaterial@1@B
     * @hash   1062503270
     */
    MCAPI static class ArmorItem::ArmorMaterial const IRON;
    /**
     * @symbol ?LEATHER@ArmorItem@@2VArmorMaterial@1@B
     * @hash   1389860682
     */
    MCAPI static class ArmorItem::ArmorMaterial const LEATHER;
    /**
     * @symbol ?NETHERITE@ArmorItem@@2VArmorMaterial@1@B
     * @hash   -2079627876
     */
    MCAPI static class ArmorItem::ArmorMaterial const NETHERITE;
    /**
     * @symbol ?TURTLE@ArmorItem@@2VArmorMaterial@1@B
     * @hash   -2080635122
     */
    MCAPI static class ArmorItem::ArmorMaterial const TURTLE;
    /**
     * @symbol ?dispenseArmor@ArmorItem@@SA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@EW4ArmorSlot@@@Z
     * @hash   -704075775
     */
    MCAPI static bool dispenseArmor(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char, enum class ArmorSlot);
    /**
     * @symbol ?getSlotForItem@ArmorItem@@SA?AW4ArmorSlot@@AEBVItemStackBase@@@Z
     * @hash   1800340607
     */
    MCAPI static enum class ArmorSlot getSlotForItem(class ItemStackBase const &);
    /**
     * @symbol ?isDamageable@ArmorItem@@SA_NAEBVItemDescriptor@@@Z
     * @hash   -938224883
     */
    MCAPI static bool isDamageable(class ItemDescriptor const &);
    /**
     * @symbol ?mHealthPerSlot@ArmorItem@@2QBHB
     * @hash   -713774416
     */
    MCAPI static int const mHealthPerSlot[];

//private:
    /**
     * @symbol ?getTierItem@ArmorItem@@AEBA?AVItemInstance@@XZ
     * @hash   399320309
     */
    MCAPI class ItemInstance getTierItem() const;

private:

};