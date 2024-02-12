#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaDisplay)
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaDisplay;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Yoga::YogaDisplay);
// Type: UnityEngine.Yoga::YogaDisplay
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15529))
// CS Name: ::UnityEngine.Yoga::YogaDisplay
struct CORDL_TYPE YogaDisplay {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __YogaDisplay_Unwrapped
  enum struct __YogaDisplay_Unwrapped : int32_t {
    __E_Flex = static_cast<int32_t>(0x0),
    __E_None = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __YogaDisplay_Unwrapped() const noexcept {
    return static_cast<__YogaDisplay_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr YogaDisplay(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr YogaDisplay();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Flex value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Yoga::YogaDisplay const Flex;

  /// @brief Field None value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Yoga::YogaDisplay const None;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaDisplay, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Yoga::YogaDisplay, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaDisplay, "UnityEngine.Yoga", "YogaDisplay");
