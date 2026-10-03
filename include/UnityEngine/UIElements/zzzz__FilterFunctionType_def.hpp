#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FilterFunctionType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FilterFunctionType)
// Forward declare root types
namespace UnityEngine::UIElements {
struct FilterFunctionType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::FilterFunctionType);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::FilterFunctionType, "UnityEngine.UIElements", "FilterFunctionType");
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.FilterFunctionType
struct CORDL_TYPE FilterFunctionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FilterFunctionType_Unwrapped
  enum struct __FilterFunctionType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Custom = static_cast<int32_t>(0x1),
    __E_Tint = static_cast<int32_t>(0x2),
    __E_Opacity = static_cast<int32_t>(0x3),
    __E_Invert = static_cast<int32_t>(0x4),
    __E_Grayscale = static_cast<int32_t>(0x5),
    __E_Sepia = static_cast<int32_t>(0x6),
    __E_Blur = static_cast<int32_t>(0x7),
    __E_Contrast = static_cast<int32_t>(0x8),
    __E_HueRotate = static_cast<int32_t>(0x9),
    __E_Count = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FilterFunctionType_Unwrapped() const noexcept {
    return static_cast<__FilterFunctionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FilterFunctionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr FilterFunctionType(int32_t value__) noexcept;

  /// @brief Field Blur value: I32(7)
  static ::UnityEngine::UIElements::FilterFunctionType const Blur;

  /// @brief Field Contrast value: I32(8)
  static ::UnityEngine::UIElements::FilterFunctionType const Contrast;

  /// @brief Field Count value: I32(10)
  static ::UnityEngine::UIElements::FilterFunctionType const Count;

  /// @brief Field Custom value: I32(1)
  static ::UnityEngine::UIElements::FilterFunctionType const Custom;

  /// @brief Field Grayscale value: I32(5)
  static ::UnityEngine::UIElements::FilterFunctionType const Grayscale;

  /// @brief Field HueRotate value: I32(9)
  static ::UnityEngine::UIElements::FilterFunctionType const HueRotate;

  /// @brief Field Invert value: I32(4)
  static ::UnityEngine::UIElements::FilterFunctionType const Invert;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::FilterFunctionType const None;

  /// @brief Field Opacity value: I32(3)
  static ::UnityEngine::UIElements::FilterFunctionType const Opacity;

  /// @brief Field Sepia value: I32(6)
  static ::UnityEngine::UIElements::FilterFunctionType const Sepia;

  /// @brief Field Tint value: I32(2)
  static ::UnityEngine::UIElements::FilterFunctionType const Tint;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4760 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::FilterFunctionType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::FilterFunctionType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements
