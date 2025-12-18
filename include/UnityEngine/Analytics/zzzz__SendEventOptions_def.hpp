#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/SendEventOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SendEventOptions)
// Forward declare root types
namespace UnityEngine::Analytics {
struct SendEventOptions;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Analytics::SendEventOptions);
// Dependencies
namespace UnityEngine::Analytics {
// Is value type: true
// CS Name: UnityEngine.Analytics.SendEventOptions
struct CORDL_TYPE SendEventOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SendEventOptions_Unwrapped
  enum struct __SendEventOptions_Unwrapped : int32_t {
    __E_kAppendNone = static_cast<int32_t>(0x0),
    __E_kAppendBuildGuid = static_cast<int32_t>(0x1),
    __E_kAppendBuildTarget = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SendEventOptions_Unwrapped() const noexcept {
    return static_cast<__SendEventOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SendEventOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SendEventOptions(int32_t value__) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10670 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field kAppendBuildGuid value: I32(1)
  static ::UnityEngine::Analytics::SendEventOptions const kAppendBuildGuid;

  /// @brief Field kAppendBuildTarget value: I32(2)
  static ::UnityEngine::Analytics::SendEventOptions const kAppendBuildTarget;

  /// @brief Field kAppendNone value: I32(0)
  static ::UnityEngine::Analytics::SendEventOptions const kAppendNone;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Analytics::SendEventOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::SendEventOptions, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Analytics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::SendEventOptions, "UnityEngine.Analytics", "SendEventOptions");
