#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugOverdrawMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugOverdrawMode)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DebugOverdrawMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DebugOverdrawMode);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DebugOverdrawMode
struct CORDL_TYPE DebugOverdrawMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugOverdrawMode_Unwrapped
  enum struct __DebugOverdrawMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Opaque = static_cast<int32_t>(0x1),
    __E_Transparent = static_cast<int32_t>(0x2),
    __E_All = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugOverdrawMode_Unwrapped() const noexcept {
    return static_cast<__DebugOverdrawMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugOverdrawMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugOverdrawMode(int32_t value__) noexcept;

  /// @brief Field All value: I32(3)
  static ::UnityEngine::Rendering::Universal::DebugOverdrawMode const All;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::Universal::DebugOverdrawMode const None;

  /// @brief Field Opaque value: I32(1)
  static ::UnityEngine::Rendering::Universal::DebugOverdrawMode const Opaque;

  /// @brief Field Transparent value: I32(2)
  static ::UnityEngine::Rendering::Universal::DebugOverdrawMode const Transparent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23086 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugOverdrawMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugOverdrawMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugOverdrawMode, "UnityEngine.Rendering.Universal", "DebugOverdrawMode");
