#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventInterestOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventInterestOptions)
// Forward declare root types
namespace UnityEngine::UIElements {
struct EventInterestOptions;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::EventInterestOptions);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.EventInterestOptions
struct CORDL_TYPE EventInterestOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EventInterestOptions_Unwrapped
  enum struct __EventInterestOptions_Unwrapped : int32_t {
    __E_Inherit = static_cast<int32_t>(0x0),
    __E_AllEventTypes = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventInterestOptions_Unwrapped() const noexcept {
    return static_cast<__EventInterestOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventInterestOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventInterestOptions(int32_t value__) noexcept;

  /// @brief Field AllEventTypes value: I32(-1)
  static ::UnityEngine::UIElements::EventInterestOptions const AllEventTypes;

  /// @brief Field Inherit value: I32(0)
  static ::UnityEngine::UIElements::EventInterestOptions const Inherit;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6317 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EventInterestOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventInterestOptions, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventInterestOptions, "UnityEngine.UIElements", "EventInterestOptions");
