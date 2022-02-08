// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BushBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MushroomBlock : public BushBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MUSHROOMBLOCK
public:
    class MushroomBlock& operator=(class MushroomBlock const&) = delete;
    MushroomBlock(class MushroomBlock const&) = delete;
    MushroomBlock() = delete;
#endif

public:
    /*0*/ virtual ~MushroomBlock();
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
    /*32*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*33*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*34*/ virtual void __unk_vfn_25();
    /*35*/ virtual void __unk_vfn_26();
    /*36*/ virtual void __unk_vfn_27();
    /*37*/ virtual void __unk_vfn_28();
    /*38*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*39*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*40*/ virtual void __unk_vfn_29();
    /*41*/ virtual void __unk_vfn_30();
    /*42*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*43*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*44*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*45*/ virtual void __unk_vfn_31();
    /*46*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*47*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*48*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual void __unk_vfn_32();
    /*51*/ virtual void __unk_vfn_33();
    /*52*/ virtual void __unk_vfn_34();
    /*53*/ virtual void __unk_vfn_35();
    /*54*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, enum FertilizerType) const;
    /*55*/ virtual void __unk_vfn_36();
    /*56*/ virtual void __unk_vfn_37();
    /*57*/ virtual void __unk_vfn_38();
    /*58*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*59*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*60*/ virtual void __unk_vfn_39();
    /*61*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*62*/ virtual void __unk_vfn_40();
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
    /*90*/ virtual void __unk_vfn_52();
    /*91*/ virtual class Block const& getRenderBlock() const;
    /*92*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*93*/ virtual enum Flip getFaceFlip(unsigned char, class Block const&) const;
    /*94*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*95*/ virtual void __unk_vfn_53();
    /*96*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*97*/ virtual void __unk_vfn_54();
    /*98*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*99*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*100*/ virtual void _addHardCodedBlockComponents();
    /*101*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*102*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*103*/ virtual void onStandOn(class EntityContext&, class BlockPos const&) const;
    /*104*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*105*/ virtual void __unk_vfn_55();
    /*106*/ virtual void __unk_vfn_56();
    /*107*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*108*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*109*/ virtual void randomTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*110*/ virtual void __unk_vfn_57();
    /*111*/ virtual void __unk_vfn_58();
    /*112*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*113*/ virtual enum BlockRenderLayer getRenderLayer() const;
    /*114*/ virtual enum BlockRenderLayer getRenderLayer(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*115*/ virtual int getExtraRenderLayers() const;
    /*116*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*117*/ virtual void __unk_vfn_59();
    /*118*/ virtual void __unk_vfn_60();
    /*
    inline bool canContainLiquid() const{
        bool (MushroomBlock::*rv)() const;
        *((void**)&rv) = dlsym("?canContainLiquid@MushroomBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canBeFertilized(class BlockSource& a0, class BlockPos const& a1, class Block const& a2) const{
        bool (MushroomBlock::*rv)(class BlockSource&, class BlockPos const&, class Block const&) const;
        *((void**)&rv) = dlsym("?canBeFertilized@MushroomBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2));
    }
    inline enum BlockRenderLayer getRenderLayer(class Block const& a0, class BlockSource& a1, class BlockPos const& a2) const{
        enum BlockRenderLayer (MushroomBlock::*rv)(class Block const&, class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?getRenderLayer@MushroomBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0), std::forward<class BlockSource&>(a1), std::forward<class BlockPos const&>(a2));
    }
    inline enum BlockRenderLayer getRenderLayer() const{
        enum BlockRenderLayer (MushroomBlock::*rv)() const;
        *((void**)&rv) = dlsym("?getRenderLayer@MushroomBlock@@UEBA?AW4BlockRenderLayer@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI MushroomBlock(std::string const&, int);

protected:

private:

};