#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OverflowInternal)
// Forward declare root types
namespace UnityEngine::UIElements {
struct OverflowInternal;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::OverflowInternal);
// Type: UnityEngine.UIElements::OverflowInternal
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::OverflowInternal
struct CORDL_TYPE OverflowInternal {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OverflowInternal_Unwrapped
  enum struct __OverflowInternal_Unwrapped : int32_t {
    __E_Visible = static_cast<int32_t>(0x0),
    __E_Hidden = static_cast<int32_t>(0x1),
    __E_Scroll = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OverflowInternal_Unwrapped() const noexcept {
    return static_cast<__OverflowInternal_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OverflowInternal();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OverflowInternal(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Hidden value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::OverflowInternal const Hidden;

  /// @brief Field Scroll value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::OverflowInternal const Scroll;

  /// @brief Field Visible value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::OverflowInternal const Visible;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::OverflowInternal, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::OverflowInternal, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::OverflowInternal, "UnityEngine.UIElements", "OverflowInternal");
