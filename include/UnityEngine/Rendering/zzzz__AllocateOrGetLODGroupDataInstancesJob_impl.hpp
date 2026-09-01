#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\AllocateOrGetLODGroupDataInstancesJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AllocateOrGetLODGroupDataInstancesJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::AllocateOrGetLODGroupDataInstancesJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AllocateOrGetLODGroupDataInstancesJob::*)()>(
    &::UnityEngine::Rendering::AllocateOrGetLODGroupDataInstancesJob::Execute)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x68310b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AllocateOrGetLODGroupDataInstancesJob>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::AllocateOrGetLODGroupDataInstancesJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AllocateOrGetLODGroupDataInstancesJob>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::Rendering::AllocateOrGetLODGroupDataInstancesJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::Rendering::AllocateOrGetLODGroupDataInstancesJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "lodGroupsID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodGroupsData", ty:
// "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodGroupCullingData", ty:
// "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodGroupDataHash", ty:
// "::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "freeLODGroupDataHandles", ty:
// "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodGroupInstances", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "previousRendererCount", ty: "int32_t*", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::AllocateOrGetLODGroupDataInstancesJob::AllocateOrGetLODGroupDataInstancesJob(
    ::Unity::Collections::NativeArray_1<int32_t> lodGroupsID, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData> lodGroupsData,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> lodGroupCullingData,
    ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> lodGroupDataHash,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex> freeLODGroupDataHandles,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> lodGroupInstances, int32_t* previousRendererCount) noexcept {
  this->lodGroupsID = lodGroupsID;
  this->lodGroupsData = lodGroupsData;
  this->lodGroupCullingData = lodGroupCullingData;
  this->lodGroupDataHash = lodGroupDataHash;
  this->freeLODGroupDataHandles = freeLODGroupDataHandles;
  this->lodGroupInstances = lodGroupInstances;
  this->previousRendererCount = previousRendererCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AllocateOrGetLODGroupDataInstancesJob::AllocateOrGetLODGroupDataInstancesJob() {}
