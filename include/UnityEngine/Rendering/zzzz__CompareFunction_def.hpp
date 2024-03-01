#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompareFunction)
// Forward declare root types
namespace UnityEngine::Rendering {
struct CompareFunction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CompareFunction);
// Type: UnityEngine.Rendering::CompareFunction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::CompareFunction
struct CORDL_TYPE CompareFunction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CompareFunction_Unwrapped
  enum struct __CompareFunction_Unwrapped : int32_t {
    __E_Disabled = static_cast<int32_t>(0x0),
    __E_Never = static_cast<int32_t>(0x1),
    __E_Less = static_cast<int32_t>(0x2),
    __E_Equal = static_cast<int32_t>(0x3),
    __E_LessEqual = static_cast<int32_t>(0x4),
    __E_Greater = static_cast<int32_t>(0x5),
    __E_NotEqual = static_cast<int32_t>(0x6),
    __E_GreaterEqual = static_cast<int32_t>(0x7),
    __E_Always = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CompareFunction_Unwrapped() const noexcept {
    return static_cast<__CompareFunction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__CompareFunction_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CompareFunction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CompareFunction(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Always value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Rendering::CompareFunction const Always;

  /// @brief Field Disabled value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::CompareFunction const Disabled;

  /// @brief Field Equal value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::CompareFunction const Equal;

  /// @brief Field Greater value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Rendering::CompareFunction const Greater;

  /// @brief Field GreaterEqual value: static_cast<int32_t>(0x7)
  static ::UnityEngine::Rendering::CompareFunction const GreaterEqual;

  /// @brief Field Less value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::CompareFunction const Less;

  /// @brief Field LessEqual value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::CompareFunction const LessEqual;

  /// @brief Field Never value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::CompareFunction const Never;

  /// @brief Field NotEqual value: static_cast<int32_t>(0x6)
  static ::UnityEngine::Rendering::CompareFunction const NotEqual;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CompareFunction, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CompareFunction, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CompareFunction, "UnityEngine.Rendering", "CompareFunction");
