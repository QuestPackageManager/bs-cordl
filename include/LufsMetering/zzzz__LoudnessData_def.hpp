#pragma once
// IWYU pragma private; include "LufsMetering/LoudnessData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LoudnessData)
// Forward declare root types
namespace LufsMetering {
struct LoudnessData;
}
// Write type traits
MARK_VAL_T(::LufsMetering::LoudnessData);
// Type: LufsMetering::LoudnessData
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace LufsMetering {
// Is value type: true
// CS Name: ::LufsMetering::LoudnessData
struct CORDL_TYPE LoudnessData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x26d58fc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t lufs, ::ArrayW<float_t, ::Array<float_t>*> momentaryValues, float_t blockDuration);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LoudnessData();

  // Ctor Parameters [CppParam { name: "lufs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "blockDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "momentaryValues", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }]
  constexpr LoudnessData(float_t lufs, float_t blockDuration, ::ArrayW<float_t, ::Array<float_t>*> momentaryValues) noexcept;

  /// @brief Field lufs, offset: 0x0, size: 0x4, def value: None
  float_t lufs;

  /// @brief Field blockDuration, offset: 0x4, size: 0x4, def value: None
  float_t blockDuration;

  /// @brief Field momentaryValues, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> momentaryValues;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13435 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LufsMetering::LoudnessData, 0x10>, "Size mismatch!");

static_assert(offsetof(::LufsMetering::LoudnessData, lufs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::LoudnessData, blockDuration) == 0x4, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::LoudnessData, momentaryValues) == 0x8, "Offset mismatch!");

} // namespace LufsMetering
DEFINE_IL2CPP_ARG_TYPE(::LufsMetering::LoudnessData, "LufsMetering", "LoudnessData");
