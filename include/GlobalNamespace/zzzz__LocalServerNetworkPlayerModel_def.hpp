#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalServerNetworkPlayerModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkPlayerModel_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalServerNetworkPlayerModel)
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
template <typename T> class IConnectionInitParams_1;
}
namespace GlobalNamespace {
template <typename T> class INetworkPlayerModelPartyConfig_1;
}
namespace GlobalNamespace {
class LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams;
}
namespace GlobalNamespace {
class LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams;
}
namespace GlobalNamespace {
class LocalServerConnectionManager;
}
namespace GlobalNamespace {
class LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig;
}
namespace GlobalNamespace {
struct PublicServerInfo;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalServerNetworkPlayerModel;
}
namespace GlobalNamespace {
class LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalServerNetworkPlayerModel);
MARK_REF_PTR_T(::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig);
// Dependencies NetworkPlayerModel`1::JoinMatchmakingPartyConfig<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalServerNetworkPlayerModel/LocalServerJoinMatchmakingPartyConfig
class CORDL_TYPE LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig
    : public ::GlobalNamespace::NetworkPlayerModel_1_JoinMatchmakingPartyConfig<::GlobalNamespace::LocalServerConnectionManager*> {
public:
  // Declarations
  /// @brief Field localPort, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_localPort, put = __cordl_internal_set_localPort)) int32_t localPort;

  static inline ::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig* New_ctor();

  constexpr int32_t const& __cordl_internal_get_localPort() const;

  constexpr int32_t& __cordl_internal_get_localPort();

  constexpr void __cordl_internal_set_localPort(int32_t value);

  /// @brief Method .ctor, addr 0x5ab81e8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig(LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig(LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21223 };

  /// @brief Field localPort, offset: 0x68, size: 0x4, def value: None
  int32_t ___localPort;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig, ___localPort) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies NetworkPlayerModel`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalServerNetworkPlayerModel
class CORDL_TYPE LocalServerNetworkPlayerModel : public ::GlobalNamespace::NetworkPlayerModel_1<::GlobalNamespace::LocalServerConnectionManager*> {
public:
  // Declarations
  using LocalServerJoinMatchmakingPartyConfig = ::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig;

  /// @brief Field _cachedConnectToServerParams, offset 0x108, size 0x8
  __declspec(property(
      get = __cordl_internal_get__cachedConnectToServerParams,
      put = __cordl_internal_set__cachedConnectToServerParams)) ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams* _cachedConnectToServerParams;

  /// @brief Field _cachedStartClientParams, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__cachedStartClientParams,
                      put = __cordl_internal_set__cachedStartClientParams)) ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams* _cachedStartClientParams;

  /// @brief Field _localPort, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get__localPort, put = __cordl_internal_set__localPort)) int32_t _localPort;

  __declspec(property(get = get_code)) ::StringW code;

  __declspec(property(get = get_configuration)) ::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_partyOwnerId)) ::StringW partyOwnerId;

  __declspec(property(get = get_secret)) ::StringW secret;

  __declspec(property(get = get_selectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  /// @brief Method CreatePartyConnection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T2> inline bool CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T2>* config);

  /// @brief Method GetConnectToServerParams, addr 0x5ab7fdc, size 0xc8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>*
  GetConnectToServerParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, ::StringW secret, ::StringW code);

  /// @brief Method GetStartClientParams, addr 0x5ab80a4, size 0xa8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>* GetStartClientParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                                                            ::GlobalNamespace::GameplayServerConfiguration configuration);

  static inline ::GlobalNamespace::LocalServerNetworkPlayerModel* New_ctor();

  /// @brief Method RefreshPublicServers, addr 0x5ab7f50, size 0x8c, virtual true, abstract: false, final false
  inline void RefreshPublicServers(::GlobalNamespace::BeatmapLevelSelectionMask localSelectionMask, ::GlobalNamespace::GameplayServerConfiguration localConfiguration,
                                   ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>* onSuccess,
                                   ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onFailure);

  constexpr ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams* const& __cordl_internal_get__cachedConnectToServerParams() const;

  constexpr ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams*& __cordl_internal_get__cachedConnectToServerParams();

  constexpr ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams* const& __cordl_internal_get__cachedStartClientParams() const;

  constexpr ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams*& __cordl_internal_get__cachedStartClientParams();

  constexpr int32_t const& __cordl_internal_get__localPort() const;

  constexpr int32_t& __cordl_internal_get__localPort();

  constexpr void __cordl_internal_set__cachedConnectToServerParams(::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams* value);

  constexpr void __cordl_internal_set__cachedStartClientParams(::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams* value);

  constexpr void __cordl_internal_set__localPort(int32_t value);

  /// @brief Method .ctor, addr 0x5ab814c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_code, addr 0x5ab7df8, size 0x58, virtual true, abstract: false, final false
  inline ::StringW get_code();

  /// @brief Method get_configuration, addr 0x5ab7e58, size 0x7c, virtual true, abstract: false, final false
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method get_partyOwnerId, addr 0x5ab7e50, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_partyOwnerId();

  /// @brief Method get_secret, addr 0x5ab7da0, size 0x58, virtual true, abstract: false, final false
  inline ::StringW get_secret();

  /// @brief Method get_selectionMask, addr 0x5ab7ed4, size 0x7c, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalServerNetworkPlayerModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalServerNetworkPlayerModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalServerNetworkPlayerModel(LocalServerNetworkPlayerModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalServerNetworkPlayerModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalServerNetworkPlayerModel(LocalServerNetworkPlayerModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21224 };

  /// @brief Field _cachedConnectToServerParams, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams* ____cachedConnectToServerParams;

  /// @brief Field _cachedStartClientParams, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams* ____cachedStartClientParams;

  /// @brief Field _localPort, offset: 0x118, size: 0x4, def value: None
  int32_t ____localPort;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalServerNetworkPlayerModel, ____cachedConnectToServerParams) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerNetworkPlayerModel, ____cachedStartClientParams) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerNetworkPlayerModel, ____localPort) == 0x118, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalServerNetworkPlayerModel, 0x120>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalServerNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalServerNetworkPlayerModel*, "", "LocalServerNetworkPlayerModel");
NEED_NO_BOX(::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig*, "", "LocalServerNetworkPlayerModel/LocalServerJoinMatchmakingPartyConfig");
