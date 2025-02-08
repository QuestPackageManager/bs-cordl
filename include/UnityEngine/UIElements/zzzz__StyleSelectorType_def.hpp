#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSelectorType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSelectorType)
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleSelectorType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSelectorType);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSelectorType
struct CORDL_TYPE StyleSelectorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StyleSelectorType_Unwrapped
  enum struct __StyleSelectorType_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Wildcard = static_cast<int32_t>(0x1),
    __E_Type = static_cast<int32_t>(0x2),
    __E_Class = static_cast<int32_t>(0x3),
    __E_PseudoClass = static_cast<int32_t>(0x4),
    __E_RecursivePseudoClass = static_cast<int32_t>(0x5),
    __E_ID = static_cast<int32_t>(0x6),
    __E_Predicate = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StyleSelectorType_Unwrapped() const noexcept {
    return static_cast<__StyleSelectorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSelectorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StyleSelectorType(int32_t value__) noexcept;

  /// @brief Field Class value: I32(3)
  static ::UnityEngine::UIElements::StyleSelectorType const Class;

  /// @brief Field Predicate value: I32(7)
  static ::UnityEngine::UIElements::StyleSelectorType const Predicate;

  /// @brief Field PseudoClass value: I32(4)
  static ::UnityEngine::UIElements::StyleSelectorType const PseudoClass;

  /// @brief Field RecursivePseudoClass value: I32(5)
  static ::UnityEngine::UIElements::StyleSelectorType const RecursivePseudoClass;

  /// @brief Field Type value: I32(2)
  static ::UnityEngine::UIElements::StyleSelectorType const Type;

  /// @brief Field Unknown value: I32(0)
  static ::UnityEngine::UIElements::StyleSelectorType const Unknown;

  /// @brief Field Wildcard value: I32(1)
  static ::UnityEngine::UIElements::StyleSelectorType const Wildcard;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6178 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ID value: I32(6)
  static ::UnityEngine::UIElements::StyleSelectorType const _cordl_ID;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSelectorType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSelectorType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSelectorType, "UnityEngine.UIElements", "StyleSelectorType");
