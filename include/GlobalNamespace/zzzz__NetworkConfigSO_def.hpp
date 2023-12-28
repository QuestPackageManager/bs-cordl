#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
namespace GlobalNamespace {
class INetworkConfig;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkConfigSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NetworkConfigSO);
// Type: ::NetworkConfigSO
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857)), TypeDefinitionIndex(TypeDefinitionIndex(12740))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14952))
// CS Name: ::NetworkConfigSO*
class CORDL_TYPE NetworkConfigSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _maxPartySize, offset 0x18, size 0x4
  __declspec(property(get = __get__maxPartySize, put = __set__maxPartySize)) int32_t _maxPartySize;

  /// @brief Field _discoveryPort, offset 0x1c, size 0x4
  __declspec(property(get = __get__discoveryPort, put = __set__discoveryPort)) int32_t _discoveryPort;

  /// @brief Field _partyPort, offset 0x20, size 0x4
  __declspec(property(get = __get__partyPort, put = __set__partyPort)) int32_t _partyPort;

  /// @brief Field _multiplayerPort, offset 0x24, size 0x4
  __declspec(property(get = __get__multiplayerPort, put = __set__multiplayerPort)) int32_t _multiplayerPort;

  /// @brief Field _masterServerPort, offset 0x28, size 0x4
  __declspec(property(get = __get__masterServerPort, put = __set__masterServerPort)) int32_t _masterServerPort;

  /// @brief Field _masterServerHostName, offset 0x30, size 0x8
  __declspec(property(get = __get__masterServerHostName, put = __set__masterServerHostName))::StringW _masterServerHostName;

  /// @brief Field _multiplayerStatusUrl, offset 0x38, size 0x8
  __declspec(property(get = __get__multiplayerStatusUrl, put = __set__multiplayerStatusUrl))::StringW _multiplayerStatusUrl;

  /// @brief Field _quickPlaySetupUrl, offset 0x40, size 0x8
  __declspec(property(get = __get__quickPlaySetupUrl, put = __set__quickPlaySetupUrl))::StringW _quickPlaySetupUrl;

  /// @brief Field _graphUrl, offset 0x48, size 0x8
  __declspec(property(get = __get__graphUrl, put = __set__graphUrl))::StringW _graphUrl;

  /// @brief Field _graphAppId, offset 0x50, size 0x8
  __declspec(property(get = __get__graphAppId, put = __set__graphAppId))::StringW _graphAppId;

  /// @brief Field _forceGameLift, offset 0x58, size 0x1
  __declspec(property(get = __get__forceGameLift, put = __set__forceGameLift)) bool _forceGameLift;

  /// @brief Field _serviceEnvironment, offset 0x5c, size 0x4
  __declspec(property(get = __get__serviceEnvironment, put = __set__serviceEnvironment))::GlobalNamespace::ServiceEnvironment _serviceEnvironment;

  __declspec(property(get = get_maxPartySize)) int32_t maxPartySize;

  __declspec(property(get = get_discoveryPort)) int32_t discoveryPort;

  __declspec(property(get = get_partyPort)) int32_t partyPort;

  __declspec(property(get = get_multiplayerPort)) int32_t multiplayerPort;

  __declspec(property(get = get_masterServerEndPoint))::GlobalNamespace::DnsEndPoint* masterServerEndPoint;

  __declspec(property(get = get_multiplayerStatusUrl))::StringW multiplayerStatusUrl;

  __declspec(property(get = get_quickPlaySetupUrl))::StringW quickPlaySetupUrl;

  __declspec(property(get = get_graphUrl))::StringW graphUrl;

  __declspec(property(get = get_graphAccessToken))::StringW graphAccessToken;

  __declspec(property(get = get_forceGameLift)) bool forceGameLift;

  __declspec(property(get = get_serviceEnvironment))::GlobalNamespace::ServiceEnvironment serviceEnvironment;

  /// @brief Convert operator to "::GlobalNamespace::INetworkConfig"
  constexpr operator ::GlobalNamespace::INetworkConfig*() noexcept;

  constexpr int32_t& __get__maxPartySize();

  constexpr int32_t const& __get__maxPartySize() const;

  constexpr void __set__maxPartySize(int32_t value);

  constexpr int32_t& __get__discoveryPort();

  constexpr int32_t const& __get__discoveryPort() const;

  constexpr void __set__discoveryPort(int32_t value);

  constexpr int32_t& __get__partyPort();

  constexpr int32_t const& __get__partyPort() const;

  constexpr void __set__partyPort(int32_t value);

  constexpr int32_t& __get__multiplayerPort();

  constexpr int32_t const& __get__multiplayerPort() const;

  constexpr void __set__multiplayerPort(int32_t value);

  constexpr int32_t& __get__masterServerPort();

  constexpr int32_t const& __get__masterServerPort() const;

  constexpr void __set__masterServerPort(int32_t value);

  constexpr ::StringW& __get__masterServerHostName();

  constexpr ::StringW const& __get__masterServerHostName() const;

  constexpr void __set__masterServerHostName(::StringW value);

  constexpr ::StringW& __get__multiplayerStatusUrl();

  constexpr ::StringW const& __get__multiplayerStatusUrl() const;

  constexpr void __set__multiplayerStatusUrl(::StringW value);

  constexpr ::StringW& __get__quickPlaySetupUrl();

  constexpr ::StringW const& __get__quickPlaySetupUrl() const;

  constexpr void __set__quickPlaySetupUrl(::StringW value);

  constexpr ::StringW& __get__graphUrl();

  constexpr ::StringW const& __get__graphUrl() const;

  constexpr void __set__graphUrl(::StringW value);

  constexpr ::StringW& __get__graphAppId();

  constexpr ::StringW const& __get__graphAppId() const;

  constexpr void __set__graphAppId(::StringW value);

  constexpr bool& __get__forceGameLift();

  constexpr bool const& __get__forceGameLift() const;

  constexpr void __set__forceGameLift(bool value);

  constexpr ::GlobalNamespace::ServiceEnvironment& __get__serviceEnvironment();

  constexpr ::GlobalNamespace::ServiceEnvironment const& __get__serviceEnvironment() const;

  constexpr void __set__serviceEnvironment(::GlobalNamespace::ServiceEnvironment value);

  /// @brief Method get_maxPartySize addr 0x2637014 size 0x8 virtual true final true
  inline int32_t get_maxPartySize();

  /// @brief Method get_discoveryPort addr 0x263701c size 0x8 virtual true final true
  inline int32_t get_discoveryPort();

  /// @brief Method get_partyPort addr 0x2637024 size 0x8 virtual true final true
  inline int32_t get_partyPort();

  /// @brief Method get_multiplayerPort addr 0x263702c size 0x8 virtual true final true
  inline int32_t get_multiplayerPort();

  /// @brief Method get_masterServerEndPoint addr 0x2637034 size 0x70 virtual true final true
  inline ::GlobalNamespace::DnsEndPoint* get_masterServerEndPoint();

  /// @brief Method get_multiplayerStatusUrl addr 0x26370a4 size 0x8 virtual true final true
  inline ::StringW get_multiplayerStatusUrl();

  /// @brief Method get_quickPlaySetupUrl addr 0x26370ac size 0x8 virtual true final true
  inline ::StringW get_quickPlaySetupUrl();

  /// @brief Method get_graphUrl addr 0x26370b4 size 0x8 virtual true final true
  inline ::StringW get_graphUrl();

  /// @brief Method get_graphAccessToken addr 0x26370bc size 0x68 virtual true final true
  inline ::StringW get_graphAccessToken();

  /// @brief Method get_forceGameLift addr 0x2637150 size 0x8 virtual true final true
  inline bool get_forceGameLift();

  /// @brief Method get_serviceEnvironment addr 0x2637158 size 0x8 virtual true final true
  inline ::GlobalNamespace::ServiceEnvironment get_serviceEnvironment();

  /// @brief Method GetAppId addr 0x2637124 size 0x2c virtual false final false
  inline ::StringW GetAppId();

  static inline ::GlobalNamespace::NetworkConfigSO* New_ctor();

  /// @brief Method .ctor addr 0x2637160 size 0x8c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NetworkConfigSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkConfigSO(NetworkConfigSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkConfigSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkConfigSO(NetworkConfigSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkConfigSO();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkConfigSO, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetworkConfigSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkConfigSO*, "", "NetworkConfigSO");
