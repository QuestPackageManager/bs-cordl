#pragma once
// IWYU pragma private; include "GlobalNamespace/GameLiftNetworkPlayerModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkPlayerModel_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GameLiftNetworkPlayerModel)
namespace BGNet::Core::GameLift {
class IGameLiftPlayerSessionProvider;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
class GameLiftConnectionManager_ConnectToServerParams;
}
namespace GlobalNamespace {
class GameLiftConnectionManager_StartClientParams;
}
namespace GlobalNamespace {
class GameLiftConnectionManager;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
template <typename T> class IConnectionInitParams_1;
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
class GameLiftNetworkPlayerModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameLiftNetworkPlayerModel);
// Dependencies NetworkPlayerModel`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameLiftNetworkPlayerModel
class CORDL_TYPE GameLiftNetworkPlayerModel : public ::GlobalNamespace::NetworkPlayerModel_1<::GlobalNamespace::GameLiftConnectionManager*> {
public:
  // Declarations
  /// @brief Field _cachedConnectToServerParams, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__cachedConnectToServerParams,
                      put = __cordl_internal_set__cachedConnectToServerParams)) ::GlobalNamespace::GameLiftConnectionManager_ConnectToServerParams* _cachedConnectToServerParams;

  /// @brief Field _cachedStartClientParams, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__cachedStartClientParams,
                      put = __cordl_internal_set__cachedStartClientParams)) ::GlobalNamespace::GameLiftConnectionManager_StartClientParams* _cachedStartClientParams;

  /// @brief Field _gameLiftPlayerSessionProvider, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__gameLiftPlayerSessionProvider,
                      put = __cordl_internal_set__gameLiftPlayerSessionProvider)) ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* _gameLiftPlayerSessionProvider;

  __declspec(property(get = get_code)) ::StringW code;

  __declspec(property(get = get_configuration)) ::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_partyOwnerId)) ::StringW partyOwnerId;

  __declspec(property(get = get_secret)) ::StringW secret;

  __declspec(property(get = get_selectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  /// @brief Method GetConnectToServerParams, addr 0x3e70c18, size 0xe8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>*
  GetConnectToServerParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, ::StringW secret, ::StringW code);

  /// @brief Method GetStartClientParams, addr 0x3e70d00, size 0xd0, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>* GetStartClientParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                                                         ::GlobalNamespace::GameplayServerConfiguration configuration);

  static inline ::GlobalNamespace::GameLiftNetworkPlayerModel* New_ctor();

  /// @brief Method RefreshPublicServers, addr 0x3e70b60, size 0xb8, virtual true, abstract: false, final false
  inline void RefreshPublicServers(::GlobalNamespace::BeatmapLevelSelectionMask localSelectionMask, ::GlobalNamespace::GameplayServerConfiguration localConfiguration,
                                   ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>* onSuccess,
                                   ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onFailure);

  /// @brief Method Update, addr 0x3e70aa0, size 0xc0, virtual true, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::GameLiftConnectionManager_ConnectToServerParams* const& __cordl_internal_get__cachedConnectToServerParams() const;

  constexpr ::GlobalNamespace::GameLiftConnectionManager_ConnectToServerParams*& __cordl_internal_get__cachedConnectToServerParams();

  constexpr ::GlobalNamespace::GameLiftConnectionManager_StartClientParams* const& __cordl_internal_get__cachedStartClientParams() const;

  constexpr ::GlobalNamespace::GameLiftConnectionManager_StartClientParams*& __cordl_internal_get__cachedStartClientParams();

  constexpr ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* const& __cordl_internal_get__gameLiftPlayerSessionProvider() const;

  constexpr ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*& __cordl_internal_get__gameLiftPlayerSessionProvider();

  constexpr void __cordl_internal_set__cachedConnectToServerParams(::GlobalNamespace::GameLiftConnectionManager_ConnectToServerParams* value);

  constexpr void __cordl_internal_set__cachedStartClientParams(::GlobalNamespace::GameLiftConnectionManager_StartClientParams* value);

  constexpr void __cordl_internal_set__gameLiftPlayerSessionProvider(::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* value);

  /// @brief Method .ctor, addr 0x3e70dd0, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_code, addr 0x3e70954, size 0x54, virtual true, abstract: false, final false
  inline ::StringW get_code();

  /// @brief Method get_configuration, addr 0x3e709b0, size 0x78, virtual true, abstract: false, final false
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method get_partyOwnerId, addr 0x3e709a8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_partyOwnerId();

  /// @brief Method get_secret, addr 0x3e70900, size 0x54, virtual true, abstract: false, final false
  inline ::StringW get_secret();

  /// @brief Method get_selectionMask, addr 0x3e70a28, size 0x78, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameLiftNetworkPlayerModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameLiftNetworkPlayerModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameLiftNetworkPlayerModel(GameLiftNetworkPlayerModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameLiftNetworkPlayerModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameLiftNetworkPlayerModel(GameLiftNetworkPlayerModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17340 };

  /// @brief Field _gameLiftPlayerSessionProvider, offset: 0x108, size: 0x8, def value: None
  ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* ____gameLiftPlayerSessionProvider;

  /// @brief Field _cachedConnectToServerParams, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::GameLiftConnectionManager_ConnectToServerParams* ____cachedConnectToServerParams;

  /// @brief Field _cachedStartClientParams, offset: 0x118, size: 0x8, def value: None
  ::GlobalNamespace::GameLiftConnectionManager_StartClientParams* ____cachedStartClientParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameLiftNetworkPlayerModel, ____gameLiftPlayerSessionProvider) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftNetworkPlayerModel, ____cachedConnectToServerParams) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftNetworkPlayerModel, ____cachedStartClientParams) == 0x118, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameLiftNetworkPlayerModel, 0x120>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameLiftNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameLiftNetworkPlayerModel*, "", "GameLiftNetworkPlayerModel");
