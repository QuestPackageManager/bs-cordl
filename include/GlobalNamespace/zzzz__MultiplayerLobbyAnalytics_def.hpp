#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLobbyAnalytics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiplayerLobbyAnalytics)
namespace GlobalNamespace {
class GameServerLobbyFlowCoordinator;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
struct __GameServerLobbyFlowCoordinator__LobbyType;
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
// Type: ::MultiplayerLobbyAnalytics
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLobbyAnalytics*
class CORDL_TYPE MultiplayerLobbyAnalytics : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _analyticsModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _gameServerLobbyFlowCoordinator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__gameServerLobbyFlowCoordinator,
                      put = __cordl_internal_set__gameServerLobbyFlowCoordinator))::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> _gameServerLobbyFlowCoordinator;

  /// @brief Method Awake, addr 0x2629d70, size 0x178, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetEventTypeFromLobbyType, addr 0x262a218, size 0x80, virtual false, abstract: false, final false
  inline ::StringW GetEventTypeFromLobbyType(::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType lobbyType);

  /// @brief Method HandleGameServerLobbyFlowCoordinatorDidFinish, addr 0x262a298, size 0x114, virtual false, abstract: false, final false
  inline void HandleGameServerLobbyFlowCoordinatorDidFinish();

  /// @brief Method HandleGameServerLobbyFlowCoordinatorDidOpenInvitePanel, addr 0x262a58c, size 0x114, virtual false, abstract: false, final false
  inline void HandleGameServerLobbyFlowCoordinatorDidOpenInvitePanel();

  /// @brief Method HandleGameServerLobbyFlowCoordinatorDidSetupEvent, addr 0x262a0ac, size 0x16c, virtual false, abstract: false, final false
  inline void HandleGameServerLobbyFlowCoordinatorDidSetupEvent();

  /// @brief Method HandleGameServerLobbyFlowCoordinatorStartGameOrReady, addr 0x262a478, size 0x114, virtual false, abstract: false, final false
  inline void HandleGameServerLobbyFlowCoordinatorStartGameOrReady();

  /// @brief Method LogClick, addr 0x262a3ac, size 0xcc, virtual false, abstract: false, final false
  inline void LogClick(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* clickData);

  static inline ::GlobalNamespace::MultiplayerLobbyAnalytics* New_ctor();

  /// @brief Method OnDestroy, addr 0x2629ee8, size 0x1c4, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __cordl_internal_get__analyticsModel() const;

  constexpr ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> const& __cordl_internal_get__gameServerLobbyFlowCoordinator() const;

  constexpr ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator>& __cordl_internal_get__gameServerLobbyFlowCoordinator();

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr void __cordl_internal_set__gameServerLobbyFlowCoordinator(::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> value);

  /// @brief Method .ctor, addr 0x262a6a0, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _gameServerLobbyFlowCoordinator, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> ____gameServerLobbyFlowCoordinator;

  /// @brief Field _analyticsModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyAnalytics, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAnalytics, ____gameServerLobbyFlowCoordinator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAnalytics, ____analyticsModel) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAnalytics*, "", "MultiplayerLobbyAnalytics");
