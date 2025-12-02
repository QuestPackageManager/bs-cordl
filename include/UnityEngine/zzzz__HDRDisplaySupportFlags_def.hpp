#pragma once
// IWYU pragma private; include "UnityEngine/HDRDisplaySupportFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HDRDisplaySupportFlags)
// Forward declare root types
namespace UnityEngine {
struct HDRDisplaySupportFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::HDRDisplaySupportFlags);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.HDRDisplaySupportFlags
struct CORDL_TYPE HDRDisplaySupportFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HDRDisplaySupportFlags_Unwrapped
  enum struct __HDRDisplaySupportFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Supported = static_cast<int32_t>(0x1),
    __E_RuntimeSwitchable = static_cast<int32_t>(0x2),
    __E_AutomaticTonemapping = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HDRDisplaySupportFlags_Unwrapped() const noexcept {
    return static_cast<__HDRDisplaySupportFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HDRDisplaySupportFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HDRDisplaySupportFlags(int32_t value__) noexcept;

  /// @brief Field AutomaticTonemapping value: I32(4)
  static ::UnityEngine::HDRDisplaySupportFlags const AutomaticTonemapping;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::HDRDisplaySupportFlags const None;

  /// @brief Field RuntimeSwitchable value: I32(2)
  static ::UnityEngine::HDRDisplaySupportFlags const RuntimeSwitchable;

  /// @brief Field Supported value: I32(1)
  static ::UnityEngine::HDRDisplaySupportFlags const Supported;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10179 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::HDRDisplaySupportFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::HDRDisplaySupportFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HDRDisplaySupportFlags, "UnityEngine", "HDRDisplaySupportFlags");
