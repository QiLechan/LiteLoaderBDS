// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorAnimationControllerStatePlayer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONCONTROLLERSTATEPLAYER
public:
    class ActorAnimationControllerStatePlayer& operator=(class ActorAnimationControllerStatePlayer const&) = delete;
    ActorAnimationControllerStatePlayer(class ActorAnimationControllerStatePlayer const&) = delete;
    ActorAnimationControllerStatePlayer() = delete;
#endif

public:
    /*0*/ virtual ~ActorAnimationControllerStatePlayer();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void resetAnimation();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual void __unk_vfn_2();
    /*5*/ virtual void __unk_vfn_3();
    /*6*/ virtual bool hasAnimationFinished() const;
    /*7*/ virtual class std::shared_ptr<class ActorAnimationPlayer> findAnimation(class HashedString const&);
    /*8*/ virtual enum ActorAnimationType getAnimationType() const;
    /*9*/ virtual class HashedString const& getRawName() const;
    /*
    inline void bindParticleEffects(class std::unordered_map<class HashedString, class HashedString, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class HashedString> > > const& a0){
        void (ActorAnimationControllerStatePlayer::*rv)(class std::unordered_map<class HashedString, class HashedString, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class HashedString> > > const&);
        *((void**)&rv) = dlsym("?bindParticleEffects@ActorAnimationControllerStatePlayer@@UEAAXAEBV?$unordered_map@VHashedString@@V1@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V1@@std@@@3@@std@@@Z");
        return (this->*rv)(std::forward<class std::unordered_map<class HashedString, class HashedString, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class HashedString> > > const&>(a0));
    }
    inline void bindSoundEffects(class std::unordered_map<class HashedString, std::string, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, std::string > > > const& a0){
        void (ActorAnimationControllerStatePlayer::*rv)(class std::unordered_map<class HashedString, std::string, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, std::string > > > const&);
        *((void**)&rv) = dlsym("?bindSoundEffects@ActorAnimationControllerStatePlayer@@UEAAXAEBV?$unordered_map@VHashedString@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@VHashedString@@@3@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@@Z");
        return (this->*rv)(std::forward<class std::unordered_map<class HashedString, std::string, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, std::string > > > const&>(a0));
    }
    */
    MCAPI ActorAnimationControllerStatePlayer(class HashedString const&, class ActorAnimationControllerPlayer&, class std::shared_ptr<class ActorAnimationControllerState>, class AnimationComponent&, class ExpressionNode const&, class std::set<class HashedString, struct std::hash<class HashedString>, class std::allocator<class HashedString> >&);
    MCAPI bool allAnimationsFinished() const;
    MCAPI bool anyAnimationsFinished() const;

protected:

private:

};