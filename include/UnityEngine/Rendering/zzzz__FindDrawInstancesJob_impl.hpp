#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FindDrawInstancesJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawInstance_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FindDrawInstancesJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForBatch_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::FindDrawInstancesJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::FindDrawInstancesJob::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::FindDrawInstancesJob::Execute)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6665108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FindDrawInstancesJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::FindDrawInstancesJob::Execute(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FindDrawInstancesJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr UnityEngine::Rendering::FindDrawInstancesJob::operator ::Unity::Jobs::IJobParallelForBatch*() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* UnityEngine::Rendering::FindDrawInstancesJob::i___Unity__Jobs__IJobParallelForBatch() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "instancesSorted", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "drawInstances", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>", modifiers: "", def_value: Some("{}") }, CppParam { name: "outDrawInstanceIndicesWriter", ty:
// "::Unity::Collections::NativeList_1_ParallelWriter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::FindDrawInstancesJob::FindDrawInstancesJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instancesSorted,
                                                                               ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance> drawInstances,
                                                                               ::Unity::Collections::NativeList_1_ParallelWriter<int32_t> outDrawInstanceIndicesWriter) noexcept {
  this->instancesSorted = instancesSorted;
  this->drawInstances = drawInstances;
  this->outDrawInstanceIndicesWriter = outDrawInstanceIndicesWriter;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FindDrawInstancesJob::FindDrawInstancesJob() {}
