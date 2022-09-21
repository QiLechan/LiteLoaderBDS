/**
 * @file  Shulker.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Shulker.
 *
 */
class Shulker : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKER
public:
    class Shulker& operator=(class Shulker const &) = delete;
    Shulker(class Shulker const &) = delete;
    Shulker() = delete;
#endif

public:
    /**
     * @vftbl  8
     * @symbol ?reloadHardcoded@Shulker@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   -1204101103
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @hash   1289953146
     */
    virtual ~Shulker();
    /**
     * @vftbl  19
     * @symbol ?setPos@Shulker@@UEAAXAEBVVec3@@@Z
     * @hash   -571706395
     */
    virtual void setPos(class Vec3 const &);
    /**
     * @vftbl  41
     * @hash   -255895071
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  49
     * @symbol ?normalTick@Shulker@@UEAAXXZ
     * @hash   141241599
     */
    virtual void normalTick();
    /**
     * @vftbl  58
     * @symbol ?isInWall@Shulker@@UEBA_NXZ
     * @hash   -307594027
     */
    virtual bool isInWall() const;
    /**
     * @vftbl  61
     * @hash   -198636769
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  68
     * @hash   -185437434
     */
    virtual void __unk_vfn_68();
    /**
     * @vftbl  80
     * @symbol ?getShadowRadius@Shulker@@UEBAMXZ
     * @hash   -1171082358
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  82
     * @hash   -133720258
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  85
     * @hash   -137684383
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl  88
     * @hash   -128179132
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl  96
     * @hash   -108131711
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl  99
     * @hash   -105361148
     */
    virtual void __unk_vfn_99();
    /**
     * @vftbl  106
     * @hash   1332943623
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl  108
     * @hash   1334790665
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  109
     * @hash   1328979498
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  111
     * @hash   1356955169
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl  113
     * @symbol ?canAttack@Shulker@@UEBA_NPEAVActor@@_N@Z
     * @hash   1796528717
     */
    virtual bool canAttack(class Actor *, bool) const;
    /**
     * @vftbl  132
     * @symbol ?shouldRender@Shulker@@UEBA_NXZ
     * @hash   2122109589
     */
    virtual bool shouldRender() const;
    /**
     * @vftbl  135
     * @symbol ?isInvulnerableTo@Shulker@@UEBA_NAEBVActorDamageSource@@@Z
     * @hash   971712970
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl  143
     * @symbol ?getPickRadius@Shulker@@UEAAMXZ
     * @hash   -52382260
     */
    virtual float getPickRadius();
    /**
     * @vftbl  182
     * @hash   1509264059
     */
    virtual void __unk_vfn_182();
    /**
     * @vftbl  196
     * @hash   1590605982
     */
    virtual void __unk_vfn_196();
    /**
     * @vftbl  222
     * @hash   -2034256014
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  223
     * @hash   -2020032253
     */
    virtual void __unk_vfn_223();
    /**
     * @vftbl  248
     * @hash   -2007175034
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @hash   -786620466
     */
    virtual void __unk_vfn_251();
    /**
     * @vftbl  267
     * @symbol ?updateEntitySpecificMolangVariables@Shulker@@MEAAXAEAVRenderParams@@@Z
     * @hash   -387308805
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  269
     * @hash   -1906709211
     */
    virtual void __unk_vfn_269();
    /**
     * @vftbl  270
     * @symbol ?_hurt@Shulker@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     * @hash   1085677892
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  273
     * @symbol ?readAdditionalSaveData@Shulker@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -2002014149
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  274
     * @symbol ?addAdditionalSaveData@Shulker@@UEBAXAEAVCompoundTag@@@Z
     * @hash   1459367506
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  277
     * @hash   -1873192414
     */
    virtual void __unk_vfn_277();
    /**
     * @vftbl  284
     * @symbol ?_onSizeUpdated@Shulker@@EEAAXXZ
     * @hash   2132560665
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  285
     * @hash   -1895428993
     */
    virtual void __unk_vfn_285();
    /**
     * @vftbl  297
     * @symbol ?travel@Shulker@@UEAAXMMM@Z
     * @hash   -1857849811
     */
    virtual void travel(float, float, float);
    /**
     * @vftbl  300
     * @symbol ?aiStep@Shulker@@UEAAXXZ
     * @hash   -1202388001
     */
    virtual void aiStep();
    /**
     * @vftbl  305
     * @symbol ?checkSpawnRules@Shulker@@UEAA_N_N@Z
     * @hash   -1897001829
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @vftbl  313
     * @hash   -1210176411
     */
    virtual void __unk_vfn_313();
    /**
     * @vftbl  314
     * @symbol ?getMaxHeadXRot@Shulker@@UEAAMXZ
     * @hash   -1361236368
     */
    virtual float getMaxHeadXRot();
    /**
     * @vftbl  317
     * @hash   -1157463639
     */
    virtual void __unk_vfn_317();
    /**
     * @vftbl  322
     * @symbol ?getArmorValue@Shulker@@UEBAHXZ
     * @hash   878896199
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl  351
     * @hash   -1055222849
     */
    virtual void __unk_vfn_351();
    /**
     * @vftbl  356
     * @symbol ?initBodyControl@Shulker@@UEAA?AV?$unique_ptr@VBodyControl@@U?$default_delete@VBodyControl@@@std@@@std@@XZ
     * @hash   -2145577983
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl();
    /**
     * @vftbl  365
     * @hash   -1022899614
     */
    virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHULKER
    /**
     * @symbol ?breaksFallingBlocks@Shulker@@UEBA_NXZ
     * @hash   1343220645
     */
    MCVAPI bool breaksFallingBlocks() const;
    /**
     * @symbol ?isLeashableType@Shulker@@UEAA_NXZ
     * @hash   -251186796
     */
    MCVAPI bool isLeashableType();
    /**
     * @symbol ?useNewAi@Shulker@@UEBA_NXZ
     * @hash   -307956467
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0Shulker@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   809666776
     */
    MCAPI Shulker(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?postNormalTick@Shulker@@QEAAXXZ
     * @hash   1380284587
     */
    MCAPI void postNormalTick();
    /**
     * @symbol ?COVERED_ARMOR_MODIFIER@Shulker@@2V?$shared_ptr@VAttributeModifier@@@std@@A
     * @hash   410554550
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> COVERED_ARMOR_MODIFIER;
    /**
     * @symbol ?COVERED_ARMOR_MODIFIER_UUID@Shulker@@2VUUID@mce@@B
     * @hash   -986460809
     */
    MCAPI static class mce::UUID const COVERED_ARMOR_MODIFIER_UUID;
    /**
     * @symbol ?setShulkerAttachPos@Shulker@@SAXAEAVSynchedActorData@@AEBVBlockPos@@@Z
     * @hash   615905107
     */
    MCAPI static void setShulkerAttachPos(class SynchedActorData &, class BlockPos const &);

//protected:
    /**
     * @symbol ?_canOpenLidAt@Shulker@@IEBA_NVBlockPos@@E@Z
     * @hash   -833030336
     */
    MCAPI bool _canOpenLidAt(class BlockPos, unsigned char) const;
    /**
     * @symbol ?_setPeekAmount@Shulker@@KAXAEAVSynchedActorData@@H@Z
     * @hash   -292366265
     */
    MCAPI static void _setPeekAmount(class SynchedActorData &, int);

//private:
    /**
     * @symbol ?_calculateBB@Shulker@@AEAAXXZ
     * @hash   839988631
     */
    MCAPI void _calculateBB();
    /**
     * @symbol ?_isPosOccupiedByOtherShulker@Shulker@@AEBA_NVBlockPos@@@Z
     * @hash   62775045
     */
    MCAPI bool _isPosOccupiedByOtherShulker(class BlockPos) const;
    /**
     * @symbol ?_isValidAttach@Shulker@@AEAA_NVBlockPos@@E@Z
     * @hash   1386863123
     */
    MCAPI bool _isValidAttach(class BlockPos, unsigned char);
    /**
     * @symbol ?_peekAmountTick@Shulker@@AEAAXXZ
     * @hash   -146400929
     */
    MCAPI void _peekAmountTick();
    /**
     * @symbol ?_setAttachFace@Shulker@@AEAAXE@Z
     * @hash   -972702632
     */
    MCAPI void _setAttachFace(unsigned char);
    /**
     * @symbol ?_tryAttachingToNeighbouringFaces@Shulker@@AEAA_NVBlockPos@@@Z
     * @hash   1404748493
     */
    MCAPI bool _tryAttachingToNeighbouringFaces(class BlockPos);
    /**
     * @symbol ?_trySpawnShulker@Shulker@@AEAAXXZ
     * @hash   1269753981
     */
    MCAPI void _trySpawnShulker();
    /**
     * @symbol ?_tryTeleportSomewhere@Shulker@@AEAA_NXZ
     * @hash   31568646
     */
    MCAPI bool _tryTeleportSomewhere();

protected:

private:

};