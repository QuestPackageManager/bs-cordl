#pragma once
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
// Type: ::INetworkConfig
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::INetworkConfig*
class CORDL_TYPE INetworkConfig {
public:
  // Declarations
  __declspec(property(get = get_discoveryPort)) int32_t discoveryPort;

  __declspec(property(get = get_forceGameLift)) bool forceGameLift;

  __declspec(property(get = get_graphAccessToken))::StringW graphAccessToken;

  __declspec(property(get = get_graphUrl))::StringW graphUrl;

  __declspec(property(get = get_masterServerEndPoint))::GlobalNamespace::DnsEndPoint* masterServerEndPoint;

  __declspec(property(get = get_maxPartySize)) int32_t maxPartySize;

  __declspec(property(get = get_multiplayerPort)) int32_t multiplayerPort;

  __declspec(property(get = get_multiplayerStatusUrl))::StringW multiplayerStatusUrl;

  __declspec(property(get = get_partyPort)) int32_t partyPort;

  __declspec(property(get = get_quickPlaySetupUrl))::StringW quickPlaySetupUrl;

  __declspec(property(get = get_serviceEnvironment))::GlobalNamespace::ServiceEnvironment serviceEnvironment;

  /// @brief Method get_discoveryPort, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_discoveryPort();

  /// @brief Method get_forceGameLift, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_forceGameLift();

  /// @brief Method get_graphAccessToken, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_graphAccessToken();

  /// @brief Method get_graphUrl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_graphUrl();

  /// @brief Method get_masterServerEndPoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::DnsEndPoint* get_masterServerEndPoint();

  /// @brief Method get_maxPartySize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_maxPartySize();

  /// @brief Method get_multiplayerPort, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_multiplayerPort();

  /// @brief Method get_multiplayerStatusUrl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_multiplayerStatusUrl();

  /// @brief Method get_partyPort, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_partyPort();

  /// @brief Method get_quickPlaySetupUrl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_quickPlaySetupUrl();

  /// @brief Method get_serviceEnvironment, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::ServiceEnvironment get_serviceEnvironment();

  // Ctor Parameters [CppParam { name: "", ty: "INetworkConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INetworkConfig(INetworkConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INetworkConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INetworkConfig(INetworkConfig const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INetworkConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INetworkConfig*, "", "INetworkConfig");
