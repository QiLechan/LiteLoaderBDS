//Extra Part For PackManifest.hpp
#ifdef EXTRA_INCLUDE_PART_PACKMANIFEST
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct CapabilityRegisterer {
    CapabilityRegisterer() = delete;
    CapabilityRegisterer(CapabilityRegisterer const&) = delete;
    CapabilityRegisterer(CapabilityRegisterer const&&) = delete;
};

#endif
