// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "WallBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BorderBlock : public WallBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BORDERBLOCK
public:
    class BorderBlock& operator=(class BorderBlock const&) = delete;
    BorderBlock(class BorderBlock const&) = delete;
    BorderBlock() = delete;
#endif

public:
    /*0*/ virtual ~BorderBlock();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool getCollisionShape(class AABB&, class Block const&, class BlockSource const&, class BlockPos const&, class optional_ref<struct IActorMovementProxy>) const;
    /*3*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*4*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*5*/ virtual void __unk_vfn_1();
    /*6*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*7*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*8*/ virtual void __unk_vfn_2();
    /*9*/ virtual void __unk_vfn_3();
    /*10*/ virtual void __unk_vfn_4();
    /*11*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*12*/ virtual bool canProvideSupport(class Block const&, unsigned char, enum BlockSupportType) const;
    /*13*/ virtual bool canConnect(class Block const&, unsigned char, class Block const&) const;
    /*14*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
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
    /*35*/ virtual void __unk_vfn_25();
    /*36*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*37*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*38*/ virtual void __unk_vfn_26();
    /*39*/ virtual void __unk_vfn_27();
    /*40*/ virtual void __unk_vfn_28();
    /*41*/ virtual void __unk_vfn_29();
    /*42*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*43*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*44*/ virtual void __unk_vfn_30();
    /*45*/ virtual void __unk_vfn_31();
    /*46*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*47*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*48*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*49*/ virtual void __unk_vfn_32();
    /*50*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*51*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*52*/ virtual void __unk_vfn_33();
    /*53*/ virtual void __unk_vfn_34();
    /*54*/ virtual void __unk_vfn_35();
    /*55*/ virtual void __unk_vfn_36();
    /*56*/ virtual void __unk_vfn_37();
    /*57*/ virtual void __unk_vfn_38();
    /*58*/ virtual void __unk_vfn_39();
    /*59*/ virtual void __unk_vfn_40();
    /*60*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*61*/ virtual void __unk_vfn_41();
    /*62*/ virtual void __unk_vfn_42();
    /*63*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*64*/ virtual void __unk_vfn_43();
    /*65*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*66*/ virtual void __unk_vfn_44();
    /*67*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*68*/ virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /*69*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*70*/ virtual void __unk_vfn_45();
    /*71*/ virtual void __unk_vfn_46();
    /*72*/ virtual void __unk_vfn_47();
    /*73*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*74*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*75*/ virtual int getExperienceDrop(class Random&) const;
    /*76*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*77*/ virtual void __unk_vfn_48();
    /*78*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*79*/ virtual void __unk_vfn_49();
    /*80*/ virtual void __unk_vfn_50();
    /*81*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*82*/ virtual void __unk_vfn_51();
    /*83*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*84*/ virtual void __unk_vfn_52();
    /*85*/ virtual int getIconYOffset() const;
    /*86*/ virtual std::string buildDescriptionId(class Block const&) const;
    /*87*/ virtual void __unk_vfn_53();
    /*88*/ virtual int getColor(class Block const&) const;
    /*89*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*90*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*91*/ virtual void __unk_vfn_54();
    /*92*/ virtual class AABB const& getVisualShapeInWorld(class Block const&, class BlockSource const&, class BlockPos const&, class AABB&, bool) const;
    /*93*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*94*/ virtual int getVariant(class Block const&) const;
    /*95*/ virtual void __unk_vfn_55();
    /*96*/ virtual class Block const& getRenderBlock() const;
    /*97*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*98*/ virtual enum Flip getFaceFlip(unsigned char, class Block const&) const;
    /*99*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*100*/ virtual void __unk_vfn_56();
    /*101*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*102*/ virtual void __unk_vfn_57();
    /*103*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*104*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*105*/ virtual void _addHardCodedBlockComponents();
    /*106*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*107*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*108*/ virtual void onStandOn(class EntityContext&, class BlockPos const&) const;
    /*109*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*110*/ virtual void __unk_vfn_58();
    /*111*/ virtual void __unk_vfn_59();
    /*112*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*113*/ virtual void __unk_vfn_60();
    /*114*/ virtual void __unk_vfn_61();
    /*115*/ virtual void __unk_vfn_62();
    /*116*/ virtual int getExtraRenderLayers() const;
    /*117*/ virtual void __unk_vfn_63();
    /*118*/ virtual void __unk_vfn_64();
    MCAPI BorderBlock(std::string const&, int);

protected:

private:

};