// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AppConfigs {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPCONFIGS
public:
    class AppConfigs& operator=(class AppConfigs const&) = delete;
    AppConfigs(class AppConfigs const&) = delete;
#endif

public:
    /*0*/ virtual ~AppConfigs();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void __unk_vfn_2();
    /*4*/ virtual void __unk_vfn_3();
    /*5*/ virtual void __unk_vfn_4();
    /*6*/ virtual void __unk_vfn_5();
    /*7*/ virtual void __unk_vfn_6();
    /*8*/ virtual void __unk_vfn_7();
    /*9*/ virtual void __unk_vfn_8();
    /*10*/ virtual void __unk_vfn_9();
    /*11*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_11();
    /*13*/ virtual void __unk_vfn_12();
    /*14*/ virtual void __unk_vfn_13();
    /*15*/ virtual void __unk_vfn_14();
    /*16*/ virtual void __unk_vfn_15();
    /*17*/ virtual enum EducationEditionOffer getEducationEditionOffering() const;
    /*18*/ virtual void __unk_vfn_16();
    /*19*/ virtual void __unk_vfn_17();
    /*20*/ virtual bool supports3DExport() const;
    /*21*/ virtual void __unk_vfn_18();
    /*22*/ virtual struct ConnectionDefinition getConnectionDefinition() const;
    /*23*/ virtual void __unk_vfn_19();
    /*24*/ virtual void __unk_vfn_20();
    /*25*/ virtual void __unk_vfn_21();
    /*26*/ virtual void __unk_vfn_22();
    /*27*/ virtual void __unk_vfn_23();
    /*28*/ virtual void __unk_vfn_24();
    /*29*/ virtual void __unk_vfn_25();
    /*30*/ virtual std::vector<struct PackIdVersion> getAdditionalClientPacks(bool) const;
    /*31*/ virtual std::unique_ptr<class IScreenCapabilities> getScreenCapabilities(std::string const&) const;
    /*32*/ virtual std::unique_ptr<class IContentAccessibilityProvider> createContentAccessibility(class gsl::not_null<class Bedrock::NonOwnerPointer<class IEntitlementManager> >) const;
    /*33*/ virtual std::string getFeedbackURL() const;
    /*
    inline bool useFullScreenByDefault() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?useFullScreenByDefault@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool areQuizzesSupported() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?areQuizzesSupported@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool muteByDefault() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?muteByDefault@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool requireEduLevelSettings() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?requireEduLevelSettings@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool useNormalizedFontSize() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?useNormalizedFontSize@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool worldBuilderDisabled() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?worldBuilderDisabled@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool webSocketsDisabled() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?webSocketsDisabled@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool useEduDemoUpsellDialog() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?useEduDemoUpsellDialog@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool sendPermissionsTelemetry() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?sendPermissionsTelemetry@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool supportsChangingMultiplayerDuringPlay() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?supportsChangingMultiplayerDuringPlay@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool shouldPromptBeforeExit() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?shouldPromptBeforeExit@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool gameArgumentsNeedAuthentication() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?gameArgumentsNeedAuthentication@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool requireTrustedContent() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?requireTrustedContent@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isLessonProgressionSupported() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?isLessonProgressionSupported@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canUseAzureNotebooks() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?canUseAzureNotebooks@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool worldsAreSingleUse() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?worldsAreSingleUse@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline void setCanAccessWorldCallback(class IMinecraftGame& a0){
        void (AppConfigs::*rv)(class IMinecraftGame&);
        *((void**)&rv) = dlsym("?setCanAccessWorldCallback@AppConfigs@@UEAAXAEAVIMinecraftGame@@@Z");
        return (this->*rv)(std::forward<class IMinecraftGame&>(a0));
    }
    inline void loadFromData(class IAppConfigData const& a0){
        void (AppConfigs::*rv)(class IAppConfigData const&);
        *((void**)&rv) = dlsym("?loadFromData@AppConfigs@@UEAAXAEBVIAppConfigData@@@Z");
        return (this->*rv)(std::forward<class IAppConfigData const&>(a0));
    }
    inline void applyLevelDataOverride(class LevelData& a0) const{
        void (AppConfigs::*rv)(class LevelData&) const;
        *((void**)&rv) = dlsym("?applyLevelDataOverride@AppConfigs@@UEBAXAEAVLevelData@@@Z");
        return (this->*rv)(std::forward<class LevelData&>(a0));
    }
    inline bool allowGameArguments() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?allowGameArguments@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool areResourcePacksAllowed() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?areResourcePacksAllowed@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool arePremiumSkinPacksAllowed() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?arePremiumSkinPacksAllowed@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isChatScreenAllowed() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?isChatScreenAllowed@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isGameTabShownInSettings() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?isGameTabShownInSettings@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isPlayScreenAllowed() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?isPlayScreenAllowed@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isExternalPlayerCommunicationAllowed() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?isExternalPlayerCommunicationAllowed@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isCoursesCacheEnabled() const{
        bool (AppConfigs::*rv)() const;
        *((void**)&rv) = dlsym("?isCoursesCacheEnabled@AppConfigs@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline  ~AppConfigs(){
         (AppConfigs::*rv)();
        *((void**)&rv) = dlsym("??1AppConfigs@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI AppConfigs();

protected:

private:

};