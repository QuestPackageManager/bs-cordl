#pragma once
// IWYU pragma private; include "GlobalNamespace/INetworkConfig.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(INetworkConfig)
namespace GlobalNamespace {
class DnsEndPoint;
}
namespace GlobalNamespace {
struct ServiceEnvironment;
}
// Forward declare root types
namespace GlobalNamespace {
class INetworkConfig;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::INetworkConfig);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: INetworkConfig
class CORDL_TYPE INetworkConfig {
public:
  // Declarations
  __declspec(property(get = get_appId)) ::StringW appId;

  __declspec(property(get = get_discoveryPort)) int32_t discoveryPort;

  __declspec(property(get = get_forceGameLift)) bool forceGameLift;

  __declspec(property(get = get_graphAccessToken)) ::StringW graphAccessToken;

  __declspec(property(get = get_graphUrl)) ::StringW graphUrl;

  __declspec(property(get = get_masterServerEndPoint)) ::GlobalNamespace::DnsEndPoint* masterServerEndPoint;

  __declspec(property(get = get_maxPartySize)) int32_t maxPartySize;

  __declspec(property(get = get_multiplayerPort)) int32_t multiplayerPort;

  __declspec(property(get = get_multiplayerStatusUrl)) ::StringW multiplayerStatusUrl;

  __declspec(property(get = get_partyPort)) int32_t partyPort;

  __declspec(property(get = get_quickPlaySetupUrl)) ::StringW quickPlaySetupUrl;

  __declspec(property(get = get_serviceEnvironment)) ::GlobalNamespace::ServiceEnvironment serviceEnvironment;

  /// @brief Method get_appId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_appId();

  /// @brief Method get_discoveryPort, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_discoveryPort();

  /// @brief Method get_forceGameLift, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_forceGameLift();

  /// @brief Method get_graphAccessToken, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_graphAccessToken();

  /// @brief Method get_graphUrl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_graphUrl();

  /// @brief Method get_masterServerEndPoint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::DnsEndPoint* get_masterServerEndPoint();

  /// @brief Method get_maxPartySize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_maxPartySize();

  /// @brief Method get_multiplayerPort, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_multiplayerPort();

  /// @brief Method get_multiplayerStatusUrl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_multiplayerStatusUrl();

  /// @brief Method get_partyPort, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_partyPort();

  /// @brief Method get_quickPlaySetupUrl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_quickPlaySetupUrl();

  /// @brief Method get_serviceEnvironment, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ServiceEnvironment get_serviceEnvironment();

  // Ctor Parameters [CppParam { name: "", ty: "INetworkConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INetworkConfig(INetworkConfig const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14806 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INetworkConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INetworkConfig*, "", "INetworkConfig");
