#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventInterestOptionsInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventInterestOptionsInternal)
// Forward declare root types
namespace UnityEngine::UIElements {
struct EventInterestOptionsInternal;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::EventInterestOptionsInternal);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.EventInterestOptionsInternal
struct CORDL_TYPE EventInterestOptionsInternal {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EventInterestOptionsInternal_Unwrapped
  enum struct __EventInterestOptionsInternal_Unwrapped : int32_t {
    __E_TriggeredByOS = static_cast<int32_t>(0x6806e),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventInterestOptionsInternal_Unwrapped() const noexcept {
    return static_cast<__EventInterestOptionsInternal_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventInterestOptionsInternal();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventInterestOptionsInternal(int32_t value__) noexcept;

  /// @brief Field TriggeredByOS value: I32(426094)
  static ::UnityEngine::UIElements::EventInterestOptionsInternal const TriggeredByOS;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5236 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EventInterestOptionsInternal, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventInterestOptionsInternal, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventInterestOptionsInternal, "UnityEngine.UIElements", "EventInterestOptionsInternal");
