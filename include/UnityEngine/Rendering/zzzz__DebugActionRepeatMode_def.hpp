#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugActionRepeatMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugActionRepeatMode)
// Forward declare root types
namespace UnityEngine::Rendering {
struct DebugActionRepeatMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DebugActionRepeatMode);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugActionRepeatMode
struct CORDL_TYPE DebugActionRepeatMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugActionRepeatMode_Unwrapped
  enum struct __DebugActionRepeatMode_Unwrapped : int32_t {
    __E_Never = static_cast<int32_t>(0x0),
    __E_Delay = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugActionRepeatMode_Unwrapped() const noexcept {
    return static_cast<__DebugActionRepeatMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugActionRepeatMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugActionRepeatMode(int32_t value__) noexcept;

  /// @brief Field Delay value: I32(1)
  static ::UnityEngine::Rendering::DebugActionRepeatMode const Delay;

  /// @brief Field Never value: I32(0)
  static ::UnityEngine::Rendering::DebugActionRepeatMode const Never;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11953 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugActionRepeatMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugActionRepeatMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugActionRepeatMode, "UnityEngine.Rendering", "DebugActionRepeatMode");
