#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\FindDrawInstancesJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawInstance_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FindDrawInstancesJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForBatch_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::FindDrawInstancesJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::FindDrawInstancesJob::*)(int32_t, int32_t)>(&::UnityEngine::Rendering::FindDrawInstancesJob::Execute)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x681c270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FindDrawInstancesJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::FindDrawInstancesJob::Execute(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FindDrawInstancesJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr UnityEngine::Rendering::FindDrawInstancesJob::operator ::Unity::Jobs::IJobParallelForBatch*() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* UnityEngine::Rendering::FindDrawInstancesJob::i___Unity__Jobs__IJobParallelForBatch() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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
