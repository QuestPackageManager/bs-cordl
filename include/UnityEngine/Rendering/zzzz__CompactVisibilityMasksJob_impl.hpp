#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\CompactVisibilityMasksJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CompactVisibilityMasksJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForBatch_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CompactVisibilityMasksJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CompactVisibilityMasksJob::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::CompactVisibilityMasksJob::Execute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x68188ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CompactVisibilityMasksJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::CompactVisibilityMasksJob::Execute(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CompactVisibilityMasksJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr UnityEngine::Rendering::CompactVisibilityMasksJob::operator ::Unity::Jobs::IJobParallelForBatch*() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* UnityEngine::Rendering::CompactVisibilityMasksJob::i___Unity__Jobs__IJobParallelForBatch() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "rendererVisibilityMasks", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "compactedVisibilityMasks",
// ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CompactVisibilityMasksJob::CompactVisibilityMasksJob(::Unity::Collections::NativeArray_1<uint8_t> rendererVisibilityMasks,
                                                                                         ::UnityEngine::Rendering::ParallelBitArray compactedVisibilityMasks) noexcept {
  this->rendererVisibilityMasks = rendererVisibilityMasks;
  this->compactedVisibilityMasks = compactedVisibilityMasks;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CompactVisibilityMasksJob::CompactVisibilityMasksJob() {}
