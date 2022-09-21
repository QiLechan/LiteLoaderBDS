/**
 * @file  BlockPosTrackerSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockPosTrackerSystem.
 *
 */
class BlockPosTrackerSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPOSTRACKERSYSTEM
public:
    class BlockPosTrackerSystem& operator=(class BlockPosTrackerSystem const &) = delete;
    BlockPosTrackerSystem(class BlockPosTrackerSystem const &) = delete;
    BlockPosTrackerSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   785694478
     */
    virtual ~BlockPosTrackerSystem();
    /**
     * @vftbl  1
     * @hash   -1408478591
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@BlockPosTrackerSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   1661244000
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @symbol ?_tickBlockPosTrackerComponent@BlockPosTrackerSystem@@SAXPEAVActor@@AEAVBlockPosTrackerComponent@@@Z
     * @hash   -1059440470
     */
    MCAPI static void _tickBlockPosTrackerComponent(class Actor *, class BlockPosTrackerComponent &);

};