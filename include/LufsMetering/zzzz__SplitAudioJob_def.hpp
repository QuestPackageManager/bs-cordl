#pragma once
// IWYU pragma private; include "LufsMetering/SplitAudioJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplitAudioJob)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace LufsMetering {
struct SplitAudioJob;
}
// Write type traits
MARK_VAL_T(::LufsMetering::SplitAudioJob);
// Type: LufsMetering::SplitAudioJob
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LufsMetering {
// Is value type: true
// CS Name: ::LufsMetering::SplitAudioJob
struct CORDL_TYPE SplitAudioJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Create, addr 0x26a8360, size 0x10, virtual false, abstract: false, final false
  static inline ::LufsMetering::SplitAudioJob Create(::Unity::Collections::NativeArray_1<float_t> interleavedData, ::Unity::Collections::NativeArray_1<float_t> channelData, int32_t numChannels,
                                                     int32_t channel);

  /// @brief Method Execute, addr 0x26a8370, size 0x1c, virtual true, abstract: false, final true
  inline void Execute(int32_t i);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SplitAudioJob();

  // Ctor Parameters [CppParam { name: "channelData", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "interleavedData", ty:
  // "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "mumChannels", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "channel", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr SplitAudioJob(::Unity::Collections::NativeArray_1<float_t> channelData, ::Unity::Collections::NativeArray_1<float_t> interleavedData, int32_t mumChannels, int32_t channel) noexcept;

  /// @brief Field channelData, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> channelData;

  /// @brief Field interleavedData, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> interleavedData;

  /// @brief Field mumChannels, offset: 0x20, size: 0x4, def value: None
  int32_t mumChannels;

  /// @brief Field channel, offset: 0x24, size: 0x4, def value: None
  int32_t channel;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LufsMetering::SplitAudioJob, 0x28>, "Size mismatch!");

static_assert(offsetof(::LufsMetering::SplitAudioJob, channelData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::SplitAudioJob, interleavedData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::SplitAudioJob, mumChannels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::SplitAudioJob, channel) == 0x24, "Offset mismatch!");

} // namespace LufsMetering
DEFINE_IL2CPP_ARG_TYPE(::LufsMetering::SplitAudioJob, "LufsMetering", "SplitAudioJob");
