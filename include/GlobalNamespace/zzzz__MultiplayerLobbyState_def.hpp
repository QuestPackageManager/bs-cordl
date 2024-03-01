#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLobbyState)
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerLobbyState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerLobbyState);
// Type: ::MultiplayerLobbyState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MultiplayerLobbyState
struct CORDL_TYPE MultiplayerLobbyState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerLobbyState_Unwrapped
  enum struct __MultiplayerLobbyState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_LobbySetup = static_cast<int32_t>(0x1),
    __E_LobbyCountdown = static_cast<int32_t>(0x2),
    __E_GameStarting = static_cast<int32_t>(0x3),
    __E_GameRunning = static_cast<int32_t>(0x4),
    __E_Error = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerLobbyState_Unwrapped() const noexcept {
    return static_cast<__MultiplayerLobbyState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerLobbyState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Error value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::MultiplayerLobbyState const Error;

  /// @brief Field GameRunning value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::MultiplayerLobbyState const GameRunning;

  /// @brief Field GameStarting value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::MultiplayerLobbyState const GameStarting;

  /// @brief Field LobbyCountdown value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::MultiplayerLobbyState const LobbyCountdown;

  /// @brief Field LobbySetup value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::MultiplayerLobbyState const LobbySetup;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::MultiplayerLobbyState const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyState, "", "MultiplayerLobbyState");
