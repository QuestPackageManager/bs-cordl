#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindingLogLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BindingLogLevel)
// Forward declare root types
namespace UnityEngine::UIElements {
struct BindingLogLevel;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::BindingLogLevel);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.BindingLogLevel
struct CORDL_TYPE BindingLogLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BindingLogLevel_Unwrapped
  enum struct __BindingLogLevel_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Once = static_cast<int32_t>(0x1),
    __E_All = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BindingLogLevel_Unwrapped() const noexcept {
    return static_cast<__BindingLogLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingLogLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BindingLogLevel(int32_t value__) noexcept;

  /// @brief Field All value: I32(2)
  static ::UnityEngine::UIElements::BindingLogLevel const All;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::BindingLogLevel const None;

  /// @brief Field Once value: I32(1)
  static ::UnityEngine::UIElements::BindingLogLevel const Once;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4039 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BindingLogLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BindingLogLevel, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BindingLogLevel, "UnityEngine.UIElements", "BindingLogLevel");
