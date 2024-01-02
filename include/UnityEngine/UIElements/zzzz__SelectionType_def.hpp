#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectionType)
// Forward declare root types
namespace UnityEngine::UIElements {
struct SelectionType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::SelectionType);
// Type: UnityEngine.UIElements::SelectionType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6885))
// CS Name: ::UnityEngine.UIElements::SelectionType
struct CORDL_TYPE SelectionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SelectionType_Unwrapped
  enum struct __SelectionType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Single = static_cast<int32_t>(0x1),
    __E_Multiple = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SelectionType_Unwrapped() const noexcept {
    return static_cast<__SelectionType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SelectionType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectionType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::SelectionType const None;

  /// @brief Field Single value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::SelectionType const Single;

  /// @brief Field Multiple value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::SelectionType const Multiple;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::SelectionType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SelectionType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::SelectionType, "UnityEngine.UIElements", "SelectionType");
