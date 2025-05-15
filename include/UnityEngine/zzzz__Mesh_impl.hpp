#pragma once
// IWYU pragma private; include "UnityEngine/Mesh.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__BlendShapeBufferLayout_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndexFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__MeshUpdateFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubMeshDescriptor_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttribute_def.hpp"
#include "UnityEngine/zzzz__BlendShapeBufferRange_def.hpp"
#include "UnityEngine/zzzz__BlendShape_def.hpp"
#include "UnityEngine/zzzz__BoneWeight1_def.hpp"
#include "UnityEngine/zzzz__BoneWeight_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__CombineInstance_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__SkinWeights_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method:
//  ::UnityEngine::Mesh_MeshData.GetVertexBufferCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::System::IntPtr)>(
        &::UnityEngine::Mesh_MeshData::GetVertexBufferCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4890868;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshData>::get(),
        "GetVertexBufferCount", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh_MeshData.GetVertexDataPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(
        &::UnityEngine::Mesh_MeshData::GetVertexDataPtr)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x48908a4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshData>::get(),
        "GetVertexDataPtr", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh_MeshData.GetVertexDataSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint64_t (*)(::System::IntPtr, int32_t)>(
        &::UnityEngine::Mesh_MeshData::GetVertexDataSize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x48908e8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshData>::get(),
        "GetVertexDataSize", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.GetIndexDataPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IntPtr (*)(::System::IntPtr)>(
        &::UnityEngine::Mesh_MeshData::GetIndexDataPtr)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x489092c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshData>::get(),
        "GetIndexDataPtr", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh_MeshData.GetIndexDataSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint64_t (*)(::System::IntPtr)>(
        &::UnityEngine::Mesh_MeshData::GetIndexDataSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4890968;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshData>::get(),
        "GetIndexDataSize", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh_MeshData.SetVertexBufferParamsFromArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(
        ::System::IntPtr, int32_t,
        ::ArrayW<
            ::UnityEngine::Rendering::VertexAttributeDescriptor,
            ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor> *>)>(
        &::UnityEngine::Mesh_MeshData::SetVertexBufferParamsFromArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x48909a4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshData>::get(),
        "SetVertexBufferParamsFromArray",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
                ::UnityEngine::Rendering::VertexAttributeDescriptor,
                ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>
                    *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh_MeshData.SetIndexBufferParamsImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::IntPtr, int32_t,
                         ::UnityEngine::Rendering::IndexFormat)>(
        &::UnityEngine::Mesh_MeshData::SetIndexBufferParamsImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x48909f8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshData>::get(),
        "SetIndexBufferParamsImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::IndexFormat>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetSubMeshCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::IntPtr, int32_t)>(
        &::UnityEngine::Mesh_MeshData::SetSubMeshCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4890a4c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshData>::get(),
        "SetSubMeshCount", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetSubMeshImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::IntPtr, int32_t,
                         ::UnityEngine::Rendering::SubMeshDescriptor,
                         ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh_MeshData::SetSubMeshImpl)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4890a90;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshData>::get(),
        "SetSubMeshImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::SubMeshDescriptor>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh_MeshData.get_vertexBufferCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh_MeshData::*)()>(
        &::UnityEngine::Mesh_MeshData::get_vertexBufferCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4890b48;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshData>::get(),
        "get_vertexBufferCount", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh_MeshData.SetVertexBufferParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh_MeshData::*)(
        int32_t,
        ::ArrayW<
            ::UnityEngine::Rendering::VertexAttributeDescriptor,
            ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor> *>)>(
        &::UnityEngine::Mesh_MeshData::SetVertexBufferParams)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4890b84;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshData>::get(),
        "SetVertexBufferParams", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
                ::UnityEngine::Rendering::VertexAttributeDescriptor,
                ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>
                    *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh_MeshData.SetIndexBufferParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh_MeshData::*)(
        int32_t, ::UnityEngine::Rendering::IndexFormat)>(
        &::UnityEngine::Mesh_MeshData::SetIndexBufferParams)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4890bd8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshData>::get(),
        "SetIndexBufferParams", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::IndexFormat>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh_MeshData.set_subMeshCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh_MeshData::*)(int32_t)>(
        &::UnityEngine::Mesh_MeshData::set_subMeshCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4890c2c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshData>::get(),
        "set_subMeshCount", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetSubMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh_MeshData::*)(
        int32_t, ::UnityEngine::Rendering::SubMeshDescriptor,
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh_MeshData::SetSubMesh)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4890c70;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshData>::get(),
        "SetSubMesh", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::SubMeshDescriptor>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh_MeshData.SetSubMeshImpl_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::IntPtr, int32_t,
                         ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor>,
                         ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh_MeshData::SetSubMeshImpl_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4890aec;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshData>::get(),
        "SetSubMeshImpl_Injected", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
inline int32_t
UnityEngine::Mesh_MeshData::GetVertexBufferCount(::System::IntPtr self) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshData>::get(),
      "GetVertexBufferCount", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, self);
}
inline ::System::IntPtr
UnityEngine::Mesh_MeshData::GetVertexDataPtr(::System::IntPtr self,
                                             int32_t stream) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshData>::get(),
      "GetVertexDataPtr", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(
      nullptr, ___internal_method, self, stream);
}
inline uint64_t
UnityEngine::Mesh_MeshData::GetVertexDataSize(::System::IntPtr self,
                                              int32_t stream) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshData>::get(),
      "GetVertexDataSize", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(
      nullptr, ___internal_method, self, stream);
}
inline ::System::IntPtr
UnityEngine::Mesh_MeshData::GetIndexDataPtr(::System::IntPtr self) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshData>::get(),
      "GetIndexDataPtr", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(
      nullptr, ___internal_method, self);
}
inline uint64_t
UnityEngine::Mesh_MeshData::GetIndexDataSize(::System::IntPtr self) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshData>::get(),
      "GetIndexDataSize", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get()})));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(
      nullptr, ___internal_method, self);
}
inline void UnityEngine::Mesh_MeshData::SetVertexBufferParamsFromArray(
    ::System::IntPtr self, int32_t vertexCount,
    ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,
             ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor> *>
        attributes) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshData>::get(),
      "SetVertexBufferParamsFromArray",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
              ::UnityEngine::Rendering::VertexAttributeDescriptor,
              ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor> *>>::
              get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, self, vertexCount, attributes);
}
inline void UnityEngine::Mesh_MeshData::SetIndexBufferParamsImpl(
    ::System::IntPtr self, int32_t indexCount,
    ::UnityEngine::Rendering::IndexFormat indexFormat) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshData>::get(),
      "SetIndexBufferParamsImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::IndexFormat>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, self, indexCount, indexFormat);
}
inline void UnityEngine::Mesh_MeshData::SetSubMeshCount(::System::IntPtr self,
                                                        int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshData>::get(),
      "SetSubMeshCount", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, self, count);
}
inline void UnityEngine::Mesh_MeshData::SetSubMeshImpl(
    ::System::IntPtr self, int32_t index,
    ::UnityEngine::Rendering::SubMeshDescriptor desc,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshData>::get(),
      "SetSubMeshImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::SubMeshDescriptor>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, self, index, desc, flags);
}
inline int32_t UnityEngine::Mesh_MeshData::get_vertexBufferCount() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshData>::get(),
      "get_vertexBufferCount", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method);
}
template <typename T>
inline ::Unity::Collections::NativeArray_1<T>
UnityEngine::Mesh_MeshData::GetVertexData(int32_t stream) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh_MeshData>::get(),
          "GetVertexData",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<
      ::Unity::Collections::NativeArray_1<T>, false>(this, ___internal_method,
                                                     stream);
}
inline void UnityEngine::Mesh_MeshData::SetVertexBufferParams(
    int32_t vertexCount,
    ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,
             ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor> *>
        attributes) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshData>::get(),
      "SetVertexBufferParams", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
              ::UnityEngine::Rendering::VertexAttributeDescriptor,
              ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor> *>>::
              get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, vertexCount, attributes);
}
inline void UnityEngine::Mesh_MeshData::SetIndexBufferParams(
    int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshData>::get(),
      "SetIndexBufferParams", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::IndexFormat>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, indexCount, format);
}
template <typename T>
inline ::Unity::Collections::NativeArray_1<T>
UnityEngine::Mesh_MeshData::GetIndexData() {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh_MeshData>::get(),
          "GetIndexData",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::span<const Il2CppType *const, 0>())));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<
      ::Unity::Collections::NativeArray_1<T>, false>(this, ___internal_method);
}
inline void UnityEngine::Mesh_MeshData::set_subMeshCount(int32_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshData>::get(),
      "set_subMeshCount", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline void UnityEngine::Mesh_MeshData::SetSubMesh(
    int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshData>::get(),
      "SetSubMesh", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::SubMeshDescriptor>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, index, desc, flags);
}
inline void UnityEngine::Mesh_MeshData::SetSubMeshImpl_Injected(
    ::System::IntPtr self, int32_t index,
    ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor> desc,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshData>::get(),
      "SetSubMeshImpl_Injected", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, self, index, desc, flags);
}
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::Mesh_MeshData::Mesh_MeshData(
    ::System::IntPtr m_Ptr) noexcept {
  this->m_Ptr = m_Ptr;
}
// Ctor Parameters []
constexpr ::UnityEngine::Mesh_MeshData::Mesh_MeshData() {}
//  Writing Method size for method:
//  ::UnityEngine::Mesh_MeshDataArray.AcquireReadOnlyMeshData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Mesh *,
                         ::cordl_internals::Ptr<::System::IntPtr>)>(
        &::UnityEngine::Mesh_MeshDataArray::AcquireReadOnlyMeshData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4890ce4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshDataArray>::get(),
        "AcquireReadOnlyMeshData", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Mesh *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<::System::IntPtr>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh_MeshDataArray.AcquireReadOnlyMeshDatas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(
        ::ArrayW<::UnityEngine::Mesh *, ::Array<::UnityEngine::Mesh *> *>,
        ::cordl_internals::Ptr<::System::IntPtr>, int32_t)>(
        &::UnityEngine::Mesh_MeshDataArray::AcquireReadOnlyMeshDatas)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4890d28;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshDataArray>::get(),
        "AcquireReadOnlyMeshDatas", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Mesh *,
                         ::Array<::UnityEngine::Mesh *> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<::System::IntPtr>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh_MeshDataArray.ReleaseMeshDatas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<::System::IntPtr>, int32_t)>(
        &::UnityEngine::Mesh_MeshDataArray::ReleaseMeshDatas)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4890d7c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshDataArray>::get(),
        "ReleaseMeshDatas", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<::System::IntPtr>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh_MeshDataArray.CreateNewMeshDatas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<::System::IntPtr>, int32_t)>(
        &::UnityEngine::Mesh_MeshDataArray::CreateNewMeshDatas)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4890dc0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshDataArray>::get(),
        "CreateNewMeshDatas", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<::System::IntPtr>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh_MeshDataArray.ApplyToMeshesImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(
        ::ArrayW<::UnityEngine::Mesh *, ::Array<::UnityEngine::Mesh *> *>,
        ::cordl_internals::Ptr<::System::IntPtr>, int32_t,
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh_MeshDataArray::ApplyToMeshesImpl)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4890e04;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshDataArray>::get(),
        "ApplyToMeshesImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Mesh *,
                         ::Array<::UnityEngine::Mesh *> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<::System::IntPtr>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh_MeshDataArray.ApplyToMeshImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Mesh *, ::System::IntPtr,
                         ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh_MeshDataArray::ApplyToMeshImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4890e60;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshDataArray>::get(),
        "ApplyToMeshImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Mesh *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh_MeshDataArray::*)()>(
        &::UnityEngine::Mesh_MeshDataArray::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4890eb4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshDataArray>::get(),
        "get_Length", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Mesh_MeshData (
        ::UnityEngine::Mesh_MeshDataArray::*)(int32_t)>(
        &::UnityEngine::Mesh_MeshDataArray::get_Item)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4890ebc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshDataArray>::get(),
        "get_Item", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh_MeshDataArray::*)()>(
        &::UnityEngine::Mesh_MeshDataArray::Dispose)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4890ec8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshDataArray>::get(),
        "Dispose", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh_MeshDataArray.ApplyToMeshAndDispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh_MeshDataArray::*)(
        ::UnityEngine::Mesh *, ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh_MeshDataArray::ApplyToMeshAndDispose)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x488cbf8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshDataArray>::get(),
        "ApplyToMeshAndDispose", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Mesh *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh_MeshDataArray.ApplyToMeshesAndDispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh_MeshDataArray::*)(
        ::ArrayW<::UnityEngine::Mesh *, ::Array<::UnityEngine::Mesh *> *>,
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh_MeshDataArray::ApplyToMeshesAndDispose)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x488ce68;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshDataArray>::get(),
        "ApplyToMeshesAndDispose", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Mesh *,
                         ::Array<::UnityEngine::Mesh *> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh_MeshDataArray::*)(
        ::UnityEngine::Mesh *, bool)>(
        &::UnityEngine::Mesh_MeshDataArray::_ctor)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x488c2b0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshDataArray>::get(),
        ".ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Mesh *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh_MeshDataArray::*)(
        ::ArrayW<::UnityEngine::Mesh *, ::Array<::UnityEngine::Mesh *> *>,
        int32_t, bool)>(&::UnityEngine::Mesh_MeshDataArray::_ctor)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x488c564;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshDataArray>::get(),
        ".ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Mesh *,
                         ::Array<::UnityEngine::Mesh *> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh_MeshDataArray::*)(int32_t)>(
        &::UnityEngine::Mesh_MeshDataArray::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x488c95c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh_MeshDataArray>::get(),
        ".ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
inline void UnityEngine::Mesh_MeshDataArray::AcquireReadOnlyMeshData(
    ::UnityEngine::Mesh *mesh, ::cordl_internals::Ptr<::System::IntPtr> datas) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshDataArray>::get(),
      "AcquireReadOnlyMeshData", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Mesh *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<::System::IntPtr>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, mesh, datas);
}
inline void UnityEngine::Mesh_MeshDataArray::AcquireReadOnlyMeshDatas(
    ::ArrayW<::UnityEngine::Mesh *, ::Array<::UnityEngine::Mesh *> *> meshes,
    ::cordl_internals::Ptr<::System::IntPtr> datas, int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshDataArray>::get(),
      "AcquireReadOnlyMeshDatas", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
              ::UnityEngine::Mesh *, ::Array<::UnityEngine::Mesh *> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<::System::IntPtr>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, meshes, datas, count);
}
inline void UnityEngine::Mesh_MeshDataArray::ReleaseMeshDatas(
    ::cordl_internals::Ptr<::System::IntPtr> datas, int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshDataArray>::get(),
      "ReleaseMeshDatas", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<::System::IntPtr>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, datas, count);
}
inline void UnityEngine::Mesh_MeshDataArray::CreateNewMeshDatas(
    ::cordl_internals::Ptr<::System::IntPtr> datas, int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshDataArray>::get(),
      "CreateNewMeshDatas", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<::System::IntPtr>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, datas, count);
}
inline void UnityEngine::Mesh_MeshDataArray::ApplyToMeshesImpl(
    ::ArrayW<::UnityEngine::Mesh *, ::Array<::UnityEngine::Mesh *> *> meshes,
    ::cordl_internals::Ptr<::System::IntPtr> datas, int32_t count,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshDataArray>::get(),
      "ApplyToMeshesImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
              ::UnityEngine::Mesh *, ::Array<::UnityEngine::Mesh *> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<::System::IntPtr>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, meshes, datas, count, flags);
}
inline void UnityEngine::Mesh_MeshDataArray::ApplyToMeshImpl(
    ::UnityEngine::Mesh *mesh, ::System::IntPtr data,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshDataArray>::get(),
      "ApplyToMeshImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Mesh *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, mesh, data, flags);
}
inline int32_t UnityEngine::Mesh_MeshDataArray::get_Length() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshDataArray>::get(),
      "get_Length", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method);
}
inline ::UnityEngine::Mesh_MeshData
UnityEngine::Mesh_MeshDataArray::get_Item(int32_t index) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshDataArray>::get(),
      "get_Item", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_MeshData,
                                             false>(this, ___internal_method,
                                                    index);
}
inline void UnityEngine::Mesh_MeshDataArray::Dispose() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshDataArray>::get(),
      "Dispose", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void UnityEngine::Mesh_MeshDataArray::ApplyToMeshAndDispose(
    ::UnityEngine::Mesh *mesh,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshDataArray>::get(),
      "ApplyToMeshAndDispose", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Mesh *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, mesh, flags);
}
inline void UnityEngine::Mesh_MeshDataArray::ApplyToMeshesAndDispose(
    ::ArrayW<::UnityEngine::Mesh *, ::Array<::UnityEngine::Mesh *> *> meshes,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshDataArray>::get(),
      "ApplyToMeshesAndDispose", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
              ::UnityEngine::Mesh *, ::Array<::UnityEngine::Mesh *> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, meshes, flags);
}
inline void UnityEngine::Mesh_MeshDataArray::_ctor(::UnityEngine::Mesh *mesh,
                                                   bool checkReadWrite) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshDataArray>::get(),
      ".ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Mesh *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, mesh, checkReadWrite);
}
inline void UnityEngine::Mesh_MeshDataArray::_ctor(
    ::ArrayW<::UnityEngine::Mesh *, ::Array<::UnityEngine::Mesh *> *> meshes,
    int32_t meshesCount, bool checkReadWrite) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshDataArray>::get(),
      ".ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
              ::UnityEngine::Mesh *, ::Array<::UnityEngine::Mesh *> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, meshes, meshesCount, checkReadWrite);
}
inline void UnityEngine::Mesh_MeshDataArray::_ctor(int32_t meshesCount) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh_MeshDataArray>::get(),
      ".ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, meshesCount);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Mesh_MeshDataArray::operator ::System::IDisposable *() {
  return static_cast<::System::IDisposable *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable *
UnityEngine::Mesh_MeshDataArray::i___System__IDisposable() {
  return static_cast<::System::IDisposable *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_Ptrs", ty:
// "::cordl_internals::Ptr<::System::IntPtr>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::Mesh_MeshDataArray::Mesh_MeshDataArray(
    ::cordl_internals::Ptr<::System::IntPtr> m_Ptrs,
    int32_t m_Length) noexcept {
  this->m_Ptrs = m_Ptrs;
  this->m_Length = m_Length;
}
// Ctor Parameters []
constexpr ::UnityEngine::Mesh_MeshDataArray::Mesh_MeshDataArray() {}
//  Writing Method size for method: ::UnityEngine::Mesh.Internal_Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Mesh *)>(
        &::UnityEngine::Mesh::Internal_Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4887684;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "Internal_Create", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Mesh *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x48876c0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        ".ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.FromInstanceID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t)>(
        &::UnityEngine::Mesh::FromInstanceID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4887740;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "FromInstanceID", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_indexFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::IndexFormat (
        ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_indexFormat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488777c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_indexFormat", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_indexFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::UnityEngine::Rendering::IndexFormat)>(
        &::UnityEngine::Mesh::set_indexFormat)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x48877b8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_indexFormat", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::IndexFormat>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTotalIndexCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::GetTotalIndexCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48877fc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetTotalIndexCount", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndexBufferParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t, ::UnityEngine::Rendering::IndexFormat)>(
        &::UnityEngine::Mesh::SetIndexBufferParams)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4887838;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetIndexBufferParams", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::IndexFormat>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.InternalSetIndexBufferData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::IntPtr, int32_t, int32_t, int32_t, int32_t,
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::InternalSetIndexBufferData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x488788c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "InternalSetIndexBufferData", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.InternalSetIndexBufferDataFromArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Array *, int32_t, int32_t, int32_t, int32_t,
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::InternalSetIndexBufferDataFromArray)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4887910;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "InternalSetIndexBufferDataFromArray",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Array *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.SetVertexBufferParamsFromPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::IntPtr,
                                              int32_t)>(
        &::UnityEngine::Mesh::SetVertexBufferParamsFromPtr)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4887994;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetVertexBufferParamsFromPtr",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.SetVertexBufferParamsFromArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t,
        ::ArrayW<
            ::UnityEngine::Rendering::VertexAttributeDescriptor,
            ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor> *>)>(
        &::UnityEngine::Mesh::SetVertexBufferParamsFromArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x48879f0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetVertexBufferParamsFromArray",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
                ::UnityEngine::Rendering::VertexAttributeDescriptor,
                ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>
                    *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.InternalSetVertexBufferData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t,
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::InternalSetVertexBufferData)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4887a44;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "InternalSetVertexBufferData", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.InternalSetVertexBufferDataFromArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t, ::System::Array *, int32_t, int32_t, int32_t, int32_t,
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::InternalSetVertexBufferDataFromArray)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4887ad0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "InternalSetVertexBufferDataFromArray",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Array *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributesAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Array *(::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::GetVertexAttributesAlloc)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4887b5c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetVertexAttributesAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributesArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,
                 ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>
                     *>)>(&::UnityEngine::Mesh::GetVertexAttributesArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4887b98;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetVertexAttributesArray", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
                ::UnityEngine::Rendering::VertexAttributeDescriptor,
                ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>
                    *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributesList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<
            ::UnityEngine::Rendering::VertexAttributeDescriptor> *)>(
        &::UnityEngine::Mesh::GetVertexAttributesList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4887bdc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetVertexAttributesList", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<
                    ::UnityEngine::Rendering::VertexAttributeDescriptor>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.GetVertexAttributeCountImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::GetVertexAttributeCountImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4887c20;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetVertexAttributeCountImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::VertexAttributeDescriptor (
        ::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::GetVertexAttribute)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4887c5c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetVertexAttribute", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexStartImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::GetIndexStartImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4887d0c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetIndexStartImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexCountImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::GetIndexCountImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4887d50;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetIndexCountImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTrianglesCountImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::GetTrianglesCountImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4887d94;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetTrianglesCountImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBaseVertexImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::GetBaseVertexImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4887dd8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBaseVertexImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTrianglesImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<int32_t, ::Array<int32_t> *> (::UnityEngine::Mesh::*)(
        int32_t, bool)>(&::UnityEngine::Mesh::GetTrianglesImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4887e1c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetTrianglesImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndicesImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<int32_t, ::Array<int32_t> *> (::UnityEngine::Mesh::*)(
        int32_t, bool)>(&::UnityEngine::Mesh::GetIndicesImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4887e70;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetIndicesImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndicesImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t, ::UnityEngine::MeshTopology,
        ::UnityEngine::Rendering::IndexFormat, ::System::Array *, int32_t,
        int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetIndicesImpl)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4887ec4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetIndicesImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::IndexFormat>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Array *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.SetIndicesNativeArrayImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t, ::UnityEngine::MeshTopology,
        ::UnityEngine::Rendering::IndexFormat, ::System::IntPtr, int32_t,
        int32_t, bool, int32_t)>(
        &::UnityEngine::Mesh::SetIndicesNativeArrayImpl)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4887f60;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetIndicesNativeArrayImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::IndexFormat>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTrianglesNonAllocImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ByRef<::ArrayW<int32_t, ::Array<int32_t> *>>, int32_t, bool)>(
        &::UnityEngine::Mesh::GetTrianglesNonAllocImpl)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4887ffc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetTrianglesNonAllocImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::ArrayW<int32_t, ::Array<int32_t> *>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.GetTrianglesNonAllocImpl16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ByRef<::ArrayW<uint16_t, ::Array<uint16_t> *>>, int32_t, bool)>(
        &::UnityEngine::Mesh::GetTrianglesNonAllocImpl16)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4888058;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetTrianglesNonAllocImpl16", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::ArrayW<uint16_t, ::Array<uint16_t> *>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndicesNonAllocImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ByRef<::ArrayW<int32_t, ::Array<int32_t> *>>, int32_t, bool)>(
        &::UnityEngine::Mesh::GetIndicesNonAllocImpl)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x48880b4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetIndicesNonAllocImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::ArrayW<int32_t, ::Array<int32_t> *>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndicesNonAllocImpl16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ByRef<::ArrayW<uint16_t, ::Array<uint16_t> *>>, int32_t, bool)>(
        &::UnityEngine::Mesh::GetIndicesNonAllocImpl16)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4888110;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetIndicesNonAllocImpl16", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::ArrayW<uint16_t, ::Array<uint16_t> *>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.PrintErrorCantAccessChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::UnityEngine::Rendering::VertexAttribute)>(
        &::UnityEngine::Mesh::PrintErrorCantAccessChannel)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488816c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "PrintErrorCantAccessChannel", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::VertexAttribute>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.HasVertexAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::Mesh::*)(
        ::UnityEngine::Rendering::VertexAttribute)>(
        &::UnityEngine::Mesh::HasVertexAttribute)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x48881b0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "HasVertexAttribute", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::VertexAttribute>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.GetVertexAttributeDimension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh::*)(
        ::UnityEngine::Rendering::VertexAttribute)>(
        &::UnityEngine::Mesh::GetVertexAttributeDimension)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x48881f4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetVertexAttributeDimension", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::VertexAttribute>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::VertexAttributeFormat (
        ::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute)>(
        &::UnityEngine::Mesh::GetVertexAttributeFormat)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4888238;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetVertexAttributeFormat", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::VertexAttribute>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh::*)(
        ::UnityEngine::Rendering::VertexAttribute)>(
        &::UnityEngine::Mesh::GetVertexAttributeStream)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488827c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetVertexAttributeStream", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::VertexAttribute>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh::*)(
        ::UnityEngine::Rendering::VertexAttribute)>(
        &::UnityEngine::Mesh::GetVertexAttributeOffset)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x48882c0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetVertexAttributeOffset", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::VertexAttribute>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetArrayForChannelImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::UnityEngine::Rendering::VertexAttribute,
        ::UnityEngine::Rendering::VertexAttributeFormat, int32_t,
        ::System::Array *, int32_t, int32_t, int32_t,
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetArrayForChannelImpl)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4888304;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetArrayForChannelImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::VertexAttribute>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::VertexAttributeFormat>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Array *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.SetNativeArrayForChannelImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::UnityEngine::Rendering::VertexAttribute,
        ::UnityEngine::Rendering::VertexAttributeFormat, int32_t,
        ::System::IntPtr, int32_t, int32_t, int32_t,
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetNativeArrayForChannelImpl)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x48883a0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetNativeArrayForChannelImpl",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::VertexAttribute>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::VertexAttributeFormat>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.GetAllocArrayFromChannelImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Array *(
        ::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute,
                                ::UnityEngine::Rendering::VertexAttributeFormat,
                                int32_t)>(
        &::UnityEngine::Mesh::GetAllocArrayFromChannelImpl)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x488843c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetAllocArrayFromChannelImpl",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::VertexAttribute>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::VertexAttributeFormat>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetArrayFromChannelImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::UnityEngine::Rendering::VertexAttribute,
        ::UnityEngine::Rendering::VertexAttributeFormat, int32_t,
        ::System::Array *)>(&::UnityEngine::Mesh::GetArrayFromChannelImpl)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4888498;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetArrayFromChannelImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::VertexAttribute>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::VertexAttributeFormat>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Array *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_vertexBufferCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::get_vertexBufferCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4888504;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_vertexBufferCount", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexBufferStride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::GetVertexBufferStride)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4888540;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetVertexBufferStride", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetNativeVertexBufferPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IntPtr (::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::GetNativeVertexBufferPtr)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4888584;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetNativeVertexBufferPtr", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetNativeIndexBufferPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IntPtr (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::GetNativeIndexBufferPtr)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48885c8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetNativeIndexBufferPtr", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexBufferImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::GraphicsBuffer *(
        ::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::GetVertexBufferImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4888604;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetVertexBufferImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexBufferImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::GraphicsBuffer *(::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::GetIndexBufferImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4888648;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetIndexBufferImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBoneWeightBufferImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::GraphicsBuffer *(
        ::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::GetBoneWeightBufferImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4888684;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBoneWeightBufferImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeBufferImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::GraphicsBuffer *(
        ::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::GetBlendShapeBufferImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x48886c8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBlendShapeBufferImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_vertexBufferTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::GraphicsBuffer_Target (
        ::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::get_vertexBufferTarget)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488870c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_vertexBufferTarget", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_vertexBufferTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::UnityEngine::GraphicsBuffer_Target)>(
        &::UnityEngine::Mesh::set_vertexBufferTarget)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4888748;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_vertexBufferTarget", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::GraphicsBuffer_Target>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_indexBufferTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::GraphicsBuffer_Target (
        ::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::get_indexBufferTarget)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488878c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_indexBufferTarget", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_indexBufferTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::UnityEngine::GraphicsBuffer_Target)>(
        &::UnityEngine::Mesh::set_indexBufferTarget)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x48887c8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_indexBufferTarget", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::GraphicsBuffer_Target>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_blendShapeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::get_blendShapeCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488880c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_blendShapeCount", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.ClearBlendShapes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::ClearBlendShapes)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4888848;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "ClearBlendShapes", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::GetBlendShapeName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4888884;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBlendShapeName", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh::*)(::StringW)>(
        &::UnityEngine::Mesh::GetBlendShapeIndex)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x48888c8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBlendShapeIndex", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeFrameCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::GetBlendShapeFrameCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488890c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBlendShapeFrameCount", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeFrameWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (::UnityEngine::Mesh::*)(int32_t, int32_t)>(
        &::UnityEngine::Mesh::GetBlendShapeFrameWeight)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4888950;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBlendShapeFrameWeight", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.GetBlendShapeFrameVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t, int32_t,
        ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>,
        ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>,
        ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>)>(
        &::UnityEngine::Mesh::GetBlendShapeFrameVertices)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x48889a4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBlendShapeFrameVertices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector3,
                         ::Array<::UnityEngine::Vector3> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector3,
                         ::Array<::UnityEngine::Vector3> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector3,
                         ::Array<::UnityEngine::Vector3> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.AddBlendShapeFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::StringW, float_t,
        ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>,
        ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>,
        ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>)>(
        &::UnityEngine::Mesh::AddBlendShapeFrame)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4888a18;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "AddBlendShapeFrame", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector3,
                         ::Array<::UnityEngine::Vector3> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector3,
                         ::Array<::UnityEngine::Vector3> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector3,
                         ::Array<::UnityEngine::Vector3> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.GetBlendShapeOffsetInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::BlendShape (::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::GetBlendShapeOffsetInternal)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4888a94;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBlendShapeOffsetInternal", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.HasBoneWeights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::HasBoneWeights)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4888b4c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "HasBoneWeights", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBoneWeightsImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::BoneWeight,
                         ::Array<::UnityEngine::BoneWeight> *> (
        ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetBoneWeightsImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4888b88;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBoneWeightsImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetBoneWeightsImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::BoneWeight,
                 ::Array<::UnityEngine::BoneWeight> *>)>(
        &::UnityEngine::Mesh::SetBoneWeightsImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4888bc4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetBoneWeightsImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::BoneWeight,
                         ::Array<::UnityEngine::BoneWeight> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetBoneWeights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::Unity::Collections::NativeArray_1<uint8_t>,
        ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>)>(
        &::UnityEngine::Mesh::SetBoneWeights)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x4888c08;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetBoneWeights", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Unity::Collections::NativeArray_1<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Unity::Collections::NativeArray_1<
                    ::UnityEngine::BoneWeight1>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.InternalSetBoneWeights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(::System::IntPtr, int32_t,
                                              ::System::IntPtr, int32_t)>(
        &::UnityEngine::Mesh::InternalSetBoneWeights)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4888cf0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "InternalSetBoneWeights", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetAllBoneWeights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Collections::NativeArray_1<
        ::UnityEngine::BoneWeight1> (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::GetAllBoneWeights)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x4888d5c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetAllBoneWeights", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBonesPerVertex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Collections::NativeArray_1<uint8_t> (
        ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetBonesPerVertex)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x4888e88;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBonesPerVertex", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.GetAllBoneWeightsArraySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::GetAllBoneWeightsArraySize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4888e4c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetAllBoneWeightsArraySize", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.GetBoneWeightBufferLayoutInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::GetBoneWeightBufferLayoutInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4888fe4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBoneWeightBufferLayoutInternal",
        std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetAllBoneWeightsArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IntPtr (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::GetAllBoneWeightsArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4888e10;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetAllBoneWeightsArray", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBonesPerVertexArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IntPtr (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::GetBonesPerVertexArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4888fa8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBonesPerVertexArray", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_bindposeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::get_bindposeCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4889020;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_bindposeCount", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_bindposes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::Matrix4x4,
                         ::Array<::UnityEngine::Matrix4x4> *> (
        ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_bindposes)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488905c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_bindposes", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_bindposes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Matrix4x4,
                 ::Array<::UnityEngine::Matrix4x4> *>)>(
        &::UnityEngine::Mesh::set_bindposes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4889098;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_bindposes", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Matrix4x4,
                         ::Array<::UnityEngine::Matrix4x4> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBindposes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> (
        ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetBindposes)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x48890dc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBindposes", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBindposesArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IntPtr (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::GetBindposesArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4889190;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBindposesArray", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.GetBoneWeightsNonAllocImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ByRef<::ArrayW<::UnityEngine::BoneWeight,
                         ::Array<::UnityEngine::BoneWeight> *>>)>(
        &::UnityEngine::Mesh::GetBoneWeightsNonAllocImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x48891cc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBoneWeightsNonAllocImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *,
                     1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ByRef<::ArrayW<::UnityEngine::BoneWeight,
                             ::Array<::UnityEngine::BoneWeight> *>>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBindposesNonAllocImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ByRef<::ArrayW<::UnityEngine::Matrix4x4,
                         ::Array<::UnityEngine::Matrix4x4> *>>)>(
        &::UnityEngine::Mesh::GetBindposesNonAllocImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4889210;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBindposesNonAllocImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *,
                     1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ByRef<::ArrayW<::UnityEngine::Matrix4x4,
                             ::Array<::UnityEngine::Matrix4x4> *>>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_isReadable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::get_isReadable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4889254;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_isReadable", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_canAccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::get_canAccess)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4889290;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_canAccess", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_vertexCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::get_vertexCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4888f6c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_vertexCount", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_subMeshCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::get_subMeshCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48892cc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_subMeshCount", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_subMeshCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::set_subMeshCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4889308;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_subMeshCount", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetSubMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t, ::UnityEngine::Rendering::SubMeshDescriptor,
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetSubMesh)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x488934c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetSubMesh", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::SubMeshDescriptor>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetSubMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::SubMeshDescriptor (
        ::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetSubMesh)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4889404;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetSubMesh", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.SetAllSubMeshesAtOnceFromArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor,
                 ::Array<::UnityEngine::Rendering::SubMeshDescriptor> *>,
        int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetAllSubMeshesAtOnceFromArray)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x48894d4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetAllSubMeshesAtOnceFromArray",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
                ::UnityEngine::Rendering::SubMeshDescriptor,
                ::Array<::UnityEngine::Rendering::SubMeshDescriptor> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.SetAllSubMeshesAtOnceFromNativeArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::IntPtr, int32_t, int32_t,
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetAllSubMeshesAtOnceFromNativeArray)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4889540;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetAllSubMeshesAtOnceFromNativeArray",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_bounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Bounds (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::get_bounds)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x48895ac;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_bounds", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_bounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Bounds)>(
        &::UnityEngine::Mesh::set_bounds)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4889658;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_bounds", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Bounds>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.ClearImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(bool)>(
        &::UnityEngine::Mesh::ClearImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x48896e0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "ClearImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateBoundsImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::RecalculateBoundsImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4889724;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "RecalculateBoundsImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateNormalsImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::RecalculateNormalsImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4889768;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "RecalculateNormalsImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateTangentsImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::RecalculateTangentsImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x48897ac;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "RecalculateTangentsImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.MarkDynamicImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::MarkDynamicImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48897f0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "MarkDynamicImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.MarkModified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::MarkModified)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488982c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "MarkModified", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.UploadMeshDataImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(bool)>(
        &::UnityEngine::Mesh::UploadMeshDataImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4889868;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "UploadMeshDataImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTopologyImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::MeshTopology (::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::GetTopologyImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x48898ac;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetTopologyImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.RecalculateUVDistributionMetricImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(int32_t, float_t)>(
        &::UnityEngine::Mesh::RecalculateUVDistributionMetricImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x48898f0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "RecalculateUVDistributionMetricImpl",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.RecalculateUVDistributionMetricsImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(float_t)>(
        &::UnityEngine::Mesh::RecalculateUVDistributionMetricsImpl)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x4889944;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "RecalculateUVDistributionMetricsImpl",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetUVDistributionMetric
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::GetUVDistributionMetric)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4889990;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetUVDistributionMetric", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CombineMeshesImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::CombineInstance,
                 ::Array<::UnityEngine::CombineInstance> *>,
        bool, bool, bool)>(&::UnityEngine::Mesh::CombineMeshesImpl)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x48899d4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "CombineMeshesImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::CombineInstance,
                         ::Array<::UnityEngine::CombineInstance> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.OptimizeImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::OptimizeImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4889a40;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "OptimizeImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.OptimizeIndexBuffersImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::OptimizeIndexBuffersImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4889a7c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "OptimizeIndexBuffersImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.OptimizeReorderVertexBufferImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::OptimizeReorderVertexBufferImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4889ab8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "OptimizeReorderVertexBufferImpl",
        std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetUVChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::VertexAttribute (*)(int32_t)>(
        &::UnityEngine::Mesh::GetUVChannel)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4889af4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetUVChannel", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.DefaultDimensionForChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Rendering::VertexAttribute)>(
        &::UnityEngine::Mesh::DefaultDimensionForChannel)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4889b68;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "DefaultDimensionForChannel", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::VertexAttribute>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetSizedArrayForChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::UnityEngine::Rendering::VertexAttribute,
        ::UnityEngine::Rendering::VertexAttributeFormat, int32_t,
        ::System::Array *, int32_t, int32_t, int32_t,
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetSizedArrayForChannel)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x4889c04;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetSizedArrayForChannel", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::VertexAttribute>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::VertexAttributeFormat>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Array *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.SetSizedNativeArrayForChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::UnityEngine::Rendering::VertexAttribute,
        ::UnityEngine::Rendering::VertexAttributeFormat, int32_t,
        ::System::IntPtr, int32_t, int32_t, int32_t,
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetSizedNativeArrayForChannel)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x4889e98;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetSizedNativeArrayForChannel",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::VertexAttribute>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::VertexAttributeFormat>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_vertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<
        ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *> (
            ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_vertices)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488a124;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_vertices", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_vertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>)>(
        &::UnityEngine::Mesh::set_vertices)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x488a170;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_vertices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector3,
                         ::Array<::UnityEngine::Vector3> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_normals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<
        ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *> (
            ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_normals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488a1d0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_normals", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_normals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>)>(
        &::UnityEngine::Mesh::set_normals)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x488a21c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_normals", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector3,
                         ::Array<::UnityEngine::Vector3> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_tangents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<
        ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4> *> (
            ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_tangents)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488a27c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_tangents", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_tangents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4> *>)>(
        &::UnityEngine::Mesh::set_tangents)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x488a2c8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_tangents", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector4,
                         ::Array<::UnityEngine::Vector4> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_uv
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<
        ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *> (
            ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_uv)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488a328;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_uv", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_uv
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>)>(
        &::UnityEngine::Mesh::set_uv)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x488a374;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_uv", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector2,
                         ::Array<::UnityEngine::Vector2> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_uv2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<
        ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *> (
            ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_uv2)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488a3d4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_uv2", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_uv2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>)>(
        &::UnityEngine::Mesh::set_uv2)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x488a420;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_uv2", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector2,
                         ::Array<::UnityEngine::Vector2> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_uv3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<
        ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *> (
            ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_uv3)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488a480;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_uv3", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_uv3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>)>(
        &::UnityEngine::Mesh::set_uv3)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x488a4cc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_uv3", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector2,
                         ::Array<::UnityEngine::Vector2> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_uv4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<
        ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *> (
            ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_uv4)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488a52c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_uv4", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_uv4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>)>(
        &::UnityEngine::Mesh::set_uv4)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x488a578;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_uv4", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector2,
                         ::Array<::UnityEngine::Vector2> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_uv5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<
        ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *> (
            ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_uv5)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488a5d8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_uv5", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_uv5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>)>(
        &::UnityEngine::Mesh::set_uv5)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x488a624;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_uv5", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector2,
                         ::Array<::UnityEngine::Vector2> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_uv6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<
        ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *> (
            ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_uv6)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488a684;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_uv6", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_uv6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>)>(
        &::UnityEngine::Mesh::set_uv6)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x488a6d0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_uv6", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector2,
                         ::Array<::UnityEngine::Vector2> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_uv7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<
        ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *> (
            ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_uv7)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488a730;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_uv7", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_uv7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>)>(
        &::UnityEngine::Mesh::set_uv7)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x488a77c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_uv7", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector2,
                         ::Array<::UnityEngine::Vector2> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_uv8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<
        ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *> (
            ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_uv8)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488a7dc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_uv8", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_uv8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>)>(
        &::UnityEngine::Mesh::set_uv8)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x488a828;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_uv8", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector2,
                         ::Array<::UnityEngine::Vector2> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_colors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<
        ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color> *> (
            ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_colors)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488a888;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_colors", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_colors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color> *>)>(
        &::UnityEngine::Mesh::set_colors)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x488a8d4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_colors", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Color,
                         ::Array<::UnityEngine::Color> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_colors32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<
        ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32> *> (
            ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_colors32)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x488a934;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_colors32", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_colors32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32> *>)>(
        &::UnityEngine::Mesh::set_colors32)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x488a988;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_colors32", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Color32,
                         ::Array<::UnityEngine::Color32> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *)>(
        &::UnityEngine::Mesh::GetVertices)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x488a9f0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetVertices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *)>(
        &::UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x488aadc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetVertices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *,
        int32_t, int32_t)>(&::UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488ab48;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetVertices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                    *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *,
        int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x488ab50;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetVertices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                    *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>)>(
        &::UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x488abcc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetVertices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector3,
                         ::Array<::UnityEngine::Vector3> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>,
        int32_t, int32_t)>(&::UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x488ac34;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetVertices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector3,
                         ::Array<::UnityEngine::Vector3> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>,
        int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x488ac9c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetVertices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector3,
                         ::Array<::UnityEngine::Vector3> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *)>(
        &::UnityEngine::Mesh::GetNormals)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x488ad08;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetNormals", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *)>(
        &::UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x488adf4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetNormals", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *,
        int32_t, int32_t)>(&::UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488ae60;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetNormals", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                    *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *,
        int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x488ae68;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetNormals", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                    *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>)>(
        &::UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x488aee4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetNormals", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector3,
                         ::Array<::UnityEngine::Vector3> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>,
        int32_t, int32_t)>(&::UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x488af4c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetNormals", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector3,
                         ::Array<::UnityEngine::Vector3> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>,
        int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x488afb4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetNormals", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector3,
                         ::Array<::UnityEngine::Vector3> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTangents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Vector4> *)>(
        &::UnityEngine::Mesh::GetTangents)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x488b020;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetTangents", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector4>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTangents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Vector4> *)>(
        &::UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x488b10c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetTangents", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector4>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTangents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Vector4> *,
        int32_t, int32_t)>(&::UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488b178;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetTangents", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector4>
                    *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTangents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Vector4> *,
        int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x488b180;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetTangents", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector4>
                    *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTangents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4> *>)>(
        &::UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x488b1fc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetTangents", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector4,
                         ::Array<::UnityEngine::Vector4> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTangents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4> *>,
        int32_t, int32_t)>(&::UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x488b264;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetTangents", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector4,
                         ::Array<::UnityEngine::Vector4> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTangents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4> *>,
        int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x488b2cc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetTangents", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector4,
                         ::Array<::UnityEngine::Vector4> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Color> *)>(
        &::UnityEngine::Mesh::GetColors)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x488b338;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetColors", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Color>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Color> *)>(
        &::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x488b424;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetColors", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Color>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Color> *, int32_t,
        int32_t)>(&::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488b490;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetColors", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Color>
                    *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Color> *, int32_t,
        int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x488b498;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetColors", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Color>
                    *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color> *>)>(
        &::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x488b514;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetColors", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Color,
                         ::Array<::UnityEngine::Color> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color> *>,
        int32_t, int32_t)>(&::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x488b57c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetColors", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
                ::UnityEngine::Color, ::Array<::UnityEngine::Color> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color> *>,
        int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x488b5e4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetColors", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
                ::UnityEngine::Color, ::Array<::UnityEngine::Color> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Color32> *)>(
        &::UnityEngine::Mesh::GetColors)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x488b650;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetColors", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Color32>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Color32> *)>(
        &::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x488b740;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetColors", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Color32>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Color32> *,
        int32_t, int32_t)>(&::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488b7ac;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetColors", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Color32>
                    *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Color32> *,
        int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x488b7b4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetColors", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Color32>
                    *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32> *>)>(
        &::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x488b848;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetColors", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Color32,
                         ::Array<::UnityEngine::Color32> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32> *>,
        int32_t, int32_t)>(&::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x488b8b0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetColors", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Color32,
                         ::Array<::UnityEngine::Color32> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32> *>,
        int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x488b918;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetColors", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Color32,
                         ::Array<::UnityEngine::Color32> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>
                     *)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x488b984;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector2>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                     *)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x488ba00;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>
                     *)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x488ba7c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector4>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t,
        ::System::Collections::Generic::List_1<::UnityEngine::Vector2> *,
        int32_t, int32_t)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488b9f8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector2>
                    *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t,
        ::System::Collections::Generic::List_1<::UnityEngine::Vector2> *,
        int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x488baf8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector2>
                    *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t,
        ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *,
        int32_t, int32_t)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488ba74;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                    *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t,
        ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *,
        int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x488bb84;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                    *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t,
        ::System::Collections::Generic::List_1<::UnityEngine::Vector4> *,
        int32_t, int32_t)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488baf0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector4>
                    *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t,
        ::System::Collections::Generic::List_1<::UnityEngine::Vector4> *,
        int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x488bc10;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector4>
                    *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUvsImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t, int32_t, ::System::Array *, int32_t, int32_t,
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetUvsImpl)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x488bc9c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetUvsImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Array *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t,
        ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>)>(
        &::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x488bda4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector2,
                         ::Array<::UnityEngine::Vector2> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t,
        ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>)>(
        &::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x488be04;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector3,
                         ::Array<::UnityEngine::Vector3> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t,
        ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4> *>)>(
        &::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x488be64;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector4,
                         ::Array<::UnityEngine::Vector4> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t,
        ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>,
        int32_t, int32_t)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x488bdec;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector2,
                         ::Array<::UnityEngine::Vector2> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t,
        ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>,
        int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x488bec4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector2,
                         ::Array<::UnityEngine::Vector2> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t,
        ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>,
        int32_t, int32_t)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x488be4c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector3,
                         ::Array<::UnityEngine::Vector3> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t,
        ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>,
        int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x488bedc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector3,
                         ::Array<::UnityEngine::Vector3> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t,
        ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4> *>,
        int32_t, int32_t)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x488beac;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector4,
                         ::Array<::UnityEngine::Vector4> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t,
        ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4> *>,
        int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x488bef4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Vector4,
                         ::Array<::UnityEngine::Vector4> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>
                     *)>(&::UnityEngine::Mesh::GetUVs)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x488bf0c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector2>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                     *)>(&::UnityEngine::Mesh::GetUVs)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x488bf70;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>
                     *)>(&::UnityEngine::Mesh::GetUVs)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x488bfd4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetUVs", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Vector4>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_vertexAttributeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::get_vertexAttributeCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488c038;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_vertexAttributeCount", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<
        ::UnityEngine::Rendering::VertexAttributeDescriptor,
        ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor> *> (
        ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetVertexAttributes)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x488c074;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetVertexAttributes", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,
                 ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>
                     *>)>(&::UnityEngine::Mesh::GetVertexAttributes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488c100;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetVertexAttributes", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
                ::UnityEngine::Rendering::VertexAttributeDescriptor,
                ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>
                    *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<
            ::UnityEngine::Rendering::VertexAttributeDescriptor> *)>(
        &::UnityEngine::Mesh::GetVertexAttributes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488c144;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetVertexAttributes", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<
                    ::UnityEngine::Rendering::VertexAttributeDescriptor>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertexBufferParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t,
        ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,
                 ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>
                     *>)>(&::UnityEngine::Mesh::SetVertexBufferParams)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x488c188;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetVertexBufferParams", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
                ::UnityEngine::Rendering::VertexAttributeDescriptor,
                ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>
                    *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertexBufferParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t, ::Unity::Collections::NativeArray_1<
                     ::UnityEngine::Rendering::VertexAttributeDescriptor>)>(
        &::UnityEngine::Mesh::SetVertexBufferParams)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x488c1dc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetVertexBufferParams", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Unity::Collections::NativeArray_1<
                    ::UnityEngine::Rendering::VertexAttributeDescriptor>>::
                get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.AcquireReadOnlyMeshData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Mesh_MeshDataArray (*)(::UnityEngine::Mesh *)>(
        &::UnityEngine::Mesh::AcquireReadOnlyMeshData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x488c284;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "AcquireReadOnlyMeshData", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Mesh *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.AcquireReadOnlyMeshData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Mesh_MeshDataArray (*)(
        ::ArrayW<::UnityEngine::Mesh *, ::Array<::UnityEngine::Mesh *> *>)>(
        &::UnityEngine::Mesh::AcquireReadOnlyMeshData)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x488c4cc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "AcquireReadOnlyMeshData", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Mesh *,
                         ::Array<::UnityEngine::Mesh *> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.AcquireReadOnlyMeshData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Mesh_MeshDataArray (*)(
        ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>
            *)>(&::UnityEngine::Mesh::AcquireReadOnlyMeshData)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x488c858;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "AcquireReadOnlyMeshData", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<
                    ::UnityW<::UnityEngine::Mesh>> *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.AllocateWritableMeshData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Mesh_MeshDataArray (*)(int32_t)>(
        &::UnityEngine::Mesh::AllocateWritableMeshData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x488c934;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "AllocateWritableMeshData", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.ApplyAndDisposeWritableMeshData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Mesh_MeshDataArray,
                         ::UnityEngine::Mesh *,
                         ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::ApplyAndDisposeWritableMeshData)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x488ca7c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "ApplyAndDisposeWritableMeshData",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Mesh_MeshDataArray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Mesh *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.ApplyAndDisposeWritableMeshData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(
        ::UnityEngine::Mesh_MeshDataArray,
        ::ArrayW<::UnityEngine::Mesh *, ::Array<::UnityEngine::Mesh *> *>,
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::ApplyAndDisposeWritableMeshData)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x488cd14;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "ApplyAndDisposeWritableMeshData",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Mesh_MeshDataArray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Mesh *,
                         ::Array<::UnityEngine::Mesh *> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.ApplyAndDisposeWritableMeshData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(
        ::UnityEngine::Mesh_MeshDataArray,
        ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>> *,
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::ApplyAndDisposeWritableMeshData)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x488d0a0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "ApplyAndDisposeWritableMeshData",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Mesh_MeshDataArray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<
                    ::UnityW<::UnityEngine::Mesh>> *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::GraphicsBuffer *(
        ::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::GetVertexBuffer)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x488d250;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetVertexBuffer", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::GraphicsBuffer *(::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::GetIndexBuffer)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x488d31c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetIndexBuffer", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBoneWeightBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::GraphicsBuffer *(
        ::UnityEngine::Mesh::*)(::UnityEngine::SkinWeights)>(
        &::UnityEngine::Mesh::GetBoneWeightBuffer)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x488d3d8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBoneWeightBuffer", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::SkinWeights>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::GraphicsBuffer *(
        ::UnityEngine::Mesh::
            *)(::UnityEngine::Rendering::BlendShapeBufferLayout)>(
        &::UnityEngine::Mesh::GetBlendShapeBuffer)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x488d670;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBlendShapeBuffer", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::BlendShapeBufferLayout>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::GraphicsBuffer *(::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::GetBlendShapeBuffer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x488d7a0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBlendShapeBuffer", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeBufferRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::BlendShapeBufferRange (::UnityEngine::Mesh::*)(
        int32_t)>(&::UnityEngine::Mesh::GetBlendShapeBufferRange)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x488d8c0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBlendShapeBufferRange", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.PrintErrorCantAccessIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::PrintErrorCantAccessIndices)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x488d9b0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "PrintErrorCantAccessIndices", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CheckCanAccessSubmesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::Mesh::*)(int32_t, bool)>(
        &::UnityEngine::Mesh::CheckCanAccessSubmesh)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x488da4c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "CheckCanAccessSubmesh", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.CheckCanAccessSubmeshTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::CheckCanAccessSubmeshTriangles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488db90;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "CheckCanAccessSubmeshTriangles",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.CheckCanAccessSubmeshIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::CheckCanAccessSubmeshIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488db98;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "CheckCanAccessSubmeshIndices",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_triangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<int32_t, ::Array<int32_t> *> (
        ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_triangles)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x488dba0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_triangles", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_triangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<int32_t, ::Array<int32_t> *>)>(
        &::UnityEngine::Mesh::set_triangles)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x488dc54;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_triangles", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<int32_t, ::Array<int32_t> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<int32_t, ::Array<int32_t> *> (::UnityEngine::Mesh::*)(
        int32_t)>(&::UnityEngine::Mesh::GetTriangles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488dd9c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetTriangles", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<int32_t, ::Array<int32_t> *> (::UnityEngine::Mesh::*)(
        int32_t, bool)>(&::UnityEngine::Mesh::GetTriangles)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x488dda4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetTriangles", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<int32_t> *, int32_t)>(
        &::UnityEngine::Mesh::GetTriangles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488de4c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetTriangles", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<int32_t> *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<int32_t> *, int32_t, bool)>(
        &::UnityEngine::Mesh::GetTriangles)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x488de54;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetTriangles", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<int32_t> *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<uint16_t> *, int32_t, bool)>(
        &::UnityEngine::Mesh::GetTriangles)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x488e008;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetTriangles", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<uint16_t> *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<int32_t, ::Array<int32_t> *> (::UnityEngine::Mesh::*)(
        int32_t)>(&::UnityEngine::Mesh::GetIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488e1bc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetIndices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<int32_t, ::Array<int32_t> *> (::UnityEngine::Mesh::*)(
        int32_t, bool)>(&::UnityEngine::Mesh::GetIndices)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x488e1c4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetIndices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<int32_t> *, int32_t)>(
        &::UnityEngine::Mesh::GetIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488e26c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetIndices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<int32_t> *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<int32_t> *, int32_t, bool)>(
        &::UnityEngine::Mesh::GetIndices)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x488e274;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetIndices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<int32_t> *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<uint16_t> *, int32_t, bool)>(
        &::UnityEngine::Mesh::GetIndices)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x488e4c8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetIndices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<uint16_t> *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::GetIndexStart)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x488e65c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetIndexStart", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::GetIndexCount)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x488e408;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetIndexCount", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBaseVertex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::GetBaseVertex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x488e71c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBaseVertex", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CheckIndicesArrayRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(int32_t, int32_t, int32_t)>(
        &::UnityEngine::Mesh::CheckIndicesArrayRange)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x488e7dc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "CheckIndicesArrayRange", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTrianglesImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t, ::UnityEngine::Rendering::IndexFormat, ::System::Array *,
        int32_t, int32_t, int32_t, bool, int32_t)>(
        &::UnityEngine::Mesh::SetTrianglesImpl)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x488dcfc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetTrianglesImpl", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::IndexFormat>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Array *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<int32_t, ::Array<int32_t> *>, int32_t)>(
        &::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x488e978;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetTriangles", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<int32_t, ::Array<int32_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<int32_t, ::Array<int32_t> *>, int32_t, bool)>(
        &::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x488ea18;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetTriangles", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<int32_t, ::Array<int32_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<int32_t, ::Array<int32_t> *>, int32_t, bool, int32_t)>(
        &::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x488e9c0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetTriangles", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<int32_t, ::Array<int32_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<int32_t, ::Array<int32_t> *>, int32_t, int32_t, int32_t, bool,
        int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x488ea6c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetTriangles", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<int32_t, ::Array<int32_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<uint16_t, ::Array<uint16_t> *>, int32_t, bool, int32_t)>(
        &::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x488eaf8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetTriangles", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<uint16_t, ::Array<uint16_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<uint16_t, ::Array<uint16_t> *>, int32_t, int32_t, int32_t,
        bool, int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x488eb50;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetTriangles", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<uint16_t, ::Array<uint16_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<int32_t> *, int32_t)>(
        &::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x488ebdc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetTriangles", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<int32_t> *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<int32_t> *, int32_t, bool)>(
        &::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x488ec70;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetTriangles", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<int32_t> *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<int32_t> *, int32_t, bool,
        int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x488ebe8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetTriangles", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<int32_t> *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<int32_t> *, int32_t, int32_t,
        int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x488ec7c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetTriangles", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<int32_t> *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<uint16_t> *, int32_t, bool,
        int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x488ed4c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetTriangles", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<uint16_t> *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<uint16_t> *, int32_t, int32_t,
        int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x488edd4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetTriangles", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<uint16_t> *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<int32_t, ::Array<int32_t> *>, ::UnityEngine::MeshTopology,
        int32_t)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x488eea4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetIndices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<int32_t, ::Array<int32_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<int32_t, ::Array<int32_t> *>, ::UnityEngine::MeshTopology,
        int32_t, bool)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x488ef7c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetIndices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<int32_t, ::Array<int32_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<int32_t, ::Array<int32_t> *>, ::UnityEngine::MeshTopology,
        int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x488ef08;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetIndices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<int32_t, ::Array<int32_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<int32_t, ::Array<int32_t> *>, int32_t, int32_t,
        ::UnityEngine::MeshTopology, int32_t, bool, int32_t)>(
        &::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x488efe4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetIndices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<int32_t, ::Array<int32_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<uint16_t, ::Array<uint16_t> *>, ::UnityEngine::MeshTopology,
        int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x488f0b8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetIndices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<uint16_t, ::Array<uint16_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<uint16_t, ::Array<uint16_t> *>, int32_t, int32_t,
        ::UnityEngine::MeshTopology, int32_t, bool, int32_t)>(
        &::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x488f12c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetIndices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<uint16_t, ::Array<uint16_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<int32_t> *,
        ::UnityEngine::MeshTopology, int32_t, bool, int32_t)>(
        &::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x488f200;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetIndices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<int32_t> *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<int32_t> *, int32_t, int32_t,
        ::UnityEngine::MeshTopology, int32_t, bool, int32_t)>(
        &::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x488f2a4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetIndices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<int32_t> *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<uint16_t> *,
        ::UnityEngine::MeshTopology, int32_t, bool, int32_t)>(
        &::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x488f3b4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetIndices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<uint16_t> *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<uint16_t> *, int32_t, int32_t,
        ::UnityEngine::MeshTopology, int32_t, bool, int32_t)>(
        &::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x488f458;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetIndices", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<uint16_t> *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetSubMeshes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor,
                 ::Array<::UnityEngine::Rendering::SubMeshDescriptor> *>,
        int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetSubMeshes)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x488f568;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetSubMeshes", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
                ::UnityEngine::Rendering::SubMeshDescriptor,
                ::Array<::UnityEngine::Rendering::SubMeshDescriptor> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetSubMeshes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor,
                 ::Array<::UnityEngine::Rendering::SubMeshDescriptor> *>,
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetSubMeshes)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x488f834;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetSubMeshes", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
                ::UnityEngine::Rendering::SubMeshDescriptor,
                ::Array<::UnityEngine::Rendering::SubMeshDescriptor> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetSubMeshes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<
            ::UnityEngine::Rendering::SubMeshDescriptor> *,
        int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetSubMeshes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x488f860;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetSubMeshes", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<
                    ::UnityEngine::Rendering::SubMeshDescriptor> *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetSubMeshes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<
            ::UnityEngine::Rendering::SubMeshDescriptor> *,
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetSubMeshes)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x488f8e0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetSubMeshes", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<
                    ::UnityEngine::Rendering::SubMeshDescriptor> *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBindposes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4> *)>(
        &::UnityEngine::Mesh::GetBindposes)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x488f970;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBindposes", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBoneWeights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::BoneWeight> *)>(
        &::UnityEngine::Mesh::GetBoneWeights)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x488faa0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBoneWeights", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<
                    ::UnityEngine::BoneWeight> *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_boneWeights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::BoneWeight,
                         ::Array<::UnityEngine::BoneWeight> *> (
        ::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_boneWeights)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488fbfc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_boneWeights", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_boneWeights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::BoneWeight,
                 ::Array<::UnityEngine::BoneWeight> *>)>(
        &::UnityEngine::Mesh::set_boneWeights)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488fc38;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_boneWeights", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::BoneWeight,
                         ::Array<::UnityEngine::BoneWeight> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.get_skinWeightBufferLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::SkinWeights (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::get_skinWeightBufferLayout)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488fc7c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_skinWeightBufferLayout", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(bool)>(
        &::UnityEngine::Mesh::Clear)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488fcb8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "Clear", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::Clear)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x488fcfc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "Clear", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::RecalculateBounds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488fd3c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "RecalculateBounds", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::RecalculateNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488fe3c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "RecalculateNormals", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateTangents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::RecalculateTangents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488ff3c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "RecalculateTangents", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::RecalculateBounds)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x488fd44;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "RecalculateBounds", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::RecalculateNormals)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x488fe44;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "RecalculateNormals", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateTangents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::RecalculateTangents)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x488ff44;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "RecalculateTangents", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.RecalculateUVDistributionMetric
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(int32_t, float_t)>(
        &::UnityEngine::Mesh::RecalculateUVDistributionMetric)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x489003c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "RecalculateUVDistributionMetric",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.RecalculateUVDistributionMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(float_t)>(
        &::UnityEngine::Mesh::RecalculateUVDistributionMetrics)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x4890148;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "RecalculateUVDistributionMetrics",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.MarkDynamic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::MarkDynamic)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x489024c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "MarkDynamic", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.UploadMeshData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(bool)>(
        &::UnityEngine::Mesh::UploadMeshData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x48902c0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "UploadMeshData", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.Optimize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::Optimize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x489033c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "Optimize", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.OptimizeIndexBuffers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::OptimizeIndexBuffers)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x489042c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "OptimizeIndexBuffers", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.OptimizeReorderVertexBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)()>(
        &::UnityEngine::Mesh::OptimizeReorderVertexBuffer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x489051c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "OptimizeReorderVertexBuffer", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTopology
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::MeshTopology (::UnityEngine::Mesh::*)(int32_t)>(
        &::UnityEngine::Mesh::GetTopology)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x489060c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetTopology", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CombineMeshes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::CombineInstance,
                 ::Array<::UnityEngine::CombineInstance> *>,
        bool, bool, bool)>(&::UnityEngine::Mesh::CombineMeshes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x48906f0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "CombineMeshes", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::CombineInstance,
                         ::Array<::UnityEngine::CombineInstance> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CombineMeshes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::CombineInstance,
                 ::Array<::UnityEngine::CombineInstance> *>,
        bool, bool)>(&::UnityEngine::Mesh::CombineMeshes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x489075c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "CombineMeshes", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::CombineInstance,
                         ::Array<::UnityEngine::CombineInstance> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CombineMeshes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::CombineInstance,
                 ::Array<::UnityEngine::CombineInstance> *>,
        bool)>(&::UnityEngine::Mesh::CombineMeshes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x48907bc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "CombineMeshes", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::CombineInstance,
                         ::Array<::UnityEngine::CombineInstance> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CombineMeshes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        ::ArrayW<::UnityEngine::CombineInstance,
                 ::Array<::UnityEngine::CombineInstance> *>)>(
        &::UnityEngine::Mesh::CombineMeshes)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4890818;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "CombineMeshes", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::CombineInstance,
                         ::Array<::UnityEngine::CombineInstance> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.GetVertexAttribute_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t, ::ByRef<::UnityEngine::Rendering::VertexAttributeDescriptor>)>(
        &::UnityEngine::Mesh::GetVertexAttribute_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4887cb8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetVertexAttribute_Injected", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Rendering::VertexAttributeDescriptor>>::
                get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Mesh.GetBlendShapeOffsetInternal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t, ::ByRef<::UnityEngine::BlendShape>)>(
        &::UnityEngine::Mesh::GetBlendShapeOffsetInternal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4888af8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetBlendShapeOffsetInternal_Injected",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::BlendShape>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetSubMesh_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t, ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor>,
        ::UnityEngine::Rendering::MeshUpdateFlags)>(
        &::UnityEngine::Mesh::SetSubMesh_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x48893a8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "SetSubMesh_Injected", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetSubMesh_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(
        int32_t, ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor>)>(
        &::UnityEngine::Mesh::GetSubMesh_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4889480;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "GetSubMesh_Injected", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<
                ::UnityEngine::Rendering::SubMeshDescriptor>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_bounds_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(::ByRef<::UnityEngine::Bounds>)>(
        &::UnityEngine::Mesh::get_bounds_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4889614;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "get_bounds_Injected", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Bounds>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_bounds_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Mesh::*)(::ByRef<::UnityEngine::Bounds>)>(
        &::UnityEngine::Mesh::set_bounds_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488969c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Mesh *>::get(),
        "set_bounds_Injected", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Bounds>>::get()})));
    return ___internal_method;
  }
};
inline void UnityEngine::Mesh::Internal_Create(::UnityEngine::Mesh *mono) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "Internal_Create", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Mesh *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, mono);
}
inline void UnityEngine::Mesh::_ctor() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      ".ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh>
UnityEngine::Mesh::FromInstanceID(int32_t id) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "FromInstanceID", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>,
                                             false>(nullptr, ___internal_method,
                                                    id);
}
inline ::UnityEngine::Rendering::IndexFormat
UnityEngine::Mesh::get_indexFormat() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_indexFormat", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::Rendering::IndexFormat, false>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_indexFormat(
    ::UnityEngine::Rendering::IndexFormat value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_indexFormat", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::IndexFormat>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline uint32_t UnityEngine::Mesh::GetTotalIndexCount() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetTotalIndexCount", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(
      this, ___internal_method);
}
inline void UnityEngine::Mesh::SetIndexBufferParams(
    int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetIndexBufferParams", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::IndexFormat>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, indexCount, format);
}
inline void UnityEngine::Mesh::InternalSetIndexBufferData(
    ::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart,
    int32_t count, int32_t elemSize,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "InternalSetIndexBufferData", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, data, dataStart, meshBufferStart, count,
      elemSize, flags);
}
inline void UnityEngine::Mesh::InternalSetIndexBufferDataFromArray(
    ::System::Array *data, int32_t dataStart, int32_t meshBufferStart,
    int32_t count, int32_t elemSize,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "InternalSetIndexBufferDataFromArray",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Array *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, data, dataStart, meshBufferStart, count,
      elemSize, flags);
}
inline void
UnityEngine::Mesh::SetVertexBufferParamsFromPtr(int32_t vertexCount,
                                                ::System::IntPtr attributesPtr,
                                                int32_t attributesCount) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetVertexBufferParamsFromPtr", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, vertexCount, attributesPtr, attributesCount);
}
inline void UnityEngine::Mesh::SetVertexBufferParamsFromArray(
    int32_t vertexCount,
    ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,
             ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor> *>
        attributes) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetVertexBufferParamsFromArray",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
              ::UnityEngine::Rendering::VertexAttributeDescriptor,
              ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor> *>>::
              get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, vertexCount, attributes);
}
inline void UnityEngine::Mesh::InternalSetVertexBufferData(
    int32_t stream, ::System::IntPtr data, int32_t dataStart,
    int32_t meshBufferStart, int32_t count, int32_t elemSize,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "InternalSetVertexBufferData", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stream, data, dataStart, meshBufferStart, count,
      elemSize, flags);
}
inline void UnityEngine::Mesh::InternalSetVertexBufferDataFromArray(
    int32_t stream, ::System::Array *data, int32_t dataStart,
    int32_t meshBufferStart, int32_t count, int32_t elemSize,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "InternalSetVertexBufferDataFromArray",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Array *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stream, data, dataStart, meshBufferStart, count,
      elemSize, flags);
}
inline ::System::Array *UnityEngine::Mesh::GetVertexAttributesAlloc() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetVertexAttributesAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Array *, false>(
      this, ___internal_method);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributesArray(
    ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,
             ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor> *>
        attributes) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetVertexAttributesArray", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
              ::UnityEngine::Rendering::VertexAttributeDescriptor,
              ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor> *>>::
              get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, attributes);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributesList(
    ::System::Collections::Generic::List_1<
        ::UnityEngine::Rendering::VertexAttributeDescriptor> *attributes) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetVertexAttributesList", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<
                  ::UnityEngine::Rendering::VertexAttributeDescriptor>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, attributes);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributeCountImpl() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetVertexAttributeCountImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method);
}
inline ::UnityEngine::Rendering::VertexAttributeDescriptor
UnityEngine::Mesh::GetVertexAttribute(int32_t index) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetVertexAttribute", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::Rendering::VertexAttributeDescriptor, false>(
      this, ___internal_method, index);
}
inline uint32_t UnityEngine::Mesh::GetIndexStartImpl(int32_t submesh) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetIndexStartImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(
      this, ___internal_method, submesh);
}
inline uint32_t UnityEngine::Mesh::GetIndexCountImpl(int32_t submesh) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetIndexCountImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(
      this, ___internal_method, submesh);
}
inline uint32_t UnityEngine::Mesh::GetTrianglesCountImpl(int32_t submesh) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetTrianglesCountImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(
      this, ___internal_method, submesh);
}
inline uint32_t UnityEngine::Mesh::GetBaseVertexImpl(int32_t submesh) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBaseVertexImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(
      this, ___internal_method, submesh);
}
inline ::ArrayW<int32_t, ::Array<int32_t> *>
UnityEngine::Mesh::GetTrianglesImpl(int32_t submesh, bool applyBaseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetTrianglesImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<int32_t, ::Array<int32_t> *>, false>(this, ___internal_method,
                                                    submesh, applyBaseVertex);
}
inline ::ArrayW<int32_t, ::Array<int32_t> *>
UnityEngine::Mesh::GetIndicesImpl(int32_t submesh, bool applyBaseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetIndicesImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<int32_t, ::Array<int32_t> *>, false>(this, ___internal_method,
                                                    submesh, applyBaseVertex);
}
inline void UnityEngine::Mesh::SetIndicesImpl(
    int32_t submesh, ::UnityEngine::MeshTopology topology,
    ::UnityEngine::Rendering::IndexFormat indicesFormat,
    ::System::Array *indices, int32_t arrayStart, int32_t arraySize,
    bool calculateBounds, int32_t baseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetIndicesImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::MeshTopology>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::IndexFormat>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Array *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, submesh, topology, indicesFormat, indices,
      arrayStart, arraySize, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndicesNativeArrayImpl(
    int32_t submesh, ::UnityEngine::MeshTopology topology,
    ::UnityEngine::Rendering::IndexFormat indicesFormat,
    ::System::IntPtr indices, int32_t arrayStart, int32_t arraySize,
    bool calculateBounds, int32_t baseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetIndicesNativeArrayImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::MeshTopology>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::IndexFormat>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, submesh, topology, indicesFormat, indices,
      arrayStart, arraySize, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::GetTrianglesNonAllocImpl(
    ::ByRef<::ArrayW<int32_t, ::Array<int32_t> *>> values, int32_t submesh,
    bool applyBaseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetTrianglesNonAllocImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::ArrayW<int32_t, ::Array<int32_t> *>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, values, submesh, applyBaseVertex);
}
inline void UnityEngine::Mesh::GetTrianglesNonAllocImpl16(
    ::ByRef<::ArrayW<uint16_t, ::Array<uint16_t> *>> values, int32_t submesh,
    bool applyBaseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetTrianglesNonAllocImpl16", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::ArrayW<uint16_t, ::Array<uint16_t> *>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, values, submesh, applyBaseVertex);
}
inline void UnityEngine::Mesh::GetIndicesNonAllocImpl(
    ::ByRef<::ArrayW<int32_t, ::Array<int32_t> *>> values, int32_t submesh,
    bool applyBaseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetIndicesNonAllocImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::ArrayW<int32_t, ::Array<int32_t> *>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, values, submesh, applyBaseVertex);
}
inline void UnityEngine::Mesh::GetIndicesNonAllocImpl16(
    ::ByRef<::ArrayW<uint16_t, ::Array<uint16_t> *>> values, int32_t submesh,
    bool applyBaseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetIndicesNonAllocImpl16", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::ArrayW<uint16_t, ::Array<uint16_t> *>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, values, submesh, applyBaseVertex);
}
inline void UnityEngine::Mesh::PrintErrorCantAccessChannel(
    ::UnityEngine::Rendering::VertexAttribute ch) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "PrintErrorCantAccessChannel", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::VertexAttribute>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, ch);
}
inline bool UnityEngine::Mesh::HasVertexAttribute(
    ::UnityEngine::Rendering::VertexAttribute attr) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "HasVertexAttribute", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::VertexAttribute>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, attr);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributeDimension(
    ::UnityEngine::Rendering::VertexAttribute attr) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetVertexAttributeDimension", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::VertexAttribute>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, attr);
}
inline ::UnityEngine::Rendering::VertexAttributeFormat
UnityEngine::Mesh::GetVertexAttributeFormat(
    ::UnityEngine::Rendering::VertexAttribute attr) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetVertexAttributeFormat", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::VertexAttribute>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::Rendering::VertexAttributeFormat, false>(
      this, ___internal_method, attr);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributeStream(
    ::UnityEngine::Rendering::VertexAttribute attr) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetVertexAttributeStream", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::VertexAttribute>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, attr);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributeOffset(
    ::UnityEngine::Rendering::VertexAttribute attr) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetVertexAttributeOffset", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::VertexAttribute>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, attr);
}
inline void UnityEngine::Mesh::SetArrayForChannelImpl(
    ::UnityEngine::Rendering::VertexAttribute channel,
    ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim,
    ::System::Array *values, int32_t arraySize, int32_t valuesStart,
    int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetArrayForChannelImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::VertexAttribute>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::VertexAttributeFormat>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Array *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, format, dim, values, arraySize,
      valuesStart, valuesCount, flags);
}
inline void UnityEngine::Mesh::SetNativeArrayForChannelImpl(
    ::UnityEngine::Rendering::VertexAttribute channel,
    ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim,
    ::System::IntPtr values, int32_t arraySize, int32_t valuesStart,
    int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetNativeArrayForChannelImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::VertexAttribute>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::VertexAttributeFormat>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, format, dim, values, arraySize,
      valuesStart, valuesCount, flags);
}
inline ::System::Array *UnityEngine::Mesh::GetAllocArrayFromChannelImpl(
    ::UnityEngine::Rendering::VertexAttribute channel,
    ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetAllocArrayFromChannelImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::VertexAttribute>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::VertexAttributeFormat>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Array *, false>(
      this, ___internal_method, channel, format, dim);
}
inline void UnityEngine::Mesh::GetArrayFromChannelImpl(
    ::UnityEngine::Rendering::VertexAttribute channel,
    ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim,
    ::System::Array *values) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetArrayFromChannelImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::VertexAttribute>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::VertexAttributeFormat>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Array *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, format, dim, values);
}
inline int32_t UnityEngine::Mesh::get_vertexBufferCount() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_vertexBufferCount", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method);
}
inline int32_t UnityEngine::Mesh::GetVertexBufferStride(int32_t stream) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetVertexBufferStride", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, stream);
}
inline ::System::IntPtr
UnityEngine::Mesh::GetNativeVertexBufferPtr(int32_t index) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetNativeVertexBufferPtr", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(
      this, ___internal_method, index);
}
inline ::System::IntPtr UnityEngine::Mesh::GetNativeIndexBufferPtr() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetNativeIndexBufferPtr", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(
      this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer *
UnityEngine::Mesh::GetVertexBufferImpl(int32_t index) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetVertexBufferImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer *,
                                             false>(this, ___internal_method,
                                                    index);
}
inline ::UnityEngine::GraphicsBuffer *UnityEngine::Mesh::GetIndexBufferImpl() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetIndexBufferImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer *,
                                             false>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer *
UnityEngine::Mesh::GetBoneWeightBufferImpl(int32_t bonesPerVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBoneWeightBufferImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer *,
                                             false>(this, ___internal_method,
                                                    bonesPerVertex);
}
inline ::UnityEngine::GraphicsBuffer *
UnityEngine::Mesh::GetBlendShapeBufferImpl(int32_t layout) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBlendShapeBufferImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer *,
                                             false>(this, ___internal_method,
                                                    layout);
}
inline ::UnityEngine::GraphicsBuffer_Target
UnityEngine::Mesh::get_vertexBufferTarget() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_vertexBufferTarget", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::GraphicsBuffer_Target, false>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_vertexBufferTarget(
    ::UnityEngine::GraphicsBuffer_Target value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_vertexBufferTarget", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::GraphicsBuffer_Target>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline ::UnityEngine::GraphicsBuffer_Target
UnityEngine::Mesh::get_indexBufferTarget() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_indexBufferTarget", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::GraphicsBuffer_Target, false>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_indexBufferTarget(
    ::UnityEngine::GraphicsBuffer_Target value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_indexBufferTarget", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::GraphicsBuffer_Target>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline int32_t UnityEngine::Mesh::get_blendShapeCount() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_blendShapeCount", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method);
}
inline void UnityEngine::Mesh::ClearBlendShapes() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "ClearBlendShapes", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline ::StringW UnityEngine::Mesh::GetBlendShapeName(int32_t shapeIndex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBlendShapeName", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, shapeIndex);
}
inline int32_t UnityEngine::Mesh::GetBlendShapeIndex(::StringW blendShapeName) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBlendShapeIndex", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, blendShapeName);
}
inline int32_t UnityEngine::Mesh::GetBlendShapeFrameCount(int32_t shapeIndex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBlendShapeFrameCount", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, shapeIndex);
}
inline float_t UnityEngine::Mesh::GetBlendShapeFrameWeight(int32_t shapeIndex,
                                                           int32_t frameIndex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBlendShapeFrameWeight", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(
      this, ___internal_method, shapeIndex, frameIndex);
}
inline void UnityEngine::Mesh::GetBlendShapeFrameVertices(
    int32_t shapeIndex, int32_t frameIndex,
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>
        deltaVertices,
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>
        deltaNormals,
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>
        deltaTangents) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBlendShapeFrameVertices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector3,
                       ::Array<::UnityEngine::Vector3> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector3,
                       ::Array<::UnityEngine::Vector3> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector3,
                       ::Array<::UnityEngine::Vector3> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, shapeIndex, frameIndex, deltaVertices,
      deltaNormals, deltaTangents);
}
inline void UnityEngine::Mesh::AddBlendShapeFrame(
    ::StringW shapeName, float_t frameWeight,
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>
        deltaVertices,
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>
        deltaNormals,
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>
        deltaTangents) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "AddBlendShapeFrame", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector3,
                       ::Array<::UnityEngine::Vector3> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector3,
                       ::Array<::UnityEngine::Vector3> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector3,
                       ::Array<::UnityEngine::Vector3> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, shapeName, frameWeight, deltaVertices,
      deltaNormals, deltaTangents);
}
inline ::UnityEngine::BlendShape
UnityEngine::Mesh::GetBlendShapeOffsetInternal(int32_t index) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBlendShapeOffsetInternal", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::BlendShape, false>(
      this, ___internal_method, index);
}
inline bool UnityEngine::Mesh::HasBoneWeights() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "HasBoneWeights", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this,
                                                          ___internal_method);
}
inline ::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight> *>
UnityEngine::Mesh::GetBoneWeightsImpl() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBoneWeightsImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight> *>,
      false>(this, ___internal_method);
}
inline void UnityEngine::Mesh::SetBoneWeightsImpl(
    ::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight> *>
        weights) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetBoneWeightsImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::BoneWeight,
                       ::Array<::UnityEngine::BoneWeight> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, weights);
}
inline void UnityEngine::Mesh::SetBoneWeights(
    ::Unity::Collections::NativeArray_1<uint8_t> bonesPerVertex,
    ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1> weights) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetBoneWeights", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Unity::Collections::NativeArray_1<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>>::
              get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, bonesPerVertex, weights);
}
inline void UnityEngine::Mesh::InternalSetBoneWeights(
    ::System::IntPtr bonesPerVertex, int32_t bonesPerVertexSize,
    ::System::IntPtr weights, int32_t weightsSize) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "InternalSetBoneWeights", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, bonesPerVertex, bonesPerVertexSize, weights,
      weightsSize);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>
UnityEngine::Mesh::GetAllBoneWeights() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetAllBoneWeights", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>, false>(
      this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<uint8_t>
UnityEngine::Mesh::GetBonesPerVertex() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBonesPerVertex", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::Unity::Collections::NativeArray_1<uint8_t>, false>(this,
                                                           ___internal_method);
}
inline int32_t UnityEngine::Mesh::GetAllBoneWeightsArraySize() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetAllBoneWeightsArraySize", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method);
}
inline int32_t UnityEngine::Mesh::GetBoneWeightBufferLayoutInternal() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBoneWeightBufferLayoutInternal",
      std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Mesh::GetAllBoneWeightsArray() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetAllBoneWeightsArray", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(
      this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Mesh::GetBonesPerVertexArray() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBonesPerVertexArray", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(
      this, ___internal_method);
}
inline int32_t UnityEngine::Mesh::get_bindposeCount() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_bindposeCount", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4> *>
UnityEngine::Mesh::get_bindposes() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_bindposes", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4> *>,
      false>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_bindposes(
    ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4> *>
        value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_bindposes", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Matrix4x4,
                       ::Array<::UnityEngine::Matrix4x4> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>
UnityEngine::Mesh::GetBindposes() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBindposes", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>, false>(
      this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Mesh::GetBindposesArray() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBindposesArray", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(
      this, ___internal_method);
}
inline void UnityEngine::Mesh::GetBoneWeightsNonAllocImpl(
    ::ByRef<::ArrayW<::UnityEngine::BoneWeight,
                     ::Array<::UnityEngine::BoneWeight> *>>
        values) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBoneWeightsNonAllocImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ByRef<::ArrayW<::UnityEngine::BoneWeight,
                           ::Array<::UnityEngine::BoneWeight> *>>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, values);
}
inline void UnityEngine::Mesh::GetBindposesNonAllocImpl(
    ::ByRef<
        ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4> *>>
        values) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBindposesNonAllocImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ByRef<::ArrayW<::UnityEngine::Matrix4x4,
                           ::Array<::UnityEngine::Matrix4x4> *>>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, values);
}
inline bool UnityEngine::Mesh::get_isReadable() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_isReadable", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this,
                                                          ___internal_method);
}
inline bool UnityEngine::Mesh::get_canAccess() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_canAccess", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this,
                                                          ___internal_method);
}
inline int32_t UnityEngine::Mesh::get_vertexCount() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_vertexCount", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method);
}
inline int32_t UnityEngine::Mesh::get_subMeshCount() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_subMeshCount", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method);
}
inline void UnityEngine::Mesh::set_subMeshCount(int32_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_subMeshCount", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline void
UnityEngine::Mesh::SetSubMesh(int32_t index,
                              ::UnityEngine::Rendering::SubMeshDescriptor desc,
                              ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetSubMesh", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::SubMeshDescriptor>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, index, desc, flags);
}
inline ::UnityEngine::Rendering::SubMeshDescriptor
UnityEngine::Mesh::GetSubMesh(int32_t index) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetSubMesh", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::Rendering::SubMeshDescriptor, false>(
      this, ___internal_method, index);
}
inline void UnityEngine::Mesh::SetAllSubMeshesAtOnceFromArray(
    ::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor,
             ::Array<::UnityEngine::Rendering::SubMeshDescriptor> *>
        desc,
    int32_t start, int32_t count,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetAllSubMeshesAtOnceFromArray",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
              ::UnityEngine::Rendering::SubMeshDescriptor,
              ::Array<::UnityEngine::Rendering::SubMeshDescriptor> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, desc, start, count, flags);
}
inline void UnityEngine::Mesh::SetAllSubMeshesAtOnceFromNativeArray(
    ::System::IntPtr desc, int32_t start, int32_t count,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetAllSubMeshesAtOnceFromNativeArray",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, desc, start, count, flags);
}
inline ::UnityEngine::Bounds UnityEngine::Mesh::get_bounds() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_bounds", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(
      this, ___internal_method);
}
inline void UnityEngine::Mesh::set_bounds(::UnityEngine::Bounds value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_bounds", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Bounds>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline void UnityEngine::Mesh::ClearImpl(bool keepVertexLayout) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "ClearImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, keepVertexLayout);
}
inline void UnityEngine::Mesh::RecalculateBoundsImpl(
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "RecalculateBoundsImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, flags);
}
inline void UnityEngine::Mesh::RecalculateNormalsImpl(
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "RecalculateNormalsImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, flags);
}
inline void UnityEngine::Mesh::RecalculateTangentsImpl(
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "RecalculateTangentsImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, flags);
}
inline void UnityEngine::Mesh::MarkDynamicImpl() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "MarkDynamicImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void UnityEngine::Mesh::MarkModified() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "MarkModified", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void UnityEngine::Mesh::UploadMeshDataImpl(bool markNoLongerReadable) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "UploadMeshDataImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, markNoLongerReadable);
}
inline ::UnityEngine::MeshTopology
UnityEngine::Mesh::GetTopologyImpl(int32_t submesh) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetTopologyImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::MeshTopology,
                                             false>(this, ___internal_method,
                                                    submesh);
}
inline void UnityEngine::Mesh::RecalculateUVDistributionMetricImpl(
    int32_t uvSetIndex, float_t uvAreaThreshold) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "RecalculateUVDistributionMetricImpl",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, uvSetIndex, uvAreaThreshold);
}
inline void UnityEngine::Mesh::RecalculateUVDistributionMetricsImpl(
    float_t uvAreaThreshold) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "RecalculateUVDistributionMetricsImpl",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, uvAreaThreshold);
}
inline float_t UnityEngine::Mesh::GetUVDistributionMetric(int32_t uvSetIndex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetUVDistributionMetric", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(
      this, ___internal_method, uvSetIndex);
}
inline void UnityEngine::Mesh::CombineMeshesImpl(
    ::ArrayW<::UnityEngine::CombineInstance,
             ::Array<::UnityEngine::CombineInstance> *>
        combine,
    bool mergeSubMeshes, bool useMatrices, bool hasLightmapData) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "CombineMeshesImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::CombineInstance,
                       ::Array<::UnityEngine::CombineInstance> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, combine, mergeSubMeshes, useMatrices,
      hasLightmapData);
}
inline void UnityEngine::Mesh::OptimizeImpl() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "OptimizeImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void UnityEngine::Mesh::OptimizeIndexBuffersImpl() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "OptimizeIndexBuffersImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void UnityEngine::Mesh::OptimizeReorderVertexBufferImpl() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "OptimizeReorderVertexBufferImpl",
      std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline ::UnityEngine::Rendering::VertexAttribute
UnityEngine::Mesh::GetUVChannel(int32_t uvIndex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetUVChannel", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::Rendering::VertexAttribute, false>(
      nullptr, ___internal_method, uvIndex);
}
inline int32_t UnityEngine::Mesh::DefaultDimensionForChannel(
    ::UnityEngine::Rendering::VertexAttribute channel) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "DefaultDimensionForChannel", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::VertexAttribute>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, channel);
}
template <typename T>
inline ::ArrayW<T, ::Array<T> *> UnityEngine::Mesh::GetAllocArrayFromChannel(
    ::UnityEngine::Rendering::VertexAttribute channel,
    ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "GetAllocArrayFromChannel",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 3>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::VertexAttribute>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::VertexAttributeFormat>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T> *>, false>(
      this, ___internal_method, channel, format, dim);
}
template <typename T>
inline ::ArrayW<T, ::Array<T> *> UnityEngine::Mesh::GetAllocArrayFromChannel(
    ::UnityEngine::Rendering::VertexAttribute channel) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "GetAllocArrayFromChannel",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::VertexAttribute>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T> *>, false>(
      this, ___internal_method, channel);
}
inline void UnityEngine::Mesh::SetSizedArrayForChannel(
    ::UnityEngine::Rendering::VertexAttribute channel,
    ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim,
    ::System::Array *values, int32_t valuesArrayLength, int32_t valuesStart,
    int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetSizedArrayForChannel", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::VertexAttribute>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::VertexAttributeFormat>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Array *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, format, dim, values, valuesArrayLength,
      valuesStart, valuesCount, flags);
}
inline void UnityEngine::Mesh::SetSizedNativeArrayForChannel(
    ::UnityEngine::Rendering::VertexAttribute channel,
    ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim,
    ::System::IntPtr values, int32_t valuesArrayLength, int32_t valuesStart,
    int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetSizedNativeArrayForChannel", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::VertexAttribute>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::VertexAttributeFormat>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, format, dim, values, valuesArrayLength,
      valuesStart, valuesCount, flags);
}
template <typename T>
inline void UnityEngine::Mesh::SetArrayForChannel(
    ::UnityEngine::Rendering::VertexAttribute channel,
    ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim,
    ::ArrayW<T, ::Array<T> *> values,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetArrayForChannel",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 5>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::VertexAttribute>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::VertexAttributeFormat>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::ArrayW<T, ::Array<T> *>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, format, dim, values, flags);
}
template <typename T>
inline void UnityEngine::Mesh::SetArrayForChannel(
    ::UnityEngine::Rendering::VertexAttribute channel,
    ::ArrayW<T, ::Array<T> *> values,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetArrayForChannel",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 3>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::VertexAttribute>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::ArrayW<T, ::Array<T> *>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, values, flags);
}
template <typename T>
inline void UnityEngine::Mesh::SetListForChannel(
    ::UnityEngine::Rendering::VertexAttribute channel,
    ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim,
    ::System::Collections::Generic::List_1<T> *values, int32_t start,
    int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetListForChannel",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 7>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::VertexAttribute>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::VertexAttributeFormat>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::System::Collections::Generic::List_1<T> *>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, format, dim, values, start, length,
      flags);
}
template <typename T>
inline void UnityEngine::Mesh::SetListForChannel(
    ::UnityEngine::Rendering::VertexAttribute channel,
    ::System::Collections::Generic::List_1<T> *values, int32_t start,
    int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetListForChannel",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 5>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::VertexAttribute>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::System::Collections::Generic::List_1<T> *>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, values, start, length, flags);
}
template <typename T>
inline void UnityEngine::Mesh::GetListForChannel(
    ::System::Collections::Generic::List_1<T> *buffer, int32_t capacity,
    ::UnityEngine::Rendering::VertexAttribute channel, int32_t dim) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "GetListForChannel",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 4>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::System::Collections::Generic::List_1<T> *>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::VertexAttribute>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, buffer, capacity, channel, dim);
}
template <typename T>
inline void UnityEngine::Mesh::GetListForChannel(
    ::System::Collections::Generic::List_1<T> *buffer, int32_t capacity,
    ::UnityEngine::Rendering::VertexAttribute channel, int32_t dim,
    ::UnityEngine::Rendering::VertexAttributeFormat channelType) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "GetListForChannel",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 5>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::System::Collections::Generic::List_1<T> *>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::VertexAttribute>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::VertexAttributeFormat>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, buffer, capacity, channel, dim, channelType);
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>
UnityEngine::Mesh::get_vertices() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_vertices", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>,
      false>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_vertices(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_vertices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector3,
                       ::Array<::UnityEngine::Vector3> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>
UnityEngine::Mesh::get_normals() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_normals", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>,
      false>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_normals(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_normals", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector3,
                       ::Array<::UnityEngine::Vector3> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4> *>
UnityEngine::Mesh::get_tangents() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_tangents", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4> *>,
      false>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_tangents(
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4> *> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_tangents", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector4,
                       ::Array<::UnityEngine::Vector4> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>
UnityEngine::Mesh::get_uv() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_uv", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>,
      false>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_uv(
    ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_uv", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector2,
                       ::Array<::UnityEngine::Vector2> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>
UnityEngine::Mesh::get_uv2() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_uv2", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>,
      false>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_uv2(
    ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_uv2", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector2,
                       ::Array<::UnityEngine::Vector2> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>
UnityEngine::Mesh::get_uv3() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_uv3", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>,
      false>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_uv3(
    ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_uv3", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector2,
                       ::Array<::UnityEngine::Vector2> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>
UnityEngine::Mesh::get_uv4() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_uv4", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>,
      false>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_uv4(
    ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_uv4", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector2,
                       ::Array<::UnityEngine::Vector2> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>
UnityEngine::Mesh::get_uv5() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_uv5", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>,
      false>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_uv5(
    ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_uv5", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector2,
                       ::Array<::UnityEngine::Vector2> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>
UnityEngine::Mesh::get_uv6() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_uv6", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>,
      false>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_uv6(
    ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_uv6", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector2,
                       ::Array<::UnityEngine::Vector2> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>
UnityEngine::Mesh::get_uv7() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_uv7", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>,
      false>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_uv7(
    ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_uv7", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector2,
                       ::Array<::UnityEngine::Vector2> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>
UnityEngine::Mesh::get_uv8() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_uv8", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *>,
      false>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_uv8(
    ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_uv8", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector2,
                       ::Array<::UnityEngine::Vector2> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color> *>
UnityEngine::Mesh::get_colors() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_colors", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color> *>, false>(
      this, ___internal_method);
}
inline void UnityEngine::Mesh::set_colors(
    ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color> *> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_colors", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Color,
                       ::Array<::UnityEngine::Color> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32> *>
UnityEngine::Mesh::get_colors32() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_colors32", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32> *>,
      false>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_colors32(
    ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32> *> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_colors32", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Color32,
                       ::Array<::UnityEngine::Color32> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline void UnityEngine::Mesh::GetVertices(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *vertices) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetVertices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, vertices);
}
inline void UnityEngine::Mesh::SetVertices(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
        *inVertices) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetVertices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inVertices);
}
inline void UnityEngine::Mesh::SetVertices(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *inVertices,
    int32_t start, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetVertices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                  *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inVertices, start, length);
}
inline void UnityEngine::Mesh::SetVertices(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *inVertices,
    int32_t start, int32_t length,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetVertices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                  *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inVertices, start, length, flags);
}
inline void UnityEngine::Mesh::SetVertices(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>
        inVertices) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetVertices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector3,
                       ::Array<::UnityEngine::Vector3> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inVertices);
}
inline void UnityEngine::Mesh::SetVertices(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>
        inVertices,
    int32_t start, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetVertices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector3,
                       ::Array<::UnityEngine::Vector3> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inVertices, start, length);
}
inline void UnityEngine::Mesh::SetVertices(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>
        inVertices,
    int32_t start, int32_t length,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetVertices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector3,
                       ::Array<::UnityEngine::Vector3> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inVertices, start, length, flags);
}
template <typename T>
inline void UnityEngine::Mesh::SetVertices(
    ::Unity::Collections::NativeArray_1<T> inVertices) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetVertices",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inVertices);
}
template <typename T>
inline void UnityEngine::Mesh::SetVertices(
    ::Unity::Collections::NativeArray_1<T> inVertices, int32_t start,
    int32_t length) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetVertices",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 3>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inVertices, start, length);
}
template <typename T>
inline void UnityEngine::Mesh::SetVertices(
    ::Unity::Collections::NativeArray_1<T> inVertices, int32_t start,
    int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetVertices",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 4>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inVertices, start, length, flags);
}
inline void UnityEngine::Mesh::GetNormals(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *normals) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetNormals", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, normals);
}
inline void UnityEngine::Mesh::SetNormals(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *inNormals) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetNormals", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inNormals);
}
inline void UnityEngine::Mesh::SetNormals(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *inNormals,
    int32_t start, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetNormals", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                  *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inNormals, start, length);
}
inline void UnityEngine::Mesh::SetNormals(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *inNormals,
    int32_t start, int32_t length,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetNormals", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                  *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inNormals, start, length, flags);
}
inline void UnityEngine::Mesh::SetNormals(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>
        inNormals) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetNormals", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector3,
                       ::Array<::UnityEngine::Vector3> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inNormals);
}
inline void UnityEngine::Mesh::SetNormals(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>
        inNormals,
    int32_t start, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetNormals", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector3,
                       ::Array<::UnityEngine::Vector3> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inNormals, start, length);
}
inline void UnityEngine::Mesh::SetNormals(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *>
        inNormals,
    int32_t start, int32_t length,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetNormals", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector3,
                       ::Array<::UnityEngine::Vector3> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inNormals, start, length, flags);
}
template <typename T>
inline void UnityEngine::Mesh::SetNormals(
    ::Unity::Collections::NativeArray_1<T> inNormals) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetNormals",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inNormals);
}
template <typename T>
inline void
UnityEngine::Mesh::SetNormals(::Unity::Collections::NativeArray_1<T> inNormals,
                              int32_t start, int32_t length) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetNormals",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 3>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inNormals, start, length);
}
template <typename T>
inline void
UnityEngine::Mesh::SetNormals(::Unity::Collections::NativeArray_1<T> inNormals,
                              int32_t start, int32_t length,
                              ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetNormals",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 4>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inNormals, start, length, flags);
}
inline void UnityEngine::Mesh::GetTangents(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector4> *tangents) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetTangents", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector4>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, tangents);
}
inline void UnityEngine::Mesh::SetTangents(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector4>
        *inTangents) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetTangents", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector4>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inTangents);
}
inline void UnityEngine::Mesh::SetTangents(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector4> *inTangents,
    int32_t start, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetTangents", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector4>
                  *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inTangents, start, length);
}
inline void UnityEngine::Mesh::SetTangents(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector4> *inTangents,
    int32_t start, int32_t length,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetTangents", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector4>
                  *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inTangents, start, length, flags);
}
inline void UnityEngine::Mesh::SetTangents(
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4> *>
        inTangents) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetTangents", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector4,
                       ::Array<::UnityEngine::Vector4> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inTangents);
}
inline void UnityEngine::Mesh::SetTangents(
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4> *>
        inTangents,
    int32_t start, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetTangents", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector4,
                       ::Array<::UnityEngine::Vector4> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inTangents, start, length);
}
inline void UnityEngine::Mesh::SetTangents(
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4> *>
        inTangents,
    int32_t start, int32_t length,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetTangents", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector4,
                       ::Array<::UnityEngine::Vector4> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inTangents, start, length, flags);
}
template <typename T>
inline void UnityEngine::Mesh::SetTangents(
    ::Unity::Collections::NativeArray_1<T> inTangents) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetTangents",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inTangents);
}
template <typename T>
inline void UnityEngine::Mesh::SetTangents(
    ::Unity::Collections::NativeArray_1<T> inTangents, int32_t start,
    int32_t length) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetTangents",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 3>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inTangents, start, length);
}
template <typename T>
inline void UnityEngine::Mesh::SetTangents(
    ::Unity::Collections::NativeArray_1<T> inTangents, int32_t start,
    int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetTangents",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 4>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inTangents, start, length, flags);
}
inline void UnityEngine::Mesh::GetColors(
    ::System::Collections::Generic::List_1<::UnityEngine::Color> *colors) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetColors", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Color>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, colors);
}
inline void UnityEngine::Mesh::SetColors(
    ::System::Collections::Generic::List_1<::UnityEngine::Color> *inColors) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetColors", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Color>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inColors);
}
inline void UnityEngine::Mesh::SetColors(
    ::System::Collections::Generic::List_1<::UnityEngine::Color> *inColors,
    int32_t start, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetColors", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Color>
                  *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inColors, start, length);
}
inline void UnityEngine::Mesh::SetColors(
    ::System::Collections::Generic::List_1<::UnityEngine::Color> *inColors,
    int32_t start, int32_t length,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetColors", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Color>
                  *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inColors, start, length, flags);
}
inline void UnityEngine::Mesh::SetColors(
    ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color> *> inColors) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetColors", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Color,
                       ::Array<::UnityEngine::Color> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inColors);
}
inline void UnityEngine::Mesh::SetColors(
    ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color> *> inColors,
    int32_t start, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetColors", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
              ::UnityEngine::Color, ::Array<::UnityEngine::Color> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inColors, start, length);
}
inline void UnityEngine::Mesh::SetColors(
    ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color> *> inColors,
    int32_t start, int32_t length,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetColors", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
              ::UnityEngine::Color, ::Array<::UnityEngine::Color> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inColors, start, length, flags);
}
inline void UnityEngine::Mesh::GetColors(
    ::System::Collections::Generic::List_1<::UnityEngine::Color32> *colors) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetColors", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Color32>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, colors);
}
inline void UnityEngine::Mesh::SetColors(
    ::System::Collections::Generic::List_1<::UnityEngine::Color32> *inColors) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetColors", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Color32>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inColors);
}
inline void UnityEngine::Mesh::SetColors(
    ::System::Collections::Generic::List_1<::UnityEngine::Color32> *inColors,
    int32_t start, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetColors", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Color32>
                  *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inColors, start, length);
}
inline void UnityEngine::Mesh::SetColors(
    ::System::Collections::Generic::List_1<::UnityEngine::Color32> *inColors,
    int32_t start, int32_t length,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetColors", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Color32>
                  *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inColors, start, length, flags);
}
inline void UnityEngine::Mesh::SetColors(
    ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32> *>
        inColors) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetColors", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Color32,
                       ::Array<::UnityEngine::Color32> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inColors);
}
inline void UnityEngine::Mesh::SetColors(
    ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32> *>
        inColors,
    int32_t start, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetColors", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Color32,
                       ::Array<::UnityEngine::Color32> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inColors, start, length);
}
inline void UnityEngine::Mesh::SetColors(
    ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32> *>
        inColors,
    int32_t start, int32_t length,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetColors", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Color32,
                       ::Array<::UnityEngine::Color32> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inColors, start, length, flags);
}
template <typename T>
inline void
UnityEngine::Mesh::SetColors(::Unity::Collections::NativeArray_1<T> inColors) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetColors",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inColors);
}
template <typename T>
inline void
UnityEngine::Mesh::SetColors(::Unity::Collections::NativeArray_1<T> inColors,
                             int32_t start, int32_t length) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetColors",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 3>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inColors, start, length);
}
template <typename T>
inline void
UnityEngine::Mesh::SetColors(::Unity::Collections::NativeArray_1<T> inColors,
                             int32_t start, int32_t length,
                             ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetColors",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 4>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, inColors, start, length, flags);
}
template <typename T>
inline void
UnityEngine::Mesh::SetUvsImpl(int32_t uvIndex, int32_t dim,
                              ::System::Collections::Generic::List_1<T> *uvs,
                              int32_t start, int32_t length,
                              ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetUvsImpl",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 6>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::System::Collections::Generic::List_1<T> *>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, uvIndex, dim, uvs, start, length, flags);
}
inline void UnityEngine::Mesh::SetUVs(
    int32_t channel,
    ::System::Collections::Generic::List_1<::UnityEngine::Vector2> *uvs) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector2>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::SetUVs(
    int32_t channel,
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *uvs) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::SetUVs(
    int32_t channel,
    ::System::Collections::Generic::List_1<::UnityEngine::Vector4> *uvs) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector4>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::SetUVs(
    int32_t channel,
    ::System::Collections::Generic::List_1<::UnityEngine::Vector2> *uvs,
    int32_t start, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector2>
                  *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs, start, length);
}
inline void UnityEngine::Mesh::SetUVs(
    int32_t channel,
    ::System::Collections::Generic::List_1<::UnityEngine::Vector2> *uvs,
    int32_t start, int32_t length,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector2>
                  *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs, start, length, flags);
}
inline void UnityEngine::Mesh::SetUVs(
    int32_t channel,
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *uvs,
    int32_t start, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                  *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs, start, length);
}
inline void UnityEngine::Mesh::SetUVs(
    int32_t channel,
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *uvs,
    int32_t start, int32_t length,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                  *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs, start, length, flags);
}
inline void UnityEngine::Mesh::SetUVs(
    int32_t channel,
    ::System::Collections::Generic::List_1<::UnityEngine::Vector4> *uvs,
    int32_t start, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector4>
                  *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs, start, length);
}
inline void UnityEngine::Mesh::SetUVs(
    int32_t channel,
    ::System::Collections::Generic::List_1<::UnityEngine::Vector4> *uvs,
    int32_t start, int32_t length,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector4>
                  *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs, start, length, flags);
}
inline void UnityEngine::Mesh::SetUvsImpl(
    int32_t uvIndex, int32_t dim, ::System::Array *uvs, int32_t arrayStart,
    int32_t arraySize, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetUvsImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Array *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, uvIndex, dim, uvs, arrayStart, arraySize,
      flags);
}
inline void UnityEngine::Mesh::SetUVs(
    int32_t channel,
    ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *> uvs) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector2,
                       ::Array<::UnityEngine::Vector2> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::SetUVs(
    int32_t channel,
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *> uvs) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector3,
                       ::Array<::UnityEngine::Vector3> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::SetUVs(
    int32_t channel,
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4> *> uvs) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector4,
                       ::Array<::UnityEngine::Vector4> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::SetUVs(
    int32_t channel,
    ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *> uvs,
    int32_t start, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector2,
                       ::Array<::UnityEngine::Vector2> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs, start, length);
}
inline void UnityEngine::Mesh::SetUVs(
    int32_t channel,
    ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2> *> uvs,
    int32_t start, int32_t length,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector2,
                       ::Array<::UnityEngine::Vector2> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs, start, length, flags);
}
inline void UnityEngine::Mesh::SetUVs(
    int32_t channel,
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *> uvs,
    int32_t start, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector3,
                       ::Array<::UnityEngine::Vector3> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs, start, length);
}
inline void UnityEngine::Mesh::SetUVs(
    int32_t channel,
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3> *> uvs,
    int32_t start, int32_t length,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector3,
                       ::Array<::UnityEngine::Vector3> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs, start, length, flags);
}
inline void UnityEngine::Mesh::SetUVs(
    int32_t channel,
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4> *> uvs,
    int32_t start, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector4,
                       ::Array<::UnityEngine::Vector4> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs, start, length);
}
inline void UnityEngine::Mesh::SetUVs(
    int32_t channel,
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4> *> uvs,
    int32_t start, int32_t length,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Vector4,
                       ::Array<::UnityEngine::Vector4> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs, start, length, flags);
}
template <typename T>
inline void
UnityEngine::Mesh::SetUVs(int32_t channel,
                          ::Unity::Collections::NativeArray_1<T> uvs) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetUVs",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 2>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs);
}
template <typename T>
inline void
UnityEngine::Mesh::SetUVs(int32_t channel,
                          ::Unity::Collections::NativeArray_1<T> uvs,
                          int32_t start, int32_t length) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetUVs",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 4>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs, start, length);
}
template <typename T>
inline void UnityEngine::Mesh::SetUVs(
    int32_t channel, ::Unity::Collections::NativeArray_1<T> uvs, int32_t start,
    int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetUVs",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 5>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs, start, length, flags);
}
template <typename T>
inline void
UnityEngine::Mesh::GetUVsImpl(int32_t uvIndex,
                              ::System::Collections::Generic::List_1<T> *uvs,
                              int32_t dim) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "GetUVsImpl",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 3>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::System::Collections::Generic::List_1<T> *>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, uvIndex, uvs, dim);
}
inline void UnityEngine::Mesh::GetUVs(
    int32_t channel,
    ::System::Collections::Generic::List_1<::UnityEngine::Vector2> *uvs) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector2>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::GetUVs(
    int32_t channel,
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3> *uvs) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector3>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::GetUVs(
    int32_t channel,
    ::System::Collections::Generic::List_1<::UnityEngine::Vector4> *uvs) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetUVs", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Vector4>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, channel, uvs);
}
inline int32_t UnityEngine::Mesh::get_vertexAttributeCount() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_vertexAttributeCount", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,
                ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor> *>
UnityEngine::Mesh::GetVertexAttributes() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetVertexAttributes", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,
               ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor> *>,
      false>(this, ___internal_method);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributes(
    ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,
             ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor> *>
        attributes) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetVertexAttributes", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
              ::UnityEngine::Rendering::VertexAttributeDescriptor,
              ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor> *>>::
              get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, attributes);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributes(
    ::System::Collections::Generic::List_1<
        ::UnityEngine::Rendering::VertexAttributeDescriptor> *attributes) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetVertexAttributes", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<
                  ::UnityEngine::Rendering::VertexAttributeDescriptor>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, attributes);
}
inline void UnityEngine::Mesh::SetVertexBufferParams(
    int32_t vertexCount,
    ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,
             ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor> *>
        attributes) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetVertexBufferParams", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
              ::UnityEngine::Rendering::VertexAttributeDescriptor,
              ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor> *>>::
              get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, vertexCount, attributes);
}
inline void UnityEngine::Mesh::SetVertexBufferParams(
    int32_t vertexCount,
    ::Unity::Collections::NativeArray_1<
        ::UnityEngine::Rendering::VertexAttributeDescriptor>
        attributes) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetVertexBufferParams", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Unity::Collections::NativeArray_1<
                  ::UnityEngine::Rendering::VertexAttributeDescriptor>>::
              get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, vertexCount, attributes);
}
template <typename T>
inline void UnityEngine::Mesh::SetVertexBufferData(
    ::Unity::Collections::NativeArray_1<T> data, int32_t dataStart,
    int32_t meshBufferStart, int32_t count, int32_t stream,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetVertexBufferData",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 6>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, data, dataStart, meshBufferStart, count, stream,
      flags);
}
template <typename T>
inline void UnityEngine::Mesh::SetVertexBufferData(
    ::ArrayW<T, ::Array<T> *> data, int32_t dataStart, int32_t meshBufferStart,
    int32_t count, int32_t stream,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetVertexBufferData",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 6>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::ArrayW<T, ::Array<T> *>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, data, dataStart, meshBufferStart, count, stream,
      flags);
}
template <typename T>
inline void UnityEngine::Mesh::SetVertexBufferData(
    ::System::Collections::Generic::List_1<T> *data, int32_t dataStart,
    int32_t meshBufferStart, int32_t count, int32_t stream,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetVertexBufferData",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 6>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::System::Collections::Generic::List_1<T> *>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, data, dataStart, meshBufferStart, count, stream,
      flags);
}
inline ::UnityEngine::Mesh_MeshDataArray
UnityEngine::Mesh::AcquireReadOnlyMeshData(::UnityEngine::Mesh *mesh) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "AcquireReadOnlyMeshData", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Mesh *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_MeshDataArray,
                                             false>(nullptr, ___internal_method,
                                                    mesh);
}
inline ::UnityEngine::Mesh_MeshDataArray
UnityEngine::Mesh::AcquireReadOnlyMeshData(
    ::ArrayW<::UnityEngine::Mesh *, ::Array<::UnityEngine::Mesh *> *> meshes) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "AcquireReadOnlyMeshData", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Mesh *,
                       ::Array<::UnityEngine::Mesh *> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_MeshDataArray,
                                             false>(nullptr, ___internal_method,
                                                    meshes);
}
inline ::UnityEngine::Mesh_MeshDataArray
UnityEngine::Mesh::AcquireReadOnlyMeshData(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>
        *meshes) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "AcquireReadOnlyMeshData", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<
                  ::UnityW<::UnityEngine::Mesh>> *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_MeshDataArray,
                                             false>(nullptr, ___internal_method,
                                                    meshes);
}
inline ::UnityEngine::Mesh_MeshDataArray
UnityEngine::Mesh::AllocateWritableMeshData(int32_t meshCount) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "AllocateWritableMeshData", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_MeshDataArray,
                                             false>(nullptr, ___internal_method,
                                                    meshCount);
}
inline void UnityEngine::Mesh::ApplyAndDisposeWritableMeshData(
    ::UnityEngine::Mesh_MeshDataArray data, ::UnityEngine::Mesh *mesh,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "ApplyAndDisposeWritableMeshData",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Mesh_MeshDataArray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Mesh *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, data, mesh, flags);
}
inline void UnityEngine::Mesh::ApplyAndDisposeWritableMeshData(
    ::UnityEngine::Mesh_MeshDataArray data,
    ::ArrayW<::UnityEngine::Mesh *, ::Array<::UnityEngine::Mesh *> *> meshes,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "ApplyAndDisposeWritableMeshData",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Mesh_MeshDataArray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
              ::UnityEngine::Mesh *, ::Array<::UnityEngine::Mesh *> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, data, meshes, flags);
}
inline void UnityEngine::Mesh::ApplyAndDisposeWritableMeshData(
    ::UnityEngine::Mesh_MeshDataArray data,
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>
        *meshes,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "ApplyAndDisposeWritableMeshData",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Mesh_MeshDataArray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<
                  ::UnityW<::UnityEngine::Mesh>> *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, data, meshes, flags);
}
inline ::UnityEngine::GraphicsBuffer *
UnityEngine::Mesh::GetVertexBuffer(int32_t index) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetVertexBuffer", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer *,
                                             false>(this, ___internal_method,
                                                    index);
}
inline ::UnityEngine::GraphicsBuffer *UnityEngine::Mesh::GetIndexBuffer() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetIndexBuffer", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer *,
                                             false>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer *
UnityEngine::Mesh::GetBoneWeightBuffer(::UnityEngine::SkinWeights layout) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBoneWeightBuffer", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::SkinWeights>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer *,
                                             false>(this, ___internal_method,
                                                    layout);
}
inline ::UnityEngine::GraphicsBuffer *UnityEngine::Mesh::GetBlendShapeBuffer(
    ::UnityEngine::Rendering::BlendShapeBufferLayout layout) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBlendShapeBuffer", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::BlendShapeBufferLayout>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer *,
                                             false>(this, ___internal_method,
                                                    layout);
}
inline ::UnityEngine::GraphicsBuffer *UnityEngine::Mesh::GetBlendShapeBuffer() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBlendShapeBuffer", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer *,
                                             false>(this, ___internal_method);
}
inline ::UnityEngine::BlendShapeBufferRange
UnityEngine::Mesh::GetBlendShapeBufferRange(int32_t blendShapeIndex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBlendShapeBufferRange", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::BlendShapeBufferRange, false>(this, ___internal_method,
                                                   blendShapeIndex);
}
inline void UnityEngine::Mesh::PrintErrorCantAccessIndices() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "PrintErrorCantAccessIndices", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline bool UnityEngine::Mesh::CheckCanAccessSubmesh(int32_t submesh,
                                                     bool errorAboutTriangles) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "CheckCanAccessSubmesh", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, submesh, errorAboutTriangles);
}
inline bool UnityEngine::Mesh::CheckCanAccessSubmeshTriangles(int32_t submesh) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "CheckCanAccessSubmeshTriangles",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, submesh);
}
inline bool UnityEngine::Mesh::CheckCanAccessSubmeshIndices(int32_t submesh) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "CheckCanAccessSubmeshIndices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, submesh);
}
inline ::ArrayW<int32_t, ::Array<int32_t> *>
UnityEngine::Mesh::get_triangles() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_triangles", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<int32_t, ::Array<int32_t> *>, false>(this, ___internal_method);
}
inline void
UnityEngine::Mesh::set_triangles(::ArrayW<int32_t, ::Array<int32_t> *> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_triangles", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<int32_t, ::Array<int32_t> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline ::ArrayW<int32_t, ::Array<int32_t> *>
UnityEngine::Mesh::GetTriangles(int32_t submesh) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetTriangles", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<int32_t, ::Array<int32_t> *>, false>(this, ___internal_method,
                                                    submesh);
}
inline ::ArrayW<int32_t, ::Array<int32_t> *>
UnityEngine::Mesh::GetTriangles(int32_t submesh, bool applyBaseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetTriangles", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<int32_t, ::Array<int32_t> *>, false>(this, ___internal_method,
                                                    submesh, applyBaseVertex);
}
inline void UnityEngine::Mesh::GetTriangles(
    ::System::Collections::Generic::List_1<int32_t> *triangles,
    int32_t submesh) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetTriangles", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<int32_t> *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, triangles, submesh);
}
inline void UnityEngine::Mesh::GetTriangles(
    ::System::Collections::Generic::List_1<int32_t> *triangles, int32_t submesh,
    bool applyBaseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetTriangles", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<int32_t> *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, triangles, submesh, applyBaseVertex);
}
inline void UnityEngine::Mesh::GetTriangles(
    ::System::Collections::Generic::List_1<uint16_t> *triangles,
    int32_t submesh, bool applyBaseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetTriangles", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<uint16_t> *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, triangles, submesh, applyBaseVertex);
}
inline ::ArrayW<int32_t, ::Array<int32_t> *>
UnityEngine::Mesh::GetIndices(int32_t submesh) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetIndices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<int32_t, ::Array<int32_t> *>, false>(this, ___internal_method,
                                                    submesh);
}
inline ::ArrayW<int32_t, ::Array<int32_t> *>
UnityEngine::Mesh::GetIndices(int32_t submesh, bool applyBaseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetIndices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<int32_t, ::Array<int32_t> *>, false>(this, ___internal_method,
                                                    submesh, applyBaseVertex);
}
inline void UnityEngine::Mesh::GetIndices(
    ::System::Collections::Generic::List_1<int32_t> *indices, int32_t submesh) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetIndices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<int32_t> *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, indices, submesh);
}
inline void UnityEngine::Mesh::GetIndices(
    ::System::Collections::Generic::List_1<int32_t> *indices, int32_t submesh,
    bool applyBaseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetIndices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<int32_t> *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, indices, submesh, applyBaseVertex);
}
inline void UnityEngine::Mesh::GetIndices(
    ::System::Collections::Generic::List_1<uint16_t> *indices, int32_t submesh,
    bool applyBaseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetIndices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<uint16_t> *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, indices, submesh, applyBaseVertex);
}
template <typename T>
inline void UnityEngine::Mesh::SetIndexBufferData(
    ::Unity::Collections::NativeArray_1<T> data, int32_t dataStart,
    int32_t meshBufferStart, int32_t count,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetIndexBufferData",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 5>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, data, dataStart, meshBufferStart, count, flags);
}
template <typename T>
inline void UnityEngine::Mesh::SetIndexBufferData(
    ::ArrayW<T, ::Array<T> *> data, int32_t dataStart, int32_t meshBufferStart,
    int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetIndexBufferData",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 5>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::ArrayW<T, ::Array<T> *>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, data, dataStart, meshBufferStart, count, flags);
}
template <typename T>
inline void UnityEngine::Mesh::SetIndexBufferData(
    ::System::Collections::Generic::List_1<T> *data, int32_t dataStart,
    int32_t meshBufferStart, int32_t count,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetIndexBufferData",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 5>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::System::Collections::Generic::List_1<T> *>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, data, dataStart, meshBufferStart, count, flags);
}
inline uint32_t UnityEngine::Mesh::GetIndexStart(int32_t submesh) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetIndexStart", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(
      this, ___internal_method, submesh);
}
inline uint32_t UnityEngine::Mesh::GetIndexCount(int32_t submesh) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetIndexCount", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(
      this, ___internal_method, submesh);
}
inline uint32_t UnityEngine::Mesh::GetBaseVertex(int32_t submesh) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBaseVertex", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(
      this, ___internal_method, submesh);
}
inline void UnityEngine::Mesh::CheckIndicesArrayRange(int32_t valuesLength,
                                                      int32_t start,
                                                      int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "CheckIndicesArrayRange", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, valuesLength, start, length);
}
inline void UnityEngine::Mesh::SetTrianglesImpl(
    int32_t submesh, ::UnityEngine::Rendering::IndexFormat indicesFormat,
    ::System::Array *triangles, int32_t trianglesArrayLength, int32_t start,
    int32_t length, bool calculateBounds, int32_t baseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetTrianglesImpl", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::IndexFormat>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Array *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, submesh, indicesFormat, triangles,
      trianglesArrayLength, start, length, calculateBounds, baseVertex);
}
inline void
UnityEngine::Mesh::SetTriangles(::ArrayW<int32_t, ::Array<int32_t> *> triangles,
                                int32_t submesh) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetTriangles", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<int32_t, ::Array<int32_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, triangles, submesh);
}
inline void
UnityEngine::Mesh::SetTriangles(::ArrayW<int32_t, ::Array<int32_t> *> triangles,
                                int32_t submesh, bool calculateBounds) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetTriangles", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<int32_t, ::Array<int32_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, triangles, submesh, calculateBounds);
}
inline void
UnityEngine::Mesh::SetTriangles(::ArrayW<int32_t, ::Array<int32_t> *> triangles,
                                int32_t submesh, bool calculateBounds,
                                int32_t baseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetTriangles", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<int32_t, ::Array<int32_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, triangles, submesh, calculateBounds,
      baseVertex);
}
inline void
UnityEngine::Mesh::SetTriangles(::ArrayW<int32_t, ::Array<int32_t> *> triangles,
                                int32_t trianglesStart, int32_t trianglesLength,
                                int32_t submesh, bool calculateBounds,
                                int32_t baseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetTriangles", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<int32_t, ::Array<int32_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, triangles, trianglesStart, trianglesLength,
      submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(
    ::ArrayW<uint16_t, ::Array<uint16_t> *> triangles, int32_t submesh,
    bool calculateBounds, int32_t baseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetTriangles", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<uint16_t, ::Array<uint16_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, triangles, submesh, calculateBounds,
      baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(
    ::ArrayW<uint16_t, ::Array<uint16_t> *> triangles, int32_t trianglesStart,
    int32_t trianglesLength, int32_t submesh, bool calculateBounds,
    int32_t baseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetTriangles", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<uint16_t, ::Array<uint16_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, triangles, trianglesStart, trianglesLength,
      submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(
    ::System::Collections::Generic::List_1<int32_t> *triangles,
    int32_t submesh) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetTriangles", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<int32_t> *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, triangles, submesh);
}
inline void UnityEngine::Mesh::SetTriangles(
    ::System::Collections::Generic::List_1<int32_t> *triangles, int32_t submesh,
    bool calculateBounds) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetTriangles", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<int32_t> *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, triangles, submesh, calculateBounds);
}
inline void UnityEngine::Mesh::SetTriangles(
    ::System::Collections::Generic::List_1<int32_t> *triangles, int32_t submesh,
    bool calculateBounds, int32_t baseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetTriangles", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<int32_t> *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, triangles, submesh, calculateBounds,
      baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(
    ::System::Collections::Generic::List_1<int32_t> *triangles,
    int32_t trianglesStart, int32_t trianglesLength, int32_t submesh,
    bool calculateBounds, int32_t baseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetTriangles", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<int32_t> *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, triangles, trianglesStart, trianglesLength,
      submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(
    ::System::Collections::Generic::List_1<uint16_t> *triangles,
    int32_t submesh, bool calculateBounds, int32_t baseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetTriangles", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<uint16_t> *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, triangles, submesh, calculateBounds,
      baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(
    ::System::Collections::Generic::List_1<uint16_t> *triangles,
    int32_t trianglesStart, int32_t trianglesLength, int32_t submesh,
    bool calculateBounds, int32_t baseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetTriangles", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<uint16_t> *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, triangles, trianglesStart, trianglesLength,
      submesh, calculateBounds, baseVertex);
}
inline void
UnityEngine::Mesh::SetIndices(::ArrayW<int32_t, ::Array<int32_t> *> indices,
                              ::UnityEngine::MeshTopology topology,
                              int32_t submesh) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetIndices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<int32_t, ::Array<int32_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::MeshTopology>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, indices, topology, submesh);
}
inline void
UnityEngine::Mesh::SetIndices(::ArrayW<int32_t, ::Array<int32_t> *> indices,
                              ::UnityEngine::MeshTopology topology,
                              int32_t submesh, bool calculateBounds) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetIndices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<int32_t, ::Array<int32_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::MeshTopology>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, indices, topology, submesh, calculateBounds);
}
inline void
UnityEngine::Mesh::SetIndices(::ArrayW<int32_t, ::Array<int32_t> *> indices,
                              ::UnityEngine::MeshTopology topology,
                              int32_t submesh, bool calculateBounds,
                              int32_t baseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetIndices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<int32_t, ::Array<int32_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::MeshTopology>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, indices, topology, submesh, calculateBounds,
      baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(
    ::ArrayW<int32_t, ::Array<int32_t> *> indices, int32_t indicesStart,
    int32_t indicesLength, ::UnityEngine::MeshTopology topology,
    int32_t submesh, bool calculateBounds, int32_t baseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetIndices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<int32_t, ::Array<int32_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::MeshTopology>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, indices, indicesStart, indicesLength, topology,
      submesh, calculateBounds, baseVertex);
}
inline void
UnityEngine::Mesh::SetIndices(::ArrayW<uint16_t, ::Array<uint16_t> *> indices,
                              ::UnityEngine::MeshTopology topology,
                              int32_t submesh, bool calculateBounds,
                              int32_t baseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetIndices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<uint16_t, ::Array<uint16_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::MeshTopology>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, indices, topology, submesh, calculateBounds,
      baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(
    ::ArrayW<uint16_t, ::Array<uint16_t> *> indices, int32_t indicesStart,
    int32_t indicesLength, ::UnityEngine::MeshTopology topology,
    int32_t submesh, bool calculateBounds, int32_t baseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetIndices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<uint16_t, ::Array<uint16_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::MeshTopology>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, indices, indicesStart, indicesLength, topology,
      submesh, calculateBounds, baseVertex);
}
template <typename T>
inline void
UnityEngine::Mesh::SetIndices(::Unity::Collections::NativeArray_1<T> indices,
                              ::UnityEngine::MeshTopology topology,
                              int32_t submesh, bool calculateBounds,
                              int32_t baseVertex) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetIndices",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 5>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::MeshTopology>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  bool>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, indices, topology, submesh, calculateBounds,
      baseVertex);
}
template <typename T>
inline void UnityEngine::Mesh::SetIndices(
    ::Unity::Collections::NativeArray_1<T> indices, int32_t indicesStart,
    int32_t indicesLength, ::UnityEngine::MeshTopology topology,
    int32_t submesh, bool calculateBounds, int32_t baseVertex) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetIndices",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 7>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::MeshTopology>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  bool>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, indices, indicesStart, indicesLength, topology,
      submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(
    ::System::Collections::Generic::List_1<int32_t> *indices,
    ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds,
    int32_t baseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetIndices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<int32_t> *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::MeshTopology>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, indices, topology, submesh, calculateBounds,
      baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(
    ::System::Collections::Generic::List_1<int32_t> *indices,
    int32_t indicesStart, int32_t indicesLength,
    ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds,
    int32_t baseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetIndices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<int32_t> *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::MeshTopology>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, indices, indicesStart, indicesLength, topology,
      submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(
    ::System::Collections::Generic::List_1<uint16_t> *indices,
    ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds,
    int32_t baseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetIndices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<uint16_t> *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::MeshTopology>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, indices, topology, submesh, calculateBounds,
      baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(
    ::System::Collections::Generic::List_1<uint16_t> *indices,
    int32_t indicesStart, int32_t indicesLength,
    ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds,
    int32_t baseVertex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetIndices", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<uint16_t> *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::MeshTopology>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, indices, indicesStart, indicesLength, topology,
      submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetSubMeshes(
    ::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor,
             ::Array<::UnityEngine::Rendering::SubMeshDescriptor> *>
        desc,
    int32_t start, int32_t count,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetSubMeshes", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
              ::UnityEngine::Rendering::SubMeshDescriptor,
              ::Array<::UnityEngine::Rendering::SubMeshDescriptor> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, desc, start, count, flags);
}
inline void UnityEngine::Mesh::SetSubMeshes(
    ::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor,
             ::Array<::UnityEngine::Rendering::SubMeshDescriptor> *>
        desc,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetSubMeshes", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
              ::UnityEngine::Rendering::SubMeshDescriptor,
              ::Array<::UnityEngine::Rendering::SubMeshDescriptor> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, desc, flags);
}
inline void UnityEngine::Mesh::SetSubMeshes(
    ::System::Collections::Generic::List_1<
        ::UnityEngine::Rendering::SubMeshDescriptor> *desc,
    int32_t start, int32_t count,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetSubMeshes", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<
                  ::UnityEngine::Rendering::SubMeshDescriptor> *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, desc, start, count, flags);
}
inline void UnityEngine::Mesh::SetSubMeshes(
    ::System::Collections::Generic::List_1<
        ::UnityEngine::Rendering::SubMeshDescriptor> *desc,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetSubMeshes", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<
                  ::UnityEngine::Rendering::SubMeshDescriptor> *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, desc, flags);
}
template <typename T>
inline void UnityEngine::Mesh::SetSubMeshes(
    ::Unity::Collections::NativeArray_1<T> desc, int32_t start, int32_t count,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetSubMeshes",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 4>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, desc, start, count, flags);
}
template <typename T>
inline void UnityEngine::Mesh::SetSubMeshes(
    ::Unity::Collections::NativeArray_1<T> desc,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::UnityEngine::Mesh *>::get(),
          "SetSubMeshes",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 2>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::Unity::Collections::NativeArray_1<T>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, desc, flags);
}
inline void UnityEngine::Mesh::GetBindposes(
    ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>
        *bindposes) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBindposes", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, bindposes);
}
inline void UnityEngine::Mesh::GetBoneWeights(
    ::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>
        *boneWeights) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBoneWeights", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, boneWeights);
}
inline ::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight> *>
UnityEngine::Mesh::get_boneWeights() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_boneWeights", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight> *>,
      false>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_boneWeights(
    ::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight> *>
        value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_boneWeights", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::BoneWeight,
                       ::Array<::UnityEngine::BoneWeight> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline ::UnityEngine::SkinWeights
UnityEngine::Mesh::get_skinWeightBufferLayout() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_skinWeightBufferLayout", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SkinWeights, false>(
      this, ___internal_method);
}
inline void UnityEngine::Mesh::Clear(bool keepVertexLayout) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "Clear", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, keepVertexLayout);
}
inline void UnityEngine::Mesh::Clear() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "Clear", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void UnityEngine::Mesh::RecalculateBounds() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "RecalculateBounds", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void UnityEngine::Mesh::RecalculateNormals() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "RecalculateNormals", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void UnityEngine::Mesh::RecalculateTangents() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "RecalculateTangents", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void UnityEngine::Mesh::RecalculateBounds(
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "RecalculateBounds", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, flags);
}
inline void UnityEngine::Mesh::RecalculateNormals(
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "RecalculateNormals", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, flags);
}
inline void UnityEngine::Mesh::RecalculateTangents(
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "RecalculateTangents", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, flags);
}
inline void
UnityEngine::Mesh::RecalculateUVDistributionMetric(int32_t uvSetIndex,
                                                   float_t uvAreaThreshold) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "RecalculateUVDistributionMetric",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, uvSetIndex, uvAreaThreshold);
}
inline void
UnityEngine::Mesh::RecalculateUVDistributionMetrics(float_t uvAreaThreshold) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "RecalculateUVDistributionMetrics",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, uvAreaThreshold);
}
inline void UnityEngine::Mesh::MarkDynamic() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "MarkDynamic", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void UnityEngine::Mesh::UploadMeshData(bool markNoLongerReadable) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "UploadMeshData", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, markNoLongerReadable);
}
inline void UnityEngine::Mesh::Optimize() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "Optimize", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void UnityEngine::Mesh::OptimizeIndexBuffers() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "OptimizeIndexBuffers", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void UnityEngine::Mesh::OptimizeReorderVertexBuffer() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "OptimizeReorderVertexBuffer", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline ::UnityEngine::MeshTopology
UnityEngine::Mesh::GetTopology(int32_t submesh) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetTopology", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::MeshTopology,
                                             false>(this, ___internal_method,
                                                    submesh);
}
inline void UnityEngine::Mesh::CombineMeshes(
    ::ArrayW<::UnityEngine::CombineInstance,
             ::Array<::UnityEngine::CombineInstance> *>
        combine,
    bool mergeSubMeshes, bool useMatrices, bool hasLightmapData) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "CombineMeshes", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::CombineInstance,
                       ::Array<::UnityEngine::CombineInstance> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, combine, mergeSubMeshes, useMatrices,
      hasLightmapData);
}
inline void UnityEngine::Mesh::CombineMeshes(
    ::ArrayW<::UnityEngine::CombineInstance,
             ::Array<::UnityEngine::CombineInstance> *>
        combine,
    bool mergeSubMeshes, bool useMatrices) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "CombineMeshes", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::CombineInstance,
                       ::Array<::UnityEngine::CombineInstance> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, combine, mergeSubMeshes, useMatrices);
}
inline void UnityEngine::Mesh::CombineMeshes(
    ::ArrayW<::UnityEngine::CombineInstance,
             ::Array<::UnityEngine::CombineInstance> *>
        combine,
    bool mergeSubMeshes) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "CombineMeshes", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::CombineInstance,
                       ::Array<::UnityEngine::CombineInstance> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, combine, mergeSubMeshes);
}
inline void UnityEngine::Mesh::CombineMeshes(
    ::ArrayW<::UnityEngine::CombineInstance,
             ::Array<::UnityEngine::CombineInstance> *>
        combine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "CombineMeshes", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::CombineInstance,
                       ::Array<::UnityEngine::CombineInstance> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, combine);
}
inline void UnityEngine::Mesh::GetVertexAttribute_Injected(
    int32_t index,
    ::ByRef<::UnityEngine::Rendering::VertexAttributeDescriptor> ret) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetVertexAttribute_Injected", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<
              ::UnityEngine::Rendering::VertexAttributeDescriptor>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, index, ret);
}
inline void UnityEngine::Mesh::GetBlendShapeOffsetInternal_Injected(
    int32_t index, ::ByRef<::UnityEngine::BlendShape> ret) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetBlendShapeOffsetInternal_Injected",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::BlendShape>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, index, ret);
}
inline void UnityEngine::Mesh::SetSubMesh_Injected(
    int32_t index, ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor> desc,
    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "SetSubMesh_Injected", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Rendering::MeshUpdateFlags>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, index, desc, flags);
}
inline void UnityEngine::Mesh::GetSubMesh_Injected(
    int32_t index, ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor> ret) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "GetSubMesh_Injected", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, index, ret);
}
inline void
UnityEngine::Mesh::get_bounds_Injected(::ByRef<::UnityEngine::Bounds> ret) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "get_bounds_Injected", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Bounds>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, ret);
}
inline void
UnityEngine::Mesh::set_bounds_Injected(::ByRef<::UnityEngine::Bounds> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Mesh *>::get(),
      "set_bounds_Injected", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Bounds>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline ::UnityEngine::Mesh *UnityEngine::Mesh::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Mesh *>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Mesh::Mesh() {}
