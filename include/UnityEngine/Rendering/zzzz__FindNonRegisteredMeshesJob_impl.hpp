#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FindNonRegisteredMeshesJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FindNonRegisteredMeshesJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForBatch_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::FindNonRegisteredMeshesJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::FindNonRegisteredMeshesJob::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::FindNonRegisteredMeshesJob::Execute)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6c4f508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FindNonRegisteredMeshesJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::FindNonRegisteredMeshesJob::Execute(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FindNonRegisteredMeshesJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr UnityEngine::Rendering::FindNonRegisteredMeshesJob::operator ::Unity::Jobs::IJobParallelForBatch*() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* UnityEngine::Rendering::FindNonRegisteredMeshesJob::i___Unity__Jobs__IJobParallelForBatch() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "instanceIDs", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "hashMap", ty: "::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMeshID>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "outInstancesWriter", ty: "::Unity::Collections::NativeList_1_ParallelWriter<::UnityEngine::EntityId>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::FindNonRegisteredMeshesJob::FindNonRegisteredMeshesJob(
    ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> instanceIDs, ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> hashMap,
    ::Unity::Collections::NativeList_1_ParallelWriter<::UnityEngine::EntityId> outInstancesWriter) noexcept {
  this->instanceIDs = instanceIDs;
  this->hashMap = hashMap;
  this->outInstancesWriter = outInstancesWriter;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FindNonRegisteredMeshesJob::FindNonRegisteredMeshesJob() {}
