#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Align.hpp"
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
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Align
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Align();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Align(int32_t value__) noexcept;

  /// @brief Field Auto value: I32(0)
  static ::UnityEngine::UIElements::Align const Auto;

  /// @brief Field Center value: I32(2)
  static ::UnityEngine::UIElements::Align const Center;

  /// @brief Field FlexEnd value: I32(3)
  static ::UnityEngine::UIElements::Align const FlexEnd;

  /// @brief Field FlexStart value: I32(1)
  static ::UnityEngine::UIElements::Align const FlexStart;

  /// @brief Field Stretch value: I32(4)
  static ::UnityEngine::UIElements::Align const Stretch;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6124 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Align, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Align, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Align, "UnityEngine.UIElements", "Align");
