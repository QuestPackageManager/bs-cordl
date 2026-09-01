#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\UpdateLODGroupDataJob.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAtomicCounter32_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__UpdateLODGroupDataJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UpdateLODGroupDataJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UpdateLODGroupDataJob::*)(int32_t)>(&::UnityEngine::Rendering::UpdateLODGroupDataJob::Execute)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x6831380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UpdateLODGroupDataJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::UpdateLODGroupDataJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UpdateLODGroupDataJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::Rendering::UpdateLODGroupDataJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Rendering::UpdateLODGroupDataJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "lodGroupInstances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "inputData", ty: "::UnityEngine::Rendering::GPUDrivenLODGroupData", modifiers: "", def_value: Some("{}") }, CppParam { name: "supportDitheringCrossFade", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "lodGroupsData", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::LODGroupData>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "lodGroupsCullingData", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::LODGroupCullingData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "rendererCount", ty:
// "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::UpdateLODGroupDataJob::UpdateLODGroupDataJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> lodGroupInstances,
                                                                                 ::UnityEngine::Rendering::GPUDrivenLODGroupData inputData, bool supportDitheringCrossFade,
                                                                                 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::LODGroupData> lodGroupsData,
                                                                                 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::LODGroupCullingData> lodGroupsCullingData,
                                                                                 ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 rendererCount) noexcept {
  this->lodGroupInstances = lodGroupInstances;
  this->inputData = inputData;
  this->supportDitheringCrossFade = supportDitheringCrossFade;
  this->lodGroupsData = lodGroupsData;
  this->lodGroupsCullingData = lodGroupsCullingData;
  this->rendererCount = rendererCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UpdateLODGroupDataJob::UpdateLODGroupDataJob() {}
