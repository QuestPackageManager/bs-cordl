#pragma once
// IWYU pragma private; include "GlobalNamespace/INetworkConfig.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(INetworkConfig)
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
  __declspec(property(get = get_customLocation)) ::StringW customLocation;

  __declspec(property(get = get_discoveryPort)) int32_t discoveryPort;

  __declspec(property(get = get_forceGameLift)) bool forceGameLift;

  __declspec(property(get = get_graphAccessToken)) ::StringW graphAccessToken;

  __declspec(property(get = get_graphAppId)) uint64_t graphAppId;

  __declspec(property(get = get_graphQLUrl)) ::StringW graphQLUrl;

  __declspec(property(get = get_graphUrl)) ::StringW graphUrl;

  __declspec(property(get = get_localServerPort)) int32_t localServerPort;

  __declspec(property(get = get_masterServerPort)) int32_t masterServerPort;

  __declspec(property(get = get_maxPartySize)) int32_t maxPartySize;

  __declspec(property(get = get_multiplayerPort)) int32_t multiplayerPort;

  __declspec(property(get = get_multiplayerStatusUrl)) ::StringW multiplayerStatusUrl;

  __declspec(property(get = get_partyPort)) int32_t partyPort;

  __declspec(property(get = get_quickPlaySetupUrl)) ::StringW quickPlaySetupUrl;

  __declspec(property(get = get_serviceEnvironment)) ::GlobalNamespace::ServiceEnvironment serviceEnvironment;

  __declspec(property(get = get_useLocalServer)) bool useLocalServer;

  /// @brief Method get_customLocation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_customLocation();

  /// @brief Method get_discoveryPort, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_discoveryPort();

  /// @brief Method get_forceGameLift, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_forceGameLift();

  /// @brief Method get_graphAccessToken, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_graphAccessToken();

  /// @brief Method get_graphAppId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline uint64_t get_graphAppId();

  /// @brief Method get_graphQLUrl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_graphQLUrl();

  /// @brief Method get_graphUrl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_graphUrl();

  /// @brief Method get_localServerPort, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_localServerPort();

  /// @brief Method get_masterServerPort, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_masterServerPort();

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

  /// @brief Method get_useLocalServer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_useLocalServer();

  // Ctor Parameters [CppParam { name: "", ty: "INetworkConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INetworkConfig(INetworkConfig const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18965 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INetworkConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INetworkConfig*, "", "INetworkConfig");
