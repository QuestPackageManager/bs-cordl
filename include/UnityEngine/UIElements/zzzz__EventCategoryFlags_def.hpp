#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCategoryFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventCategoryFlags)
// Forward declare root types
namespace UnityEngine::UIElements {
struct EventCategoryFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::EventCategoryFlags);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.EventCategoryFlags
struct CORDL_TYPE EventCategoryFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EventCategoryFlags_Unwrapped
  enum struct __EventCategoryFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_All = static_cast<int32_t>(0xffffffff),
    __E_TriggeredByOS = static_cast<int32_t>(0x14036),
    __E_TargetOnly = static_cast<int32_t>(0xad0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventCategoryFlags_Unwrapped() const noexcept {
    return static_cast<__EventCategoryFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventCategoryFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventCategoryFlags(int32_t value__) noexcept;

  /// @brief Field All value: I32(-1)
  static ::UnityEngine::UIElements::EventCategoryFlags const All;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::EventCategoryFlags const None;

  /// @brief Field TargetOnly value: I32(2768)
  static ::UnityEngine::UIElements::EventCategoryFlags const TargetOnly;

  /// @brief Field TriggeredByOS value: I32(81974)
  static ::UnityEngine::UIElements::EventCategoryFlags const TriggeredByOS;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6315 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EventCategoryFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventCategoryFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventCategoryFlags, "UnityEngine.UIElements", "EventCategoryFlags");
