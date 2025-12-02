#pragma once
// IWYU pragma private; include "UnityEngine/FindObjectsInactive.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FindObjectsInactive)
// Forward declare root types
namespace UnityEngine {
struct FindObjectsInactive;
}
// Write type traits
MARK_VAL_T(::UnityEngine::FindObjectsInactive);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.FindObjectsInactive
struct CORDL_TYPE FindObjectsInactive {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FindObjectsInactive_Unwrapped
  enum struct __FindObjectsInactive_Unwrapped : int32_t {
    __E_Exclude = static_cast<int32_t>(0x0),
    __E_Include = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FindObjectsInactive_Unwrapped() const noexcept {
    return static_cast<__FindObjectsInactive_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FindObjectsInactive();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FindObjectsInactive(int32_t value__) noexcept;

  /// @brief Field Exclude value: I32(0)
  static ::UnityEngine::FindObjectsInactive const Exclude;

  /// @brief Field Include value: I32(1)
  static ::UnityEngine::FindObjectsInactive const Include;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10352 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::FindObjectsInactive, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::FindObjectsInactive, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FindObjectsInactive, "UnityEngine", "FindObjectsInactive");
