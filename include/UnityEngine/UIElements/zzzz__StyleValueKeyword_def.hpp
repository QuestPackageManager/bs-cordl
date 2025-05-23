#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleValueKeyword.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleValueKeyword)
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleValueKeyword;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleValueKeyword);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleValueKeyword
struct CORDL_TYPE StyleValueKeyword {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StyleValueKeyword_Unwrapped
  enum struct __StyleValueKeyword_Unwrapped : int32_t {
    __E_Inherit = static_cast<int32_t>(0x0),
    __E_Initial = static_cast<int32_t>(0x1),
    __E_Auto = static_cast<int32_t>(0x2),
    __E_Unset = static_cast<int32_t>(0x3),
    __E_True = static_cast<int32_t>(0x4),
    __E_False = static_cast<int32_t>(0x5),
    __E_None = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StyleValueKeyword_Unwrapped() const noexcept {
    return static_cast<__StyleValueKeyword_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleValueKeyword();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StyleValueKeyword(int32_t value__) noexcept;

  /// @brief Field Auto value: I32(2)
  static ::UnityEngine::UIElements::StyleValueKeyword const Auto;

  /// @brief Field False value: I32(5)
  static ::UnityEngine::UIElements::StyleValueKeyword const False;

  /// @brief Field Inherit value: I32(0)
  static ::UnityEngine::UIElements::StyleValueKeyword const Inherit;

  /// @brief Field Initial value: I32(1)
  static ::UnityEngine::UIElements::StyleValueKeyword const Initial;

  /// @brief Field None value: I32(6)
  static ::UnityEngine::UIElements::StyleValueKeyword const None;

  /// @brief Field True value: I32(4)
  static ::UnityEngine::UIElements::StyleValueKeyword const True;

  /// @brief Field Unset value: I32(3)
  static ::UnityEngine::UIElements::StyleValueKeyword const Unset;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6185 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleValueKeyword, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleValueKeyword, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleValueKeyword, "UnityEngine.UIElements", "StyleValueKeyword");
