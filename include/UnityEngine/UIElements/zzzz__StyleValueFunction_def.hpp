#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleValueFunction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleValueFunction)
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleValueFunction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleValueFunction);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleValueFunction, "UnityEngine.UIElements", "StyleValueFunction");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleValueFunction
struct CORDL_TYPE StyleValueFunction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StyleValueFunction_Unwrapped
  enum struct __StyleValueFunction_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Var = static_cast<int32_t>(0x1),
    __E_Env = static_cast<int32_t>(0x2),
    __E_LinearGradient = static_cast<int32_t>(0x3),
    __E_NoneFilter = static_cast<int32_t>(0x4),
    __E_CustomFilter = static_cast<int32_t>(0x5),
    __E_FilterTint = static_cast<int32_t>(0x6),
    __E_FilterOpacity = static_cast<int32_t>(0x7),
    __E_FilterInvert = static_cast<int32_t>(0x8),
    __E_FilterGrayscale = static_cast<int32_t>(0x9),
    __E_FilterSepia = static_cast<int32_t>(0xa),
    __E_FilterBlur = static_cast<int32_t>(0xb),
    __E_FilterContrast = static_cast<int32_t>(0xc),
    __E_FilterHueRotate = static_cast<int32_t>(0xd),
    __E_MaterialProperty = static_cast<int32_t>(0xe),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StyleValueFunction_Unwrapped() const noexcept {
    return static_cast<__StyleValueFunction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleValueFunction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr StyleValueFunction(int32_t value__) noexcept;

  /// @brief Field CustomFilter value: I32(5)
  static ::UnityEngine::UIElements::StyleValueFunction const CustomFilter;

  /// @brief Field Env value: I32(2)
  static ::UnityEngine::UIElements::StyleValueFunction const Env;

  /// @brief Field FilterBlur value: I32(11)
  static ::UnityEngine::UIElements::StyleValueFunction const FilterBlur;

  /// @brief Field FilterContrast value: I32(12)
  static ::UnityEngine::UIElements::StyleValueFunction const FilterContrast;

  /// @brief Field FilterGrayscale value: I32(9)
  static ::UnityEngine::UIElements::StyleValueFunction const FilterGrayscale;

  /// @brief Field FilterHueRotate value: I32(13)
  static ::UnityEngine::UIElements::StyleValueFunction const FilterHueRotate;

  /// @brief Field FilterInvert value: I32(8)
  static ::UnityEngine::UIElements::StyleValueFunction const FilterInvert;

  /// @brief Field FilterOpacity value: I32(7)
  static ::UnityEngine::UIElements::StyleValueFunction const FilterOpacity;

  /// @brief Field FilterSepia value: I32(10)
  static ::UnityEngine::UIElements::StyleValueFunction const FilterSepia;

  /// @brief Field FilterTint value: I32(6)
  static ::UnityEngine::UIElements::StyleValueFunction const FilterTint;

  /// @brief Field LinearGradient value: I32(3)
  static ::UnityEngine::UIElements::StyleValueFunction const LinearGradient;

  /// @brief Field MaterialProperty value: I32(14)
  static ::UnityEngine::UIElements::StyleValueFunction const MaterialProperty;

  /// @brief Field NoneFilter value: I32(4)
  static ::UnityEngine::UIElements::StyleValueFunction const NoneFilter;

  /// @brief Field Unknown value: I32(0)
  static ::UnityEngine::UIElements::StyleValueFunction const Unknown;

  /// @brief Field Var value: I32(1)
  static ::UnityEngine::UIElements::StyleValueFunction const Var;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5151 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleValueFunction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleValueFunction) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements
