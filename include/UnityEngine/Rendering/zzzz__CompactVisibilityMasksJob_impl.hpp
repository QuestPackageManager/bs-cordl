#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CompactVisibilityMasksJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CompactVisibilityMasksJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForBatch_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CompactVisibilityMasksJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CompactVisibilityMasksJob::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::CompactVisibilityMasksJob::Execute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6661784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CompactVisibilityMasksJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::CompactVisibilityMasksJob::Execute(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CompactVisibilityMasksJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr UnityEngine::Rendering::CompactVisibilityMasksJob::operator ::Unity::Jobs::IJobParallelForBatch*() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* UnityEngine::Rendering::CompactVisibilityMasksJob::i___Unity__Jobs__IJobParallelForBatch() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
