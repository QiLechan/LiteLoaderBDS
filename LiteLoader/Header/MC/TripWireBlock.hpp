// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TripWireBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIPWIREBLOCK
public:
    class TripWireBlock& operator=(class TripWireBlock const&) = delete;
    TripWireBlock(class TripWireBlock const&) = delete;
    TripWireBlock() = delete;
#endif

public:
    /*0*/ virtual ~TripWireBlock();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*3*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*4*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*5*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*6*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*7*/ virtual void __unk_vfn_1();
    /*8*/ virtual void __unk_vfn_2();
    /*9*/ virtual void __unk_vfn_3();
    /*10*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*11*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*12*/ virtual void __unk_vfn_4();
    /*13*/ virtual void __unk_vfn_5();
    /*14*/ virtual void __unk_vfn_6();
    /*15*/ virtual void __unk_vfn_7();
    /*16*/ virtual void __unk_vfn_8();
    /*17*/ virtual void __unk_vfn_9();
    /*18*/ virtual void __unk_vfn_10();
    /*19*/ virtual void __unk_vfn_11();
    /*20*/ virtual void __unk_vfn_12();
    /*21*/ virtual void __unk_vfn_13();
    /*22*/ virtual void __unk_vfn_14();
    /*23*/ virtual void __unk_vfn_15();
    /*24*/ virtual void __unk_vfn_16();
    /*25*/ virtual void __unk_vfn_17();
    /*26*/ virtual void __unk_vfn_18();
    /*27*/ virtual void __unk_vfn_19();
    /*28*/ virtual void __unk_vfn_20();
    /*29*/ virtual void __unk_vfn_21();
    /*30*/ virtual void __unk_vfn_22();
    /*31*/ virtual void __unk_vfn_23();
    /*32*/ virtual void __unk_vfn_24();
    /*33*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*34*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*35*/ virtual void __unk_vfn_25();
    /*36*/ virtual void __unk_vfn_26();
    /*37*/ virtual void __unk_vfn_27();
    /*38*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*39*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*40*/ virtual void __unk_vfn_28();
    /*41*/ virtual void __unk_vfn_29();
    /*42*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*43*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*44*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*45*/ virtual void __unk_vfn_30();
    /*46*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*47*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*48*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual void __unk_vfn_31();
    /*51*/ virtual void __unk_vfn_32();
    /*52*/ virtual void __unk_vfn_33();
    /*53*/ virtual void __unk_vfn_34();
    /*54*/ virtual void __unk_vfn_35();
    /*55*/ virtual void __unk_vfn_36();
    /*56*/ virtual void __unk_vfn_37();
    /*57*/ virtual void __unk_vfn_38();
    /*58*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*59*/ virtual void __unk_vfn_39();
    /*60*/ virtual void __unk_vfn_40();
    /*61*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*62*/ virtual bool playerWillDestroy(class Player&, class BlockPos const&, class Block const&) const;
    /*63*/ virtual void __unk_vfn_41();
    /*64*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*65*/ virtual void __unk_vfn_42();
    /*66*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*67*/ virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /*68*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*69*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*70*/ virtual void __unk_vfn_43();
    /*71*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*72*/ virtual void __unk_vfn_44();
    /*73*/ virtual void __unk_vfn_45();
    /*74*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*75*/ virtual bool shouldTriggerEntityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*76*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*77*/ virtual int getExperienceDrop(class Random&) const;
    /*78*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*79*/ virtual void __unk_vfn_46();
    /*80*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*81*/ virtual void __unk_vfn_47();
    /*82*/ virtual void __unk_vfn_48();
    /*83*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*84*/ virtual void __unk_vfn_49();
    /*85*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*86*/ virtual void __unk_vfn_50();
    /*87*/ virtual int getIconYOffset() const;
    /*88*/ virtual void __unk_vfn_51();
    /*89*/ virtual int getColor(class Block const&) const;
    /*90*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*91*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*92*/ virtual void __unk_vfn_52();
    /*93*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*94*/ virtual void __unk_vfn_53();
    /*95*/ virtual class Block const& getRenderBlock() const;
    /*96*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*97*/ virtual enum Flip getFaceFlip(unsigned char, class Block const&) const;
    /*98*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*99*/ virtual void __unk_vfn_54();
    /*100*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;
    /*101*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*102*/ virtual void __unk_vfn_55();
    /*103*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*104*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*105*/ virtual void _addHardCodedBlockComponents();
    /*106*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*107*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*108*/ virtual void onStandOn(class EntityContext&, class BlockPos const&) const;
    /*109*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*110*/ virtual void __unk_vfn_56();
    /*111*/ virtual void __unk_vfn_57();
    /*112*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*113*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*114*/ virtual void __unk_vfn_58();
    /*115*/ virtual void __unk_vfn_59();
    /*116*/ virtual void __unk_vfn_60();
    /*117*/ virtual int getExtraRenderLayers() const;
    /*118*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*119*/ virtual void __unk_vfn_61();
    /*120*/ virtual void __unk_vfn_62();
    MCAPI TripWireBlock(std::string const&, int);

protected:

private:
    MCAPI void checkPressed(class BlockSource&, class BlockPos const&) const;
    MCAPI void updateSource(class BlockSource&, class BlockPos const&, class Block const&) const;

};