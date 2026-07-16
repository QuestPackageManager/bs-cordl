#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FreeLODGroupDataJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FreeLODGroupDataJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::FreeLODGroupDataJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::FreeLODGroupDataJob::*)()>(&::UnityEngine::Rendering::FreeLODGroupDataJob::Execute)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x682be3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FreeLODGroupDataJob>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::FreeLODGroupDataJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FreeLODGroupDataJob>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::Rendering::FreeLODGroupDataJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::Rendering::FreeLODGroupDataJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "destroyedLODGroupsID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodGroupsData", ty:
// "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodGroupDataHash", ty:
// "::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "freeLODGroupDataHandles", ty:
// "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "removedRendererCount", ty: "int32_t*", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::FreeLODGroupDataJob::FreeLODGroupDataJob(::Unity::Collections::NativeArray_1<int32_t> destroyedLODGroupsID,
                                                                             ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData> lodGroupsData,
                                                                             ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> lodGroupDataHash,
                                                                             ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex> freeLODGroupDataHandles,
                                                                             int32_t* removedRendererCount) noexcept {
  this->destroyedLODGroupsID = destroyedLODGroupsID;
  this->lodGroupsData = lodGroupsData;
  this->lodGroupDataHash = lodGroupDataHash;
  this->freeLODGroupDataHandles = freeLODGroupDataHandles;
  this->removedRendererCount = removedRendererCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FreeLODGroupDataJob::FreeLODGroupDataJob() {}
