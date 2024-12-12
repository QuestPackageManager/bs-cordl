#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkConfigSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "GlobalNamespace/zzzz__ServiceEnvironment_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkConfigSO)
namespace GlobalNamespace {
class DnsEndPoint;
}
namespace GlobalNamespace {
struct ServiceEnvironment;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkConfigSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NetworkConfigSO);
// Dependencies INetworkConfig, PersistentScriptableObject, ServiceEnvironment
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkConfigSO
class CORDL_TYPE NetworkConfigSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _discoveryPort, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__discoveryPort, put = __cordl_internal_set__discoveryPort)) int32_t _discoveryPort;

  /// @brief Field _forceGameLift, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__forceGameLift, put = __cordl_internal_set__forceGameLift)) bool _forceGameLift;

  /// @brief Field _graphAppId, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__graphAppId, put = __cordl_internal_set__graphAppId)) ::StringW _graphAppId;

  /// @brief Field _graphUrl, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__graphUrl, put = __cordl_internal_set__graphUrl)) ::StringW _graphUrl;

  /// @brief Field _masterServerHostName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__masterServerHostName, put = __cordl_internal_set__masterServerHostName)) ::StringW _masterServerHostName;

  /// @brief Field _masterServerPort, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__masterServerPort, put = __cordl_internal_set__masterServerPort)) int32_t _masterServerPort;

  /// @brief Field _maxPartySize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__maxPartySize, put = __cordl_internal_set__maxPartySize)) int32_t _maxPartySize;

  /// @brief Field _multiplayerPort, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplayerPort, put = __cordl_internal_set__multiplayerPort)) int32_t _multiplayerPort;

  /// @brief Field _multiplayerStatusUrl, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerStatusUrl, put = __cordl_internal_set__multiplayerStatusUrl)) ::StringW _multiplayerStatusUrl;

  /// @brief Field _partyPort, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__partyPort, put = __cordl_internal_set__partyPort)) int32_t _partyPort;

  /// @brief Field _quickPlaySetupUrl, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__quickPlaySetupUrl, put = __cordl_internal_set__quickPlaySetupUrl)) ::StringW _quickPlaySetupUrl;

  /// @brief Field _serviceEnvironment, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__serviceEnvironment, put = __cordl_internal_set__serviceEnvironment)) ::GlobalNamespace::ServiceEnvironment _serviceEnvironment;

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

  /// @brief Convert operator to "::GlobalNamespace::INetworkConfig"
  constexpr operator ::GlobalNamespace::INetworkConfig*() noexcept;

  static inline ::GlobalNamespace::NetworkConfigSO* New_ctor();

  constexpr int32_t const& __cordl_internal_get__discoveryPort() const;

  constexpr int32_t& __cordl_internal_get__discoveryPort();

  constexpr bool const& __cordl_internal_get__forceGameLift() const;

  constexpr bool& __cordl_internal_get__forceGameLift();

  constexpr ::StringW const& __cordl_internal_get__graphAppId() const;

  constexpr ::StringW& __cordl_internal_get__graphAppId();

  constexpr ::StringW const& __cordl_internal_get__graphUrl() const;

  constexpr ::StringW& __cordl_internal_get__graphUrl();

  constexpr ::StringW const& __cordl_internal_get__masterServerHostName() const;

  constexpr ::StringW& __cordl_internal_get__masterServerHostName();

  constexpr int32_t const& __cordl_internal_get__masterServerPort() const;

  constexpr int32_t& __cordl_internal_get__masterServerPort();

  constexpr int32_t const& __cordl_internal_get__maxPartySize() const;

  constexpr int32_t& __cordl_internal_get__maxPartySize();

  constexpr int32_t const& __cordl_internal_get__multiplayerPort() const;

  constexpr int32_t& __cordl_internal_get__multiplayerPort();

  constexpr ::StringW const& __cordl_internal_get__multiplayerStatusUrl() const;

  constexpr ::StringW& __cordl_internal_get__multiplayerStatusUrl();

  constexpr int32_t const& __cordl_internal_get__partyPort() const;

  constexpr int32_t& __cordl_internal_get__partyPort();

  constexpr ::StringW const& __cordl_internal_get__quickPlaySetupUrl() const;

  constexpr ::StringW& __cordl_internal_get__quickPlaySetupUrl();

  constexpr ::GlobalNamespace::ServiceEnvironment const& __cordl_internal_get__serviceEnvironment() const;

  constexpr ::GlobalNamespace::ServiceEnvironment& __cordl_internal_get__serviceEnvironment();

  constexpr void __cordl_internal_set__discoveryPort(int32_t value);

  constexpr void __cordl_internal_set__forceGameLift(bool value);

  constexpr void __cordl_internal_set__graphAppId(::StringW value);

  constexpr void __cordl_internal_set__graphUrl(::StringW value);

  constexpr void __cordl_internal_set__masterServerHostName(::StringW value);

  constexpr void __cordl_internal_set__masterServerPort(int32_t value);

  constexpr void __cordl_internal_set__maxPartySize(int32_t value);

  constexpr void __cordl_internal_set__multiplayerPort(int32_t value);

  constexpr void __cordl_internal_set__multiplayerStatusUrl(::StringW value);

  constexpr void __cordl_internal_set__partyPort(int32_t value);

  constexpr void __cordl_internal_set__quickPlaySetupUrl(::StringW value);

  constexpr void __cordl_internal_set__serviceEnvironment(::GlobalNamespace::ServiceEnvironment value);

  /// @brief Method .ctor, addr 0x3e71000, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_appId, addr 0x3e70f80, size 0x70, virtual true, abstract: false, final true
  inline ::StringW get_appId();

  /// @brief Method get_discoveryPort, addr 0x3e70e80, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_discoveryPort();

  /// @brief Method get_forceGameLift, addr 0x3e70ff0, size 0x8, virtual true, abstract: false, final true
  inline bool get_forceGameLift();

  /// @brief Method get_graphAccessToken, addr 0x3e70f18, size 0x68, virtual true, abstract: false, final true
  inline ::StringW get_graphAccessToken();

  /// @brief Method get_graphUrl, addr 0x3e70f10, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_graphUrl();

  /// @brief Method get_masterServerEndPoint, addr 0x3e70e98, size 0x68, virtual true, abstract: false, final true
  inline ::GlobalNamespace::DnsEndPoint* get_masterServerEndPoint();

  /// @brief Method get_maxPartySize, addr 0x3e70e78, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_maxPartySize();

  /// @brief Method get_multiplayerPort, addr 0x3e70e90, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_multiplayerPort();

  /// @brief Method get_multiplayerStatusUrl, addr 0x3e70f00, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_multiplayerStatusUrl();

  /// @brief Method get_partyPort, addr 0x3e70e88, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_partyPort();

  /// @brief Method get_quickPlaySetupUrl, addr 0x3e70f08, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_quickPlaySetupUrl();

  /// @brief Method get_serviceEnvironment, addr 0x3e70ff8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::ServiceEnvironment get_serviceEnvironment();

  /// @brief Convert to "::GlobalNamespace::INetworkConfig"
  constexpr ::GlobalNamespace::INetworkConfig* i___GlobalNamespace__INetworkConfig() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkConfigSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkConfigSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkConfigSO(NetworkConfigSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkConfigSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkConfigSO(NetworkConfigSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17351 };

  /// @brief Field _maxPartySize, offset: 0x18, size: 0x4, def value: None
  int32_t ____maxPartySize;

  /// @brief Field _discoveryPort, offset: 0x1c, size: 0x4, def value: None
  int32_t ____discoveryPort;

  /// @brief Field _partyPort, offset: 0x20, size: 0x4, def value: None
  int32_t ____partyPort;

  /// @brief Field _multiplayerPort, offset: 0x24, size: 0x4, def value: None
  int32_t ____multiplayerPort;

  /// @brief Field _masterServerPort, offset: 0x28, size: 0x4, def value: None
  int32_t ____masterServerPort;

  /// @brief Field _masterServerHostName, offset: 0x30, size: 0x8, def value: None
  ::StringW ____masterServerHostName;

  /// @brief Field _multiplayerStatusUrl, offset: 0x38, size: 0x8, def value: None
  ::StringW ____multiplayerStatusUrl;

  /// @brief Field _quickPlaySetupUrl, offset: 0x40, size: 0x8, def value: None
  ::StringW ____quickPlaySetupUrl;

  /// @brief Field _graphUrl, offset: 0x48, size: 0x8, def value: None
  ::StringW ____graphUrl;

  /// @brief Field _graphAppId, offset: 0x50, size: 0x8, def value: None
  ::StringW ____graphAppId;

  /// @brief Field _forceGameLift, offset: 0x58, size: 0x1, def value: None
  bool ____forceGameLift;

  /// @brief Field _serviceEnvironment, offset: 0x5c, size: 0x4, def value: None
  ::GlobalNamespace::ServiceEnvironment ____serviceEnvironment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____maxPartySize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____discoveryPort) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____partyPort) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____multiplayerPort) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____masterServerPort) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____masterServerHostName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____multiplayerStatusUrl) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____quickPlaySetupUrl) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____graphUrl) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____graphAppId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____forceGameLift) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____serviceEnvironment) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkConfigSO, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetworkConfigSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkConfigSO*, "", "NetworkConfigSO");
