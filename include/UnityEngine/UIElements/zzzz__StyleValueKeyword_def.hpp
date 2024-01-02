#pragma once
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
// Type: UnityEngine.UIElements::StyleValueKeyword
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7280))
// CS Name: ::UnityEngine.UIElements::StyleValueKeyword
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StyleValueKeyword(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleValueKeyword();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Inherit value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::StyleValueKeyword const Inherit;

  /// @brief Field Initial value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::StyleValueKeyword const Initial;

  /// @brief Field Auto value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::StyleValueKeyword const Auto;

  /// @brief Field Unset value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::StyleValueKeyword const Unset;

  /// @brief Field True value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::StyleValueKeyword const True;

  /// @brief Field False value: static_cast<int32_t>(0x5)
  static ::UnityEngine::UIElements::StyleValueKeyword const False;

  /// @brief Field None value: static_cast<int32_t>(0x6)
  static ::UnityEngine::UIElements::StyleValueKeyword const None;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleValueKeyword, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleValueKeyword, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleValueKeyword, "UnityEngine.UIElements", "StyleValueKeyword");
