// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlueFireBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLUEFIREBLOCK
public:
    class BlueFireBlock& operator=(class BlueFireBlock const&) = delete;
    BlueFireBlock(class BlueFireBlock const&) = delete;
    BlueFireBlock() = delete;
#endif

public:
    /*0*/ virtual ~BlueFireBlock();
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
    /*38*/ virtual void __unk_vfn_28();
    /*39*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*40*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*41*/ virtual void __unk_vfn_29();
    /*42*/ virtual void __unk_vfn_30();
    /*43*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*44*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*45*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*46*/ virtual void __unk_vfn_31();
    /*47*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*48*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*51*/ virtual void __unk_vfn_32();
    /*52*/ virtual void __unk_vfn_33();
    /*53*/ virtual void __unk_vfn_34();
    /*54*/ virtual void __unk_vfn_35();
    /*55*/ virtual void __unk_vfn_36();
    /*56*/ virtual void __unk_vfn_37();
    /*57*/ virtual void __unk_vfn_38();
    /*58*/ virtual void __unk_vfn_39();
    /*59*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*60*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;
    /*61*/ virtual void __unk_vfn_40();
    /*62*/ virtual void __unk_vfn_41();
    /*63*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*64*/ virtual void __unk_vfn_42();
    /*65*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*66*/ virtual void __unk_vfn_43();
    /*67*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*68*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*69*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*70*/ virtual void __unk_vfn_44();
    /*71*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*72*/ virtual void __unk_vfn_45();
    /*73*/ virtual void __unk_vfn_46();
    /*74*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*75*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*76*/ virtual int getExperienceDrop(class Random&) const;
    /*77*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*78*/ virtual void __unk_vfn_47();
    /*79*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*80*/ virtual void __unk_vfn_48();
    /*81*/ virtual void __unk_vfn_49();
    /*82*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*83*/ virtual void __unk_vfn_50();
    /*84*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*85*/ virtual void __unk_vfn_51();
    /*86*/ virtual int getIconYOffset() const;
    /*87*/ virtual void __unk_vfn_52();
    /*88*/ virtual int getColor(class Block const&) const;
    /*89*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*90*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*91*/ virtual void __unk_vfn_53();
    /*92*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*93*/ virtual void __unk_vfn_54();
    /*94*/ virtual class Block const& getRenderBlock() const;
    /*95*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*96*/ virtual enum Flip getFaceFlip(unsigned char, class Block const&) const;
    /*97*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*98*/ virtual void __unk_vfn_55();
    /*99*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*100*/ virtual void __unk_vfn_56();
    /*101*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*102*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*103*/ virtual void _addHardCodedBlockComponents();
    /*104*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*105*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*106*/ virtual void onStandOn(class EntityContext&, class BlockPos const&) const;
    /*107*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*108*/ virtual void __unk_vfn_57();
    /*109*/ virtual void __unk_vfn_58();
    /*110*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*111*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*112*/ virtual void __unk_vfn_59();
    /*113*/ virtual void __unk_vfn_60();
    /*114*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*115*/ virtual int getExtraRenderLayers() const;
    /*116*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*117*/ virtual void __unk_vfn_61();
    /*118*/ virtual void __unk_vfn_62();
    /*
    inline bool mayPick() const{
        bool (BlueFireBlock::*rv)() const;
        *((void**)&rv) = dlsym("?mayPick@BlueFireBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canContainLiquid() const{
        bool (BlueFireBlock::*rv)() const;
        *((void**)&rv) = dlsym("?canContainLiquid@BlueFireBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canBeSilkTouched() const{
        bool (BlueFireBlock::*rv)() const;
        *((void**)&rv) = dlsym("?canBeSilkTouched@BlueFireBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool waterSpreadCausesSpawn() const{
        bool (BlueFireBlock::*rv)() const;
        *((void**)&rv) = dlsym("?waterSpreadCausesSpawn@BlueFireBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI BlueFireBlock(std::string const&, int);
    MCAPI static bool isValidBlueFireFuel(class BlockLegacy const&);

protected:

private:

};