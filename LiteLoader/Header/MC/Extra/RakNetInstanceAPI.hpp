//Extra Part For RakNetInstance.hpp
#ifdef EXTRA_INCLUDE_PART_RAKNETINSTANCE
// Include Headers or Declare Types Here

#else
// Add Member There
public:
class RakNetNetworkPeer {
public:
    RakNetNetworkPeer() = delete;
    RakNetNetworkPeer(RakNetNetworkPeer const&) = delete;
    RakNetNetworkPeer(RakNetNetworkPeer const&&) = delete;
};
enum NATState;

#endif
