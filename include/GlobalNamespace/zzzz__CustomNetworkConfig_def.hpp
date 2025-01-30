#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomNetworkConfig.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "GlobalNamespace/zzzz__ServiceEnvironment_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomNetworkConfig)
namespace GlobalNamespace {
class DnsEndPoint;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace GlobalNamespace {
struct ServiceEnvironment;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomNetworkConfig;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomNetworkConfig);
// Dependencies INetworkConfig, ServiceEnvironment, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomNetworkConfig
class CORDL_TYPE CustomNetworkConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field <discoveryPort>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__discoveryPort_k__BackingField, put = __cordl_internal_set__discoveryPort_k__BackingField)) int32_t _discoveryPort_k__BackingField;

  /// @brief Field <forceGameLift>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__forceGameLift_k__BackingField, put = __cordl_internal_set__forceGameLift_k__BackingField)) bool _forceGameLift_k__BackingField;

  /// @brief Field <graphAccessToken>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__graphAccessToken_k__BackingField, put = __cordl_internal_set__graphAccessToken_k__BackingField)) ::StringW _graphAccessToken_k__BackingField;

  /// @brief Field <graphUrl>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__graphUrl_k__BackingField, put = __cordl_internal_set__graphUrl_k__BackingField)) ::StringW _graphUrl_k__BackingField;

  /// @brief Field <masterServerEndPoint>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__masterServerEndPoint_k__BackingField,
                      put = __cordl_internal_set__masterServerEndPoint_k__BackingField)) ::GlobalNamespace::DnsEndPoint* _masterServerEndPoint_k__BackingField;

  /// @brief Field <maxPartySize>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__maxPartySize_k__BackingField, put = __cordl_internal_set__maxPartySize_k__BackingField)) int32_t _maxPartySize_k__BackingField;

  /// @brief Field <multiplayerPort>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplayerPort_k__BackingField, put = __cordl_internal_set__multiplayerPort_k__BackingField)) int32_t _multiplayerPort_k__BackingField;

  /// @brief Field <multiplayerStatusUrl>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerStatusUrl_k__BackingField,
                      put = __cordl_internal_set__multiplayerStatusUrl_k__BackingField)) ::StringW _multiplayerStatusUrl_k__BackingField;

  /// @brief Field <partyPort>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__partyPort_k__BackingField, put = __cordl_internal_set__partyPort_k__BackingField)) int32_t _partyPort_k__BackingField;

  /// @brief Field <serviceEnvironment>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__serviceEnvironment_k__BackingField,
                      put = __cordl_internal_set__serviceEnvironment_k__BackingField)) ::GlobalNamespace::ServiceEnvironment _serviceEnvironment_k__BackingField;

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

  static inline ::GlobalNamespace::CustomNetworkConfig* New_ctor(::GlobalNamespace::INetworkConfig* fromNetworkConfig, ::StringW customServerHostName, int32_t port, bool forceGameLift);

  constexpr int32_t const& __cordl_internal_get__discoveryPort_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__discoveryPort_k__BackingField();

  constexpr bool const& __cordl_internal_get__forceGameLift_k__BackingField() const;

  constexpr bool& __cordl_internal_get__forceGameLift_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__graphAccessToken_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__graphAccessToken_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__graphUrl_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__graphUrl_k__BackingField();

  constexpr ::GlobalNamespace::DnsEndPoint* const& __cordl_internal_get__masterServerEndPoint_k__BackingField() const;

  constexpr ::GlobalNamespace::DnsEndPoint*& __cordl_internal_get__masterServerEndPoint_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__maxPartySize_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__maxPartySize_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__multiplayerPort_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__multiplayerPort_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__multiplayerStatusUrl_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__multiplayerStatusUrl_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__partyPort_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__partyPort_k__BackingField();

  constexpr ::GlobalNamespace::ServiceEnvironment const& __cordl_internal_get__serviceEnvironment_k__BackingField() const;

  constexpr ::GlobalNamespace::ServiceEnvironment& __cordl_internal_get__serviceEnvironment_k__BackingField();

  constexpr void __cordl_internal_set__discoveryPort_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__forceGameLift_k__BackingField(bool value);

  constexpr void __cordl_internal_set__graphAccessToken_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__graphUrl_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__masterServerEndPoint_k__BackingField(::GlobalNamespace::DnsEndPoint* value);

  constexpr void __cordl_internal_set__maxPartySize_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__multiplayerPort_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__multiplayerStatusUrl_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__partyPort_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__serviceEnvironment_k__BackingField(::GlobalNamespace::ServiceEnvironment value);

  /// @brief Method .ctor, addr 0x22c14b0, size 0x4a8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::INetworkConfig* fromNetworkConfig, ::StringW customServerHostName, int32_t port, bool forceGameLift);

  /// @brief Method get_appId, addr 0x22c1468, size 0x48, virtual true, abstract: false, final true
  inline ::StringW get_appId();

  /// @brief Method get_discoveryPort, addr 0x22c13d8, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_discoveryPort();

  /// @brief Method get_forceGameLift, addr 0x22c1458, size 0x8, virtual true, abstract: false, final true
  inline bool get_forceGameLift();

  /// @brief Method get_graphAccessToken, addr 0x22c1450, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_graphAccessToken();

  /// @brief Method get_graphUrl, addr 0x22c1448, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_graphUrl();

  /// @brief Method get_masterServerEndPoint, addr 0x22c13f0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::DnsEndPoint* get_masterServerEndPoint();

  /// @brief Method get_maxPartySize, addr 0x22c13d0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_maxPartySize();

  /// @brief Method get_multiplayerPort, addr 0x22c13e8, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_multiplayerPort();

  /// @brief Method get_multiplayerStatusUrl, addr 0x22c13f8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_multiplayerStatusUrl();

  /// @brief Method get_partyPort, addr 0x22c13e0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_partyPort();

  /// @brief Method get_quickPlaySetupUrl, addr 0x22c1400, size 0x48, virtual true, abstract: false, final true
  inline ::StringW get_quickPlaySetupUrl();

  /// @brief Method get_serviceEnvironment, addr 0x22c1460, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::ServiceEnvironment get_serviceEnvironment();

  /// @brief Convert to "::GlobalNamespace::INetworkConfig"
  constexpr ::GlobalNamespace::INetworkConfig* i___GlobalNamespace__INetworkConfig() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomNetworkConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomNetworkConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomNetworkConfig(CustomNetworkConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomNetworkConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomNetworkConfig(CustomNetworkConfig const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14716 };

  /// @brief Field <maxPartySize>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____maxPartySize_k__BackingField;

  /// @brief Field <discoveryPort>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____discoveryPort_k__BackingField;

  /// @brief Field <partyPort>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____partyPort_k__BackingField;

  /// @brief Field <multiplayerPort>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____multiplayerPort_k__BackingField;

  /// @brief Field <masterServerEndPoint>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DnsEndPoint* ____masterServerEndPoint_k__BackingField;

  /// @brief Field <multiplayerStatusUrl>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____multiplayerStatusUrl_k__BackingField;

  /// @brief Field <graphUrl>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____graphUrl_k__BackingField;

  /// @brief Field <graphAccessToken>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____graphAccessToken_k__BackingField;

  /// @brief Field <forceGameLift>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____forceGameLift_k__BackingField;

  /// @brief Field <serviceEnvironment>k__BackingField, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::ServiceEnvironment ____serviceEnvironment_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomNetworkConfig, ____maxPartySize_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomNetworkConfig, ____discoveryPort_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomNetworkConfig, ____partyPort_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomNetworkConfig, ____multiplayerPort_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomNetworkConfig, ____masterServerEndPoint_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomNetworkConfig, ____multiplayerStatusUrl_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomNetworkConfig, ____graphUrl_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomNetworkConfig, ____graphAccessToken_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomNetworkConfig, ____forceGameLift_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomNetworkConfig, ____serviceEnvironment_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomNetworkConfig, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomNetworkConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomNetworkConfig*, "", "CustomNetworkConfig");
