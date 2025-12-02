#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLobbyAnalytics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiplayerLobbyAnalytics)
namespace GlobalNamespace {
struct GameServerLobbyFlowCoordinatorBase_LobbyType;
}
namespace GlobalNamespace {
class GameServerLobbyFlowCoordinatorBase;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyAnalytics;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyAnalytics);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLobbyAnalytics
class CORDL_TYPE MultiplayerLobbyAnalytics : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _analyticsModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _gameServerLobbyFlowCoordinator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameServerLobbyFlowCoordinator,
                      put = __cordl_internal_set__gameServerLobbyFlowCoordinator)) ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase>
      _gameServerLobbyFlowCoordinator;

  /// @brief Method Awake, addr 0x56a61b4, size 0x228, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetEventTypeFromLobbyType, addr 0x56a6834, size 0xa0, virtual false, abstract: false, final false
  inline ::StringW GetEventTypeFromLobbyType(::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType lobbyType);

  /// @brief Method HandleGameServerLobbyFlowCoordinatorDidFinish, addr 0x56a68d4, size 0x168, virtual false, abstract: false, final false
  inline void HandleGameServerLobbyFlowCoordinatorDidFinish();

  /// @brief Method HandleGameServerLobbyFlowCoordinatorDidOpenInvitePanel, addr 0x56a6c84, size 0x168, virtual false, abstract: false, final false
  inline void HandleGameServerLobbyFlowCoordinatorDidOpenInvitePanel();

  /// @brief Method HandleGameServerLobbyFlowCoordinatorDidSetupEvent, addr 0x56a6680, size 0x1b4, virtual false, abstract: false, final false
  inline void HandleGameServerLobbyFlowCoordinatorDidSetupEvent();

  /// @brief Method HandleGameServerLobbyFlowCoordinatorStartGameOrReady, addr 0x56a6b1c, size 0x168, virtual false, abstract: false, final false
  inline void HandleGameServerLobbyFlowCoordinatorStartGameOrReady();

  /// @brief Method LogClick, addr 0x56a6a3c, size 0xe0, virtual false, abstract: false, final false
  inline void LogClick(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* clickData);

  static inline ::GlobalNamespace::MultiplayerLobbyAnalytics* New_ctor();

  /// @brief Method OnDestroy, addr 0x56a63dc, size 0x2a4, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::GlobalNamespace::IAnalyticsModel* const& __cordl_internal_get__analyticsModel() const;

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase> const& __cordl_internal_get__gameServerLobbyFlowCoordinator() const;

  constexpr ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase>& __cordl_internal_get__gameServerLobbyFlowCoordinator();

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr void __cordl_internal_set__gameServerLobbyFlowCoordinator(::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase> value);

  /// @brief Method .ctor, addr 0x56a6dec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyAnalytics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAnalytics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyAnalytics(MultiplayerLobbyAnalytics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAnalytics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyAnalytics(MultiplayerLobbyAnalytics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5545 };

  /// @brief Field _gameServerLobbyFlowCoordinator, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase> ____gameServerLobbyFlowCoordinator;

  /// @brief Field _analyticsModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAnalytics, ____gameServerLobbyFlowCoordinator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAnalytics, ____analyticsModel) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyAnalytics, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAnalytics*, "", "MultiplayerLobbyAnalytics");
