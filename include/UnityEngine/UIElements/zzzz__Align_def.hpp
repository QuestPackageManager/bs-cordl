#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Align)
// Forward declare root types
namespace UnityEngine::UIElements {
struct Align;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Align);
// Type: UnityEngine.UIElements::Align
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6977))
// CS Name: ::UnityEngine.UIElements::Align
struct CORDL_TYPE Align {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Align_Unwrapped
  enum struct __Align_Unwrapped : int32_t {
    __E_Auto = static_cast<int32_t>(0x0),
    __E_FlexStart = static_cast<int32_t>(0x1),
    __E_Center = static_cast<int32_t>(0x2),
    __E_FlexEnd = static_cast<int32_t>(0x3),
    __E_Stretch = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Align_Unwrapped() const noexcept {
    return static_cast<__Align_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Align(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Align();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Auto value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::Align const Auto;

  /// @brief Field FlexStart value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::Align const FlexStart;

  /// @brief Field Center value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::Align const Center;

  /// @brief Field FlexEnd value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::Align const FlexEnd;

  /// @brief Field Stretch value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::Align const Stretch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Align, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Align, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Align, "UnityEngine.UIElements", "Align");
