#pragma once
// IWYU pragma private; include "UnityEngine/ForceMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ForceMode)
// Forward declare root types
namespace UnityEngine {
struct ForceMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ForceMode);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ForceMode
struct CORDL_TYPE ForceMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ForceMode_Unwrapped
  enum struct __ForceMode_Unwrapped : int32_t {
    __E_Force = static_cast<int32_t>(0x0),
    __E_Acceleration = static_cast<int32_t>(0x5),
    __E_Impulse = static_cast<int32_t>(0x1),
    __E_VelocityChange = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ForceMode_Unwrapped() const noexcept {
    return static_cast<__ForceMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ForceMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ForceMode(int32_t value__) noexcept;

  /// @brief Field Acceleration value: I32(5)
  static ::UnityEngine::ForceMode const Acceleration;

  /// @brief Field Force value: I32(0)
  static ::UnityEngine::ForceMode const Force;

  /// @brief Field Impulse value: I32(1)
  static ::UnityEngine::ForceMode const Impulse;

  /// @brief Field VelocityChange value: I32(2)
  static ::UnityEngine::ForceMode const VelocityChange;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15715 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ForceMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ForceMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ForceMode, "UnityEngine", "ForceMode");
