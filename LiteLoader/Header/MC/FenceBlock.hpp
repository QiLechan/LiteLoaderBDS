// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FenceBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FENCEBLOCK
public:
    class FenceBlock& operator=(class FenceBlock const&) = delete;
    FenceBlock(class FenceBlock const&) = delete;
    FenceBlock() = delete;
#endif

public:
    /*0*/ virtual ~FenceBlock();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*3*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*4*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*5*/ virtual bool addCollisionShapes(class Block const&, class BlockSource&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<struct IActorMovementProxy>) const;
    /*6*/ virtual void __unk_vfn_1();
    /*7*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*8*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*9*/ virtual void __unk_vfn_2();
    /*10*/ virtual void __unk_vfn_3();
    /*11*/ virtual void __unk_vfn_4();
    /*12*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*13*/ virtual bool canProvideSupport(class Block const&, unsigned char, enum BlockSupportType) const;
    /*14*/ virtual bool canConnect(class Block const&, unsigned char, class Block const&) const;
    /*15*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*16*/ virtual void __unk_vfn_5();
    /*17*/ virtual void __unk_vfn_6();
    /*18*/ virtual void __unk_vfn_7();
    /*19*/ virtual void __unk_vfn_8();
    /*20*/ virtual void __unk_vfn_9();
    /*21*/ virtual void __unk_vfn_10();
    /*22*/ virtual void __unk_vfn_11();
    /*23*/ virtual void __unk_vfn_12();
    /*24*/ virtual void __unk_vfn_13();
    /*25*/ virtual void __unk_vfn_14();
    /*26*/ virtual void __unk_vfn_15();
    /*27*/ virtual void __unk_vfn_16();
    /*28*/ virtual void __unk_vfn_17();
    /*29*/ virtual void __unk_vfn_18();
    /*30*/ virtual void __unk_vfn_19();
    /*31*/ virtual void __unk_vfn_20();
    /*32*/ virtual void __unk_vfn_21();
    /*33*/ virtual void __unk_vfn_22();
    /*34*/ virtual void __unk_vfn_23();
    /*35*/ virtual void __unk_vfn_24();
    /*36*/ virtual void __unk_vfn_25();
    /*37*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*38*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*39*/ virtual void __unk_vfn_26();
    /*40*/ virtual void __unk_vfn_27();
    /*41*/ virtual void __unk_vfn_28();
    /*42*/ virtual void __unk_vfn_29();
    /*43*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*44*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*45*/ virtual void __unk_vfn_30();
    /*46*/ virtual void __unk_vfn_31();
    /*47*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*48*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*49*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*50*/ virtual void __unk_vfn_32();
    /*51*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*52*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*53*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*54*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*55*/ virtual void __unk_vfn_33();
    /*56*/ virtual void __unk_vfn_34();
    /*57*/ virtual void __unk_vfn_35();
    /*58*/ virtual void __unk_vfn_36();
    /*59*/ virtual void __unk_vfn_37();
    /*60*/ virtual void __unk_vfn_38();
    /*61*/ virtual void __unk_vfn_39();
    /*62*/ virtual void __unk_vfn_40();
    /*63*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*64*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;
    /*65*/ virtual void __unk_vfn_41();
    /*66*/ virtual void __unk_vfn_42();
    /*67*/ virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;
    /*68*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*69*/ virtual void __unk_vfn_43();
    /*70*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*71*/ virtual void __unk_vfn_44();
    /*72*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*73*/ virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /*74*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*75*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*76*/ virtual void __unk_vfn_45();
    /*77*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*78*/ virtual void __unk_vfn_46();
    /*79*/ virtual void __unk_vfn_47();
    /*80*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*81*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*82*/ virtual int getExperienceDrop(class Random&) const;
    /*83*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*84*/ virtual void __unk_vfn_48();
    /*85*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*86*/ virtual void __unk_vfn_49();
    /*87*/ virtual void __unk_vfn_50();
    /*88*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*89*/ virtual void __unk_vfn_51();
    /*90*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*91*/ virtual void __unk_vfn_52();
    /*92*/ virtual int getIconYOffset() const;
    /*93*/ virtual std::string buildDescriptionId(class Block const&) const;
    /*94*/ virtual void __unk_vfn_53();
    /*95*/ virtual int getColor(class Block const&) const;
    /*96*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*97*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*98*/ virtual void __unk_vfn_54();
    /*99*/ virtual class AABB const& getVisualShapeInWorld(class Block const&, class BlockSource const&, class BlockPos const&, class AABB&, bool) const;
    /*100*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*101*/ virtual void __unk_vfn_55();
    /*102*/ virtual class Block const& getRenderBlock() const;
    /*103*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*104*/ virtual enum Flip getFaceFlip(unsigned char, class Block const&) const;
    /*105*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*106*/ virtual void __unk_vfn_56();
    /*107*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*108*/ virtual void __unk_vfn_57();
    /*109*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*110*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*111*/ virtual void _addHardCodedBlockComponents();
    /*112*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*113*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*114*/ virtual void onStandOn(class EntityContext&, class BlockPos const&) const;
    /*115*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*116*/ virtual void __unk_vfn_58();
    /*117*/ virtual void __unk_vfn_59();
    /*118*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*119*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*120*/ virtual void __unk_vfn_60();
    /*121*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*122*/ virtual void __unk_vfn_61();
    /*123*/ virtual int getExtraRenderLayers() const;
    /*124*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*125*/ virtual void __unk_vfn_62();
    /*126*/ virtual void __unk_vfn_63();
    /*
    inline bool canBeSilkTouched() const{
        bool (FenceBlock::*rv)() const;
        *((void**)&rv) = dlsym("?canBeSilkTouched@FenceBlock@@MEBA_NXZ");
        return (this->*rv)();
    }
    inline bool getLiquidClipVolume(class BlockSource& a0, class BlockPos const& a1, class AABB& a2) const{
        bool (FenceBlock::*rv)(class BlockSource&, class BlockPos const&, class AABB&) const;
        *((void**)&rv) = dlsym("?getLiquidClipVolume@FenceBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class AABB&>(a2));
    }
    inline bool isFenceBlock() const{
        bool (FenceBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isFenceBlock@FenceBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isAuxValueRelevantForPicking() const{
        bool (FenceBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isAuxValueRelevantForPicking@FenceBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canContainLiquid() const{
        bool (FenceBlock::*rv)() const;
        *((void**)&rv) = dlsym("?canContainLiquid@FenceBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI FenceBlock(std::string const&, int, class Material const&);
    MCAPI void fetchPathableNeighbors(std::vector<class BlockPos>&, class BlockSource&, class BlockPos const&, class Vec3 const&) const;

protected:

private:
    MCAPI static class BaseGameVersion const FENCE_DOESNT_BREAK_FALLING_BLOCK_VERSION;

};