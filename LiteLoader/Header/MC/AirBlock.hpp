// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AirBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AIRBLOCK
public:
    class AirBlock& operator=(class AirBlock const&) = delete;
    AirBlock(class AirBlock const&) = delete;
    AirBlock() = delete;
#endif

public:
    /*0*/ virtual ~AirBlock();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void __unk_vfn_2();
    /*4*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*5*/ virtual void addAABBs(class Block const&, class BlockSource&, class BlockPos const&, class AABB const*, std::vector<class AABB>&) const;
    /*6*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*7*/ virtual void __unk_vfn_3();
    /*8*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*9*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*10*/ virtual void __unk_vfn_4();
    /*11*/ virtual void __unk_vfn_5();
    /*12*/ virtual void __unk_vfn_6();
    /*13*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*14*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
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
    /*34*/ virtual void __unk_vfn_26();
    /*35*/ virtual void __unk_vfn_27();
    /*36*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*37*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*38*/ virtual void __unk_vfn_28();
    /*39*/ virtual void __unk_vfn_29();
    /*40*/ virtual void __unk_vfn_30();
    /*41*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*42*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*43*/ virtual void __unk_vfn_31();
    /*44*/ virtual void __unk_vfn_32();
    /*45*/ virtual void __unk_vfn_33();
    /*46*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*47*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*48*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*49*/ virtual void __unk_vfn_34();
    /*50*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*51*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*52*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*53*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*54*/ virtual void __unk_vfn_35();
    /*55*/ virtual void __unk_vfn_36();
    /*56*/ virtual void __unk_vfn_37();
    /*57*/ virtual void __unk_vfn_38();
    /*58*/ virtual void __unk_vfn_39();
    /*59*/ virtual void __unk_vfn_40();
    /*60*/ virtual void __unk_vfn_41();
    /*61*/ virtual void __unk_vfn_42();
    /*62*/ virtual void __unk_vfn_43();
    /*63*/ virtual void __unk_vfn_44();
    /*64*/ virtual void __unk_vfn_45();
    /*65*/ virtual void __unk_vfn_46();
    /*66*/ virtual void __unk_vfn_47();
    /*67*/ virtual void __unk_vfn_48();
    /*68*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*69*/ virtual void __unk_vfn_49();
    /*70*/ virtual void __unk_vfn_50();
    /*71*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*72*/ virtual void __unk_vfn_51();
    /*73*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*74*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*75*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*76*/ virtual void __unk_vfn_52();
    /*77*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*78*/ virtual void __unk_vfn_53();
    /*79*/ virtual void __unk_vfn_54();
    /*80*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*81*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*82*/ virtual int getExperienceDrop(class Random&) const;
    /*83*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*84*/ virtual void __unk_vfn_55();
    /*85*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*86*/ virtual void __unk_vfn_56();
    /*87*/ virtual void __unk_vfn_57();
    /*88*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*89*/ virtual void __unk_vfn_58();
    /*90*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*91*/ virtual void __unk_vfn_59();
    /*92*/ virtual int getIconYOffset() const;
    /*93*/ virtual void __unk_vfn_60();
    /*94*/ virtual int getColor(class Block const&) const;
    /*95*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*96*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*97*/ virtual void __unk_vfn_61();
    /*98*/ virtual class AABB const& getVisualShapeInWorld(class Block const&, class BlockSource const&, class BlockPos const&, class AABB&, bool) const;
    /*99*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*100*/ virtual void __unk_vfn_62();
    /*101*/ virtual class Block const& getRenderBlock() const;
    /*102*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*103*/ virtual enum Flip getFaceFlip(unsigned char, class Block const&) const;
    /*104*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*105*/ virtual void __unk_vfn_63();
    /*106*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*107*/ virtual void __unk_vfn_64();
    /*108*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*109*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*110*/ virtual void _addHardCodedBlockComponents();
    /*111*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*112*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*113*/ virtual void onStandOn(class EntityContext&, class BlockPos const&) const;
    /*114*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*115*/ virtual void __unk_vfn_65();
    /*116*/ virtual void __unk_vfn_66();
    /*117*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*118*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*119*/ virtual void __unk_vfn_67();
    /*120*/ virtual void __unk_vfn_68();
    /*121*/ virtual void __unk_vfn_69();
    /*122*/ virtual int getExtraRenderLayers() const;
    /*123*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*124*/ virtual void __unk_vfn_70();
    /*125*/ virtual void __unk_vfn_71();
    /*
    inline bool addCollisionShapes(class Block const& a0, class BlockSource& a1, class BlockPos const& a2, class AABB const* a3, std::vector<class AABB>& a4, class optional_ref<struct IActorMovementProxy> a5) const{
        bool (AirBlock::*rv)(class Block const&, class BlockSource&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<struct IActorMovementProxy>) const;
        *((void**)&rv) = dlsym("?addCollisionShapes@AirBlock@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@UIActorMovementProxy@@@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0), std::forward<class BlockSource&>(a1), std::forward<class BlockPos const&>(a2), std::forward<class AABB const*>(a3), std::forward<std::vector<class AABB>&>(a4), std::forward<class optional_ref<struct IActorMovementProxy>>(a5));
    }
    inline bool canHaveExtraData() const{
        bool (AirBlock::*rv)() const;
        *((void**)&rv) = dlsym("?canHaveExtraData@AirBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool tryToPlace(class BlockSource& a0, class BlockPos const& a1, class Block const& a2, struct ActorBlockSyncMessage const* a3) const{
        bool (AirBlock::*rv)(class BlockSource&, class BlockPos const&, class Block const&, struct ActorBlockSyncMessage const*) const;
        *((void**)&rv) = dlsym("?tryToPlace@AirBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEBUActorBlockSyncMessage@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2), std::forward<struct ActorBlockSyncMessage const*>(a3));
    }
    inline bool canBeSilkTouched() const{
        bool (AirBlock::*rv)() const;
        *((void**)&rv) = dlsym("?canBeSilkTouched@AirBlock@@MEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isObstructingChests(class BlockSource& a0, class BlockPos const& a1) const{
        bool (AirBlock::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?isObstructingChests@AirBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline bool mayPick() const{
        bool (AirBlock::*rv)() const;
        *((void**)&rv) = dlsym("?mayPick@AirBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool mayPlace(class BlockSource& a0, class BlockPos const& a1) const{
        bool (AirBlock::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?mayPlace@AirBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline bool playerWillDestroy(class Player& a0, class BlockPos const& a1, class Block const& a2) const{
        bool (AirBlock::*rv)(class Player&, class BlockPos const&, class Block const&) const;
        *((void**)&rv) = dlsym("?playerWillDestroy@AirBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class Player&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2));
    }
    inline bool mayPlace(class BlockSource& a0, class BlockPos const& a1, unsigned char a2) const{
        bool (AirBlock::*rv)(class BlockSource&, class BlockPos const&, unsigned char) const;
        *((void**)&rv) = dlsym("?mayPlace@AirBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<unsigned char>(a2));
    }
    inline bool mayPick(class BlockSource const& a0, class Block const& a1, bool a2) const{
        bool (AirBlock::*rv)(class BlockSource const&, class Block const&, bool) const;
        *((void**)&rv) = dlsym("?mayPick@AirBlock@@UEBA_NAEBVBlockSource@@AEBVBlock@@_N@Z");
        return (this->*rv)(std::forward<class BlockSource const&>(a0), std::forward<class Block const&>(a1), std::forward<bool>(a2));
    }
    inline bool getCollisionShape(class AABB& a0, class Block const& a1, class BlockSource const& a2, class BlockPos const& a3, class optional_ref<struct IActorMovementProxy> a4) const{
        bool (AirBlock::*rv)(class AABB&, class Block const&, class BlockSource const&, class BlockPos const&, class optional_ref<struct IActorMovementProxy>) const;
        *((void**)&rv) = dlsym("?getCollisionShape@AirBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@V?$optional_ref@UIActorMovementProxy@@@@@Z");
        return (this->*rv)(std::forward<class AABB&>(a0), std::forward<class Block const&>(a1), std::forward<class BlockSource const&>(a2), std::forward<class BlockPos const&>(a3), std::forward<class optional_ref<struct IActorMovementProxy>>(a4));
    }
    inline bool checkIsPathable(class Actor& a0, class BlockPos const& a1, class BlockPos const& a2) const{
        bool (AirBlock::*rv)(class Actor&, class BlockPos const&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?checkIsPathable@AirBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z");
        return (this->*rv)(std::forward<class Actor&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class BlockPos const&>(a2));
    }
    */
    MCAPI AirBlock(std::string const&, int, class Material const&);

protected:

private:

};