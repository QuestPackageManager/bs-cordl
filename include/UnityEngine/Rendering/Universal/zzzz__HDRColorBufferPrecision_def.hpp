#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/HDRColorBufferPrecision.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HDRColorBufferPrecision)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct HDRColorBufferPrecision;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::HDRColorBufferPrecision);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.HDRColorBufferPrecision
struct CORDL_TYPE HDRColorBufferPrecision {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HDRColorBufferPrecision_Unwrapped
  enum struct __HDRColorBufferPrecision_Unwrapped : int32_t {
    __E__32Bits = static_cast<int32_t>(0x0),
    __E__64Bits = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HDRColorBufferPrecision_Unwrapped() const noexcept {
    return static_cast<__HDRColorBufferPrecision_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HDRColorBufferPrecision();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HDRColorBufferPrecision(int32_t value__) noexcept;

  /// @brief Field _32Bits value: I32(0)
  static ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision const _32Bits;

  /// @brief Field _64Bits value: I32(1)
  static ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision const _64Bits;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12557 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRColorBufferPrecision, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::HDRColorBufferPrecision, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::HDRColorBufferPrecision, "UnityEngine.Rendering.Universal", "HDRColorBufferPrecision");
