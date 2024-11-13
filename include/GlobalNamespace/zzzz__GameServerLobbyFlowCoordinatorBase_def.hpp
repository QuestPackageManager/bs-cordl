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
struct __GameServerLobbyFlowCoordinatorBase__LobbyType;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct __GameServerLobbyFlowCoordinatorBase__LobbyType;
}
namespace GlobalNamespace {
class GameServerLobbyFlowCoordinatorBase;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__GameServerLobbyFlowCoordinatorBase__LobbyType);
MARK_REF_PTR_T(::GlobalNamespace::GameServerLobbyFlowCoordinatorBase);
// Type: ::LobbyType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GameServerLobbyFlowCoordinatorBase::LobbyType
struct CORDL_TYPE __GameServerLobbyFlowCoordinatorBase__LobbyType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GameServerLobbyFlowCoordinatorBase__LobbyType_Unwrapped
  enum struct ____GameServerLobbyFlowCoordinatorBase__LobbyType_Unwrapped : int32_t {
    __E_HostSetup = static_cast<int32_t>(0x0),
    __E_ClientSetup = static_cast<int32_t>(0x1),
    __E_QuickPlayLobby = static_cast<int32_t>(0x2),
    __E_Party = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GameServerLobbyFlowCoordinatorBase__LobbyType_Unwrapped() const noexcept {
    return static_cast<____GameServerLobbyFlowCoordinatorBase__LobbyType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameServerLobbyFlowCoordinatorBase__LobbyType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GameServerLobbyFlowCoordinatorBase__LobbyType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ClientSetup value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__GameServerLobbyFlowCoordinatorBase__LobbyType const ClientSetup;

  /// @brief Field HostSetup value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__GameServerLobbyFlowCoordinatorBase__LobbyType const HostSetup;

  /// @brief Field Party value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__GameServerLobbyFlowCoordinatorBase__LobbyType const Party;

  /// @brief Field QuickPlayLobby value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__GameServerLobbyFlowCoordinatorBase__LobbyType const QuickPlayLobby;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4773 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameServerLobbyFlowCoordinatorBase__LobbyType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerLobbyFlowCoordinatorBase__LobbyType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameServerLobbyFlowCoordinatorBase
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameServerLobbyFlowCoordinatorBase*
class CORDL_TYPE GameServerLobbyFlowCoordinatorBase : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using LobbyType = ::GlobalNamespace::__GameServerLobbyFlowCoordinatorBase__LobbyType;

  /// @brief Method GetLobbyType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::__GameServerLobbyFlowCoordinatorBase__LobbyType GetLobbyType();

  static inline ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase* New_ctor();

  /// @brief Method .ctor, addr 0x3ba0130, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_didFinishEvent(::System::Action* value);

  /// @brief Method add_didOpenInvitePanelEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_didOpenInvitePanelEvent(::System::Action* value);

  /// @brief Method add_didSetupEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_didSetupEvent(::System::Action* value);

  /// @brief Method add_startGameOrReadyEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_startGameOrReadyEvent(::System::Action* value);

  /// @brief Method add_willFinishEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_willFinishEvent(::System::Action* value);

  /// @brief Method remove_didFinishEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_didFinishEvent(::System::Action* value);

  /// @brief Method remove_didOpenInvitePanelEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_didOpenInvitePanelEvent(::System::Action* value);

  /// @brief Method remove_didSetupEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_didSetupEvent(::System::Action* value);

  /// @brief Method remove_startGameOrReadyEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_startGameOrReadyEvent(::System::Action* value);

  /// @brief Method remove_willFinishEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4774 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase, 0xb0>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameServerLobbyFlowCoordinatorBase__LobbyType, "", "GameServerLobbyFlowCoordinatorBase/LobbyType");
NEED_NO_BOX(::GlobalNamespace::GameServerLobbyFlowCoordinatorBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*, "", "GameServerLobbyFlowCoordinatorBase");
