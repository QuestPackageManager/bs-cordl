#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerPlacementErrorCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerPlacementErrorCode)
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerPlacementErrorCode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerPlacementErrorCode);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerPlacementErrorCode
struct CORDL_TYPE MultiplayerPlacementErrorCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerPlacementErrorCode_Unwrapped
  enum struct __MultiplayerPlacementErrorCode_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_Unknown = static_cast<int32_t>(0x1),
    __E_ConnectionCanceled = static_cast<int32_t>(0x2),
    __E_ServerDoesNotExist = static_cast<int32_t>(0x3),
    __E_ServerAtCapacity = static_cast<int32_t>(0x4),
    __E_AuthenticationFailed = static_cast<int32_t>(0x5),
    __E_RequestTimeout = static_cast<int32_t>(0x6),
    __E_MatchmakingTimeout = static_cast<int32_t>(0x7),
    __E_MismatchedServerEnvironment = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerPlacementErrorCode_Unwrapped() const noexcept {
    return static_cast<__MultiplayerPlacementErrorCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerPlacementErrorCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerPlacementErrorCode(int32_t value__) noexcept;

  /// @brief Field AuthenticationFailed value: I32(5)
  static ::GlobalNamespace::MultiplayerPlacementErrorCode const AuthenticationFailed;

  /// @brief Field ConnectionCanceled value: I32(2)
  static ::GlobalNamespace::MultiplayerPlacementErrorCode const ConnectionCanceled;

  /// @brief Field MatchmakingTimeout value: I32(7)
  static ::GlobalNamespace::MultiplayerPlacementErrorCode const MatchmakingTimeout;

  /// @brief Field MismatchedServerEnvironment value: I32(8)
  static ::GlobalNamespace::MultiplayerPlacementErrorCode const MismatchedServerEnvironment;

  /// @brief Field RequestTimeout value: I32(6)
  static ::GlobalNamespace::MultiplayerPlacementErrorCode const RequestTimeout;

  /// @brief Field ServerAtCapacity value: I32(4)
  static ::GlobalNamespace::MultiplayerPlacementErrorCode const ServerAtCapacity;

  /// @brief Field ServerDoesNotExist value: I32(3)
  static ::GlobalNamespace::MultiplayerPlacementErrorCode const ServerDoesNotExist;

  /// @brief Field Success value: I32(0)
  static ::GlobalNamespace::MultiplayerPlacementErrorCode const Success;

  /// @brief Field Unknown value: I32(1)
  static ::GlobalNamespace::MultiplayerPlacementErrorCode const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14746 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerPlacementErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerPlacementErrorCode, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPlacementErrorCode, "", "MultiplayerPlacementErrorCode");
