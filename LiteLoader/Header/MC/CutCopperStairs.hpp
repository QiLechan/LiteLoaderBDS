// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StairBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CutCopperStairs : public StairBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CUTCOPPERSTAIRS
public:
    class CutCopperStairs& operator=(class CutCopperStairs const&) = delete;
    CutCopperStairs(class CutCopperStairs const&) = delete;
    CutCopperStairs() = delete;
#endif

public:
    /*0*/ virtual ~CutCopperStairs();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*3*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*4*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*5*/ virtual bool addCollisionShapes(class Block const&, class BlockSource&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<struct IActorMovementProxy>) const;
    /*6*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*7*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*8*/ virtual void __unk_vfn_1();
    /*9*/ virtual void __unk_vfn_2();
    /*10*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*11*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*12*/ virtual void __unk_vfn_3();
    /*13*/ virtual void __unk_vfn_4();
    /*14*/ virtual void __unk_vfn_5();
    /*15*/ virtual void __unk_vfn_6();
    /*16*/ virtual void __unk_vfn_7();
    /*17*/ virtual void __unk_vfn_8();
    /*18*/ virtual void __unk_vfn_9();
    /*19*/ virtual void __unk_vfn_10();
    /*20*/ virtual void __unk_vfn_11();
    /*21*/ virtual void __unk_vfn_12();
    /*22*/ virtual void __unk_vfn_13();
    /*23*/ virtual void __unk_vfn_14();
    /*24*/ virtual void __unk_vfn_15();
    /*25*/ virtual void __unk_vfn_16();
    /*26*/ virtual void __unk_vfn_17();
    /*27*/ virtual void __unk_vfn_18();
    /*28*/ virtual void __unk_vfn_19();
    /*29*/ virtual void __unk_vfn_20();
    /*30*/ virtual void __unk_vfn_21();
    /*31*/ virtual void __unk_vfn_22();
    /*32*/ virtual void __unk_vfn_23();
    /*33*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*34*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*35*/ virtual void __unk_vfn_24();
    /*36*/ virtual void __unk_vfn_25();
    /*37*/ virtual void __unk_vfn_26();
    /*38*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*39*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*40*/ virtual void __unk_vfn_27();
    /*41*/ virtual void __unk_vfn_28();
    /*42*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*43*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*44*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*45*/ virtual void __unk_vfn_29();
    /*46*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*47*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*48*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual void __unk_vfn_30();
    /*51*/ virtual void __unk_vfn_31();
    /*52*/ virtual void __unk_vfn_32();
    /*53*/ virtual void __unk_vfn_33();
    /*54*/ virtual void __unk_vfn_34();
    /*55*/ virtual void __unk_vfn_35();
    /*56*/ virtual void __unk_vfn_36();
    /*57*/ virtual void __unk_vfn_37();
    /*58*/ virtual void __unk_vfn_38();
    /*59*/ virtual void __unk_vfn_39();
    /*60*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*61*/ virtual void __unk_vfn_40();
    /*62*/ virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /*63*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*64*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*65*/ virtual void __unk_vfn_41();
    /*66*/ virtual void __unk_vfn_42();
    /*67*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*68*/ virtual int getExperienceDrop(class Random&) const;
    /*69*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*70*/ virtual void __unk_vfn_43();
    /*71*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*72*/ virtual void __unk_vfn_44();
    /*73*/ virtual void __unk_vfn_45();
    /*74*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*75*/ virtual void __unk_vfn_46();
    /*76*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*77*/ virtual void __unk_vfn_47();
    /*78*/ virtual int getIconYOffset() const;
    /*79*/ virtual void __unk_vfn_48();
    /*80*/ virtual int getColor(class Block const&) const;
    /*81*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*82*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*83*/ virtual void __unk_vfn_49();
    /*84*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*85*/ virtual int getVariant(class Block const&) const;
    /*86*/ virtual void __unk_vfn_50();
    /*87*/ virtual class Block const& getRenderBlock() const;
    /*88*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*89*/ virtual enum Flip getFaceFlip(unsigned char, class Block const&) const;
    /*90*/ virtual void __unk_vfn_51();
    /*91*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*92*/ virtual void __unk_vfn_52();
    /*93*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*94*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*95*/ virtual void _addHardCodedBlockComponents();
    /*96*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*97*/ virtual void __unk_vfn_53();
    /*98*/ virtual void __unk_vfn_54();
    /*99*/ virtual void randomTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*100*/ virtual void __unk_vfn_55();
    /*101*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*102*/ virtual void __unk_vfn_56();
    /*103*/ virtual int getExtraRenderLayers() const;
    /*104*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*105*/ virtual void __unk_vfn_57();
    /*106*/ virtual void __unk_vfn_58();
    MCAPI CutCopperStairs(std::string const&, int, class BlockLegacy const&, enum CopperType, class WeakPtr<class BlockLegacy>&, class WeakPtr<class BlockLegacy>&, class WeakPtr<class BlockLegacy>&);
    MCAPI CutCopperStairs(std::string const&, int, class BlockLegacy const&, enum CopperType, class WeakPtr<class BlockLegacy>&);

protected:

private:

};