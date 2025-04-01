#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateConnectionStateReason.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateConnectionStateReason)
// Forward declare root types
namespace GlobalNamespace {
struct UpdateConnectionStateReason;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UpdateConnectionStateReason);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: UpdateConnectionStateReason
struct CORDL_TYPE UpdateConnectionStateReason {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UpdateConnectionStateReason_Unwrapped
  enum struct __UpdateConnectionStateReason_Unwrapped : int32_t {
    __E_Init = static_cast<int32_t>(0x0),
    __E_PlayerOrderChanged = static_cast<int32_t>(0x1),
    __E_Connected = static_cast<int32_t>(0x2),
    __E_StartSession = static_cast<int32_t>(0x3),
    __E_StartDedicatedServer = static_cast<int32_t>(0x4),
    __E_SyncTimeInitialized = static_cast<int32_t>(0x5),
    __E_ManualDisconnect = static_cast<int32_t>(0x6),
    __E_RemoteDisconnect = static_cast<int32_t>(0x7),
    __E_ConnectionFailed = static_cast<int32_t>(0x8),
    __E_OnDestroy = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UpdateConnectionStateReason_Unwrapped() const noexcept {
    return static_cast<__UpdateConnectionStateReason_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateConnectionStateReason();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UpdateConnectionStateReason(int32_t value__) noexcept;

  /// @brief Field Connected value: I32(2)
  static ::GlobalNamespace::UpdateConnectionStateReason const Connected;

  /// @brief Field ConnectionFailed value: I32(8)
  static ::GlobalNamespace::UpdateConnectionStateReason const ConnectionFailed;

  /// @brief Field Init value: I32(0)
  static ::GlobalNamespace::UpdateConnectionStateReason const Init;

  /// @brief Field ManualDisconnect value: I32(6)
  static ::GlobalNamespace::UpdateConnectionStateReason const ManualDisconnect;

  /// @brief Field OnDestroy value: I32(9)
  static ::GlobalNamespace::UpdateConnectionStateReason const OnDestroy;

  /// @brief Field PlayerOrderChanged value: I32(1)
  static ::GlobalNamespace::UpdateConnectionStateReason const PlayerOrderChanged;

  /// @brief Field RemoteDisconnect value: I32(7)
  static ::GlobalNamespace::UpdateConnectionStateReason const RemoteDisconnect;

  /// @brief Field StartDedicatedServer value: I32(4)
  static ::GlobalNamespace::UpdateConnectionStateReason const StartDedicatedServer;

  /// @brief Field StartSession value: I32(3)
  static ::GlobalNamespace::UpdateConnectionStateReason const StartSession;

  /// @brief Field SyncTimeInitialized value: I32(5)
  static ::GlobalNamespace::UpdateConnectionStateReason const SyncTimeInitialized;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14998 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpdateConnectionStateReason, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UpdateConnectionStateReason, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UpdateConnectionStateReason, "", "UpdateConnectionStateReason");
