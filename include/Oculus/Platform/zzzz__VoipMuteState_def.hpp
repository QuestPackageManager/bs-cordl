#pragma once
// IWYU pragma private; include "Oculus/Platform/VoipMuteState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoipMuteState)
// Forward declare root types
namespace Oculus::Platform {
struct VoipMuteState;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::VoipMuteState);
// Dependencies
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.VoipMuteState
struct CORDL_TYPE VoipMuteState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VoipMuteState_Unwrapped
  enum struct __VoipMuteState_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Muted = static_cast<int32_t>(0x1),
    __E_Unmuted = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VoipMuteState_Unwrapped() const noexcept {
    return static_cast<__VoipMuteState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VoipMuteState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VoipMuteState(int32_t value__) noexcept;

  /// @brief Field Muted value: I32(1)
  static ::Oculus::Platform::VoipMuteState const Muted;

  /// @brief Field Unknown value: I32(0)
  static ::Oculus::Platform::VoipMuteState const Unknown;

  /// @brief Field Unmuted value: I32(2)
  static ::Oculus::Platform::VoipMuteState const Unmuted;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15489 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::VoipMuteState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::VoipMuteState, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::VoipMuteState, "Oculus.Platform", "VoipMuteState");
