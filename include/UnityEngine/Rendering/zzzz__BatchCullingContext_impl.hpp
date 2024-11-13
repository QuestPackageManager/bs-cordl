#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchCullingContext.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingProjectionType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchPackedCullingViewID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CullingSplit_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingProjectionType_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchPackedCullingViewID_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingSplit_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BatchCullingContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BatchCullingContext::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>, ::UnityEngine::Rendering::LODParameters,
    ::UnityEngine::Matrix4x4, ::UnityEngine::Rendering::BatchCullingViewType, ::UnityEngine::Rendering::BatchCullingProjectionType, ::UnityEngine::Rendering::BatchCullingFlags, uint64_t, uint32_t,
    uint64_t, int32_t, int32_t)>(&::UnityEngine::Rendering::BatchCullingContext::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x48670f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchCullingContext>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 12>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LODParameters>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchCullingViewType>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchCullingProjectionType>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchCullingFlags>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::BatchCullingContext::_ctor(::Unity::Collections::NativeArray_1<::UnityEngine::Plane> inCullingPlanes,
                                                               ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit> inCullingSplits,
                                                               ::UnityEngine::Rendering::LODParameters inLodParameters, ::UnityEngine::Matrix4x4 inLocalToWorldMatrix,
                                                               ::UnityEngine::Rendering::BatchCullingViewType inViewType, ::UnityEngine::Rendering::BatchCullingProjectionType inProjectionType,
                                                               ::UnityEngine::Rendering::BatchCullingFlags inBatchCullingFlags, uint64_t inViewID, uint32_t inCullingLayerMask,
                                                               uint64_t inSceneCullingMask, int32_t inReceiverPlaneOffset, int32_t inReceiverPlaneCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchCullingContext>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 12>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LODParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchCullingViewType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchCullingProjectionType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchCullingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inCullingPlanes, inCullingSplits, inLodParameters, inLocalToWorldMatrix, inViewType, inProjectionType,
                                                          inBatchCullingFlags, inViewID, inCullingLayerMask, inSceneCullingMask, inReceiverPlaneOffset, inReceiverPlaneCount);
}
// Ctor Parameters [CppParam { name: "cullingPlanes", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Plane>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingSplits", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodParameters", ty:
// "::UnityEngine::Rendering::LODParameters", modifiers: "", def_value: Some("{}") }, CppParam { name: "localToWorldMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") },
// CppParam { name: "viewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: Some("{}") }, CppParam { name: "projectionType", ty:
// "::UnityEngine::Rendering::BatchCullingProjectionType", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingFlags", ty: "::UnityEngine::Rendering::BatchCullingFlags", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "viewID", ty: "::UnityEngine::Rendering::BatchPackedCullingViewID", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingLayerMask", ty:
// "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sceneCullingMask", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isOrthographic", ty: "uint8_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "receiverPlaneOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "receiverPlaneCount", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchCullingContext::BatchCullingContext(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> cullingPlanes, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit> cullingSplits,
    ::UnityEngine::Rendering::LODParameters lodParameters, ::UnityEngine::Matrix4x4 localToWorldMatrix, ::UnityEngine::Rendering::BatchCullingViewType viewType,
    ::UnityEngine::Rendering::BatchCullingProjectionType projectionType, ::UnityEngine::Rendering::BatchCullingFlags cullingFlags, ::UnityEngine::Rendering::BatchPackedCullingViewID viewID,
    uint32_t cullingLayerMask, uint64_t sceneCullingMask, uint8_t isOrthographic, int32_t receiverPlaneOffset, int32_t receiverPlaneCount) noexcept {
  this->cullingPlanes = cullingPlanes;
  this->cullingSplits = cullingSplits;
  this->lodParameters = lodParameters;
  this->localToWorldMatrix = localToWorldMatrix;
  this->viewType = viewType;
  this->projectionType = projectionType;
  this->cullingFlags = cullingFlags;
  this->viewID = viewID;
  this->cullingLayerMask = cullingLayerMask;
  this->sceneCullingMask = sceneCullingMask;
  this->isOrthographic = isOrthographic;
  this->receiverPlaneOffset = receiverPlaneOffset;
  this->receiverPlaneCount = receiverPlaneCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchCullingContext::BatchCullingContext() {}
