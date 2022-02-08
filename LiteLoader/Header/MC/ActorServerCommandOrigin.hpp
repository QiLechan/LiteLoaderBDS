// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "ActorCommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorServerCommandOrigin : public ActorCommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSERVERCOMMANDORIGIN
public:
    class ActorServerCommandOrigin& operator=(class ActorServerCommandOrigin const&) = delete;
    ActorServerCommandOrigin(class ActorServerCommandOrigin const&) = delete;
    ActorServerCommandOrigin() = delete;
#endif

public:
    /*0*/ virtual ~ActorServerCommandOrigin();
    /*1*/ virtual std::string const& getRequestId() const;
    /*2*/ virtual class std::optional<class Vec2> getRotation() const;
    /*3*/ virtual class Level* getLevel() const;
    /*4*/ virtual enum CommandPermissionLevel getPermissionsLevel() const;
    /*5*/ virtual std::unique_ptr<class CommandOrigin> clone() const;
    /*6*/ virtual class std::optional<class BlockPos> getCursorHitBlockPos() const;
    /*7*/ virtual class std::optional<class Vec3> getCursorHitPos() const;
    /*8*/ virtual void __unk_vfn_0();
    /*9*/ virtual void __unk_vfn_1();
    /*10*/ virtual void __unk_vfn_2();
    /*11*/ virtual void __unk_vfn_3();
    /*12*/ virtual void __unk_vfn_4();
    /*13*/ virtual enum CommandOriginType getOriginType() const;
    /*14*/ virtual void __unk_vfn_5();
    /*15*/ virtual void handleCommandOutputCallback(class Json::Value&&) const;
    /*16*/ virtual void updateValues();
    /*17*/ virtual class CompoundTag serialize() const;
    /*18*/ virtual bool isValid() const;
    /*19*/ virtual void _setUUID(class mce::UUID const&);
    /*
    inline bool isSelectorExpansionAllowed() const{
        bool (ActorServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?isSelectorExpansionAllowed@ActorServerCommandOrigin@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI ActorServerCommandOrigin(class Actor&);
    MCAPI void setTargetOther(struct ActorUniqueID);
    MCAPI static std::unique_ptr<class ActorServerCommandOrigin> load(class CompoundTag const&, class Level&);

protected:

private:

};