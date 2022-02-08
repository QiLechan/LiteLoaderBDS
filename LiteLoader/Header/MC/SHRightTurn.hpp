// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SHRightTurn : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHRIGHTTURN
public:
    class SHRightTurn& operator=(class SHRightTurn const&) = delete;
    SHRightTurn(class SHRightTurn const&) = delete;
    SHRightTurn() = delete;
#endif

public:
    /*0*/ virtual ~SHRightTurn();
    /*1*/ virtual class PoolElementStructurePiece* asPoolElement();
    /*2*/ virtual enum StructurePieceType getType() const;
    /*3*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*4*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*5*/ virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /*6*/ virtual void __unk_vfn_0();
    /*7*/ virtual void addHardcodedSpawnAreas(class LevelChunk&) const;

protected:

private:

};