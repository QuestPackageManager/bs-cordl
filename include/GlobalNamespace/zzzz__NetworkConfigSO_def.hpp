#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkConfigSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "GlobalNamespace/zzzz__ServiceEnvironment_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::GlobalNamespace::NetworkConfigSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkConfigSO*, "", "NetworkConfigSO");
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

  /// @brief Field _graphAppId, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__graphAppId, put = __cordl_internal_set__graphAppId)) uint64_t _graphAppId;

  /// @brief Field _graphUrl, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__graphUrl, put = __cordl_internal_set__graphUrl)) ::StringW _graphUrl;

  /// @brief Field _localServerPort, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__localServerPort, put = __cordl_internal_set__localServerPort)) int32_t _localServerPort;

  /// @brief Field _masterServerPort, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__masterServerPort, put = __cordl_internal_set__masterServerPort)) int32_t _masterServerPort;

  /// @brief Field _maxPartySize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__maxPartySize, put = __cordl_internal_set__maxPartySize)) int32_t _maxPartySize;

  /// @brief Field _multiplayerPort, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplayerPort, put = __cordl_internal_set__multiplayerPort)) int32_t _multiplayerPort;

  /// @brief Field _partyPort, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__partyPort, put = __cordl_internal_set__partyPort)) int32_t _partyPort;

  /// @brief Field _quickPlaySetupUrl, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__quickPlaySetupUrl, put = __cordl_internal_set__quickPlaySetupUrl)) ::StringW _quickPlaySetupUrl;

  /// @brief Field _remoteAssetsHost, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__remoteAssetsHost, put = __cordl_internal_set__remoteAssetsHost)) ::StringW _remoteAssetsHost;

  /// @brief Field _serviceEnvironment, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__serviceEnvironment, put = __cordl_internal_set__serviceEnvironment)) ::GlobalNamespace::ServiceEnvironment _serviceEnvironment;

  /// @brief Field _useLocalServer, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__useLocalServer, put = __cordl_internal_set__useLocalServer)) bool _useLocalServer;

  __declspec(property(get = get_customLocation)) ::StringW customLocation;

  __declspec(property(get = get_discoveryPort)) int32_t discoveryPort;

  __declspec(property(get = get_graphAccessToken)) ::StringW graphAccessToken;

  __declspec(property(get = get_graphApiBaseUrl)) ::StringW graphApiBaseUrl;

  __declspec(property(get = get_graphAppId)) uint64_t graphAppId;

  __declspec(property(get = get_graphQLUrl)) ::StringW graphQLUrl;

  __declspec(property(get = get_isDevServer)) bool isDevServer;

  __declspec(property(get = get_localServerPort)) int32_t localServerPort;

  __declspec(property(get = get_masterServerPort)) int32_t masterServerPort;

  __declspec(property(get = get_maxPartySize)) int32_t maxPartySize;

  __declspec(property(get = get_multiplayerPort)) int32_t multiplayerPort;

  __declspec(property(get = get_partyPort)) int32_t partyPort;

  __declspec(property(get = get_quickPlaySetupUrl)) ::StringW quickPlaySetupUrl;

  __declspec(property(get = get_remoteAssetsBaseUrl)) ::StringW remoteAssetsBaseUrl;

  __declspec(property(get = get_serviceEnvironment)) ::GlobalNamespace::ServiceEnvironment serviceEnvironment;

  __declspec(property(get = get_useLocalServer)) bool useLocalServer;

  /// @brief Convert operator to "::GlobalNamespace::INetworkConfig"
  constexpr operator ::GlobalNamespace::INetworkConfig*() noexcept;

  static inline ::GlobalNamespace::NetworkConfigSO* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__customLocation() const;

  constexpr ::StringW& __cordl_internal_get__customLocation();

  constexpr int32_t const& __cordl_internal_get__discoveryPort() const;

  constexpr int32_t& __cordl_internal_get__discoveryPort();

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

  constexpr int32_t const& __cordl_internal_get__partyPort() const;

  constexpr int32_t& __cordl_internal_get__partyPort();

  constexpr ::StringW const& __cordl_internal_get__quickPlaySetupUrl() const;

  constexpr ::StringW& __cordl_internal_get__quickPlaySetupUrl();

  constexpr ::StringW const& __cordl_internal_get__remoteAssetsHost() const;

  constexpr ::StringW& __cordl_internal_get__remoteAssetsHost();

  constexpr ::GlobalNamespace::ServiceEnvironment const& __cordl_internal_get__serviceEnvironment() const;

  constexpr ::GlobalNamespace::ServiceEnvironment& __cordl_internal_get__serviceEnvironment();

  constexpr bool const& __cordl_internal_get__useLocalServer() const;

  constexpr bool& __cordl_internal_get__useLocalServer();

  constexpr void __cordl_internal_set__customLocation(::StringW value);

  constexpr void __cordl_internal_set__discoveryPort(int32_t value);

  constexpr void __cordl_internal_set__graphAppId(uint64_t value);

  constexpr void __cordl_internal_set__graphUrl(::StringW value);

  constexpr void __cordl_internal_set__localServerPort(int32_t value);

  constexpr void __cordl_internal_set__masterServerPort(int32_t value);

  constexpr void __cordl_internal_set__maxPartySize(int32_t value);

  constexpr void __cordl_internal_set__multiplayerPort(int32_t value);

  constexpr void __cordl_internal_set__partyPort(int32_t value);

  constexpr void __cordl_internal_set__quickPlaySetupUrl(::StringW value);

  constexpr void __cordl_internal_set__remoteAssetsHost(::StringW value);

  constexpr void __cordl_internal_set__serviceEnvironment(::GlobalNamespace::ServiceEnvironment value);

  constexpr void __cordl_internal_set__useLocalServer(bool value);

  /// @brief Method .ctor, addr 0x60e7cec, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_customLocation, addr 0x60e7cd4, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_customLocation();

  /// @brief Method get_discoveryPort, addr 0x60e7b38, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_discoveryPort();

  /// @brief Method get_graphAccessToken, addr 0x60e7c2c, size 0x98, virtual true, abstract: false, final true
  inline ::StringW get_graphAccessToken();

  /// @brief Method get_graphApiBaseUrl, addr 0x60e7b60, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_graphApiBaseUrl();

  /// @brief Method get_graphAppId, addr 0x60e7cc4, size 0x8, virtual true, abstract: false, final true
  inline uint64_t get_graphAppId();

  /// @brief Method get_graphQLUrl, addr 0x60e7b68, size 0x50, virtual true, abstract: false, final true
  inline ::StringW get_graphQLUrl();

  /// @brief Method get_isDevServer, addr 0x60e7bc0, size 0x6c, virtual true, abstract: false, final true
  inline bool get_isDevServer();

  /// @brief Method get_localServerPort, addr 0x60e7cdc, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_localServerPort();

  /// @brief Method get_masterServerPort, addr 0x60e7b50, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_masterServerPort();

  /// @brief Method get_maxPartySize, addr 0x60e7b30, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_maxPartySize();

  /// @brief Method get_multiplayerPort, addr 0x60e7b48, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_multiplayerPort();

  /// @brief Method get_partyPort, addr 0x60e7b40, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_partyPort();

  /// @brief Method get_quickPlaySetupUrl, addr 0x60e7b58, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_quickPlaySetupUrl();

  /// @brief Method get_remoteAssetsBaseUrl, addr 0x60e7bb8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_remoteAssetsBaseUrl();

  /// @brief Method get_serviceEnvironment, addr 0x60e7ccc, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::ServiceEnvironment get_serviceEnvironment();

  /// @brief Method get_useLocalServer, addr 0x60e7ce4, size 0x8, virtual true, abstract: false, final true
  inline bool get_useLocalServer();

  /// @brief Convert to "::GlobalNamespace::INetworkConfig"
  constexpr ::GlobalNamespace::INetworkConfig* i___GlobalNamespace__INetworkConfig() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkConfigSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkConfigSO", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkConfigSO(NetworkConfigSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkConfigSO", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkConfigSO(NetworkConfigSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22310 };

  /// [SerializeField]
  /// @brief Field _maxPartySize, offset: 0x18, size: 0x4, def value: None
  int32_t ____maxPartySize;

  /// [SerializeField]
  /// @brief Field _discoveryPort, offset: 0x1c, size: 0x4, def value: None
  int32_t ____discoveryPort;

  /// [SerializeField]
  /// @brief Field _partyPort, offset: 0x20, size: 0x4, def value: None
  int32_t ____partyPort;

  /// [SerializeField]
  /// @brief Field _multiplayerPort, offset: 0x24, size: 0x4, def value: None
  int32_t ____multiplayerPort;

  /// [SerializeField]
  /// @brief Field _masterServerPort, offset: 0x28, size: 0x4, def value: None
  int32_t ____masterServerPort;

  /// [SerializeField]
  /// @brief Field _quickPlaySetupUrl, offset: 0x30, size: 0x8, def value: None
  ::StringW ____quickPlaySetupUrl;

  /// [SerializeField]
  /// @brief Field _graphUrl, offset: 0x38, size: 0x8, def value: None
  ::StringW ____graphUrl;

  /// [SerializeField]
  /// @brief Field _remoteAssetsHost, offset: 0x40, size: 0x8, def value: None
  ::StringW ____remoteAssetsHost;

  /// [SerializeField]
  /// @brief Field _graphAppId, offset: 0x48, size: 0x8, def value: None
  uint64_t ____graphAppId;

  /// [SerializeField]
  /// @brief Field _useLocalServer, offset: 0x50, size: 0x1, def value: None
  bool ____useLocalServer;

  /// [SerializeField]
  /// @brief Field _localServerPort, offset: 0x54, size: 0x4, def value: None
  int32_t ____localServerPort;

  /// [SerializeField]
  /// @brief Field _serviceEnvironment, offset: 0x58, size: 0x4, def value: None
  ::GlobalNamespace::ServiceEnvironment ____serviceEnvironment;

  /// [SerializeField]
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

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____quickPlaySetupUrl) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____graphUrl) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____remoteAssetsHost) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____graphAppId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____useLocalServer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____localServerPort) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____serviceEnvironment) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkConfigSO, ____customLocation) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkConfigSO) == 0x68, "Size mismatch!");

} // namespace GlobalNamespace
