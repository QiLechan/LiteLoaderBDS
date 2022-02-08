// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FaceDirectionalBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BarrelBlock : public FaceDirectionalBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BARRELBLOCK
public:
    class BarrelBlock& operator=(class BarrelBlock const&) = delete;
    BarrelBlock(class BarrelBlock const&) = delete;
    BarrelBlock() = delete;
#endif

public:
    /*0*/ virtual ~BarrelBlock();
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
    /*32*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*33*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*34*/ virtual void __unk_vfn_24();
    /*35*/ virtual void __unk_vfn_25();
    /*36*/ virtual void __unk_vfn_26();
    /*37*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*38*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*39*/ virtual void __unk_vfn_27();
    /*40*/ virtual void __unk_vfn_28();
    /*41*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*42*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*43*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*44*/ virtual void __unk_vfn_29();
    /*45*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*46*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*47*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*48*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual void __unk_vfn_30();
    /*50*/ virtual void __unk_vfn_31();
    /*51*/ virtual void __unk_vfn_32();
    /*52*/ virtual void __unk_vfn_33();
    /*53*/ virtual void __unk_vfn_34();
    /*54*/ virtual void __unk_vfn_35();
    /*55*/ virtual void __unk_vfn_36();
    /*56*/ virtual void __unk_vfn_37();
    /*57*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*58*/ virtual void __unk_vfn_38();
    /*59*/ virtual void __unk_vfn_39();
    /*60*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*61*/ virtual void __unk_vfn_40();
    /*62*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*63*/ virtual void __unk_vfn_41();
    /*64*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*65*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*66*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*67*/ virtual void __unk_vfn_42();
    /*68*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*69*/ virtual void __unk_vfn_43();
    /*70*/ virtual void __unk_vfn_44();
    /*71*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*72*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*73*/ virtual int getExperienceDrop(class Random&) const;
    /*74*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*75*/ virtual void __unk_vfn_45();
    /*76*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*77*/ virtual void __unk_vfn_46();
    /*78*/ virtual void __unk_vfn_47();
    /*79*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*80*/ virtual void __unk_vfn_48();
    /*81*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*82*/ virtual void __unk_vfn_49();
    /*83*/ virtual int getIconYOffset() const;
    /*84*/ virtual void __unk_vfn_50();
    /*85*/ virtual int getColor(class Block const&) const;
    /*86*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*87*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*88*/ virtual void __unk_vfn_51();
    /*89*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*90*/ virtual int getVariant(class Block const&) const;
    /*91*/ virtual void __unk_vfn_52();
    /*92*/ virtual class Block const& getRenderBlock() const;
    /*93*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*94*/ virtual enum Flip getFaceFlip(unsigned char, class Block const&) const;
    /*95*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*96*/ virtual void __unk_vfn_53();
    /*97*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*98*/ virtual void __unk_vfn_54();
    /*99*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*100*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*101*/ virtual void _addHardCodedBlockComponents();
    /*102*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*103*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*104*/ virtual void onStandOn(class EntityContext&, class BlockPos const&) const;
    /*105*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*106*/ virtual void __unk_vfn_55();
    /*107*/ virtual void __unk_vfn_56();
    /*108*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*109*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*110*/ virtual void __unk_vfn_57();
    /*111*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*112*/ virtual void __unk_vfn_58();
    /*113*/ virtual int getExtraRenderLayers() const;
    /*114*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*115*/ virtual void __unk_vfn_59();
    /*116*/ virtual void __unk_vfn_60();
    /*
    inline bool isSignalSource() const{
        bool (BarrelBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isSignalSource@BarrelBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isContainerBlock() const{
        bool (BarrelBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isContainerBlock@BarrelBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool hasComparatorSignal() const{
        bool (BarrelBlock::*rv)() const;
        *((void**)&rv) = dlsym("?hasComparatorSignal@BarrelBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isInteractiveBlock() const{
        bool (BarrelBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isInteractiveBlock@BarrelBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI BarrelBlock(std::string const&, int, class Material const&);
    MCAPI static void setOpen(bool, class BlockSource&, class BlockPos const&);

protected:

private:

};