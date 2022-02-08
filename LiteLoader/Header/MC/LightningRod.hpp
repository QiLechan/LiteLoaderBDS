// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LightningRod : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIGHTNINGROD
public:
    class LightningRod& operator=(class LightningRod const&) = delete;
    LightningRod(class LightningRod const&) = delete;
    LightningRod() = delete;
#endif

public:
    /*0*/ virtual ~LightningRod();
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
    /*11*/ virtual void __unk_vfn_4();
    /*12*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
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
    /*33*/ virtual void __unk_vfn_25();
    /*34*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*35*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*36*/ virtual void __unk_vfn_26();
    /*37*/ virtual void __unk_vfn_27();
    /*38*/ virtual void __unk_vfn_28();
    /*39*/ virtual void __unk_vfn_29();
    /*40*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*41*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*42*/ virtual void __unk_vfn_30();
    /*43*/ virtual void __unk_vfn_31();
    /*44*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*45*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*46*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*47*/ virtual void __unk_vfn_32();
    /*48*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
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
    /*63*/ virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;
    /*64*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*65*/ virtual void __unk_vfn_43();
    /*66*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*67*/ virtual void __unk_vfn_44();
    /*68*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*69*/ virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /*70*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*71*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*72*/ virtual void __unk_vfn_45();
    /*73*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*74*/ virtual void __unk_vfn_46();
    /*75*/ virtual void __unk_vfn_47();
    /*76*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*77*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*78*/ virtual int getExperienceDrop(class Random&) const;
    /*79*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*80*/ virtual void __unk_vfn_48();
    /*81*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*82*/ virtual void __unk_vfn_49();
    /*83*/ virtual void __unk_vfn_50();
    /*84*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*85*/ virtual void __unk_vfn_51();
    /*86*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*87*/ virtual void __unk_vfn_52();
    /*88*/ virtual int getIconYOffset() const;
    /*89*/ virtual void __unk_vfn_53();
    /*90*/ virtual int getColor(class Block const&) const;
    /*91*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*92*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*93*/ virtual void __unk_vfn_54();
    /*94*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*95*/ virtual void __unk_vfn_55();
    /*96*/ virtual class Block const& getRenderBlock() const;
    /*97*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*98*/ virtual enum Flip getFaceFlip(unsigned char, class Block const&) const;
    /*99*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*100*/ virtual void __unk_vfn_56();
    /*101*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;
    /*102*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*103*/ virtual void __unk_vfn_57();
    /*104*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*105*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*106*/ virtual void _addHardCodedBlockComponents();
    /*107*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*108*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*109*/ virtual void onStandOn(class EntityContext&, class BlockPos const&) const;
    /*110*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*111*/ virtual void __unk_vfn_58();
    /*112*/ virtual void __unk_vfn_59();
    /*113*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*114*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*115*/ virtual void __unk_vfn_60();
    /*116*/ virtual void __unk_vfn_61();
    /*117*/ virtual void __unk_vfn_62();
    /*118*/ virtual int getExtraRenderLayers() const;
    /*119*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*120*/ virtual void __unk_vfn_63();
    /*121*/ virtual void __unk_vfn_64();
    /*
    inline bool canConnect(class Block const& a0, unsigned char a1, class Block const& a2) const{
        bool (LightningRod::*rv)(class Block const&, unsigned char, class Block const&) const;
        *((void**)&rv) = dlsym("?canConnect@LightningRod@@UEBA_NAEBVBlock@@E0@Z");
        return (this->*rv)(std::forward<class Block const&>(a0), std::forward<unsigned char>(a1), std::forward<class Block const&>(a2));
    }
    inline bool canContainLiquid() const{
        bool (LightningRod::*rv)() const;
        *((void**)&rv) = dlsym("?canContainLiquid@LightningRod@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool shouldConnectToRedstone(class BlockSource& a0, class BlockPos const& a1, int a2) const{
        bool (LightningRod::*rv)(class BlockSource&, class BlockPos const&, int) const;
        *((void**)&rv) = dlsym("?shouldConnectToRedstone@LightningRod@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<int>(a2));
    }
    inline bool isSignalSource() const{
        bool (LightningRod::*rv)() const;
        *((void**)&rv) = dlsym("?isSignalSource@LightningRod@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI LightningRod(std::string const&, int, class Material const&);

protected:

private:

};