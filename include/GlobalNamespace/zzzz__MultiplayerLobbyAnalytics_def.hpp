#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiplayerLobbyAnalytics)
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class GameServerLobbyFlowCoordinator;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
struct __GameServerLobbyFlowCoordinator__LobbyType;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4005))
// CS Name: ::MultiplayerLobbyAnalytics*
class CORDL_TYPE MultiplayerLobbyAnalytics : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _gameServerLobbyFlowCoordinator, offset 0x18, size 0x8
  __declspec(property(get = __get__gameServerLobbyFlowCoordinator, put = __set__gameServerLobbyFlowCoordinator))::GlobalNamespace::GameServerLobbyFlowCoordinator* _gameServerLobbyFlowCoordinator;

  /// @brief Field _analyticsModel, offset 0x20, size 0x8
  __declspec(property(get = __get__analyticsModel, put = __set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  constexpr ::GlobalNamespace::GameServerLobbyFlowCoordinator*& __get__gameServerLobbyFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServerLobbyFlowCoordinator*> const& __get__gameServerLobbyFlowCoordinator() const;

  constexpr void __set__gameServerLobbyFlowCoordinator(::GlobalNamespace::GameServerLobbyFlowCoordinator* value);

  constexpr ::GlobalNamespace::IAnalyticsModel*& __get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __get__analyticsModel() const;

  constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  /// @brief Method Awake addr 0x20c3dac size 0x178 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x20c3f24 size 0x1c4 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleGameServerLobbyFlowCoordinatorDidSetupEvent addr 0x20c40e8 size 0x16c virtual false final false
  inline void HandleGameServerLobbyFlowCoordinatorDidSetupEvent();

  /// @brief Method HandleGameServerLobbyFlowCoordinatorDidFinish addr 0x20c42d4 size 0x114 virtual false final false
  inline void HandleGameServerLobbyFlowCoordinatorDidFinish();

  /// @brief Method HandleGameServerLobbyFlowCoordinatorStartGameOrReady addr 0x20c44b4 size 0x114 virtual false final false
  inline void HandleGameServerLobbyFlowCoordinatorStartGameOrReady();

  /// @brief Method HandleGameServerLobbyFlowCoordinatorDidOpenInvitePanel addr 0x20c45c8 size 0x114 virtual false final false
  inline void HandleGameServerLobbyFlowCoordinatorDidOpenInvitePanel();

  /// @brief Method LogClick addr 0x20c43e8 size 0xcc virtual false final false
  inline void LogClick(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* clickData);

  /// @brief Method GetEventTypeFromLobbyType addr 0x20c4254 size 0x80 virtual false final false
  inline ::StringW GetEventTypeFromLobbyType(::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType lobbyType);

  static inline ::GlobalNamespace::MultiplayerLobbyAnalytics* New_ctor();

  /// @brief Method .ctor addr 0x20c46dc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAnalytics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyAnalytics(MultiplayerLobbyAnalytics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAnalytics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyAnalytics(MultiplayerLobbyAnalytics const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyAnalytics();

public:
  /// @brief Field _gameServerLobbyFlowCoordinator, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::GameServerLobbyFlowCoordinator* ____gameServerLobbyFlowCoordinator;

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
