#pragma once
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
// Type: UnityEngine::ForceMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::ForceMode
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
  constexpr operator int32_t() const noexcept {
    return static_cast<__ForceMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ForceMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ForceMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Acceleration value: static_cast<int32_t>(0x5)
  static ::UnityEngine::ForceMode const Acceleration;

  /// @brief Field Force value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ForceMode const Force;

  /// @brief Field Impulse value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ForceMode const Impulse;

  /// @brief Field VelocityChange value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ForceMode const VelocityChange;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ForceMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ForceMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ForceMode, "UnityEngine", "ForceMode");
