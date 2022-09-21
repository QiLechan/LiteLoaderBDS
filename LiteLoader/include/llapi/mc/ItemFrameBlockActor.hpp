/**
 * @file  ItemFrameBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemFrameBlockActor.
 *
 */
class ItemFrameBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMFRAMEBLOCKACTOR
public:
    class ItemFrameBlockActor& operator=(class ItemFrameBlockActor const &) = delete;
    ItemFrameBlockActor(class ItemFrameBlockActor const &) = delete;
    ItemFrameBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1714964112
     */
    virtual ~ItemFrameBlockActor();
    /**
     * @vftbl  1
     * @symbol ?load@ItemFrameBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   1940051801
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@ItemFrameBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   1984320216
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  7
     * @symbol ?tick@ItemFrameBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   -1274184350
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  8
     * @symbol ?onChanged@ItemFrameBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   -478924710
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vftbl  12
     * @hash   -383143003
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol ?onRemoved@ItemFrameBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   -1270704130
     */
    virtual void onRemoved(class BlockSource &);
    /**
     * @vftbl  16
     * @hash   -379448919
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  17
     * @symbol ?getShadowRadius@ItemFrameBlockActor@@UEBAMAEAVBlockSource@@@Z
     * @hash   1484392750
     */
    virtual float getShadowRadius(class BlockSource &) const;
    /**
     * @vftbl  28
     * @hash   -348972726
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl  29
     * @hash   -312330757
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -292013295
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -325884701
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -324961180
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -324037659
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol ?_getUpdatePacket@ItemFrameBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   -1077775109
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  36
     * @symbol ?_onUpdatePacket@ItemFrameBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   70498791
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ??0ItemFrameBlockActor@@QEAA@VBlockPos@@W4BlockActorType@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   464532785
     */
    MCAPI ItemFrameBlockActor(class BlockPos, enum class BlockActorType, std::string);
    /**
     * @symbol ??0ItemFrameBlockActor@@QEAA@VBlockPos@@@Z
     * @hash   -1451420811
     */
    MCAPI ItemFrameBlockActor(class BlockPos);
    /**
     * @symbol ?actuallyDropItem@ItemFrameBlockActor@@QEAAXAEAVBlockSource@@_N@Z
     * @hash   107463459
     */
    MCAPI void actuallyDropItem(class BlockSource &, bool);
    /**
     * @symbol ?dropFramedItem@ItemFrameBlockActor@@QEAAXAEAVBlockSource@@_N@Z
     * @hash   183672851
     */
    MCAPI void dropFramedItem(class BlockSource &, bool);
    /**
     * @symbol ?getFramedItem@ItemFrameBlockActor@@QEAAAEAVItemInstance@@XZ
     * @hash   -191197240
     */
    MCAPI class ItemInstance & getFramedItem();
    /**
     * @symbol ?getRotation@ItemFrameBlockActor@@QEAAMXZ
     * @hash   -1557906912
     */
    MCAPI float getRotation();
    /**
     * @symbol ?rotateFramedItem@ItemFrameBlockActor@@QEAAXXZ
     * @hash   -68456067
     */
    MCAPI void rotateFramedItem();
    /**
     * @symbol ?setItem@ItemFrameBlockActor@@QEAAXAEAVBlockSource@@AEBVItemInstance@@@Z
     * @hash   -1286270563
     */
    MCAPI void setItem(class BlockSource &, class ItemInstance const &);
    /**
     * @symbol ?updateNameTag@ItemFrameBlockActor@@QEAAXXZ
     * @hash   1234768369
     */
    MCAPI void updateNameTag();
    /**
     * @symbol ?ROTATION_DEGREES@ItemFrameBlockActor@@2MB
     * @hash   95529579
     */
    MCAPI static float const ROTATION_DEGREES;

//private:
    /**
     * @symbol ?_checkMapRemoval@ItemFrameBlockActor@@AEAAXAEAVBlockSource@@AEAVItemInstance@@@Z
     * @hash   375216819
     */
    MCAPI void _checkMapRemoval(class BlockSource &, class ItemInstance &);
    /**
     * @symbol ?_updateBit@ItemFrameBlockActor@@AEAAXAEAVBlockSource@@AEBV?$ItemStateVariant@_N@@AEBVHashedString@@@Z
     * @hash   -1653672218
     */
    MCAPI void _updateBit(class BlockSource &, class ItemStateVariant<bool> const &, class HashedString const &);

private:

};