#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UpdateLODGroupTransformJob.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAtomicCounter32_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupData_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__UpdateLODGroupTransformJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UpdateLODGroupTransformJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UpdateLODGroupTransformJob::*)(int32_t)>(
    &::UnityEngine::Rendering::UpdateLODGroupTransformJob::Execute)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6679d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UpdateLODGroupTransformJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::UpdateLODGroupTransformJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UpdateLODGroupTransformJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::Rendering::UpdateLODGroupTransformJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Rendering::UpdateLODGroupTransformJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "lodGroupDataHash", ty: "::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "lodGroupIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldSpaceReferencePoints", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldSpaceSizes", ty: "::Unity::Collections::NativeArray_1<float_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "requiresGPUUpload", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "supportDitheringCrossFade", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "lodGroupData", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "lodGroupCullingData", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "atomicUpdateCount", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::UpdateLODGroupTransformJob::UpdateLODGroupTransformJob(
    ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> lodGroupDataHash, ::Unity::Collections::NativeArray_1<int32_t> lodGroupIDs,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> worldSpaceReferencePoints, ::Unity::Collections::NativeArray_1<float_t> worldSpaceSizes, bool requiresGPUUpload,
    bool supportDitheringCrossFade, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData> lodGroupData,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> lodGroupCullingData, ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicUpdateCount) noexcept {
  this->lodGroupDataHash = lodGroupDataHash;
  this->lodGroupIDs = lodGroupIDs;
  this->worldSpaceReferencePoints = worldSpaceReferencePoints;
  this->worldSpaceSizes = worldSpaceSizes;
  this->requiresGPUUpload = requiresGPUUpload;
  this->supportDitheringCrossFade = supportDitheringCrossFade;
  this->lodGroupData = lodGroupData;
  this->lodGroupCullingData = lodGroupCullingData;
  this->atomicUpdateCount = atomicUpdateCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UpdateLODGroupTransformJob::UpdateLODGroupTransformJob() {}
