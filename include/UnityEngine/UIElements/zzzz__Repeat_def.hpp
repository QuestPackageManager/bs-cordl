#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Repeat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Repeat)
// Forward declare root types
namespace UnityEngine::UIElements {
struct Repeat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Repeat);
// Type: UnityEngine.UIElements::Repeat
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::Repeat
struct CORDL_TYPE Repeat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Repeat_Unwrapped
  enum struct __Repeat_Unwrapped : int32_t {
    __E_NoRepeat = static_cast<int32_t>(0x0),
    __E_Space = static_cast<int32_t>(0x1),
    __E_Round = static_cast<int32_t>(0x2),
    __E_Repeat = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Repeat_Unwrapped() const noexcept {
    return static_cast<__Repeat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Repeat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Repeat(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field NoRepeat value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::Repeat const NoRepeat;

  /// @brief Field Round value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::Repeat const Round;

  /// @brief Field Space value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::Repeat const Space;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6103 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Repeat value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::Repeat const _cordl_Repeat;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Repeat, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Repeat, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Repeat, "UnityEngine.UIElements", "Repeat");
