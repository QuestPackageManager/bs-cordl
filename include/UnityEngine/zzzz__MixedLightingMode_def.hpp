#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MixedLightingMode)
// Forward declare root types
namespace UnityEngine {
struct MixedLightingMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::MixedLightingMode);
// Type: UnityEngine::MixedLightingMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::MixedLightingMode
struct CORDL_TYPE MixedLightingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MixedLightingMode_Unwrapped
  enum struct __MixedLightingMode_Unwrapped : int32_t {
    __E_IndirectOnly = static_cast<int32_t>(0x0),
    __E_Shadowmask = static_cast<int32_t>(0x2),
    __E_Subtractive = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MixedLightingMode_Unwrapped() const noexcept {
    return static_cast<__MixedLightingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MixedLightingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MixedLightingMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field IndirectOnly value: static_cast<int32_t>(0x0)
  static ::UnityEngine::MixedLightingMode const IndirectOnly;

  /// @brief Field Shadowmask value: static_cast<int32_t>(0x2)
  static ::UnityEngine::MixedLightingMode const Shadowmask;

  /// @brief Field Subtractive value: static_cast<int32_t>(0x1)
  static ::UnityEngine::MixedLightingMode const Subtractive;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MixedLightingMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::MixedLightingMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MixedLightingMode, "UnityEngine", "MixedLightingMode");
