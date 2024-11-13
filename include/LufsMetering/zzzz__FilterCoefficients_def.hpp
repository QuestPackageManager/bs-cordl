#pragma once
// IWYU pragma private; include "LufsMetering/FilterCoefficients.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(FilterCoefficients)
// Forward declare root types
namespace LufsMetering {
struct FilterCoefficients;
}
// Write type traits
MARK_VAL_T(::LufsMetering::FilterCoefficients);
// Type: LufsMetering::FilterCoefficients
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, packing: None, specified_packing: None }
namespace LufsMetering {
// Is value type: true
// CS Name: ::LufsMetering::FilterCoefficients
struct CORDL_TYPE FilterCoefficients {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr FilterCoefficients();

  // Ctor Parameters [CppParam { name: "a0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "a1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "a2", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "b0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "b1", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "b2", ty: "float_t", modifiers: "", def_value: None }]
  constexpr FilterCoefficients(float_t a0, float_t a1, float_t a2, float_t b0, float_t b1, float_t b2) noexcept;

  /// @brief Field a0, offset: 0x0, size: 0x4, def value: None
  float_t a0;

  /// @brief Field a1, offset: 0x4, size: 0x4, def value: None
  float_t a1;

  /// @brief Field a2, offset: 0x8, size: 0x4, def value: None
  float_t a2;

  /// @brief Field b0, offset: 0xc, size: 0x4, def value: None
  float_t b0;

  /// @brief Field b1, offset: 0x10, size: 0x4, def value: None
  float_t b1;

  /// @brief Field b2, offset: 0x14, size: 0x4, def value: None
  float_t b2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5380 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LufsMetering::FilterCoefficients, 0x18>, "Size mismatch!");

static_assert(offsetof(::LufsMetering::FilterCoefficients, a0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::FilterCoefficients, a1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::FilterCoefficients, a2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::FilterCoefficients, b0) == 0xc, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::FilterCoefficients, b1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::FilterCoefficients, b2) == 0x14, "Offset mismatch!");

} // namespace LufsMetering
DEFINE_IL2CPP_ARG_TYPE(::LufsMetering::FilterCoefficients, "LufsMetering", "FilterCoefficients");
