#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMeshJobs.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_impl.hpp"
#include "UnityEngine/zzzz__BoneWeight_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMeshJobs_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshJobs_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob::*)(int32_t)>(
    &::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob::Execute)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x4036688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "Vertices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Normals", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "UV", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "BoneWeights", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "MeshVerticesPosition", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector3f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshNormals", ty:
// "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector3f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshUV", ty:
// "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector2f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshBoneWeights", ty:
// "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector4f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshBoneIndices", ty:
// "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector4s>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob::OVRMeshJobs_TransformToUnitySpaceJob(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Vertices, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Normals,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> UV, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight> BoneWeights,
    ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector3f> MeshVerticesPosition, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector3f> MeshNormals,
    ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector2f> MeshUV, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector4f> MeshBoneWeights,
    ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector4s> MeshBoneIndices) noexcept {
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
constexpr ::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob::OVRMeshJobs_TransformToUnitySpaceJob() {}
//  Writing Method size for method: ::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob::*)(int32_t)>(
    &::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob::Execute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4036808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRMeshJobs_TransformTrianglesJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr GlobalNamespace::OVRMeshJobs_TransformTrianglesJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::OVRMeshJobs_TransformTrianglesJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshIndices", ty:
// "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "NumIndices", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob::OVRMeshJobs_TransformTrianglesJob(::Unity::Collections::NativeArray_1<uint32_t> Triangles,
                                                                                                  ::Unity::Collections::NativeArray_1<int16_t> MeshIndices, int32_t NumIndices) noexcept {
  this->Triangles = Triangles;
  this->MeshIndices = MeshIndices;
  this->NumIndices = NumIndices;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob::OVRMeshJobs_TransformTrianglesJob() {}
template <typename T> inline void GlobalNamespace::OVRMeshJobs_NativeArrayHelper_1<T>::_ctor(::ArrayW<T, ::Array<T>*> ovrArray, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMeshJobs_NativeArrayHelper_1<T>>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ovrArray, length);
}
template <typename T> inline void GlobalNamespace::OVRMeshJobs_NativeArrayHelper_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMeshJobs_NativeArrayHelper_1<T>>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::OVRMeshJobs_NativeArrayHelper_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* GlobalNamespace::OVRMeshJobs_NativeArrayHelper_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "UnityNativeArray", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_handle", ty:
// "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::OVRMeshJobs_NativeArrayHelper_1<T>::OVRMeshJobs_NativeArrayHelper_1(::Unity::Collections::NativeArray_1<T> UnityNativeArray,
                                                                                                 ::System::Runtime::InteropServices::GCHandle _handle) noexcept {
  this->UnityNativeArray = UnityNativeArray;
  this->_handle = _handle;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OVRMeshJobs_NativeArrayHelper_1<T>::OVRMeshJobs_NativeArrayHelper_1() {}
//  Writing Method size for method: ::GlobalNamespace::OVRMeshJobs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMeshJobs::*)()>(&::GlobalNamespace::OVRMeshJobs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4036680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMeshJobs*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRMeshJobs::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMeshJobs*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRMeshJobs* GlobalNamespace::OVRMeshJobs::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRMeshJobs*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMeshJobs::OVRMeshJobs() {}
