// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseRailBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DetectorRailBlock : public BaseRailBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DETECTORRAILBLOCK
public:
    class DetectorRailBlock& operator=(class DetectorRailBlock const&) = delete;
    DetectorRailBlock(class DetectorRailBlock const&) = delete;
    DetectorRailBlock() = delete;
#endif

public:
    /*0*/ virtual ~DetectorRailBlock();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*3*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*4*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*5*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*6*/ virtual void __unk_vfn_1();
    /*7*/ virtual void __unk_vfn_2();
    /*8*/ virtual void __unk_vfn_3();
    /*9*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*10*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*11*/ virtual void __unk_vfn_4();
    /*12*/ virtual void __unk_vfn_5();
    /*13*/ virtual void __unk_vfn_6();
    /*14*/ virtual void __unk_vfn_7();
    /*15*/ virtual void __unk_vfn_8();
    /*16*/ virtual void __unk_vfn_9();
    /*17*/ virtual void __unk_vfn_10();
    /*18*/ virtual void __unk_vfn_11();
    /*19*/ virtual void __unk_vfn_12();
    /*20*/ virtual void __unk_vfn_13();
    /*21*/ virtual void __unk_vfn_14();
    /*22*/ virtual void __unk_vfn_15();
    /*23*/ virtual void __unk_vfn_16();
    /*24*/ virtual void __unk_vfn_17();
    /*25*/ virtual void __unk_vfn_18();
    /*26*/ virtual void __unk_vfn_19();
    /*27*/ virtual void __unk_vfn_20();
    /*28*/ virtual void __unk_vfn_21();
    /*29*/ virtual void __unk_vfn_22();
    /*30*/ virtual void __unk_vfn_23();
    /*31*/ virtual void __unk_vfn_24();
    /*32*/ virtual void __unk_vfn_25();
    /*33*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*34*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*35*/ virtual void __unk_vfn_26();
    /*36*/ virtual void __unk_vfn_27();
    /*37*/ virtual void __unk_vfn_28();
    /*38*/ virtual void __unk_vfn_29();
    /*39*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*40*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*41*/ virtual void __unk_vfn_30();
    /*42*/ virtual void __unk_vfn_31();
    /*43*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*44*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*45*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*46*/ virtual void __unk_vfn_32();
    /*47*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*48*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*51*/ virtual void __unk_vfn_33();
    /*52*/ virtual void __unk_vfn_34();
    /*53*/ virtual void __unk_vfn_35();
    /*54*/ virtual void __unk_vfn_36();
    /*55*/ virtual void __unk_vfn_37();
    /*56*/ virtual void __unk_vfn_38();
    /*57*/ virtual void __unk_vfn_39();
    /*58*/ virtual void __unk_vfn_40();
    /*59*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*60*/ virtual void __unk_vfn_41();
    /*61*/ virtual void __unk_vfn_42();
    /*62*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*63*/ virtual void __unk_vfn_43();
    /*64*/ virtual void __unk_vfn_44();
    /*65*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*66*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*67*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*68*/ virtual void __unk_vfn_45();
    /*69*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*70*/ virtual void __unk_vfn_46();
    /*71*/ virtual void __unk_vfn_47();
    /*72*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*73*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*74*/ virtual int getExperienceDrop(class Random&) const;
    /*75*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*76*/ virtual void __unk_vfn_48();
    /*77*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*78*/ virtual void __unk_vfn_49();
    /*79*/ virtual void __unk_vfn_50();
    /*80*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*81*/ virtual void __unk_vfn_51();
    /*82*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*83*/ virtual void __unk_vfn_52();
    /*84*/ virtual int getIconYOffset() const;
    /*85*/ virtual void __unk_vfn_53();
    /*86*/ virtual int getColor(class Block const&) const;
    /*87*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*88*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*89*/ virtual void __unk_vfn_54();
    /*90*/ virtual int getVariant(class Block const&) const;
    /*91*/ virtual void __unk_vfn_55();
    /*92*/ virtual class Block const& getRenderBlock() const;
    /*93*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*94*/ virtual enum Flip getFaceFlip(unsigned char, class Block const&) const;
    /*95*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*96*/ virtual void __unk_vfn_56();
    /*97*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*98*/ virtual void __unk_vfn_57();
    /*99*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*100*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*101*/ virtual void _addHardCodedBlockComponents();
    /*102*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*103*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*104*/ virtual void onStandOn(class EntityContext&, class BlockPos const&) const;
    /*105*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*106*/ virtual void __unk_vfn_58();
    /*107*/ virtual void __unk_vfn_59();
    /*108*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*109*/ virtual void __unk_vfn_60();
    /*110*/ virtual void __unk_vfn_61();
    /*111*/ virtual void __unk_vfn_62();
    /*112*/ virtual int getExtraRenderLayers() const;
    /*113*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*114*/ virtual void __unk_vfn_63();
    /*115*/ virtual void __unk_vfn_64();
    /*
    inline bool shouldConnectToRedstone(class BlockSource& a0, class BlockPos const& a1, int a2) const{
        bool (DetectorRailBlock::*rv)(class BlockSource&, class BlockPos const&, int) const;
        *((void**)&rv) = dlsym("?shouldConnectToRedstone@DetectorRailBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<int>(a2));
    }
    inline bool isSignalSource() const{
        bool (DetectorRailBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isSignalSource@DetectorRailBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool hasComparatorSignal() const{
        bool (DetectorRailBlock::*rv)() const;
        *((void**)&rv) = dlsym("?hasComparatorSignal@DetectorRailBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI DetectorRailBlock(std::string const&, int);

protected:

private:
    MCAPI void checkPressed(class BlockSource&, class BlockPos const&) const;

};