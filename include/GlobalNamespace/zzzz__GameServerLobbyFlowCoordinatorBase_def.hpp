#pragma once
// IWYU pragma private; include "GlobalNamespace/GameServerLobbyFlowCoordinatorBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameServerLobbyFlowCoordinatorBase)
namespace GlobalNamespace {
struct GameServerLobbyFlowCoordinatorBase_LobbyType;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameServerLobbyFlowCoordinatorBase_LobbyType;
}
namespace GlobalNamespace {
class GameServerLobbyFlowCoordinatorBase;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType);
MARK_REF_PTR_T(::GlobalNamespace::GameServerLobbyFlowCoordinatorBase);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameServerLobbyFlowCoordinatorBase/LobbyType
struct CORDL_TYPE GameServerLobbyFlowCoordinatorBase_LobbyType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameServerLobbyFlowCoordinatorBase_LobbyType_Unwrapped
  enum struct __GameServerLobbyFlowCoordinatorBase_LobbyType_Unwrapped : int32_t {
    __E_HostSetup = static_cast<int32_t>(0x0),
    __E_ClientSetup = static_cast<int32_t>(0x1),
    __E_QuickPlayLobby = static_cast<int32_t>(0x2),
    __E_Party = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameServerLobbyFlowCoordinatorBase_LobbyType_Unwrapped() const noexcept {
    return static_cast<__GameServerLobbyFlowCoordinatorBase_LobbyType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServerLobbyFlowCoordinatorBase_LobbyType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GameServerLobbyFlowCoordinatorBase_LobbyType(int32_t value__) noexcept;

  /// @brief Field ClientSetup value: I32(1)
  static ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType const ClientSetup;

  /// @brief Field HostSetup value: I32(0)
  static ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType const HostSetup;

  /// @brief Field Party value: I32(3)
  static ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType const Party;

  /// @brief Field QuickPlayLobby value: I32(2)
  static ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType const QuickPlayLobby;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6373 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMUI.FlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameServerLobbyFlowCoordinatorBase
class CORDL_TYPE GameServerLobbyFlowCoordinatorBase : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using LobbyType = ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType;

  /// @brief Method GetLobbyType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType GetLobbyType();

  static inline ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase* New_ctor();

  /// @brief Method .ctor, addr 0x57fb15c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_didFinishEvent(::System::Action* value);

  /// @brief Method add_didOpenInvitePanelEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_didOpenInvitePanelEvent(::System::Action* value);

  /// @brief Method add_didSetupEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_didSetupEvent(::System::Action* value);

  /// @brief Method add_startGameOrReadyEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_startGameOrReadyEvent(::System::Action* value);

  /// @brief Method add_willFinishEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_willFinishEvent(::System::Action* value);

  /// @brief Method remove_didFinishEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action* value);

  /// @brief Method remove_didOpenInvitePanelEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_didOpenInvitePanelEvent(::System::Action* value);

  /// @brief Method remove_didSetupEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_didSetupEvent(::System::Action* value);

  /// @brief Method remove_startGameOrReadyEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_startGameOrReadyEvent(::System::Action* value);

  /// @brief Method remove_willFinishEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_willFinishEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServerLobbyFlowCoordinatorBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameServerLobbyFlowCoordinatorBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServerLobbyFlowCoordinatorBase(GameServerLobbyFlowCoordinatorBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServerLobbyFlowCoordinatorBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServerLobbyFlowCoordinatorBase(GameServerLobbyFlowCoordinatorBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6374 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase, 0xb0>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType, "", "GameServerLobbyFlowCoordinatorBase/LobbyType");
NEED_NO_BOX(::GlobalNamespace::GameServerLobbyFlowCoordinatorBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*, "", "GameServerLobbyFlowCoordinatorBase");
