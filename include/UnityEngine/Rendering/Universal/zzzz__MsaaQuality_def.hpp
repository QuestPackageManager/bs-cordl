#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/MsaaQuality.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MsaaQuality)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct MsaaQuality;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::MsaaQuality);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.MsaaQuality
struct CORDL_TYPE MsaaQuality {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MsaaQuality_Unwrapped
  enum struct __MsaaQuality_Unwrapped : int32_t {
    __E_Disabled = static_cast<int32_t>(0x1),
    __E__2x = static_cast<int32_t>(0x2),
    __E__4x = static_cast<int32_t>(0x4),
    __E__8x = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MsaaQuality_Unwrapped() const noexcept {
    return static_cast<__MsaaQuality_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MsaaQuality();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MsaaQuality(int32_t value__) noexcept;

  /// @brief Field Disabled value: I32(1)
  static ::UnityEngine::Rendering::Universal::MsaaQuality const Disabled;

  /// @brief Field _2x value: I32(2)
  static ::UnityEngine::Rendering::Universal::MsaaQuality const _2x;

  /// @brief Field _4x value: I32(4)
  static ::UnityEngine::Rendering::Universal::MsaaQuality const _4x;

  /// @brief Field _8x value: I32(8)
  static ::UnityEngine::Rendering::Universal::MsaaQuality const _8x;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12558 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::MsaaQuality, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::MsaaQuality, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::MsaaQuality, "UnityEngine.Rendering.Universal", "MsaaQuality");
