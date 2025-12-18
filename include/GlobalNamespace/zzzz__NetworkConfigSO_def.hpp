#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkConfigSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "GlobalNamespace/zzzz__ServiceEnvironment_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkConfigSO)
namespace GlobalNamespace {
class INetworkConfig;
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
// Dependencies PersistentScriptableObject, ServiceEnvironment
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkConfigSO
class CORDL_TYPE NetworkConfigSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _customLocation, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__customLocation, put = __cordl_internal_set__customLocation)) ::StringW _customLocation;

  /// @brief Field _discoveryPort, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__discoveryPort, put = __cordl_internal_set__discoveryPort)) int32_t _discoveryPort;

  /// @brief Field _forceGameLift, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__forceGameLift, put = __cordl_internal_set__forceGameLift)) bool _forceGameLift;

  /// @brief Field _graphAppId, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__graphAppId, put = __cordl_internal_set__graphAppId)) uint64_t _graphAppId;

  /// @brief Field _graphUrl, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__graphUrl, put = __cordl_internal_set__graphUrl)) ::StringW _graphUrl;

  /// @brief Field _localServerPort, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__localServerPort, put = __cordl_internal_set__localServerPort)) int32_t _localServerPort;

  /// @brief Field _masterServerPort, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__masterServerPort, put = __cordl_internal_set__masterServerPort)) int32_t _masterServerPort;

  /// @brief Field _maxPartySize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__maxPartySize, put = __cordl_internal_set__maxPartySize)) int32_t _maxPartySize;

  /// @brief Field _multiplayerPort, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplayerPort, put = __cordl_internal_set__multiplayerPort)) int32_t _multiplayerPort;

  /// @brief Field _multiplayerStatusUrl, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerStatusUrl, put = __cordl_internal_set__multiplayerStatusUrl)) ::StringW _multiplayerStatusUrl;

  /// @brief Field _partyPort, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__partyPort, put = __cordl_internal_set__partyPort)) int32_t _partyPort;

  /// @brief Field _quickPlaySetupUrl, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__quickPlaySetupUrl, put = __cordl_internal_set__quickPlaySetupUrl)) ::StringW _quickPlaySetupUrl;

  /// @brief Field _serviceEnvironment, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__serviceEnvironment, put = __cordl_internal_set__serviceEnvironment)) ::GlobalNamespace::ServiceEnvironment _serviceEnvironment;

  /// @brief Field _useLocalServer, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get__useLocalServer, put = __cordl_internal_set__useLocalServer)) bool _useLocalServer;

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

  /// @brief Convert operator to "::GlobalNamespace::INetworkConfig"
  constexpr operator ::GlobalNamespace::INetworkConfig*() noexcept;

  static inline ::GlobalNamespace::NetworkConfigSO* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__customLocation() const;

  constexpr ::StringW& __cordl_internal_get__customLocation();

  constexpr int32_t const& __cordl_internal_get__discoveryPort() const;

  constexpr int32_t& __cordl_internal_get__discoveryPort();

  constexpr bool const& __cordl_internal_get__forceGameLift() const;

  constexpr bool& __cordl_internal_get__forceGameLift();

  constexpr uint64_t const& __cordl_internal_get__graphAppId() const;

  constexpr uint64_t& __cordl_internal_get__graphAppId();

  constexpr ::StringW const& __cordl_internal_get__graphUrl() const;

  constexpr ::StringW& __cordl_internal_get__graphUrl();

  constexpr int32_t const& __cordl_internal_get__localServerPort() const;

  constexpr int32_t& __cordl_internal_get__localServerPort();

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

  constexpr bool const& __cordl_internal_get__useLocalServer() const;

  constexpr bool& __cordl_internal_get__useLocalServer();

  constexpr void __cordl_internal_set__customLocation(::StringW value);

  constexpr void __cordl_internal_set__discoveryPort(int32_t value);

  constexpr void __cordl_internal_set__forceGameLift(bool value);

  constexpr void __cordl_internal_set__graphAppId(uint64_t value);

  constexpr void __cordl_internal_set__graphUrl(::StringW value);

  constexpr void __cordl_internal_set__localServerPort(int32_t value);

  constexpr void __cordl_internal_set__masterServerPort(int32_t value);

  constexpr void __cordl_internal_set__maxPartySize(int32_t value);

  constexpr void __cordl_internal_set__multiplayerPort(int32_t value);

  constexpr void __cordl_internal_set__multiplayerStatusUrl(::StringW value);

  constexpr void __cordl_internal_set__partyPort(int32_t value);

  constexpr void __cordl_internal_set__quickPlaySetupUrl(::StringW value);

  constexpr void __cordl_internal_set__serviceEnvironment(::GlobalNamespace::ServiceEnvironment value);

  constexpr void __cordl_internal_set__useLocalServer(bool value);

  /// @brief Method .ctor, addr 0x5b1ee18, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_customLocation, addr 0x5b1ee00, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_customLocation();

  /// @brief Method get_discoveryPort, addr 0x5b1ecc8, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_discoveryPort();

  /// @brief Method get_forceGameLift, addr 0x5b1edf0, size 0x8, virtual true, abstract: false, final true
  inline bool get_forceGameLift();

  /// @brief Method get_graphAccessToken, addr 0x5b1ed50, size 0x98, virtual true, abstract: false, final true
  inline ::StringW get_graphAccessToken();

  /// @brief Method get_graphAppId, addr 0x5b1ede8, size 0x8, virtual true, abstract: false, final true
  inline uint64_t get_graphAppId();

  /// @brief Method get_graphQLUrl, addr 0x5b1ed00, size 0x50, virtual true, abstract: false, final true
  inline ::StringW get_graphQLUrl();

  /// @brief Method get_graphUrl, addr 0x5b1ecf8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_graphUrl();

  /// @brief Method get_localServerPort, addr 0x5b1ee08, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_localServerPort();

  /// @brief Method get_masterServerPort, addr 0x5b1ece0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_masterServerPort();

  /// @brief Method get_maxPartySize, addr 0x5b1ecc0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_maxPartySize();

  /// @brief Method get_multiplayerPort, addr 0x5b1ecd8, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_multiplayerPort();

  /// @brief Method get_multiplayerStatusUrl, addr 0x5b1ece8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_multiplayerStatusUrl();

  /// @brief Method get_partyPort, addr 0x5b1ecd0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_partyPort();

  /// @brief Method get_quickPlaySetupUrl, addr 0x5b1ecf0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_quickPlaySetupUrl();

  /// @brief Method get_serviceEnvironment, addr 0x5b1edf8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::ServiceEnvironment get_serviceEnvironment();

  /// @brief Method get_useLocalServer, addr 0x5b1ee10, size 0x8, virtual true, abstract: false, final true
  inline bool get_useLocalServer();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21257 };

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

  /// @brief Field _multiplayerStatusUrl, offset: 0x30, size: 0x8, def value: None
  ::StringW ____multiplayerStatusUrl;

  /// @brief Field _quickPlaySetupUrl, offset: 0x38, size: 0x8, def value: None
  ::StringW ____quickPlaySetupUrl;

  /// @brief Field _graphUrl, offset: 0x40, size: 0x8, def value: None
  ::StringW ____graphUrl;

  /// @brief Field _graphAppId, offset: 0x48, size: 0x8, def value: None
  uint64_t ____graphAppId;

  /// @brief Field _forceGameLift, offset: 0x50, size: 0x1, def value: None
  bool ____forceGameLift;

  /// @brief Field _useLocalServer, offset: 0x51, size: 0x1, def value: None
  bool ____useLocalServer;

  /// @brief Field _localServerPort, offset: 0x54, size: 0x4, def value: None
  int32_t ____localServerPort;

  /// @brief Field _serviceEnvironment, offset: 0x58, size: 0x4, def value: None
  ::GlobalNamespace::ServiceEnvironment ____serviceEnvironment;

  /// @brief Field _customLocation, offset: 0x60, size: 0x8, def value: None
  ::StringW ____customLocation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____maxPartySize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____discoveryPort) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____partyPort) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____multiplayerPort) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____masterServerPort) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____multiplayerStatusUrl) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____quickPlaySetupUrl) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____graphUrl) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____graphAppId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____forceGameLift) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____useLocalServer) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____localServerPort) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____serviceEnvironment) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____customLocation) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkConfigSO, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetworkConfigSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkConfigSO*, "", "NetworkConfigSO");
