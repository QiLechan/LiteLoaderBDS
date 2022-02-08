// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptServerNetworkEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERNETWORKEVENTLISTENER
public:
    class ScriptServerNetworkEventListener& operator=(class ScriptServerNetworkEventListener const&) = delete;
    ScriptServerNetworkEventListener(class ScriptServerNetworkEventListener const&) = delete;
    ScriptServerNetworkEventListener() = delete;
#endif

public:
    /*0*/ virtual ~ScriptServerNetworkEventListener();
    /*1*/ virtual enum EventResult onMessage(struct MessageEvent const&);
    /*2*/ virtual enum EventResult onEvent(struct ChatEvent const&);
    MCAPI ScriptServerNetworkEventListener(class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptWorldEvents>);

protected:

private:

};