#pragma once
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__BoneWeight_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMeshJobs_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshJobs_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__BoneWeight_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob::*)(int32_t)>(
    &::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob::Execute)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x27b13d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>::get(), "Execute",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>::get(), "Execute",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "Vertices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Normals", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "UV", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "BoneWeights", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "MeshVerticesPosition", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshNormals", ty:
// "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshUV", ty:
// "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshBoneWeights", ty:
// "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshBoneIndices", ty:
// "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob::__OVRMeshJobs__TransformToUnitySpaceJob(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Vertices, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Normals,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> UV, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight> BoneWeights,
    ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f> MeshVerticesPosition, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f> MeshNormals,
    ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f> MeshUV, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f> MeshBoneWeights,
    ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s> MeshBoneIndices) noexcept {
  this->Vertices = Vertices;
  this->Normals = Normals;
  this->UV = UV;
  this->BoneWeights = BoneWeights;
  this->MeshVerticesPosition = MeshVerticesPosition;
  this->MeshNormals = MeshNormals;
  this->MeshUV = MeshUV;
  this->MeshBoneWeights = MeshBoneWeights;
  this->MeshBoneIndices = MeshBoneIndices;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob::__OVRMeshJobs__TransformToUnitySpaceJob() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob::*)(int32_t)>(
    &::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob::Execute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27b1550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>::get(), "Execute",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>::get(), "Execute",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshIndices", ty:
// "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "NumIndices", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob::__OVRMeshJobs__TransformTrianglesJob(::Unity::Collections::NativeArray_1<uint32_t> Triangles,
                                                                                                        ::Unity::Collections::NativeArray_1<int16_t> MeshIndices, int32_t NumIndices) noexcept {
  this->Triangles = Triangles;
  this->MeshIndices = MeshIndices;
  this->NumIndices = NumIndices;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob::__OVRMeshJobs__TransformTrianglesJob() {}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::__OVRMeshJobs__NativeArrayHelper_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__OVRMeshJobs__NativeArrayHelper_1<T>::_ctor(::ArrayW<T, ::Array<T>*> ovrArray, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRMeshJobs__NativeArrayHelper_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ovrArray, length);
}
template <typename T> inline void GlobalNamespace::__OVRMeshJobs__NativeArrayHelper_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRMeshJobs__NativeArrayHelper_1<T>>::get(),
                                                                             "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "UnityNativeArray", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_handle", ty:
// "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__OVRMeshJobs__NativeArrayHelper_1<T>::__OVRMeshJobs__NativeArrayHelper_1(::Unity::Collections::NativeArray_1<T> UnityNativeArray,
                                                                                                       ::System::Runtime::InteropServices::GCHandle _handle) noexcept {
  this->UnityNativeArray = UnityNativeArray;
  this->_handle = _handle;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__OVRMeshJobs__NativeArrayHelper_1<T>::__OVRMeshJobs__NativeArrayHelper_1() {}
//  Writing Method size for method: ::GlobalNamespace::OVRMeshJobs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMeshJobs::*)()>(&::GlobalNamespace::OVRMeshJobs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b13c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMeshJobs*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRMeshJobs* GlobalNamespace::OVRMeshJobs::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRMeshJobs*>());
}
inline void GlobalNamespace::OVRMeshJobs::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMeshJobs*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMeshJobs::OVRMeshJobs() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
