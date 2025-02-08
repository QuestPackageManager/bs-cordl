#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Wrap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Wrap)
// Forward declare root types
namespace UnityEngine::UIElements {
struct Wrap;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Wrap);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Wrap
struct CORDL_TYPE Wrap {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Wrap_Unwrapped
  enum struct __Wrap_Unwrapped : int32_t {
    __E_NoWrap = static_cast<int32_t>(0x0),
    __E_Wrap = static_cast<int32_t>(0x1),
    __E_WrapReverse = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Wrap_Unwrapped() const noexcept {
    return static_cast<__Wrap_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Wrap();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Wrap(int32_t value__) noexcept;

  /// @brief Field NoWrap value: I32(0)
  static ::UnityEngine::UIElements::Wrap const NoWrap;

  /// @brief Field WrapReverse value: I32(2)
  static ::UnityEngine::UIElements::Wrap const WrapReverse;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6122 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Wrap value: I32(1)
  static ::UnityEngine::UIElements::Wrap const _cordl_Wrap;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Wrap, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Wrap, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Wrap, "UnityEngine.UIElements", "Wrap");
