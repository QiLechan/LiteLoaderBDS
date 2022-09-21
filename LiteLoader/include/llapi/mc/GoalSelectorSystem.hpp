/**
 * @file  GoalSelectorSystem.hpp
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
 * @brief MC class GoalSelectorSystem.
 *
 */
class GoalSelectorSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOALSELECTORSYSTEM
public:
    class GoalSelectorSystem& operator=(class GoalSelectorSystem const &) = delete;
    GoalSelectorSystem(class GoalSelectorSystem const &) = delete;
    GoalSelectorSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1153881131
     */
    virtual ~GoalSelectorSystem();
    /**
     * @vftbl  1
     * @hash   -1408478591
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@GoalSelectorSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   1119273905
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @symbol ?_tickGoalSelectorComponent@GoalSelectorSystem@@CAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorTickedFlag@@@@V?$FlagComponent@UActorFlag@@@@VGoalSelectorComponent@@@@@Z
     * @hash   -725139261
     */
    MCAPI static void _tickGoalSelectorComponent(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class GoalSelectorComponent> &);

private:

};