#pragma once
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchVisibility_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchVisibility_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BatchCullingContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BatchCullingContext::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>, ::Unity::Collections::NativeArray_1<int32_t>,
    ::Unity::Collections::NativeArray_1<int32_t>, ::UnityEngine::Rendering::LODParameters, ::UnityEngine::Matrix4x4, float_t)>(&::UnityEngine::Rendering::BatchCullingContext::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ceec9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchCullingContext>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LODParameters>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::BatchCullingContext::_ctor(::Unity::Collections::NativeArray_1<::UnityEngine::Plane> inCullingPlanes,
                                                               ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility> inOutBatchVisibility,
                                                               ::Unity::Collections::NativeArray_1<int32_t> outVisibleIndices, ::Unity::Collections::NativeArray_1<int32_t> outVisibleIndicesY,
                                                               ::UnityEngine::Rendering::LODParameters inLodParameters, ::UnityEngine::Matrix4x4 inCullingMatrix, float_t inNearPlane) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchCullingContext>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LODParameters>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inCullingPlanes, inOutBatchVisibility, outVisibleIndices, outVisibleIndicesY, inLodParameters, inCullingMatrix,
                                                          inNearPlane);
}
// Ctor Parameters [CppParam { name: "cullingPlanes", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Plane>", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchVisibility", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleIndices", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleIndicesY", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "lodParameters", ty: "::UnityEngine::Rendering::LODParameters", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingMatrix", ty:
// "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "nearPlane", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchCullingContext::BatchCullingContext(::Unity::Collections::NativeArray_1<::UnityEngine::Plane> cullingPlanes,
                                                                             ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility> batchVisibility,
                                                                             ::Unity::Collections::NativeArray_1<int32_t> visibleIndices, ::Unity::Collections::NativeArray_1<int32_t> visibleIndicesY,
                                                                             ::UnityEngine::Rendering::LODParameters lodParameters, ::UnityEngine::Matrix4x4 cullingMatrix,
                                                                             float_t nearPlane) noexcept {
  this->cullingPlanes = cullingPlanes;
  this->batchVisibility = batchVisibility;
  this->visibleIndices = visibleIndices;
  this->visibleIndicesY = visibleIndicesY;
  this->lodParameters = lodParameters;
  this->cullingMatrix = cullingMatrix;
  this->nearPlane = nearPlane;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchCullingContext::BatchCullingContext() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
