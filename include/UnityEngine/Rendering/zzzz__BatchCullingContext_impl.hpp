#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\BatchCullingContext.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
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
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingProjectionType_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingSplit_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BatchCullingContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BatchCullingContext::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>, ::UnityEngine::Rendering::LODParameters,
    ::UnityEngine::Matrix4x4, ::UnityEngine::Rendering::BatchCullingViewType, ::UnityEngine::Rendering::BatchCullingProjectionType, ::UnityEngine::Rendering::BatchCullingFlags, uint64_t, uint32_t,
    uint64_t, uint8_t, int32_t, int32_t, ::System::IntPtr)>(&::UnityEngine::Rendering::BatchCullingContext::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b2a918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::BatchCullingContext>(),
            { ".ctor",
              {},
              { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>>(),
                ::i2c::type_of<::UnityEngine::Rendering::LODParameters>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingViewType>(),
                ::i2c::type_of<::UnityEngine::Rendering::BatchCullingProjectionType>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingFlags>(), ::i2c::type_of<uint64_t>(),
                ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::BatchCullingContext::_ctor(::Unity::Collections::NativeArray_1<::UnityEngine::Plane> inCullingPlanes,
                                                               ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit> inCullingSplits,
                                                               ::UnityEngine::Rendering::LODParameters inLodParameters, ::UnityEngine::Matrix4x4 inLocalToWorldMatrix,
                                                               ::UnityEngine::Rendering::BatchCullingViewType inViewType, ::UnityEngine::Rendering::BatchCullingProjectionType inProjectionType,
                                                               ::UnityEngine::Rendering::BatchCullingFlags inBatchCullingFlags, uint64_t inViewID, uint32_t inCullingLayerMask,
                                                               uint64_t inSceneCullingMask, uint8_t inExclusionSplitMask, int32_t inReceiverPlaneOffset, int32_t inReceiverPlaneCount,
                                                               ::System::IntPtr inOcclusionBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::BatchCullingContext>(),
          { ".ctor",
            {},
            { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>>(),
              ::i2c::type_of<::UnityEngine::Rendering::LODParameters>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingViewType>(),
              ::i2c::type_of<::UnityEngine::Rendering::BatchCullingProjectionType>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingFlags>(), ::i2c::type_of<uint64_t>(),
              ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, inCullingPlanes, inCullingSplits, inLodParameters, inLocalToWorldMatrix, inViewType, inProjectionType,
                                                   inBatchCullingFlags, inViewID, inCullingLayerMask, inSceneCullingMask, inExclusionSplitMask, inReceiverPlaneOffset, inReceiverPlaneCount,
                                                   inOcclusionBuffer);
}
// Ctor Parameters [CppParam { name: "cullingPlanes", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Plane>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingSplits", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodParameters", ty:
// "::UnityEngine::Rendering::LODParameters", modifiers: "", def_value: Some("{}") }, CppParam { name: "localToWorldMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") },
// CppParam { name: "viewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: Some("{}") }, CppParam { name: "projectionType", ty:
// "::UnityEngine::Rendering::BatchCullingProjectionType", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingFlags", ty: "::UnityEngine::Rendering::BatchCullingFlags", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "viewID", ty: "::UnityEngine::Rendering::BatchPackedCullingViewID", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingLayerMask", ty:
// "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sceneCullingMask", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "splitExclusionMask", ty:
// "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isOrthographic", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "receiverPlaneOffset", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "receiverPlaneCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "occlusionBuffer", ty: "::System::IntPtr",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchCullingContext::BatchCullingContext(::Unity::Collections::NativeArray_1<::UnityEngine::Plane> cullingPlanes,
                                                                             ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit> cullingSplits,
                                                                             ::UnityEngine::Rendering::LODParameters lodParameters, ::UnityEngine::Matrix4x4 localToWorldMatrix,
                                                                             ::UnityEngine::Rendering::BatchCullingViewType viewType,
                                                                             ::UnityEngine::Rendering::BatchCullingProjectionType projectionType,
                                                                             ::UnityEngine::Rendering::BatchCullingFlags cullingFlags, ::UnityEngine::Rendering::BatchPackedCullingViewID viewID,
                                                                             uint32_t cullingLayerMask, uint64_t sceneCullingMask, uint16_t splitExclusionMask, uint8_t isOrthographic,
                                                                             int32_t receiverPlaneOffset, int32_t receiverPlaneCount, ::System::IntPtr occlusionBuffer) noexcept {
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
  this->splitExclusionMask = splitExclusionMask;
  this->isOrthographic = isOrthographic;
  this->receiverPlaneOffset = receiverPlaneOffset;
  this->receiverPlaneCount = receiverPlaneCount;
  this->occlusionBuffer = occlusionBuffer;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchCullingContext::BatchCullingContext() {}
