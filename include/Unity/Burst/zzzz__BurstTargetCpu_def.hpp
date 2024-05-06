#pragma once
// IWYU pragma private; include "Unity/Burst/BurstTargetCpu.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstTargetCpu)
// Forward declare root types
namespace Unity::Burst {
struct BurstTargetCpu;
}
// Write type traits
MARK_VAL_T(::Unity::Burst::BurstTargetCpu);
// Type: Unity.Burst::BurstTargetCpu
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: true
// CS Name: ::Unity.Burst::BurstTargetCpu
struct CORDL_TYPE BurstTargetCpu {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BurstTargetCpu_Unwrapped
  enum struct __BurstTargetCpu_Unwrapped : int32_t {
    __E_Auto = static_cast<int32_t>(0x0),
    __E_X86_SSE2 = static_cast<int32_t>(0x1),
    __E_X86_SSE4 = static_cast<int32_t>(0x2),
    __E_X64_SSE2 = static_cast<int32_t>(0x3),
    __E_X64_SSE4 = static_cast<int32_t>(0x4),
    __E_AVX = static_cast<int32_t>(0x5),
    __E_AVX2 = static_cast<int32_t>(0x6),
    __E_WASM32 = static_cast<int32_t>(0x7),
    __E_ARMV7A_NEON32 = static_cast<int32_t>(0x8),
    __E_ARMV8A_AARCH64 = static_cast<int32_t>(0x9),
    __E_THUMB2_NEON32 = static_cast<int32_t>(0xa),
    __E_ARMV8A_AARCH64_HALFFP = static_cast<int32_t>(0xb),
    __E_ARMV9A = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BurstTargetCpu_Unwrapped() const noexcept {
    return static_cast<__BurstTargetCpu_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstTargetCpu();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BurstTargetCpu(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ARMV7A_NEON32 value: static_cast<int32_t>(0x8)
  static ::Unity::Burst::BurstTargetCpu const ARMV7A_NEON32;

  /// @brief Field ARMV8A_AARCH64 value: static_cast<int32_t>(0x9)
  static ::Unity::Burst::BurstTargetCpu const ARMV8A_AARCH64;

  /// @brief Field ARMV8A_AARCH64_HALFFP value: static_cast<int32_t>(0xb)
  static ::Unity::Burst::BurstTargetCpu const ARMV8A_AARCH64_HALFFP;

  /// @brief Field ARMV9A value: static_cast<int32_t>(0xc)
  static ::Unity::Burst::BurstTargetCpu const ARMV9A;

  /// @brief Field AVX value: static_cast<int32_t>(0x5)
  static ::Unity::Burst::BurstTargetCpu const AVX;

  /// @brief Field AVX2 value: static_cast<int32_t>(0x6)
  static ::Unity::Burst::BurstTargetCpu const AVX2;

  /// @brief Field Auto value: static_cast<int32_t>(0x0)
  static ::Unity::Burst::BurstTargetCpu const Auto;

  /// @brief Field THUMB2_NEON32 value: static_cast<int32_t>(0xa)
  static ::Unity::Burst::BurstTargetCpu const THUMB2_NEON32;

  /// @brief Field WASM32 value: static_cast<int32_t>(0x7)
  static ::Unity::Burst::BurstTargetCpu const WASM32;

  /// @brief Field X64_SSE2 value: static_cast<int32_t>(0x3)
  static ::Unity::Burst::BurstTargetCpu const X64_SSE2;

  /// @brief Field X64_SSE4 value: static_cast<int32_t>(0x4)
  static ::Unity::Burst::BurstTargetCpu const X64_SSE4;

  /// @brief Field X86_SSE2 value: static_cast<int32_t>(0x1)
  static ::Unity::Burst::BurstTargetCpu const X86_SSE2;

  /// @brief Field X86_SSE4 value: static_cast<int32_t>(0x2)
  static ::Unity::Burst::BurstTargetCpu const X86_SSE4;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstTargetCpu, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::BurstTargetCpu, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Burst
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstTargetCpu, "Unity.Burst", "BurstTargetCpu");
