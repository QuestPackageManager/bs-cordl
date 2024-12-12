#pragma once
// IWYU pragma private; include "LufsMetering/SplitAudioJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplitAudioJob)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
// Forward declare root types
namespace LufsMetering {
struct SplitAudioJob;
}
// Write type traits
MARK_VAL_T(::LufsMetering::SplitAudioJob);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Jobs.IJobParallelFor
namespace LufsMetering {
// Is value type: true
// CS Name: LufsMetering.SplitAudioJob
struct CORDL_TYPE SplitAudioJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Create, addr 0x3b72230, size 0x10, virtual false, abstract: false, final false
  static inline ::LufsMetering::SplitAudioJob Create(::Unity::Collections::NativeArray_1<float_t> interleavedData, ::Unity::Collections::NativeArray_1<float_t> channelData, int32_t numChannels,
                                                     int32_t channel);

  /// @brief Method Execute, addr 0x3b72240, size 0x1c, virtual true, abstract: false, final true
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5405 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field channelData, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> channelData;

  /// @brief Field interleavedData, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> interleavedData;

  /// @brief Field mumChannels, offset: 0x20, size: 0x4, def value: None
  int32_t mumChannels;

  /// @brief Field channel, offset: 0x24, size: 0x4, def value: None
  int32_t channel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LufsMetering::SplitAudioJob, channelData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::SplitAudioJob, interleavedData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::SplitAudioJob, mumChannels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::SplitAudioJob, channel) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LufsMetering::SplitAudioJob, 0x28>, "Size mismatch!");

} // namespace LufsMetering
DEFINE_IL2CPP_ARG_TYPE(::LufsMetering::SplitAudioJob, "LufsMetering", "SplitAudioJob");
