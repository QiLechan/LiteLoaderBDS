// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EndPortalFrameBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDPORTALFRAMEBLOCK
public:
    class EndPortalFrameBlock& operator=(class EndPortalFrameBlock const&) = delete;
    EndPortalFrameBlock(class EndPortalFrameBlock const&) = delete;
    EndPortalFrameBlock() = delete;
#endif

public:
    /*0*/ virtual ~EndPortalFrameBlock();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*3*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*4*/ virtual void addAABBs(class Block const&, class BlockSource&, class BlockPos const&, class AABB const*, std::vector<class AABB>&) const;
    /*5*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*6*/ virtual bool addCollisionShapes(class Block const&, class BlockSource&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<struct IActorMovementProxy>) const;
    /*7*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*8*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*9*/ virtual void __unk_vfn_1();
    /*10*/ virtual void __unk_vfn_2();
    /*11*/ virtual void __unk_vfn_3();
    /*12*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*13*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*14*/ virtual void __unk_vfn_4();
    /*15*/ virtual void __unk_vfn_5();
    /*16*/ virtual void __unk_vfn_6();
    /*17*/ virtual void __unk_vfn_7();
    /*18*/ virtual void __unk_vfn_8();
    /*19*/ virtual void __unk_vfn_9();
    /*20*/ virtual void __unk_vfn_10();
    /*21*/ virtual void __unk_vfn_11();
    /*22*/ virtual void __unk_vfn_12();
    /*23*/ virtual void __unk_vfn_13();
    /*24*/ virtual void __unk_vfn_14();
    /*25*/ virtual void __unk_vfn_15();
    /*26*/ virtual void __unk_vfn_16();
    /*27*/ virtual void __unk_vfn_17();
    /*28*/ virtual void __unk_vfn_18();
    /*29*/ virtual void __unk_vfn_19();
    /*30*/ virtual void __unk_vfn_20();
    /*31*/ virtual void __unk_vfn_21();
    /*32*/ virtual void __unk_vfn_22();
    /*33*/ virtual void __unk_vfn_23();
    /*34*/ virtual void __unk_vfn_24();
    /*35*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*36*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*37*/ virtual void __unk_vfn_25();
    /*38*/ virtual void __unk_vfn_26();
    /*39*/ virtual void __unk_vfn_27();
    /*40*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*41*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*42*/ virtual void __unk_vfn_28();
    /*43*/ virtual void __unk_vfn_29();
    /*44*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*45*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*46*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*47*/ virtual void __unk_vfn_30();
    /*48*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*51*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*52*/ virtual void __unk_vfn_31();
    /*53*/ virtual void __unk_vfn_32();
    /*54*/ virtual void __unk_vfn_33();
    /*55*/ virtual void __unk_vfn_34();
    /*56*/ virtual void __unk_vfn_35();
    /*57*/ virtual void __unk_vfn_36();
    /*58*/ virtual void __unk_vfn_37();
    /*59*/ virtual void __unk_vfn_38();
    /*60*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*61*/ virtual void __unk_vfn_39();
    /*62*/ virtual void __unk_vfn_40();
    /*63*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*64*/ virtual void __unk_vfn_41();
    /*65*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*66*/ virtual void __unk_vfn_42();
    /*67*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*68*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*69*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*70*/ virtual void __unk_vfn_43();
    /*71*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*72*/ virtual void __unk_vfn_44();
    /*73*/ virtual void __unk_vfn_45();
    /*74*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*75*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*76*/ virtual int getExperienceDrop(class Random&) const;
    /*77*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*78*/ virtual void __unk_vfn_46();
    /*79*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*80*/ virtual void __unk_vfn_47();
    /*81*/ virtual void __unk_vfn_48();
    /*82*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*83*/ virtual void __unk_vfn_49();
    /*84*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*85*/ virtual void __unk_vfn_50();
    /*86*/ virtual int getIconYOffset() const;
    /*87*/ virtual void __unk_vfn_51();
    /*88*/ virtual int getColor(class Block const&) const;
    /*89*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*90*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*91*/ virtual void __unk_vfn_52();
    /*92*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*93*/ virtual void __unk_vfn_53();
    /*94*/ virtual class Block const& getRenderBlock() const;
    /*95*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*96*/ virtual enum Flip getFaceFlip(unsigned char, class Block const&) const;
    /*97*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*98*/ virtual void __unk_vfn_54();
    /*99*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;
    /*100*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*101*/ virtual void __unk_vfn_55();
    /*102*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*103*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*104*/ virtual void _addHardCodedBlockComponents();
    /*105*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*106*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*107*/ virtual void onStandOn(class EntityContext&, class BlockPos const&) const;
    /*108*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*109*/ virtual void __unk_vfn_56();
    /*110*/ virtual void __unk_vfn_57();
    /*111*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*112*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*113*/ virtual void __unk_vfn_58();
    /*114*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*115*/ virtual void __unk_vfn_59();
    /*116*/ virtual int getExtraRenderLayers() const;
    /*117*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*118*/ virtual void __unk_vfn_60();
    /*119*/ virtual void __unk_vfn_61();
    /*
    inline bool isInteractiveBlock() const{
        bool (EndPortalFrameBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isInteractiveBlock@EndPortalFrameBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool hasComparatorSignal() const{
        bool (EndPortalFrameBlock::*rv)() const;
        *((void**)&rv) = dlsym("?hasComparatorSignal@EndPortalFrameBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI EndPortalFrameBlock(std::string const&, int);

protected:

private:
    MCAPI static void createPortal(class BlockSource&, class BlockPos const&);

};