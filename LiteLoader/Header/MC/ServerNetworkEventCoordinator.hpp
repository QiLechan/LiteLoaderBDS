// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ServerNetworkEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERNETWORKEVENTCOORDINATOR
public:
    class ServerNetworkEventCoordinator& operator=(class ServerNetworkEventCoordinator const&) = delete;
    ServerNetworkEventCoordinator(class ServerNetworkEventCoordinator const&) = delete;
    ServerNetworkEventCoordinator() = delete;
#endif

public:
    /*0*/ virtual ~ServerNetworkEventCoordinator();
    MCAPI class ServerNetworkEventHandler& getServerNetworkEventHandler();
    MCAPI void registerServerNetworkEventHandler(std::unique_ptr<class ServerNetworkEventHandler>&&);
    MCAPI enum CoordinatorResult sendEvent(class EventRef<struct MutableServerNetworkGameplayEvent<enum CoordinatorResult> >);
    MCAPI void sendMessage(struct MessageEvent&);

protected:

private:

};