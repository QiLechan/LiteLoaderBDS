// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class JigsawBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWBLOCKACTOR
public:
    class JigsawBlockActor& operator=(class JigsawBlockActor const&) = delete;
    JigsawBlockActor(class JigsawBlockActor const&) = delete;
    JigsawBlockActor() = delete;
#endif

public:
    /*0*/ virtual ~JigsawBlockActor();
    /*1*/ virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    /*2*/ virtual bool save(class CompoundTag&) const;
    /*3*/ virtual void saveBlockData(class CompoundTag&, class BlockSource&) const;
    /*4*/ virtual void loadBlockData(class CompoundTag const&, class BlockSource&, class DataLoadHelper&);
    /*5*/ virtual void onCustomTagLoadDone(class BlockSource&);
    /*6*/ virtual void tick(class BlockSource&);
    /*7*/ virtual void onChanged(class BlockSource&);
    /*8*/ virtual void onPlace(class BlockSource&);
    /*9*/ virtual void __unk_vfn_0();
    /*10*/ virtual void onRemoved(class BlockSource&);
    /*11*/ virtual void triggerEvent(int, int);
    /*12*/ virtual void clearCache();
    /*13*/ virtual void __unk_vfn_1();
    /*14*/ virtual float getShadowRadius(class BlockSource&) const;
    /*15*/ virtual void __unk_vfn_2();
    /*16*/ virtual void __unk_vfn_3();
    /*17*/ virtual std::string const& getCustomName() const;
    /*18*/ virtual std::string getName() const;
    /*19*/ virtual std::string getImmersiveReaderText(class BlockSource&);
    /*20*/ virtual int getRepairCost() const;
    /*21*/ virtual class PistonBlockActor* getOwningPiston(class BlockSource&);
    /*22*/ virtual void __unk_vfn_4();
    /*23*/ virtual void __unk_vfn_5();
    /*24*/ virtual float getDeletionDelayTimeSeconds() const;
    /*25*/ virtual void __unk_vfn_6();
    /*26*/ virtual void __unk_vfn_7();
    /*27*/ virtual void __unk_vfn_8();
    /*28*/ virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    /*29*/ virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    /*30*/ virtual void __unk_vfn_9();
    MCAPI JigsawBlockActor(class BlockPos const&);

protected:

private:

};