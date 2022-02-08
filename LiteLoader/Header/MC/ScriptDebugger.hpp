// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptDebugger {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDEBUGGER
public:
    class ScriptDebugger& operator=(class ScriptDebugger const&) = delete;
    ScriptDebugger(class ScriptDebugger const&) = delete;
    ScriptDebugger() = delete;
#endif

public:
    /*0*/ virtual bool listen(unsigned short);
    /*1*/ virtual bool connect(std::string const&, unsigned short);
    /*2*/ virtual void close();
    /*3*/ virtual ~ScriptDebugger();
    MCAPI ScriptDebugger(class Scripting::ScriptEngine&, class IScriptDebuggerWatchdog&);
    MCAPI void checkConnections();

protected:

private:
    MCAPI class Scripting::IDebuggerController* _createController();
    MCAPI void _releaseController();

};