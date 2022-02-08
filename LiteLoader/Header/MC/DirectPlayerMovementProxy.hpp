// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DirectPlayerMovementProxy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTPLAYERMOVEMENTPROXY
public:
    class DirectPlayerMovementProxy& operator=(class DirectPlayerMovementProxy const&) = delete;
    DirectPlayerMovementProxy(class DirectPlayerMovementProxy const&) = delete;
    DirectPlayerMovementProxy() = delete;
#endif

public:
    /*
    inline bool wasAutoJumping() const{
        bool (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?wasAutoJumping@DirectPlayerMovementProxy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline enum LoadingState getLoadingState() const{
        enum LoadingState (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?getLoadingState@DirectPlayerMovementProxy@@UEBA?AW4LoadingState@@XZ");
        return (this->*rv)();
    }
    inline struct IClientInstanceProxy* getClientInstance(){
        struct IClientInstanceProxy* (DirectPlayerMovementProxy::*rv)();
        *((void**)&rv) = dlsym("?getClientInstance@DirectPlayerMovementProxy@@UEAAPEAUIClientInstanceProxy@@XZ");
        return (this->*rv)();
    }
    inline struct IClientInstanceProxy const* getClientInstance() const{
        struct IClientInstanceProxy const* (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?getClientInstance@DirectPlayerMovementProxy@@UEBAPEBUIClientInstanceProxy@@XZ");
        return (this->*rv)();
    }
    inline void setLookBob(class Vec2 const& a0){
        void (DirectPlayerMovementProxy::*rv)(class Vec2 const&);
        *((void**)&rv) = dlsym("?setLookBob@DirectPlayerMovementProxy@@UEAAXAEBVVec2@@@Z");
        return (this->*rv)(std::forward<class Vec2 const&>(a0));
    }
    inline void setLastLookBob(class Vec2 const& a0){
        void (DirectPlayerMovementProxy::*rv)(class Vec2 const&);
        *((void**)&rv) = dlsym("?setLastLookBob@DirectPlayerMovementProxy@@UEAAXAEBVVec2@@@Z");
        return (this->*rv)(std::forward<class Vec2 const&>(a0));
    }
    inline void registerFramewiseActionOrStop(){
        void (DirectPlayerMovementProxy::*rv)();
        *((void**)&rv) = dlsym("?registerFramewiseActionOrStop@DirectPlayerMovementProxy@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void setJumpRidingScale(float a0){
        void (DirectPlayerMovementProxy::*rv)(float);
        *((void**)&rv) = dlsym("?setJumpRidingScale@DirectPlayerMovementProxy@@UEAAXM@Z");
        return (this->*rv)(std::forward<float>(a0));
    }
    inline void setCurrentLocalMoveVelocity(class Vec2 const& a0){
        void (DirectPlayerMovementProxy::*rv)(class Vec2 const&);
        *((void**)&rv) = dlsym("?setCurrentLocalMoveVelocity@DirectPlayerMovementProxy@@UEAAXAEBVVec2@@@Z");
        return (this->*rv)(std::forward<class Vec2 const&>(a0));
    }
    inline void setLastDelta(class Vec3 const& a0){
        void (DirectPlayerMovementProxy::*rv)(class Vec3 const&);
        *((void**)&rv) = dlsym("?setLastDelta@DirectPlayerMovementProxy@@UEAAXAEBVVec3@@@Z");
        return (this->*rv)(std::forward<class Vec3 const&>(a0));
    }
    inline void sendInput(){
        void (DirectPlayerMovementProxy::*rv)();
        *((void**)&rv) = dlsym("?sendInput@DirectPlayerMovementProxy@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void updateClientPlayerInputState(){
        void (DirectPlayerMovementProxy::*rv)();
        *((void**)&rv) = dlsym("?updateClientPlayerInputState@DirectPlayerMovementProxy@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void setLastPos(class Vec3 const& a0){
        void (DirectPlayerMovementProxy::*rv)(class Vec3 const&);
        *((void**)&rv) = dlsym("?setLastPos@DirectPlayerMovementProxy@@UEAAXAEBVVec3@@@Z");
        return (this->*rv)(std::forward<class Vec3 const&>(a0));
    }
    inline void sendPosition(){
        void (DirectPlayerMovementProxy::*rv)();
        *((void**)&rv) = dlsym("?sendPosition@DirectPlayerMovementProxy@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void setWasAutoJumping(bool a0){
        void (DirectPlayerMovementProxy::*rv)(bool);
        *((void**)&rv) = dlsym("?setWasAutoJumping@DirectPlayerMovementProxy@@UEAAX_N@Z");
        return (this->*rv)(std::forward<bool>(a0));
    }
    inline void setEmotePlayedEndedEarly(bool a0){
        void (DirectPlayerMovementProxy::*rv)(bool);
        *((void**)&rv) = dlsym("?setEmotePlayedEndedEarly@DirectPlayerMovementProxy@@UEAAX_N@Z");
        return (this->*rv)(std::forward<bool>(a0));
    }
    inline void sendClientAuthInput(){
        void (DirectPlayerMovementProxy::*rv)();
        *((void**)&rv) = dlsym("?sendClientAuthInput@DirectPlayerMovementProxy@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void fireEventPersonaEmotePlayed(){
        void (DirectPlayerMovementProxy::*rv)();
        *((void**)&rv) = dlsym("?fireEventPersonaEmotePlayed@DirectPlayerMovementProxy@@UEAAXXZ");
        return (this->*rv)();
    }
    inline struct IPlayerMovementProxy const* tryAsPlayer() const{
        struct IPlayerMovementProxy const* (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?tryAsPlayer@DirectPlayerMovementProxy@@UEBAPEBUIPlayerMovementProxy@@XZ");
        return (this->*rv)();
    }
    inline struct IPlayerMovementProxy* tryAsPlayer(){
        struct IPlayerMovementProxy* (DirectPlayerMovementProxy::*rv)();
        *((void**)&rv) = dlsym("?tryAsPlayer@DirectPlayerMovementProxy@@UEAAPEAUIPlayerMovementProxy@@XZ");
        return (this->*rv)();
    }
    inline float getJumpRidingScale(){
        float (DirectPlayerMovementProxy::*rv)();
        *((void**)&rv) = dlsym("?getJumpRidingScale@DirectPlayerMovementProxy@@UEAAMXZ");
        return (this->*rv)();
    }
    inline class Player* _getPlayer(){
        class Player* (DirectPlayerMovementProxy::*rv)();
        *((void**)&rv) = dlsym("?_getPlayer@DirectPlayerMovementProxy@@UEAAPEAVPlayer@@XZ");
        return (this->*rv)();
    }
    inline class Vec3 getLastPos() const{
        class Vec3 (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?getLastPos@DirectPlayerMovementProxy@@UEBA?AVVec3@@XZ");
        return (this->*rv)();
    }
    inline class Vec3 getLastDelta() const{
        class Vec3 (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?getLastDelta@DirectPlayerMovementProxy@@UEBA?AVVec3@@XZ");
        return (this->*rv)();
    }
    inline bool isSleeping() const{
        bool (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?isSleeping@DirectPlayerMovementProxy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline void _onMovePlayerPacketNormal(class Vec3 const& a0, class Vec2 const& a1, float a2){
        void (DirectPlayerMovementProxy::*rv)(class Vec3 const&, class Vec2 const&, float);
        *((void**)&rv) = dlsym("?_onMovePlayerPacketNormal@DirectPlayerMovementProxy@@UEAAXAEBVVec3@@AEBVVec2@@M@Z");
        return (this->*rv)(std::forward<class Vec3 const&>(a0), std::forward<class Vec2 const&>(a1), std::forward<float>(a2));
    }
    inline void _resetPos(bool a0){
        void (DirectPlayerMovementProxy::*rv)(bool);
        *((void**)&rv) = dlsym("?_resetPos@DirectPlayerMovementProxy@@UEAAX_N@Z");
        return (this->*rv)(std::forward<bool>(a0));
    }
    inline void _setPositionMode(int a0){
        void (DirectPlayerMovementProxy::*rv)(int);
        *((void**)&rv) = dlsym("?_setPositionMode@DirectPlayerMovementProxy@@UEAAXH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline bool areHandsBusy() const{
        bool (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?areHandsBusy@DirectPlayerMovementProxy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline void checkMovementStats(class Vec3 const& a0){
        void (DirectPlayerMovementProxy::*rv)(class Vec3 const&);
        *((void**)&rv) = dlsym("?checkMovementStats@DirectPlayerMovementProxy@@UEAAXAEBVVec3@@@Z");
        return (this->*rv)(std::forward<class Vec3 const&>(a0));
    }
    inline bool getAbilityBool(enum AbilitiesIndex a0) const{
        bool (DirectPlayerMovementProxy::*rv)(enum AbilitiesIndex) const;
        *((void**)&rv) = dlsym("?getAbilityBool@DirectPlayerMovementProxy@@UEBA_NW4AbilitiesIndex@@@Z");
        return (this->*rv)(std::forward<enum AbilitiesIndex>(a0));
    }
    inline float getAbilityFloat(enum AbilitiesIndex a0) const{
        float (DirectPlayerMovementProxy::*rv)(enum AbilitiesIndex) const;
        *((void**)&rv) = dlsym("?getAbilityFloat@DirectPlayerMovementProxy@@UEBAMW4AbilitiesIndex@@@Z");
        return (this->*rv)(std::forward<enum AbilitiesIndex>(a0));
    }
    inline float getBob() const{
        float (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?getBob@DirectPlayerMovementProxy@@UEBAMXZ");
        return (this->*rv)();
    }
    inline struct Tick const& getCurrentTick() const{
        struct Tick const& (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?getCurrentTick@DirectPlayerMovementProxy@@UEBAAEBUTick@@XZ");
        return (this->*rv)();
    }
    inline int getGlidingTicks() const{
        int (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?getGlidingTicks@DirectPlayerMovementProxy@@UEBAHXZ");
        return (this->*rv)();
    }
    inline enum InputMode getInputMode() const{
        enum InputMode (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?getInputMode@DirectPlayerMovementProxy@@UEBA?AW4InputMode@@XZ");
        return (this->*rv)();
    }
    inline float getLastBob() const{
        float (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?getLastBob@DirectPlayerMovementProxy@@UEBAMXZ");
        return (this->*rv)();
    }
    inline class Vec2 getLookBob() const{
        class Vec2 (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?getLookBob@DirectPlayerMovementProxy@@UEBA?AVVec2@@XZ");
        return (this->*rv)();
    }
    inline class MoveInputHandler* getMoveInputHandler(){
        class MoveInputHandler* (DirectPlayerMovementProxy::*rv)();
        *((void**)&rv) = dlsym("?getMoveInputHandler@DirectPlayerMovementProxy@@UEAAPEAVMoveInputHandler@@XZ");
        return (this->*rv)();
    }
    inline enum ClientPlayMode getPlayMode() const{
        enum ClientPlayMode (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?getPlayMode@DirectPlayerMovementProxy@@UEBA?AW4ClientPlayMode@@XZ");
        return (this->*rv)();
    }
    inline float getPlayerPaddleForce(enum Side a0) const{
        float (DirectPlayerMovementProxy::*rv)(enum Side) const;
        *((void**)&rv) = dlsym("?getPlayerPaddleForce@DirectPlayerMovementProxy@@UEBAMW4Side@@@Z");
        return (this->*rv)(std::forward<enum Side>(a0));
    }
    inline float getVRMoveAdjustAngle() const{
        float (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?getVRMoveAdjustAngle@DirectPlayerMovementProxy@@UEBAMXZ");
        return (this->*rv)();
    }
    inline bool hasMoveInput() const{
        bool (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?hasMoveInput@DirectPlayerMovementProxy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isAdventureSettingsAutoJump(){
        bool (DirectPlayerMovementProxy::*rv)();
        *((void**)&rv) = dlsym("?isAdventureSettingsAutoJump@DirectPlayerMovementProxy@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool isArmorFlyEnabled() const{
        bool (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?isArmorFlyEnabled@DirectPlayerMovementProxy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isAutoJumpEnabled() const{
        bool (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?isAutoJumpEnabled@DirectPlayerMovementProxy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isAutoJumping() const{
        bool (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?isAutoJumping@DirectPlayerMovementProxy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isEmoting(){
        bool (DirectPlayerMovementProxy::*rv)();
        *((void**)&rv) = dlsym("?isEmoting@DirectPlayerMovementProxy@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool isFlying() const{
        bool (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?isFlying@DirectPlayerMovementProxy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isLocalPlayer() const{
        bool (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?isLocalPlayer@DirectPlayerMovementProxy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isPaddling(enum Side a0) const{
        bool (DirectPlayerMovementProxy::*rv)(enum Side) const;
        *((void**)&rv) = dlsym("?isPaddling@DirectPlayerMovementProxy@@UEBA_NW4Side@@@Z");
        return (this->*rv)(std::forward<enum Side>(a0));
    }
    inline bool isServerAuthoritativeMovement() const{
        bool (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?isServerAuthoritativeMovement@DirectPlayerMovementProxy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isSlowedByItemUse() const{
        bool (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?isSlowedByItemUse@DirectPlayerMovementProxy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isUsingItem() const{
        bool (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?isUsingItem@DirectPlayerMovementProxy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline void sendAdventureSettingsPacket(){
        void (DirectPlayerMovementProxy::*rv)();
        *((void**)&rv) = dlsym("?sendAdventureSettingsPacket@DirectPlayerMovementProxy@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void sendPacket(class PassengerJumpPacket& a0){
        void (DirectPlayerMovementProxy::*rv)(class PassengerJumpPacket&);
        *((void**)&rv) = dlsym("?sendPacket@DirectPlayerMovementProxy@@UEAAXAEAVPassengerJumpPacket@@@Z");
        return (this->*rv)(std::forward<class PassengerJumpPacket&>(a0));
    }
    inline void sendPacket(class PlayerActionPacket& a0){
        void (DirectPlayerMovementProxy::*rv)(class PlayerActionPacket&);
        *((void**)&rv) = dlsym("?sendPacket@DirectPlayerMovementProxy@@UEAAXAEAVPlayerActionPacket@@@Z");
        return (this->*rv)(std::forward<class PlayerActionPacket&>(a0));
    }
    inline void sendPlayerInput(){
        void (DirectPlayerMovementProxy::*rv)();
        *((void**)&rv) = dlsym("?sendPlayerInput@DirectPlayerMovementProxy@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void sendPlayerMove(){
        void (DirectPlayerMovementProxy::*rv)();
        *((void**)&rv) = dlsym("?sendPlayerMove@DirectPlayerMovementProxy@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void setAbilityBool(enum AbilitiesIndex a0, bool a1){
        void (DirectPlayerMovementProxy::*rv)(enum AbilitiesIndex, bool);
        *((void**)&rv) = dlsym("?setAbilityBool@DirectPlayerMovementProxy@@UEAAXW4AbilitiesIndex@@_N@Z");
        return (this->*rv)(std::forward<enum AbilitiesIndex>(a0), std::forward<bool>(a1));
    }
    inline void setAbilityFloat(enum AbilitiesIndex a0, float a1){
        void (DirectPlayerMovementProxy::*rv)(enum AbilitiesIndex, float);
        *((void**)&rv) = dlsym("?setAbilityFloat@DirectPlayerMovementProxy@@UEAAXW4AbilitiesIndex@@M@Z");
        return (this->*rv)(std::forward<enum AbilitiesIndex>(a0), std::forward<float>(a1));
    }
    inline void setAutoJumping(bool a0){
        void (DirectPlayerMovementProxy::*rv)(bool);
        *((void**)&rv) = dlsym("?setAutoJumping@DirectPlayerMovementProxy@@UEAAX_N@Z");
        return (this->*rv)(std::forward<bool>(a0));
    }
    inline void setBob(float a0){
        void (DirectPlayerMovementProxy::*rv)(float);
        *((void**)&rv) = dlsym("?setBob@DirectPlayerMovementProxy@@UEAAXM@Z");
        return (this->*rv)(std::forward<float>(a0));
    }
    inline void setEmotingStatus(bool a0){
        void (DirectPlayerMovementProxy::*rv)(bool);
        *((void**)&rv) = dlsym("?setEmotingStatus@DirectPlayerMovementProxy@@UEAAX_N@Z");
        return (this->*rv)(std::forward<bool>(a0));
    }
    inline void setHandsBusy(bool a0){
        void (DirectPlayerMovementProxy::*rv)(bool);
        *((void**)&rv) = dlsym("?setHandsBusy@DirectPlayerMovementProxy@@UEAAX_N@Z");
        return (this->*rv)(std::forward<bool>(a0));
    }
    inline void setHasMoveInput(bool a0){
        void (DirectPlayerMovementProxy::*rv)(bool);
        *((void**)&rv) = dlsym("?setHasMoveInput@DirectPlayerMovementProxy@@UEAAX_N@Z");
        return (this->*rv)(std::forward<bool>(a0));
    }
    inline void setLastBob(float a0){
        void (DirectPlayerMovementProxy::*rv)(float);
        *((void**)&rv) = dlsym("?setLastBob@DirectPlayerMovementProxy@@UEAAXM@Z");
        return (this->*rv)(std::forward<float>(a0));
    }
    inline void setPlayerPaddleForce(enum Side a0, float a1){
        void (DirectPlayerMovementProxy::*rv)(enum Side, float);
        *((void**)&rv) = dlsym("?setPlayerPaddleForce@DirectPlayerMovementProxy@@UEAAXW4Side@@M@Z");
        return (this->*rv)(std::forward<enum Side>(a0), std::forward<float>(a1));
    }
    inline bool shouldSendPosition() const{
        bool (DirectPlayerMovementProxy::*rv)() const;
        *((void**)&rv) = dlsym("?shouldSendPosition@DirectPlayerMovementProxy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline void startGliding(){
        void (DirectPlayerMovementProxy::*rv)();
        *((void**)&rv) = dlsym("?startGliding@DirectPlayerMovementProxy@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void stopGliding(){
        void (DirectPlayerMovementProxy::*rv)();
        *((void**)&rv) = dlsym("?stopGliding@DirectPlayerMovementProxy@@UEAAXXZ");
        return (this->*rv)();
    }
    inline struct PlayerActionComponent* tryGetPlayerActionComponent(){
        struct PlayerActionComponent* (DirectPlayerMovementProxy::*rv)();
        *((void**)&rv) = dlsym("?tryGetPlayerActionComponent@DirectPlayerMovementProxy@@UEAAPEAUPlayerActionComponent@@XZ");
        return (this->*rv)();
    }
    inline void updateTouch(){
        void (DirectPlayerMovementProxy::*rv)();
        *((void**)&rv) = dlsym("?updateTouch@DirectPlayerMovementProxy@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:

private:

};