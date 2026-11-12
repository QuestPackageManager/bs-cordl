#pragma once
// IWYU pragma private; include "UnityEngine/Mesh.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableListWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
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
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MeshLodRange_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__SkinWeights_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "m_LodSlope", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LodBias", ty: "float_t", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::UnityEngine::Mesh_LodSelectionCurve::Mesh_LodSelectionCurve(float_t m_LodSlope, float_t m_LodBias) noexcept {
  this->m_LodSlope = m_LodSlope;
  this->m_LodBias = m_LodBias;
}
// Ctor Parameters []
constexpr ::UnityEngine::Mesh_LodSelectionCurve::Mesh_LodSelectionCurve() {}
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.GetVertexBufferCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Mesh_MeshData::GetVertexBufferCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f4accc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "GetVertexBufferCount", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.GetVertexDataPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh_MeshData::GetVertexDataPtr)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f4ad08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "GetVertexDataPtr", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.GetVertexDataSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh_MeshData::GetVertexDataSize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f4ad4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "GetVertexDataSize", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.GetIndexDataPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Mesh_MeshData::GetIndexDataPtr)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f4ad90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "GetIndexDataPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.GetIndexDataSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr)>(&::UnityEngine::Mesh_MeshData::GetIndexDataSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f4adcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "GetIndexDataSize", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetVertexBufferParamsFromArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>)>(
    &::UnityEngine::Mesh_MeshData::SetVertexBufferParamsFromArray)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6f4ae08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                                         { "SetVertexBufferParamsFromArray",
                                           {},
                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetIndexBufferParamsImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::UnityEngine::Rendering::IndexFormat)>(&::UnityEngine::Mesh_MeshData::SetIndexBufferParamsImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f4af38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                            { "SetIndexBufferParamsImpl", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetSubMeshCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh_MeshData::SetSubMeshCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f4af8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "SetSubMeshCount", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetSubMeshImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::UnityEngine::Rendering::SubMeshDescriptor, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh_MeshData::SetSubMeshImpl)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6f4afd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                                                             { "SetSubMeshImpl",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::SubMeshDescriptor>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.get_vertexBufferCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh_MeshData::*)()>(&::UnityEngine::Mesh_MeshData::get_vertexBufferCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f4b088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "get_vertexBufferCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetVertexBufferParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh_MeshData::*)(int32_t, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>)>(
    &::UnityEngine::Mesh_MeshData::SetVertexBufferParams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f4b0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                                                { "SetVertexBufferParams", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetIndexBufferParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh_MeshData::*)(int32_t, ::UnityEngine::Rendering::IndexFormat)>(&::UnityEngine::Mesh_MeshData::SetIndexBufferParams)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f4b0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "SetIndexBufferParams", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.set_subMeshCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh_MeshData::*)(int32_t)>(&::UnityEngine::Mesh_MeshData::set_subMeshCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f4b120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "set_subMeshCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetSubMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh_MeshData::*)(int32_t, ::UnityEngine::Rendering::SubMeshDescriptor, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh_MeshData::SetSubMesh)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f4b164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
            { "SetSubMesh", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::SubMeshDescriptor>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetVertexBufferParamsFromArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Mesh_MeshData::SetVertexBufferParamsFromArray_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f4aee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                                                { "SetVertexBufferParamsFromArray_Injected",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetSubMeshImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor const>, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh_MeshData::SetSubMeshImpl_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6f4b02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "SetSubMeshImpl_Injected",
                                                                                                                {},
                                                                                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubMeshDescriptor const>>(),
                                                                                                                  ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Mesh_MeshData::GetVertexBufferCount(::System::IntPtr self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "GetVertexBufferCount", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, self);
}
inline ::System::IntPtr UnityEngine::Mesh_MeshData::GetVertexDataPtr(::System::IntPtr self, int32_t stream) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "GetVertexDataPtr", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, self, stream);
}
inline uint64_t UnityEngine::Mesh_MeshData::GetVertexDataSize(::System::IntPtr self, int32_t stream) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "GetVertexDataSize", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, self, stream);
}
inline ::System::IntPtr UnityEngine::Mesh_MeshData::GetIndexDataPtr(::System::IntPtr self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "GetIndexDataPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, self);
}
inline uint64_t UnityEngine::Mesh_MeshData::GetIndexDataSize(::System::IntPtr self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "GetIndexDataSize", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, self);
}
inline void UnityEngine::Mesh_MeshData::SetVertexBufferParamsFromArray(::System::IntPtr self, int32_t vertexCount,
                                                                       /* [ParamArray] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                                              { "SetVertexBufferParamsFromArray",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, vertexCount, attributes);
}
inline void UnityEngine::Mesh_MeshData::SetIndexBufferParamsImpl(::System::IntPtr self, int32_t indexCount, ::UnityEngine::Rendering::IndexFormat indexFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                          { "SetIndexBufferParamsImpl", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, indexCount, indexFormat);
}
inline void UnityEngine::Mesh_MeshData::SetSubMeshCount(::System::IntPtr self, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "SetSubMeshCount", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, count);
}
inline void UnityEngine::Mesh_MeshData::SetSubMeshImpl(::System::IntPtr self, int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                                                           { "SetSubMeshImpl",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::SubMeshDescriptor>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, index, desc, flags);
}
inline int32_t UnityEngine::Mesh_MeshData::get_vertexBufferCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "get_vertexBufferCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> UnityEngine::Mesh_MeshData::GetVertexData(/* [DefaultValue("0")] */ int32_t stream) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "GetVertexData", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, stream);
}
inline void UnityEngine::Mesh_MeshData::SetVertexBufferParams(int32_t vertexCount, /* [ParamArray] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                                              { "SetVertexBufferParams", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vertexCount, attributes);
}
inline void UnityEngine::Mesh_MeshData::SetIndexBufferParams(int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "SetIndexBufferParams", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, indexCount, format);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> UnityEngine::Mesh_MeshData::GetIndexData() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "GetIndexData", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method);
}
inline void UnityEngine::Mesh_MeshData::set_subMeshCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "set_subMeshCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Mesh_MeshData::SetSubMesh(int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
          { "SetSubMesh", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::SubMeshDescriptor>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, desc, flags);
}
inline void UnityEngine::Mesh_MeshData::SetVertexBufferParamsFromArray_Injected(::System::IntPtr self, int32_t vertexCount,
                                                                                /* [ParamArray] */ ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                                              { "SetVertexBufferParamsFromArray_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, vertexCount, attributes);
}
inline void UnityEngine::Mesh_MeshData::SetSubMeshImpl_Injected(::System::IntPtr self, int32_t index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor const> desc,
                                                                ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshData>(), { "SetSubMeshImpl_Injected",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubMeshDescriptor const>>(),
                                                                                                                ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, index, desc, flags);
}
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Mesh_MeshData::Mesh_MeshData(::System::IntPtr m_Ptr) noexcept {
  this->m_Ptr = m_Ptr;
}
// Ctor Parameters []
constexpr ::UnityEngine::Mesh_MeshData::Mesh_MeshData() {}
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.AcquireReadOnlyMeshData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::System::IntPtr*)>(&::UnityEngine::Mesh_MeshDataArray::AcquireReadOnlyMeshData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6f4b1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { "AcquireReadOnlyMeshData", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::IntPtr*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.AcquireReadOnlyMeshDatas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Mesh*>, ::System::IntPtr*, int32_t)>(&::UnityEngine::Mesh_MeshDataArray::AcquireReadOnlyMeshDatas)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6f4b2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                                         { "AcquireReadOnlyMeshDatas", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.AcquireMeshDataCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::System::IntPtr*)>(&::UnityEngine::Mesh_MeshDataArray::AcquireMeshDataCopy)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6f4b3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { "AcquireMeshDataCopy", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::IntPtr*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.AcquireMeshDatasCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Mesh*>, ::System::IntPtr*, int32_t)>(&::UnityEngine::Mesh_MeshDataArray::AcquireMeshDatasCopy)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6f4b4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                                                { "AcquireMeshDatasCopy", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.ReleaseMeshDatas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr*, int32_t)>(&::UnityEngine::Mesh_MeshDataArray::ReleaseMeshDatas)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f4b598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { "ReleaseMeshDatas", {}, { ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.CreateNewMeshDatas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr*, int32_t)>(&::UnityEngine::Mesh_MeshDataArray::CreateNewMeshDatas)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f4b5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { "CreateNewMeshDatas", {}, { ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.ApplyToMeshesImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Mesh*>, ::System::IntPtr*, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh_MeshDataArray::ApplyToMeshesImpl)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6f4b620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { "ApplyToMeshesImpl",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(),
                                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.ApplyToMeshImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::System::IntPtr, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh_MeshDataArray::ApplyToMeshImpl)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6f4b720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                            { "ApplyToMeshImpl", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh_MeshDataArray::*)()>(&::UnityEngine::Mesh_MeshDataArray::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f4b830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Mesh_MeshData (::UnityEngine::Mesh_MeshDataArray::*)(int32_t)>(&::UnityEngine::Mesh_MeshDataArray::get_Item)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f4b838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh_MeshDataArray::*)()>(&::UnityEngine::Mesh_MeshDataArray::Dispose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6f4b844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.ApplyToMeshAndDispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh_MeshDataArray::*)(::UnityEngine::Mesh*, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh_MeshDataArray::ApplyToMeshAndDispose)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6f456c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                                                { "ApplyToMeshAndDispose", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.ApplyToMeshesAndDispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh_MeshDataArray::*)(::ArrayW<::UnityEngine::Mesh*>, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh_MeshDataArray::ApplyToMeshesAndDispose)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6f458d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                                                { "ApplyToMeshesAndDispose", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh_MeshDataArray::*)(::UnityEngine::Mesh*, bool, bool)>(&::UnityEngine::Mesh_MeshDataArray::_ctor)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x6f44b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh_MeshDataArray::*)(::ArrayW<::UnityEngine::Mesh*>, int32_t, bool, bool)>(&::UnityEngine::Mesh_MeshDataArray::_ctor)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x6f44e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                                                { ".ctor", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh_MeshDataArray::*)(int32_t)>(&::UnityEngine::Mesh_MeshDataArray::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6f4523c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.AcquireReadOnlyMeshData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr*)>(&::UnityEngine::Mesh_MeshDataArray::AcquireReadOnlyMeshData_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f4b28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                                                             { "AcquireReadOnlyMeshData_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.AcquireReadOnlyMeshDatas_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Mesh*>, ::System::IntPtr*, int32_t)>(&::UnityEngine::Mesh_MeshDataArray::AcquireReadOnlyMeshDatas_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f4b364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                            { "AcquireReadOnlyMeshDatas_Injected", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.AcquireMeshDataCopy_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr*)>(&::UnityEngine::Mesh_MeshDataArray::AcquireMeshDataCopy_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f4b46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                                                             { "AcquireMeshDataCopy_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.AcquireMeshDatasCopy_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Mesh*>, ::System::IntPtr*, int32_t)>(&::UnityEngine::Mesh_MeshDataArray::AcquireMeshDatasCopy_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f4b544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                            { "AcquireMeshDatasCopy_Injected", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.ApplyToMeshesImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Mesh*>, ::System::IntPtr*, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh_MeshDataArray::ApplyToMeshesImpl_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6f4b6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { "ApplyToMeshesImpl_Injected",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(),
                                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.ApplyToMeshImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh_MeshDataArray::ApplyToMeshImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f4b7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                         { "ApplyToMeshImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Mesh_MeshDataArray::AcquireReadOnlyMeshData(/* [NotNull] */ ::UnityEngine::Mesh* mesh, ::System::IntPtr* datas) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { "AcquireReadOnlyMeshData", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::IntPtr*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, datas);
}
inline void UnityEngine::Mesh_MeshDataArray::AcquireReadOnlyMeshDatas(/* [NotNull] */ ::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                                       { "AcquireReadOnlyMeshDatas", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshes, datas, count);
}
inline void UnityEngine::Mesh_MeshDataArray::AcquireMeshDataCopy(/* [NotNull] */ ::UnityEngine::Mesh* mesh, ::System::IntPtr* datas) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { "AcquireMeshDataCopy", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::IntPtr*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, datas);
}
inline void UnityEngine::Mesh_MeshDataArray::AcquireMeshDatasCopy(/* [NotNull] */ ::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                                              { "AcquireMeshDatasCopy", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshes, datas, count);
}
inline void UnityEngine::Mesh_MeshDataArray::ReleaseMeshDatas(::System::IntPtr* datas, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { "ReleaseMeshDatas", {}, { ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, datas, count);
}
inline void UnityEngine::Mesh_MeshDataArray::CreateNewMeshDatas(::System::IntPtr* datas, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { "CreateNewMeshDatas", {}, { ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, datas, count);
}
inline void UnityEngine::Mesh_MeshDataArray::ApplyToMeshesImpl(/* [NotNull] */ ::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count,
                                                               ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { "ApplyToMeshesImpl",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshes, datas, count, flags);
}
inline void UnityEngine::Mesh_MeshDataArray::ApplyToMeshImpl(/* [NotNull] */ ::UnityEngine::Mesh* mesh, ::System::IntPtr data, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                          { "ApplyToMeshImpl", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, data, flags);
}
inline int32_t UnityEngine::Mesh_MeshDataArray::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Mesh_MeshData UnityEngine::Mesh_MeshDataArray::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_MeshData>(*this, ___internal_method, index);
}
inline void UnityEngine::Mesh_MeshDataArray::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Mesh_MeshDataArray::ApplyToMeshAndDispose(::UnityEngine::Mesh* mesh, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                                                           { "ApplyToMeshAndDispose", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, flags);
}
inline void UnityEngine::Mesh_MeshDataArray::ApplyToMeshesAndDispose(::ArrayW<::UnityEngine::Mesh*> meshes, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                                              { "ApplyToMeshesAndDispose", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, meshes, flags);
}
inline void UnityEngine::Mesh_MeshDataArray::_ctor(::UnityEngine::Mesh* mesh, bool checkReadWrite, bool createAsCopy) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, checkReadWrite, createAsCopy);
}
inline void UnityEngine::Mesh_MeshDataArray::_ctor(::ArrayW<::UnityEngine::Mesh*> meshes, int32_t meshesCount, bool checkReadWrite, bool createAsCopy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                                              { ".ctor", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, meshes, meshesCount, checkReadWrite, createAsCopy);
}
inline void UnityEngine::Mesh_MeshDataArray::_ctor(int32_t meshesCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, meshesCount);
}
inline void UnityEngine::Mesh_MeshDataArray::AcquireReadOnlyMeshData_Injected(::System::IntPtr mesh, ::System::IntPtr* datas) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                                                           { "AcquireReadOnlyMeshData_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, datas);
}
inline void UnityEngine::Mesh_MeshDataArray::AcquireReadOnlyMeshDatas_Injected(::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                          { "AcquireReadOnlyMeshDatas_Injected", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshes, datas, count);
}
inline void UnityEngine::Mesh_MeshDataArray::AcquireMeshDataCopy_Injected(::System::IntPtr mesh, ::System::IntPtr* datas) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { "AcquireMeshDataCopy_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, datas);
}
inline void UnityEngine::Mesh_MeshDataArray::AcquireMeshDatasCopy_Injected(::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                                       { "AcquireMeshDatasCopy_Injected", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshes, datas, count);
}
inline void UnityEngine::Mesh_MeshDataArray::ApplyToMeshesImpl_Injected(::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count,
                                                                        ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(), { "ApplyToMeshesImpl_Injected",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshes, datas, count, flags);
}
inline void UnityEngine::Mesh_MeshDataArray::ApplyToMeshImpl_Injected(::System::IntPtr mesh, ::System::IntPtr data, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                       { "ApplyToMeshImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, data, flags);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Mesh_MeshDataArray::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Mesh_MeshDataArray::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Ptrs", ty: "::System::IntPtr*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::UnityEngine::Mesh_MeshDataArray::Mesh_MeshDataArray(::System::IntPtr* m_Ptrs, int32_t m_Length) noexcept {
  this->m_Ptrs = m_Ptrs;
  this->m_Length = m_Length;
}
// Ctor Parameters []
constexpr ::UnityEngine::Mesh_MeshDataArray::Mesh_MeshDataArray() {}
//  Writing Method size for method: ::UnityEngine::Mesh.Internal_Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*)>(&::UnityEngine::Mesh::Internal_Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3a758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "Internal_Create", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6f3a794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.FromInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::UnityEngine::EntityId)>(&::UnityEngine::Mesh::FromInstanceID)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6f3a80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "FromInstanceID", {}, { ::i2c::type_of<::UnityEngine::EntityId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_indexFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IndexFormat (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_indexFormat)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f3a968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_indexFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_indexFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::IndexFormat)>(&::UnityEngine::Mesh::set_indexFormat)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f3aa24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_indexFormat", {}, { ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTotalIndexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetTotalIndexCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f3aaf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTotalIndexCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndexBufferParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::UnityEngine::Rendering::IndexFormat)>(&::UnityEngine::Mesh::SetIndexBufferParams)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6f3abb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndexBufferParams", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.InternalSetIndexBufferData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::InternalSetIndexBufferData)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6f3aca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "InternalSetIndexBufferData",
                                                                       {},
                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.InternalSetIndexBufferDataFromArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Array*, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::InternalSetIndexBufferDataFromArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6f3adec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "InternalSetIndexBufferDataFromArray",
                                                                       {},
                                                                       { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertexBufferParamsFromPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::SetVertexBufferParamsFromPtr)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6f3af38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "SetVertexBufferParamsFromPtr", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertexBufferParamsFromArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>)>(
    &::UnityEngine::Mesh::SetVertexBufferParamsFromArray)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6f3b03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                         { "SetVertexBufferParamsFromArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.InternalSetVertexBufferData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::InternalSetVertexBufferData)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6f3b19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "InternalSetVertexBufferData",
                                                                       {},
                                                                       { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.InternalSetVertexBufferDataFromArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Array*, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::InternalSetVertexBufferDataFromArray)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6f3b300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "InternalSetVertexBufferDataFromArray",
                                                                       {},
                                                                       { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributesAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetVertexAttributesAlloc)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f3b464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributesAlloc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributesArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>)>(
    &::UnityEngine::Mesh::GetVertexAttributesArray)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6f3b520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributesArray", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributesList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>*)>(
    &::UnityEngine::Mesh::GetVertexAttributesList)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x6f3b684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                         { "GetVertexAttributesList", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeCountImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetVertexAttributeCountImpl)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f3b8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributeCountImpl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::VertexAttributeDescriptor (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetVertexAttribute)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6f3b990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttribute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexStartImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Mesh::*)(int32_t, int32_t)>(&::UnityEngine::Mesh::GetIndexStartImpl)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6f3ba8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndexStartImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexCountImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Mesh::*)(int32_t, int32_t)>(&::UnityEngine::Mesh::GetIndexCountImpl)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6f3bb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndexCountImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTrianglesCountImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Mesh::*)(int32_t, int32_t)>(&::UnityEngine::Mesh::GetTrianglesCountImpl)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6f3bc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTrianglesCountImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBaseVertexImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetBaseVertexImpl)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f3bd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBaseVertexImpl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTrianglesImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::Mesh::*)(int32_t, bool, int32_t)>(&::UnityEngine::Mesh::GetTrianglesImpl)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6f3be24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTrianglesImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndicesImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::Mesh::*)(int32_t, bool, int32_t)>(&::UnityEngine::Mesh::GetIndicesImpl)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6f3c018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndicesImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndicesImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::UnityEngine::MeshTopology, ::UnityEngine::Rendering::IndexFormat, ::System::Array*, int32_t, int32_t,
                                                                                     bool, int32_t, int32_t)>(&::UnityEngine::Mesh::SetIndicesImpl)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6f3c20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "SetIndicesImpl",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>(), ::i2c::type_of<::System::Array*>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndicesNativeArrayImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::UnityEngine::MeshTopology, ::UnityEngine::Rendering::IndexFormat, ::System::IntPtr, int32_t, int32_t,
                                                                                     bool, int32_t, int32_t)>(&::UnityEngine::Mesh::SetIndicesNativeArrayImpl)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6f3c398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "SetIndicesNativeArrayImpl",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>(), ::i2c::type_of<::System::IntPtr>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTrianglesNonAllocImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::GetTrianglesNonAllocImpl)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6f3c524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                         { "GetTrianglesNonAllocImpl", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTrianglesNonAllocImpl16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<uint16_t>, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::GetTrianglesNonAllocImpl16)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6f3c70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "GetTrianglesNonAllocImpl16", {}, { ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndicesNonAllocImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::GetIndicesNonAllocImpl)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6f3c8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                         { "GetIndicesNonAllocImpl", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndicesNonAllocImpl16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<uint16_t>, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::GetIndicesNonAllocImpl16)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6f3cadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                         { "GetIndicesNonAllocImpl16", {}, { ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.PrintErrorCantAccessChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::PrintErrorCantAccessChannel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f3ccc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "PrintErrorCantAccessChannel", {}, { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.HasVertexAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::HasVertexAttribute)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f3cd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "HasVertexAttribute", {}, { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeDimension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::GetVertexAttributeDimension)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f3ce6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributeDimension", {}, { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::VertexAttributeFormat (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute)>(
    &::UnityEngine::Mesh::GetVertexAttributeFormat)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f3cf40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributeFormat", {}, { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::GetVertexAttributeStream)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f3d014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributeStream", {}, { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::GetVertexAttributeOffset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f3d0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributeOffset", {}, { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetArrayForChannelImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t,
                                                                                     ::System::Array*, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetArrayForChannelImpl)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6f3d1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetArrayForChannelImpl",
                                                                       {},
                                                                       { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetNativeArrayForChannelImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t,
                                                                                     ::System::IntPtr, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetNativeArrayForChannelImpl)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6f3d338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetNativeArrayForChannelImpl",
                                                                       {},
                                                                       { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetAllocArrayFromChannelImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t)>(
    &::UnityEngine::Mesh::GetAllocArrayFromChannelImpl)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6f3d4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetAllocArrayFromChannelImpl",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetArrayFromChannelImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t,
                                                                                     ::System::Array*)>(&::UnityEngine::Mesh::GetArrayFromChannelImpl)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6f3d5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetArrayFromChannelImpl",
                                                                       {},
                                                                       { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_vertexBufferCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_vertexBufferCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f3d6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_vertexBufferCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexBufferStride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetVertexBufferStride)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f3d790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexBufferStride", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetNativeVertexBufferPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetNativeVertexBufferPtr)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f3d864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetNativeVertexBufferPtr", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetNativeIndexBufferPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetNativeIndexBufferPtr)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f3d938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetNativeIndexBufferPtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexBufferImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetVertexBufferImpl)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6f3d9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexBufferImpl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexBufferImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetIndexBufferImpl)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6f3dae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndexBufferImpl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBoneWeightBufferImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetBoneWeightBufferImpl)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6f3dbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBoneWeightBufferImpl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeBufferImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetBlendShapeBufferImpl)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6f3dc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeBufferImpl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_vertexBufferTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer_Target (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_vertexBufferTarget)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f3dd88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_vertexBufferTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_vertexBufferTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::GraphicsBuffer_Target)>(&::UnityEngine::Mesh::set_vertexBufferTarget)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f3de44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_vertexBufferTarget", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_indexBufferTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer_Target (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_indexBufferTarget)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f3df18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_indexBufferTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_indexBufferTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::GraphicsBuffer_Target)>(&::UnityEngine::Mesh::set_indexBufferTarget)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f3dfd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_indexBufferTarget", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_blendShapeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_blendShapeCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f3e0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_blendShapeCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.ClearBlendShapes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::ClearBlendShapes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f3e164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "ClearBlendShapes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetBlendShapeName)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6f3e220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeName", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)(::StringW)>(&::UnityEngine::Mesh::GetBlendShapeIndex)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6f3e3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeIndex", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeFrameCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetBlendShapeFrameCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f3e56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeFrameCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeFrameWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Mesh::*)(int32_t, int32_t)>(&::UnityEngine::Mesh::GetBlendShapeFrameWeight)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6f3e640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeFrameWeight", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeFrameVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, int32_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>,
                                                                                     ::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::Mesh::GetBlendShapeFrameVertices)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6f3e72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeFrameVertices",
                                                                                    {},
                                                                                    { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(),
                                                                                      ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.AddBlendShapeFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::StringW, float_t, ::System::ReadOnlySpan_1<::UnityEngine::Vector3>,
                                                                                     ::System::ReadOnlySpan_1<::UnityEngine::Vector3>, ::System::ReadOnlySpan_1<::UnityEngine::Vector3>)>(
    &::UnityEngine::Mesh::AddBlendShapeFrame)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x6f3e92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "AddBlendShapeFrame",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Vector3>>(),
                                                    ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.AddBlendShapeFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::StringW, float_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>,
                                                                                     ::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::Mesh::AddBlendShapeFrame)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6f3ebc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "AddBlendShapeFrame",
                                                                                    {},
                                                                                    { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(),
                                                                                      ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeOffsetInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BlendShape (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetBlendShapeOffsetInternal)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6f3ec94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeOffsetInternal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.HasBoneWeights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::HasBoneWeights)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f3ed98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "HasBoneWeights", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBoneWeightsImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::BoneWeight> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetBoneWeightsImpl)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6f3ee54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBoneWeightsImpl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetBoneWeightsImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::BoneWeight>)>(&::UnityEngine::Mesh::SetBoneWeightsImpl)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6f3eff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetBoneWeightsImpl", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::BoneWeight>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetBoneWeights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::Unity::Collections::NativeArray_1<uint8_t>, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>)>(
    &::UnityEngine::Mesh::SetBoneWeights)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6f3f140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Mesh*>(),
            { "SetBoneWeights", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.InternalSetBoneWeights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::IntPtr, int32_t, ::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::InternalSetBoneWeights)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6f3f1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "InternalSetBoneWeights", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetAllBoneWeights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetAllBoneWeights)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f3f2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetAllBoneWeights", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBonesPerVertex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetBonesPerVertex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6f3f448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBonesPerVertex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetAllBoneWeightsArraySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetAllBoneWeightsArraySize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f3f3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetAllBoneWeightsArraySize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBoneWeightBufferLayoutInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetBoneWeightBufferLayoutInternal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f3f5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBoneWeightBufferLayoutInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetAllBoneWeightsArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetAllBoneWeightsArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f3f348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetAllBoneWeightsArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBonesPerVertexArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetBonesPerVertexArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f3f538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBonesPerVertexArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_bindposeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_bindposeCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f3f728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_bindposeCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_bindposes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Matrix4x4> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_bindposes)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6f3f7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_bindposes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_bindposes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Mesh::set_bindposes)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6f3f988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_bindposes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBindposes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetBindposes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f3fad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBindposes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetBindposes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Mesh::SetBindposes)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6f3fbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetBindposes", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetBindposesFromScript_NativeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::SetBindposesFromScript_NativeArray)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6f3fc88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetBindposesFromScript_NativeArray", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBindposesArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetBindposesArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f3fb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBindposesArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBoneWeightsNonAllocImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::BoneWeight>)>(&::UnityEngine::Mesh::GetBoneWeightsNonAllocImpl)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6f3fdb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBoneWeightsNonAllocImpl", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::BoneWeight>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBindposesNonAllocImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Mesh::GetBindposesNonAllocImpl)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6f3ff50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBindposesNonAllocImpl", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_isReadable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_isReadable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f400f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_isReadable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_canAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_canAccess)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f401ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_canAccess", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_vertexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_vertexCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f3f4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_vertexCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_subMeshCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_subMeshCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f402a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_subMeshCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_subMeshCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::set_subMeshCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f40360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_subMeshCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetSubMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::UnityEngine::Rendering::SubMeshDescriptor, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetSubMesh)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6f40434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Mesh*>(),
            { "SetSubMesh", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::SubMeshDescriptor>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetSubMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::SubMeshDescriptor (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetSubMesh)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6f40538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetSubMesh", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetAllSubMeshesAtOnceFromArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor>, int32_t, int32_t,
                                                                                     ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetAllSubMeshesAtOnceFromArray)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6f4064c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetAllSubMeshesAtOnceFromArray",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetAllSubMeshesAtOnceFromNativeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::IntPtr, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetAllSubMeshesAtOnceFromNativeArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6f407dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetAllSubMeshesAtOnceFromNativeArray",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetLodCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::SetLodCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f408f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLodCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetLodSelectionCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Mesh_LodSelectionCurve)>(&::UnityEngine::Mesh::SetLodSelectionCurve)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6f409cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLodSelectionCurve", {}, { ::i2c::type_of<::UnityEngine::Mesh_LodSelectionCurve>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetLodsFromArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::MeshLodRange>, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetLodsFromArray)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6f40aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLodsFromArray",
                                                                                    {},
                                                                                    { ::i2c::type_of<::ArrayW<::UnityEngine::MeshLodRange>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetLodsFromNativeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::IntPtr, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetLodsFromNativeArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6f40c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLodsFromNativeArray",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetLodImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, int32_t, ::UnityEngine::MeshLodRange, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetLodImpl)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6f40d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLodImpl",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshLodRange>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetLodsAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::MeshLodRange> (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetLodsAlloc)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6f40e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetLodsAlloc", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetLodsNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::MeshLodRange>, int32_t)>(&::UnityEngine::Mesh::GetLodsNonAlloc)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6f41048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetLodsNonAlloc", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::MeshLodRange>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetLodCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetLodCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f41200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetLodCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetLodSelectionCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Mesh_LodSelectionCurve (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetLodSelectionCurve)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6f412bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetLodSelectionCurve", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetLod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MeshLodRange (::UnityEngine::Mesh::*)(int32_t, int32_t)>(&::UnityEngine::Mesh::GetLod)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6f41398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetLod", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_bounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_bounds)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6f414a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_bounds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_bounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Bounds)>(&::UnityEngine::Mesh::set_bounds)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f41598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_bounds", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.ClearImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(bool)>(&::UnityEngine::Mesh::ClearImpl)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f4166c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "ClearImpl", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateBoundsImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::RecalculateBoundsImpl)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f41740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateBoundsImpl", {}, { ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateNormalsImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::RecalculateNormalsImpl)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f41814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateNormalsImpl", {}, { ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateTangentsImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::RecalculateTangentsImpl)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f418e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateTangentsImpl", {}, { ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.MarkDynamicImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::MarkDynamicImpl)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f419bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "MarkDynamicImpl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.MarkModified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::MarkModified)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f41a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "MarkModified", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.UploadMeshDataImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(bool)>(&::UnityEngine::Mesh::UploadMeshDataImpl)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f41b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "UploadMeshDataImpl", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTopologyImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MeshTopology (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetTopologyImpl)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f41c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTopologyImpl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateUVDistributionMetricImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, float_t)>(&::UnityEngine::Mesh::RecalculateUVDistributionMetricImpl)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6f41cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateUVDistributionMetricImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateUVDistributionMetricsImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(float_t)>(&::UnityEngine::Mesh::RecalculateUVDistributionMetricsImpl)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f41dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateUVDistributionMetricsImpl", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetUVDistributionMetric
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetUVDistributionMetric)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f41eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetUVDistributionMetric", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CombineMeshesImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::CombineInstance>, bool, bool, bool)>(&::UnityEngine::Mesh::CombineMeshesImpl)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6f41f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "CombineMeshesImpl", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::CombineInstance>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.OptimizeImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::OptimizeImpl)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f42110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "OptimizeImpl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.OptimizeIndexBuffersImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::OptimizeIndexBuffersImpl)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f421cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "OptimizeIndexBuffersImpl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.OptimizeReorderVertexBufferImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::OptimizeReorderVertexBufferImpl)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f42288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "OptimizeReorderVertexBufferImpl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetUVChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::VertexAttribute (*)(int32_t)>(&::UnityEngine::Mesh::GetUVChannel)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f42344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetUVChannel", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.DefaultDimensionForChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::DefaultDimensionForChannel)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6f423b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "DefaultDimensionForChannel", {}, { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetSizedArrayForChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t,
                                                                                     ::System::Array*, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetSizedArrayForChannel)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6f42454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetSizedArrayForChannel",
                                                                       {},
                                                                       { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetSizedNativeArrayForChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t,
                                                                                     ::System::IntPtr, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetSizedNativeArrayForChannel)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6f42670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetSizedNativeArrayForChannel",
                                                                       {},
                                                                       { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_vertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_vertices)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f42888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_vertices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_vertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::Mesh::set_vertices)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f428d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_vertices", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_normals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_normals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f4293c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_normals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_normals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::Mesh::set_normals)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f4298c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_normals", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_tangents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector4> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_tangents)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f429f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_tangents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_tangents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector4>)>(&::UnityEngine::Mesh::set_tangents)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f42a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_tangents", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_uv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_uv)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f42aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_uv", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_uv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector2>)>(&::UnityEngine::Mesh::set_uv)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f42af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_uv", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_uv2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_uv2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f42b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_uv2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_uv2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector2>)>(&::UnityEngine::Mesh::set_uv2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f42ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_uv2", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_uv3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_uv3)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f42c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_uv3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_uv3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector2>)>(&::UnityEngine::Mesh::set_uv3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f42c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_uv3", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_uv4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_uv4)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f42cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_uv4", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_uv4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector2>)>(&::UnityEngine::Mesh::set_uv4)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f42d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_uv4", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_uv5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_uv5)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f42d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_uv5", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_uv5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector2>)>(&::UnityEngine::Mesh::set_uv5)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f42dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_uv5", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_uv6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_uv6)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f42e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_uv6", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_uv6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector2>)>(&::UnityEngine::Mesh::set_uv6)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f42e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_uv6", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_uv7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_uv7)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f42edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_uv7", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_uv7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector2>)>(&::UnityEngine::Mesh::set_uv7)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f42f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_uv7", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_uv8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_uv8)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f42f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_uv8", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_uv8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector2>)>(&::UnityEngine::Mesh::set_uv8)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f42fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_uv8", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_colors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_colors)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f43044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_colors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_colors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Color>)>(&::UnityEngine::Mesh::set_colors)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f43094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_colors", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_colors32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color32> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_colors32)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6f430f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_colors32", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_colors32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Color32>)>(&::UnityEngine::Mesh::set_colors32)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f43150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_colors32", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_lodCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_lodCount)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f431bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_lodCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_lodCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::set_lodCount)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6f431c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_lodCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_isLodSelectionActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_isLodSelectionActive)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6f432a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_isLodSelectionActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_lodSelectionCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Mesh_LodSelectionCurve (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_lodSelectionCurve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f432c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_lodSelectionCurve", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_lodSelectionCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Mesh_LodSelectionCurve)>(&::UnityEngine::Mesh::set_lodSelectionCurve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f432c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_lodSelectionCurve", {}, { ::i2c::type_of<::UnityEngine::Mesh_LodSelectionCurve>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::UnityEngine::Mesh::GetVertices)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6f432c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6f43398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetVertices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, int32_t, int32_t)>(
    &::UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f4341c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "SetVertices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, int32_t, int32_t,
                                                                                     ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f43424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetVertices",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(),
                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6f434a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetVertices", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector3>, int32_t, int32_t)>(&::UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f4351c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "SetVertices", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector3>, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6f43590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetVertices",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(),
                                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::UnityEngine::Mesh::GetNormals)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6f43608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetNormals", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6f436d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetNormals", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, int32_t, int32_t)>(
    &::UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f4375c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "SetNormals", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, int32_t, int32_t,
                                                                                     ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f43764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetNormals",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(),
                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6f437e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetNormals", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector3>, int32_t, int32_t)>(&::UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f4385c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "SetNormals", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector3>, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6f438d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetNormals",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(),
                                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTangents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(&::UnityEngine::Mesh::GetTangents)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6f43948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTangents", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTangents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(&::UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6f43a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTangents", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTangents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, int32_t, int32_t)>(
    &::UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f43a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "SetTangents", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTangents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, int32_t, int32_t,
                                                                                     ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f43aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTangents",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<int32_t>(),
                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTangents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector4>)>(&::UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6f43b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTangents", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTangents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector4>, int32_t, int32_t)>(&::UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f43b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "SetTangents", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTangents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector4>, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6f43c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTangents",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>(),
                                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Color>*)>(&::UnityEngine::Mesh::GetColors)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6f43c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetColors", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Color>*)>(&::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6f43d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Color>*, int32_t, int32_t)>(
    &::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f43ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "SetColors", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Color>*, int32_t, int32_t,
                                                                                     ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f43de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Color>)>(&::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6f43e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Color>, int32_t, int32_t)>(&::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f43edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Color>, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6f43f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>(),
                                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Color32>*)>(&::UnityEngine::Mesh::GetColors)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6f43fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetColors", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color32>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Color32>*)>(&::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6f4409c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color32>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Color32>*, int32_t, int32_t)>(
    &::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f44120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "SetColors", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color32>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Color32>*, int32_t, int32_t,
                                                                                     ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6f44128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color32>*>(), ::i2c::type_of<int32_t>(),
                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Color32>)>(&::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6f441c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Color32>, int32_t, int32_t)>(&::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f44238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "SetColors", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Color32>, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6f442ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>(), ::i2c::type_of<int32_t>(),
                                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6f44324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6f443b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6f4444c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, int32_t, int32_t)>(
    &::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f443b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Mesh*>(),
            { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, int32_t, int32_t,
                                                                                     ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f444e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUVs",
                                                                       {},
                                                                       { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, int32_t, int32_t)>(
    &::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f44444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Mesh*>(),
            { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, int32_t, int32_t,
                                                                                     ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f44570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUVs",
                                                                       {},
                                                                       { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, int32_t, int32_t)>(
    &::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f444d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Mesh*>(),
            { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, int32_t, int32_t,
                                                                                     ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f44600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUVs",
                                                                       {},
                                                                       { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUvsImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, int32_t, ::System::Array*, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetUvsImpl)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6f44690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUvsImpl",
                                                                       {},
                                                                       { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::ArrayW<::UnityEngine::Vector2>)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f447a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f4480c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::ArrayW<::UnityEngine::Vector4>)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f44878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::ArrayW<::UnityEngine::Vector2>, int32_t, int32_t)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6f447f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                         { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::ArrayW<::UnityEngine::Vector2>, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6f448e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUVs",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::ArrayW<::UnityEngine::Vector3>, int32_t, int32_t)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6f44860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                         { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::ArrayW<::UnityEngine::Vector3>, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6f448fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUVs",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::ArrayW<::UnityEngine::Vector4>, int32_t, int32_t)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6f448cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                         { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::ArrayW<::UnityEngine::Vector4>, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6f44914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUVs",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*)>(&::UnityEngine::Mesh::GetUVs)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6f4492c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "GetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::UnityEngine::Mesh::GetUVs)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6f44994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "GetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(&::UnityEngine::Mesh::GetUVs)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6f449fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "GetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_vertexAttributeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_vertexAttributeCount)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f44a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_vertexAttributeCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetVertexAttributes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6f44a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>)>(&::UnityEngine::Mesh::GetVertexAttributes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f44ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>*)>(
    &::UnityEngine::Mesh::GetVertexAttributes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f44adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "GetVertexAttributes", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertexBufferParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>)>(
    &::UnityEngine::Mesh::SetVertexBufferParams)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f44ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "SetVertexBufferParams", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertexBufferParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>)>(
    &::UnityEngine::Mesh::SetVertexBufferParams)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f44ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Mesh*>(),
                         { "SetVertexBufferParams", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.AcquireReadOnlyMeshData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Mesh_MeshDataArray (*)(::UnityEngine::Mesh*)>(&::UnityEngine::Mesh::AcquireReadOnlyMeshData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6f44b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "AcquireReadOnlyMeshData", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.AcquireReadOnlyMeshData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Mesh_MeshDataArray (*)(::ArrayW<::UnityEngine::Mesh*>)>(&::UnityEngine::Mesh::AcquireReadOnlyMeshData)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6f44db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "AcquireReadOnlyMeshData", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.AcquireReadOnlyMeshData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Mesh_MeshDataArray (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*)>(
    &::UnityEngine::Mesh::AcquireReadOnlyMeshData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6f45124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "AcquireReadOnlyMeshData", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.AllocateWritableMeshData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Mesh_MeshDataArray (*)(int32_t)>(&::UnityEngine::Mesh::AllocateWritableMeshData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f45214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "AllocateWritableMeshData", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.AllocateWritableMeshData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Mesh_MeshDataArray (*)(::UnityEngine::Mesh*)>(&::UnityEngine::Mesh::AllocateWritableMeshData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6f45390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "AllocateWritableMeshData", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.AllocateWritableMeshData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Mesh_MeshDataArray (*)(::ArrayW<::UnityEngine::Mesh*>)>(&::UnityEngine::Mesh::AllocateWritableMeshData)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6f453c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "AllocateWritableMeshData", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.AllocateWritableMeshData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Mesh_MeshDataArray (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*)>(
    &::UnityEngine::Mesh::AllocateWritableMeshData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6f4545c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "AllocateWritableMeshData", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.ApplyAndDisposeWritableMeshData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh_MeshDataArray, ::UnityEngine::Mesh*, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::ApplyAndDisposeWritableMeshData)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6f4554c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "ApplyAndDisposeWritableMeshData",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::UnityEngine::Mesh_MeshDataArray>(), ::i2c::type_of<::UnityEngine::Mesh*>(),
                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.ApplyAndDisposeWritableMeshData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh_MeshDataArray, ::ArrayW<::UnityEngine::Mesh*>, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::ApplyAndDisposeWritableMeshData)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6f45790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "ApplyAndDisposeWritableMeshData",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Mesh_MeshDataArray>(), ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.ApplyAndDisposeWritableMeshData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh_MeshDataArray, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*,
                                                                ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::ApplyAndDisposeWritableMeshData)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6f45aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "ApplyAndDisposeWritableMeshData",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::UnityEngine::Mesh_MeshDataArray>(),
                                                                                                          ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>(),
                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetVertexBuffer)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6f45c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexBuffer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetIndexBuffer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6f45d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndexBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBoneWeightBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Mesh::*)(::UnityEngine::SkinWeights)>(&::UnityEngine::Mesh::GetBoneWeightBuffer)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x6f45da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBoneWeightBuffer", {}, { ::i2c::type_of<::UnityEngine::SkinWeights>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::BlendShapeBufferLayout)>(
    &::UnityEngine::Mesh::GetBlendShapeBuffer)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6f46030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::BlendShapeBufferLayout>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetBlendShapeBuffer)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6f46164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeBufferRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BlendShapeBufferRange (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetBlendShapeBufferRange)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6f46288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeBufferRange", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.PrintErrorCantAccessIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::PrintErrorCantAccessIndices)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6f46360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "PrintErrorCantAccessIndices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CheckCanAccessSubmesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Mesh::*)(int32_t, bool)>(&::UnityEngine::Mesh::CheckCanAccessSubmesh)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6f46420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "CheckCanAccessSubmesh", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CheckCanAccessSubmeshTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::CheckCanAccessSubmeshTriangles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f46568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "CheckCanAccessSubmeshTriangles", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CheckCanAccessSubmeshIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::CheckCanAccessSubmeshIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f46570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "CheckCanAccessSubmeshIndices", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_triangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_triangles)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6f46578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_triangles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_triangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>)>(&::UnityEngine::Mesh::set_triangles)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6f465f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_triangles", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetTriangles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f46734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTriangles", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::Mesh::*)(int32_t, bool)>(&::UnityEngine::Mesh::GetTriangles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f46740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTriangles", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::Mesh::*)(int32_t, int32_t, bool)>(&::UnityEngine::Mesh::GetTriangles)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6f4674c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTriangles", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, int32_t)>(&::UnityEngine::Mesh::GetTriangles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f4688c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTriangles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, int32_t, bool)>(&::UnityEngine::Mesh::GetTriangles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f46aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "GetTriangles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, int32_t, int32_t, bool)>(&::UnityEngine::Mesh::GetTriangles)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6f46898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Mesh*>(),
            { "GetTriangles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<uint16_t>*, int32_t, bool)>(&::UnityEngine::Mesh::GetTriangles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f46ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "GetTriangles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<uint16_t>*, int32_t, int32_t, bool)>(&::UnityEngine::Mesh::GetTriangles)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6f46ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Mesh*>(),
            { "GetTriangles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetIndices)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f46cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndices", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::Mesh::*)(int32_t, bool)>(&::UnityEngine::Mesh::GetIndices)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f46e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndices", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::Mesh::*)(int32_t, int32_t, bool)>(&::UnityEngine::Mesh::GetIndices)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6f46cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndices", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, int32_t)>(&::UnityEngine::Mesh::GetIndices)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f46e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, int32_t, bool)>(&::UnityEngine::Mesh::GetIndices)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f47044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "GetIndices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, int32_t, int32_t, bool)>(&::UnityEngine::Mesh::GetIndices)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6f46e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Mesh*>(),
                         { "GetIndices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<uint16_t>*, int32_t, bool)>(&::UnityEngine::Mesh::GetIndices)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f4717c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "GetIndices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<uint16_t>*, int32_t, int32_t, bool)>(&::UnityEngine::Mesh::GetIndices)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6f47188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Mesh*>(),
                         { "GetIndices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetIndexStart)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f472f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndexStart", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Mesh::*)(int32_t, int32_t)>(&::UnityEngine::Mesh::GetIndexStart)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6f47370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndexStart", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetIndexCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f4749c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndexCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Mesh::*)(int32_t, int32_t)>(&::UnityEngine::Mesh::GetIndexCount)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6f47050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndexCount", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBaseVertex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetBaseVertex)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6f4751c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBaseVertex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CheckIndicesArrayRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, int32_t, int32_t)>(&::UnityEngine::Mesh::CheckIndicesArrayRange)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6f47598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "CheckIndicesArrayRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTrianglesImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::UnityEngine::Rendering::IndexFormat, ::System::Array*, int32_t, int32_t, int32_t, bool, int32_t,
                                                                                     int32_t)>(&::UnityEngine::Mesh::SetTrianglesImpl)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6f466ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "SetTrianglesImpl",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>, int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f47724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>, int32_t, bool)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6f477fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f47788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "SetTriangles", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>, int32_t, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f47890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "SetTriangles", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>, int32_t, int32_t, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6f4786c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>, int32_t, int32_t, int32_t, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6f47910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles",
                                                                                    {},
                                                                                    { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<uint16_t>, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f479c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "SetTriangles", {}, { ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<uint16_t>, int32_t, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f47a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Mesh*>(),
                         { "SetTriangles", {}, { ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<uint16_t>, int32_t, int32_t, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6f47a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<uint16_t>, int32_t, int32_t, int32_t, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6f47ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles",
                                                                                    {},
                                                                                    { ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f47b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, int32_t, bool)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f47c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "SetTriangles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6f47ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Mesh*>(),
            { "SetTriangles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, int32_t, int32_t, bool, int32_t)>(
    &::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6f47c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(),
                                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, int32_t, int32_t, int32_t, bool, int32_t)>(
    &::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6f47c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(),
                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, int32_t, int32_t, int32_t, int32_t, bool, int32_t)>(
    &::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6f47d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles",
                                                                       {},
                                                                       { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<uint16_t>*, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6f47e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Mesh*>(),
            { "SetTriangles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<uint16_t>*, int32_t, int32_t, bool, int32_t)>(
    &::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6f47f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<uint16_t>*, int32_t, int32_t, int32_t, bool, int32_t)>(
    &::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6f47f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(),
                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<uint16_t>*, int32_t, int32_t, int32_t, int32_t, bool, int32_t)>(
    &::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6f48000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles",
                                                                       {},
                                                                       { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>, ::UnityEngine::MeshTopology, int32_t)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f48134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "SetIndices", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>, ::UnityEngine::MeshTopology, int32_t, bool)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6f4822c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "SetIndices", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>, ::UnityEngine::MeshTopology, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6f481a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(),
                                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>, ::UnityEngine::MeshTopology, int32_t, int32_t, bool, int32_t)>(
    &::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6f482cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                    {},
                                                                                    { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(),
                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>, int32_t, int32_t, ::UnityEngine::MeshTopology, int32_t, bool, int32_t)>(
    &::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f482a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "SetIndices",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>, int32_t, int32_t, ::UnityEngine::MeshTopology, int32_t, int32_t, bool, int32_t)>(
    &::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6f48354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                          ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(),
                                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<uint16_t>, ::UnityEngine::MeshTopology, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6f48410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(),
                                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<uint16_t>, ::UnityEngine::MeshTopology, int32_t, int32_t, bool, int32_t)>(
    &::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6f484bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                    {},
                                                                                    { ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(),
                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<uint16_t>, int32_t, int32_t, ::UnityEngine::MeshTopology, int32_t, bool, int32_t)>(
    &::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f48494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "SetIndices",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<uint16_t>, int32_t, int32_t, ::UnityEngine::MeshTopology, int32_t, int32_t, bool, int32_t)>(
    &::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6f48544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                          ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(),
                                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, ::UnityEngine::MeshTopology, int32_t, bool, int32_t)>(
    &::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6f48600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::MeshTopology>(),
                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, ::UnityEngine::MeshTopology, int32_t, int32_t, bool, int32_t)>(
    &::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6f486e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::MeshTopology>(),
                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, int32_t, int32_t, ::UnityEngine::MeshTopology, int32_t, bool,
                                                                                     int32_t)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f486c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "SetIndices",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, int32_t, int32_t, ::UnityEngine::MeshTopology, int32_t, int32_t,
                                                                                     bool, int32_t)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6f487ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<uint16_t>*, ::UnityEngine::MeshTopology, int32_t, bool, int32_t)>(
    &::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6f488e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                       {},
                                                                       { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<::UnityEngine::MeshTopology>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<uint16_t>*, ::UnityEngine::MeshTopology, int32_t, int32_t, bool, int32_t)>(
    &::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6f489c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                       {},
                                                                       { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<::UnityEngine::MeshTopology>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<uint16_t>*, int32_t, int32_t, ::UnityEngine::MeshTopology, int32_t, bool,
                                                                                     int32_t)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f489a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "SetIndices",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<uint16_t>*, int32_t, int32_t, ::UnityEngine::MeshTopology, int32_t, int32_t,
                                                                                     bool, int32_t)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6f48a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetSubMeshes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor>, int32_t, int32_t,
                                                                                     ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetSubMeshes)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x6f48bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetSubMeshes",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetSubMeshes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor>, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetSubMeshes)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f48ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "SetSubMeshes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor>>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetSubMeshes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>*, int32_t, int32_t,
                                                                                     ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetSubMeshes)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6f48ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetSubMeshes",
                                                                       {},
                                                                       { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>*>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetSubMeshes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>*,
                                                                                     ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetSubMeshes)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6f48f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetSubMeshes",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.ValidateLodIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::ValidateLodIndex)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6f49010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "ValidateLodIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.ValidateSubMeshIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::ValidateSubMeshIndex)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6f490cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "ValidateSubMeshIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.ValidateCanWriteToLods
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::ValidateCanWriteToLods)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6f49194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "ValidateCanWriteToLods", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetLod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, int32_t, ::UnityEngine::MeshLodRange, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetLod)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6f491f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Mesh*>(),
            { "SetLod", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshLodRange>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetLods
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>*, int32_t,
                                                                                     ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetLods)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6f49254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLods",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>*>(),
                                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetLods
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>*, int32_t, int32_t, int32_t,
                                                                                     ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetLods)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x6f49718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLods",
                                                                       {},
                                                                       { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>*>(), ::i2c::type_of<int32_t>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetLods
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::MeshLodRange>, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetLods)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6f49a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "SetLods", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::MeshLodRange>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetLods
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::MeshLodRange>, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetLods)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x6f49430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLods",
                                                                                    {},
                                                                                    { ::i2c::type_of<::ArrayW<::UnityEngine::MeshLodRange>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetLods
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Mesh::*)(::Unity::Collections::NativeArray_1<::UnityEngine::MeshLodRange>, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetLods)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6f49be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLods",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::MeshLodRange>>(),
                                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetLods
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::Unity::Collections::NativeArray_1<::UnityEngine::MeshLodRange>, int32_t, int32_t, int32_t,
                                                                                     ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetLods)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x6f49d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLods",
                                                                       {},
                                                                       { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::MeshLodRange>>(), ::i2c::type_of<int32_t>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetLods
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::MeshLodRange> (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetLods)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f4a0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetLods", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetLods
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>*, int32_t)>(&::UnityEngine::Mesh::GetLods)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6f4a0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "GetLods", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBindposes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*)>(&::UnityEngine::Mesh::GetBindposes)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6f4a1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBindposes", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBoneWeights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>*)>(&::UnityEngine::Mesh::GetBoneWeights)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6f4a2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBoneWeights", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_boneWeights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::BoneWeight> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_boneWeights)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f4a3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_boneWeights", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_boneWeights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::BoneWeight>)>(&::UnityEngine::Mesh::set_boneWeights)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f4a3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_boneWeights", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::BoneWeight>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_skinWeightBufferLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SkinWeights (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_skinWeightBufferLayout)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f4a3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_skinWeightBufferLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(bool)>(&::UnityEngine::Mesh::Clear)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f4a3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "Clear", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f4a3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::RecalculateBounds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f4a400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateBounds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::RecalculateNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f4a4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateNormals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateTangents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::RecalculateTangents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f4a5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateTangents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::RecalculateBounds)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6f4a408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateBounds", {}, { ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::RecalculateNormals)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6f4a504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateNormals", {}, { ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateTangents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::RecalculateTangents)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6f4a600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateTangents", {}, { ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateUVDistributionMetric
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, float_t)>(&::UnityEngine::Mesh::RecalculateUVDistributionMetric)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6f4a6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateUVDistributionMetric", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateUVDistributionMetrics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(float_t)>(&::UnityEngine::Mesh::RecalculateUVDistributionMetrics)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6f4a7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateUVDistributionMetrics", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.MarkDynamic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::MarkDynamic)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6f4a8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "MarkDynamic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.UploadMeshData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(bool)>(&::UnityEngine::Mesh::UploadMeshData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6f4a914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "UploadMeshData", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.Optimize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::Optimize)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6f4a94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "Optimize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.OptimizeIndexBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::OptimizeIndexBuffers)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6f4aa2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "OptimizeIndexBuffers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.OptimizeReorderVertexBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::OptimizeReorderVertexBuffer)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6f4ab0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "OptimizeReorderVertexBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTopology
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MeshTopology (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetTopology)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6f4abec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTopology", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CombineMeshes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::CombineInstance>, bool, bool, bool)>(&::UnityEngine::Mesh::CombineMeshes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f4aca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "CombineMeshes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::CombineInstance>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CombineMeshes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::CombineInstance>, bool, bool)>(&::UnityEngine::Mesh::CombineMeshes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f4aca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "CombineMeshes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::CombineInstance>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CombineMeshes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::CombineInstance>, bool)>(&::UnityEngine::Mesh::CombineMeshes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f4acb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "CombineMeshes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::CombineInstance>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CombineMeshes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::CombineInstance>)>(&::UnityEngine::Mesh::CombineMeshes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6f4acbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "CombineMeshes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::CombineInstance>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.FromInstanceID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::EntityId const>)>(&::UnityEngine::Mesh::FromInstanceID_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3a92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "FromInstanceID_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::EntityId const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_indexFormat_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IndexFormat (*)(::System::IntPtr)>(&::UnityEngine::Mesh::get_indexFormat_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3a9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_indexFormat_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_indexFormat_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::IndexFormat)>(&::UnityEngine::Mesh::set_indexFormat_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3aab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "set_indexFormat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTotalIndexCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::UnityEngine::Mesh::GetTotalIndexCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3ab78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTotalIndexCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndexBufferParams_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::UnityEngine::Rendering::IndexFormat)>(&::UnityEngine::Mesh::SetIndexBufferParams_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f3ac4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "SetIndexBufferParams_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.InternalSetIndexBufferData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::InternalSetIndexBufferData_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6f3ad68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "InternalSetIndexBufferData_Injected",
                                                                       {},
                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.InternalSetIndexBufferDataFromArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::Array*, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::InternalSetIndexBufferDataFromArray_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6f3aeb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "InternalSetIndexBufferDataFromArray_Injected",
                                                                       {},
                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertexBufferParamsFromPtr_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::SetVertexBufferParamsFromPtr_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6f3afe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Mesh*>(),
            { "SetVertexBufferParamsFromPtr_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertexBufferParamsFromArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Mesh::SetVertexBufferParamsFromArray_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f3b148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "SetVertexBufferParamsFromArray_Injected",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.InternalSetVertexBufferData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::InternalSetVertexBufferData_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6f3b274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "InternalSetVertexBufferData_Injected",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.InternalSetVertexBufferDataFromArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::System::Array*, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::InternalSetVertexBufferDataFromArray_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6f3b3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "InternalSetVertexBufferDataFromArray_Injected",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributesAlloc_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::IntPtr)>(&::UnityEngine::Mesh::GetVertexAttributesAlloc_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3b4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributesAlloc_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributesArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Mesh::GetVertexAttributesArray_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3b640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "GetVertexAttributesArray_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributesList_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::Mesh::GetVertexAttributesList_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3b890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "GetVertexAttributesList_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeCountImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Mesh::GetVertexAttributeCountImpl_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3b954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributeCountImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttribute_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Rendering::VertexAttributeDescriptor>)>(
    &::UnityEngine::Mesh::GetVertexAttribute_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f3ba38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttribute_Injected",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                                          ::i2c::type_of<::by_ref<::UnityEngine::Rendering::VertexAttributeDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexStartImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::Mesh::GetIndexStartImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f3bb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "GetIndexStartImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexCountImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::Mesh::GetIndexCountImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f3bc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "GetIndexCountImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTrianglesCountImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::Mesh::GetTrianglesCountImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f3bcfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "GetTrianglesCountImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBaseVertexImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::GetBaseVertexImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3bde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBaseVertexImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTrianglesImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, bool, int32_t, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(
    &::UnityEngine::Mesh::GetTrianglesImpl_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f3bfac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTrianglesImpl_Injected",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(),
                                                                                      ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndicesImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, bool, int32_t, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(
    &::UnityEngine::Mesh::GetIndicesImpl_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f3c1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndicesImpl_Injected",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(),
                                                                                      ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndicesImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::UnityEngine::MeshTopology, ::UnityEngine::Rendering::IndexFormat, ::System::Array*, int32_t, int32_t, bool,
                                                                int32_t, int32_t)>(&::UnityEngine::Mesh::SetIndicesImpl_Injected)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6f3c2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndicesImpl_Injected",
                                                                       {},
                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(),
                                                                         ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndicesNativeArrayImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::UnityEngine::MeshTopology, ::UnityEngine::Rendering::IndexFormat, ::System::IntPtr, int32_t, int32_t, bool,
                                                                int32_t, int32_t)>(&::UnityEngine::Mesh::SetIndicesNativeArrayImpl_Injected)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6f3c480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndicesNativeArrayImpl_Injected",
                                                                       {},
                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(),
                                                                         ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTrianglesNonAllocImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, int32_t, bool, int32_t)>(
    &::UnityEngine::Mesh::GetTrianglesNonAllocImpl_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f3c6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTrianglesNonAllocImpl_Injected",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(),
                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTrianglesNonAllocImpl16_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, int32_t, bool, int32_t)>(
    &::UnityEngine::Mesh::GetTrianglesNonAllocImpl16_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f3c888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTrianglesNonAllocImpl16_Injected",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(),
                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndicesNonAllocImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, int32_t, bool, int32_t)>(
    &::UnityEngine::Mesh::GetIndicesNonAllocImpl_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f3ca70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndicesNonAllocImpl_Injected",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(),
                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndicesNonAllocImpl16_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, int32_t, bool, int32_t)>(
    &::UnityEngine::Mesh::GetIndicesNonAllocImpl16_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f3cc58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndicesNonAllocImpl16_Injected",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(),
                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.PrintErrorCantAccessChannel_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::PrintErrorCantAccessChannel_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3cd54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "PrintErrorCantAccessChannel_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.HasVertexAttribute_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::HasVertexAttribute_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3ce28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "HasVertexAttribute_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeDimension_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::GetVertexAttributeDimension_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3cefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "GetVertexAttributeDimension_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeFormat_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::VertexAttributeFormat (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute)>(
    &::UnityEngine::Mesh::GetVertexAttributeFormat_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3cfd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "GetVertexAttributeFormat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeStream_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::GetVertexAttributeStream_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3d0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "GetVertexAttributeStream_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeOffset_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::GetVertexAttributeOffset_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3d178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "GetVertexAttributeOffset_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetArrayForChannelImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t, ::System::Array*,
                                                                int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetArrayForChannelImpl_Injected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6f3d29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "SetArrayForChannelImpl_Injected",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetNativeArrayForChannelImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t, ::System::IntPtr,
                                                                int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetNativeArrayForChannelImpl_Injected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6f3d418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "SetNativeArrayForChannelImpl_Injected",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetAllocArrayFromChannelImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t)>(
    &::UnityEngine::Mesh::GetAllocArrayFromChannelImpl_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6f3d55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetAllocArrayFromChannelImpl_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetArrayFromChannelImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t,
                                                                ::System::Array*)>(&::UnityEngine::Mesh::GetArrayFromChannelImpl_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f3d668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "GetArrayFromChannelImpl_Injected",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_vertexBufferCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Mesh::get_vertexBufferCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3d754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_vertexBufferCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexBufferStride_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::GetVertexBufferStride_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3d820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexBufferStride_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetNativeVertexBufferPtr_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::GetNativeVertexBufferPtr_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3d8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetNativeVertexBufferPtr_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetNativeIndexBufferPtr_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Mesh::GetNativeIndexBufferPtr_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3d9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetNativeIndexBufferPtr_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexBufferImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::GetVertexBufferImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3da9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexBufferImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexBufferImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Mesh::GetIndexBufferImpl_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3db74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndexBufferImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBoneWeightBufferImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::GetBoneWeightBufferImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3dc58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBoneWeightBufferImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeBufferImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::GetBlendShapeBufferImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3dd44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeBufferImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_vertexBufferTarget_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer_Target (*)(::System::IntPtr)>(&::UnityEngine::Mesh::get_vertexBufferTarget_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3de08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_vertexBufferTarget_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_vertexBufferTarget_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::GraphicsBuffer_Target)>(&::UnityEngine::Mesh::set_vertexBufferTarget_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3ded4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "set_vertexBufferTarget_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_indexBufferTarget_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer_Target (*)(::System::IntPtr)>(&::UnityEngine::Mesh::get_indexBufferTarget_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3df98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_indexBufferTarget_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_indexBufferTarget_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::GraphicsBuffer_Target)>(&::UnityEngine::Mesh::set_indexBufferTarget_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3e064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "set_indexBufferTarget_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_blendShapeCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Mesh::get_blendShapeCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3e128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_blendShapeCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.ClearBlendShapes_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Mesh::ClearBlendShapes_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3e1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "ClearBlendShapes_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Mesh::GetBlendShapeName_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f3e360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Mesh*>(),
            { "GetBlendShapeName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeIndex_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Mesh::GetBlendShapeIndex_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3e528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                         { "GetBlendShapeIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeFrameCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::GetBlendShapeFrameCount_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3e5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeFrameCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeFrameWeight_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::Mesh::GetBlendShapeFrameWeight_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f3e6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "GetBlendShapeFrameWeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeFrameVertices_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>,
                                                                ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Mesh::GetBlendShapeFrameVertices_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f3e8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "GetBlendShapeFrameVertices_Injected",
                              {},
                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.AddBlendShapeFrame_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, float_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>,
                                                                ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Mesh::AddBlendShapeFrame_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6f3eb4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "AddBlendShapeFrame_Injected",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBlendShapeOffsetInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::BlendShape>)>(&::UnityEngine::Mesh::GetBlendShapeOffsetInternal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f3ed44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "GetBlendShapeOffsetInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::BlendShape>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.HasBoneWeights_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Mesh::HasBoneWeights_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3ee18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "HasBoneWeights_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBoneWeightsImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Mesh::GetBoneWeightsImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3efb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                         { "GetBoneWeightsImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetBoneWeightsImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Mesh::SetBoneWeightsImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3f0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                         { "SetBoneWeightsImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.InternalSetBoneWeights_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::InternalSetBoneWeights_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f3f278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "InternalSetBoneWeights_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetAllBoneWeightsArraySize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Mesh::GetAllBoneWeightsArraySize_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3f5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetAllBoneWeightsArraySize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBoneWeightBufferLayoutInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Mesh::GetBoneWeightBufferLayoutInternal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3f674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBoneWeightBufferLayoutInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetAllBoneWeightsArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Mesh::GetAllBoneWeightsArray_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3f6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetAllBoneWeightsArray_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBonesPerVertexArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Mesh::GetBonesPerVertexArray_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3f6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBonesPerVertexArray_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_bindposeCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Mesh::get_bindposeCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3f7a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_bindposeCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_bindposes_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Mesh::get_bindposes_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3f944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "get_bindposes_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_bindposes_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Mesh::set_bindposes_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3fa8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "set_bindposes_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetBindposesFromScript_NativeArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::SetBindposesFromScript_NativeArray_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f3fd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "SetBindposesFromScript_NativeArray_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBindposesArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Mesh::GetBindposesArray_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3fd74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBindposesArray_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBoneWeightsNonAllocImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(
    &::UnityEngine::Mesh::GetBoneWeightsNonAllocImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f3ff0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "GetBoneWeightsNonAllocImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetBindposesNonAllocImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Mesh::GetBindposesNonAllocImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f400ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                            { "GetBindposesNonAllocImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_isReadable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Mesh::get_isReadable_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f40170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_isReadable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_canAccess_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Mesh::get_canAccess_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f4022c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_canAccess_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_vertexCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Mesh::get_vertexCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f40268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_vertexCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_subMeshCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Mesh::get_subMeshCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f40324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_subMeshCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_subMeshCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::set_subMeshCount_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f403f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_subMeshCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetSubMesh_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor const>, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetSubMesh_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6f404dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetSubMesh_Injected",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                                          ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubMeshDescriptor const>>(),
                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetSubMesh_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>)>(&::UnityEngine::Mesh::GetSubMesh_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f405f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Mesh*>(),
                         { "GetSubMesh_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetAllSubMeshesAtOnceFromArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetAllSubMeshesAtOnceFromArray_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f40770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetAllSubMeshesAtOnceFromArray_Injected",
                                                                       {},
                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetAllSubMeshesAtOnceFromNativeArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetAllSubMeshesAtOnceFromNativeArray_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f4088c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetAllSubMeshesAtOnceFromNativeArray_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetLodCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::SetLodCount_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f40988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLodCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetLodSelectionCurve_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Mesh_LodSelectionCurve const>)>(&::UnityEngine::Mesh::SetLodSelectionCurve_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f40a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                         { "SetLodSelectionCurve_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Mesh_LodSelectionCurve const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetLodsFromArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, int32_t, int32_t,
                                                                ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetLodsFromArray_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f40bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "SetLodsFromArray_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetLodsFromNativeArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetLodsFromNativeArray_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f40cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLodsFromNativeArray_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetLodImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, ::by_ref<::UnityEngine::MeshLodRange const>, ::UnityEngine::Rendering::MeshUpdateFlags)>(
    &::UnityEngine::Mesh::SetLodImpl_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f40e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                             { "SetLodImpl_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::MeshLodRange const>>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetLodsAlloc_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Mesh::GetLodsAlloc_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f40ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Mesh*>(),
            { "GetLodsAlloc_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetLodsNonAlloc_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, int32_t)>(&::UnityEngine::Mesh::GetLodsNonAlloc_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f411ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Mesh*>(),
            { "GetLodsNonAlloc_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetLodCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Mesh::GetLodCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f41280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetLodCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetLodSelectionCurve_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Mesh_LodSelectionCurve>)>(&::UnityEngine::Mesh::GetLodSelectionCurve_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f41354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "GetLodSelectionCurve_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Mesh_LodSelectionCurve>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetLod_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, ::by_ref<::UnityEngine::MeshLodRange>)>(&::UnityEngine::Mesh::GetLod_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6f41448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Mesh*>(),
            { "GetLod_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::MeshLodRange>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_bounds_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::Mesh::get_bounds_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f41554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_bounds_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_bounds_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bounds const>)>(&::UnityEngine::Mesh::set_bounds_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f41628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_bounds_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.ClearImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Mesh::ClearImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f416fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "ClearImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateBoundsImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::RecalculateBoundsImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f417d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "RecalculateBoundsImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateNormalsImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::RecalculateNormalsImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f418a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "RecalculateNormalsImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateTangentsImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::RecalculateTangentsImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f41978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "RecalculateTangentsImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.MarkDynamicImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Mesh::MarkDynamicImpl_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f41a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "MarkDynamicImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.MarkModified_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Mesh::MarkModified_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f41af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "MarkModified_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.UploadMeshDataImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Mesh::UploadMeshDataImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f41bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "UploadMeshDataImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTopologyImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MeshTopology (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::GetTopologyImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f41c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTopologyImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateUVDistributionMetricImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, float_t)>(&::UnityEngine::Mesh::RecalculateUVDistributionMetricImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f41d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                { "RecalculateUVDistributionMetricImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateUVDistributionMetricsImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Mesh::RecalculateUVDistributionMetricsImpl_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6f41e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateUVDistributionMetricsImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetUVDistributionMetric_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::GetUVDistributionMetric_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f41f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetUVDistributionMetric_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CombineMeshesImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, bool, bool, bool)>(
    &::UnityEngine::Mesh::CombineMeshesImpl_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f420a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "CombineMeshesImpl_Injected",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                      ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.OptimizeImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Mesh::OptimizeImpl_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f42190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "OptimizeImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.OptimizeIndexBuffersImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Mesh::OptimizeIndexBuffersImpl_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f4224c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "OptimizeIndexBuffersImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.OptimizeReorderVertexBufferImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Mesh::OptimizeReorderVertexBufferImpl_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f42308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "OptimizeReorderVertexBufferImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Mesh::Internal_Create(/* [Writable] */ ::UnityEngine::Mesh* mono) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "Internal_Create", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mono);
}
inline void UnityEngine::Mesh::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Mesh::FromInstanceID(::UnityEngine::EntityId id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "FromInstanceID", {}, { ::i2c::type_of<::UnityEngine::EntityId>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, id);
}
inline ::UnityEngine::Rendering::IndexFormat UnityEngine::Mesh::get_indexFormat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_indexFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IndexFormat>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_indexFormat(::UnityEngine::Rendering::IndexFormat value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_indexFormat", {}, { ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t UnityEngine::Mesh::GetTotalIndexCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTotalIndexCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void UnityEngine::Mesh::SetIndexBufferParams(int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndexBufferParams", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indexCount, format);
}
inline void UnityEngine::Mesh::InternalSetIndexBufferData(::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                                          ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "InternalSetIndexBufferData",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, dataStart, meshBufferStart, count, elemSize, flags);
}
inline void UnityEngine::Mesh::InternalSetIndexBufferDataFromArray(::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                                                   ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "InternalSetIndexBufferDataFromArray",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, dataStart, meshBufferStart, count, elemSize, flags);
}
inline void UnityEngine::Mesh::SetVertexBufferParamsFromPtr(int32_t vertexCount, ::System::IntPtr attributesPtr, int32_t attributesCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "SetVertexBufferParamsFromPtr", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertexCount, attributesPtr, attributesCount);
}
inline void UnityEngine::Mesh::SetVertexBufferParamsFromArray(int32_t vertexCount, /* [ParamArray] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                       { "SetVertexBufferParamsFromArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertexCount, attributes);
}
inline void UnityEngine::Mesh::InternalSetVertexBufferData(int32_t stream, ::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                                           ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "InternalSetVertexBufferData",
                                                                     {},
                                                                     { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, data, dataStart, meshBufferStart, count, elemSize, flags);
}
inline void UnityEngine::Mesh::InternalSetVertexBufferDataFromArray(int32_t stream, ::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                                                    ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "InternalSetVertexBufferDataFromArray",
                                                                     {},
                                                                     { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, data, dataStart, meshBufferStart, count, elemSize, flags);
}
inline ::System::Array* UnityEngine::Mesh::GetVertexAttributesAlloc() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributesAlloc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(this, ___internal_method);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributesArray(/* [NotNull] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributesArray", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, attributes);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributesList(/* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>* attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "GetVertexAttributesList", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, attributes);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributeCountImpl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributeCountImpl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::VertexAttributeDescriptor UnityEngine::Mesh::GetVertexAttribute(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttribute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VertexAttributeDescriptor>(this, ___internal_method, index);
}
inline uint32_t UnityEngine::Mesh::GetIndexStartImpl(int32_t submesh, int32_t meshlod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndexStartImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, submesh, meshlod);
}
inline uint32_t UnityEngine::Mesh::GetIndexCountImpl(int32_t submesh, int32_t meshlod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndexCountImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, submesh, meshlod);
}
inline uint32_t UnityEngine::Mesh::GetTrianglesCountImpl(int32_t submesh, int32_t meshlod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTrianglesCountImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, submesh, meshlod);
}
inline uint32_t UnityEngine::Mesh::GetBaseVertexImpl(int32_t submesh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBaseVertexImpl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, submesh);
}
inline ::ArrayW<int32_t> UnityEngine::Mesh::GetTrianglesImpl(int32_t submesh, bool applyBaseVertex, int32_t meshlod) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTrianglesImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, submesh, applyBaseVertex, meshlod);
}
inline ::ArrayW<int32_t> UnityEngine::Mesh::GetIndicesImpl(int32_t submesh, bool applyBaseVertex, int32_t meshlod) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndicesImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, submesh, applyBaseVertex, meshlod);
}
inline void UnityEngine::Mesh::SetIndicesImpl(int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::Array* indices, int32_t arrayStart,
                                              int32_t arraySize, bool calculateBounds, int32_t baseVertex, int32_t meshlod) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "SetIndicesImpl",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>(), ::i2c::type_of<::System::Array*>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, submesh, topology, indicesFormat, indices, arrayStart, arraySize, calculateBounds, baseVertex, meshlod);
}
inline void UnityEngine::Mesh::SetIndicesNativeArrayImpl(int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::IntPtr indices,
                                                         int32_t arrayStart, int32_t arraySize, bool calculateBounds, int32_t baseVertex, int32_t meshlod) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "SetIndicesNativeArrayImpl",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>(), ::i2c::type_of<::System::IntPtr>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, submesh, topology, indicesFormat, indices, arrayStart, arraySize, calculateBounds, baseVertex, meshlod);
}
inline void UnityEngine::Mesh::GetTrianglesNonAllocImpl(::ArrayW<int32_t> values, int32_t submesh, bool applyBaseVertex, int32_t meshlod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                       { "GetTrianglesNonAllocImpl", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values, submesh, applyBaseVertex, meshlod);
}
inline void UnityEngine::Mesh::GetTrianglesNonAllocImpl16(::ArrayW<uint16_t> values, int32_t submesh, bool applyBaseVertex, int32_t meshlod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                       { "GetTrianglesNonAllocImpl16", {}, { ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values, submesh, applyBaseVertex, meshlod);
}
inline void UnityEngine::Mesh::GetIndicesNonAllocImpl(::ArrayW<int32_t> values, int32_t submesh, bool applyBaseVertex, int32_t meshlod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                       { "GetIndicesNonAllocImpl", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values, submesh, applyBaseVertex, meshlod);
}
inline void UnityEngine::Mesh::GetIndicesNonAllocImpl16(::ArrayW<uint16_t> values, int32_t submesh, bool applyBaseVertex, int32_t meshlod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                       { "GetIndicesNonAllocImpl16", {}, { ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values, submesh, applyBaseVertex, meshlod);
}
inline void UnityEngine::Mesh::PrintErrorCantAccessChannel(::UnityEngine::Rendering::VertexAttribute ch) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "PrintErrorCantAccessChannel", {}, { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline bool UnityEngine::Mesh::HasVertexAttribute(::UnityEngine::Rendering::VertexAttribute attr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "HasVertexAttribute", {}, { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attr);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributeDimension(::UnityEngine::Rendering::VertexAttribute attr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributeDimension", {}, { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, attr);
}
inline ::UnityEngine::Rendering::VertexAttributeFormat UnityEngine::Mesh::GetVertexAttributeFormat(::UnityEngine::Rendering::VertexAttribute attr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributeFormat", {}, { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VertexAttributeFormat>(this, ___internal_method, attr);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributeStream(::UnityEngine::Rendering::VertexAttribute attr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributeStream", {}, { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, attr);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributeOffset(::UnityEngine::Rendering::VertexAttribute attr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributeOffset", {}, { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, attr);
}
inline void UnityEngine::Mesh::SetArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::Array* values,
                                                      int32_t arraySize, int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetArrayForChannelImpl",
                                                                     {},
                                                                     { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, format, dim, values, arraySize, valuesStart, valuesCount, flags);
}
inline void UnityEngine::Mesh::SetNativeArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim,
                                                            ::System::IntPtr values, int32_t arraySize, int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetNativeArrayForChannelImpl",
                                                                     {},
                                                                     { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, format, dim, values, arraySize, valuesStart, valuesCount, flags);
}
inline ::System::Array* UnityEngine::Mesh::GetAllocArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetAllocArrayFromChannelImpl",
                                                                                         {},
                                                                                         { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(),
                                                                                           ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(this, ___internal_method, channel, format, dim);
}
inline void UnityEngine::Mesh::GetArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim,
                                                       ::System::Array* values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetArrayFromChannelImpl",
                                                                     {},
                                                                     { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, format, dim, values);
}
inline int32_t UnityEngine::Mesh::get_vertexBufferCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_vertexBufferCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Mesh::GetVertexBufferStride(int32_t stream) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexBufferStride", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, stream);
}
inline ::System::IntPtr UnityEngine::Mesh::GetNativeVertexBufferPtr(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetNativeVertexBufferPtr", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, index);
}
inline ::System::IntPtr UnityEngine::Mesh::GetNativeIndexBufferPtr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetNativeIndexBufferPtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Mesh::GetVertexBufferImpl(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexBufferImpl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method, index);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Mesh::GetIndexBufferImpl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndexBufferImpl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Mesh::GetBoneWeightBufferImpl(int32_t bonesPerVertex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBoneWeightBufferImpl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method, bonesPerVertex);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Mesh::GetBlendShapeBufferImpl(int32_t layout) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeBufferImpl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method, layout);
}
inline ::UnityEngine::GraphicsBuffer_Target UnityEngine::Mesh::get_vertexBufferTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_vertexBufferTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer_Target>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_vertexBufferTarget(::UnityEngine::GraphicsBuffer_Target value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_vertexBufferTarget", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GraphicsBuffer_Target UnityEngine::Mesh::get_indexBufferTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_indexBufferTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer_Target>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_indexBufferTarget(::UnityEngine::GraphicsBuffer_Target value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_indexBufferTarget", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Mesh::get_blendShapeCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_blendShapeCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Mesh::ClearBlendShapes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "ClearBlendShapes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::Mesh::GetBlendShapeName(int32_t shapeIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeName", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, shapeIndex);
}
inline int32_t UnityEngine::Mesh::GetBlendShapeIndex(::StringW blendShapeName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeIndex", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, blendShapeName);
}
inline int32_t UnityEngine::Mesh::GetBlendShapeFrameCount(int32_t shapeIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeFrameCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, shapeIndex);
}
inline float_t UnityEngine::Mesh::GetBlendShapeFrameWeight(int32_t shapeIndex, int32_t frameIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeFrameWeight", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, shapeIndex, frameIndex);
}
inline void UnityEngine::Mesh::GetBlendShapeFrameVertices(int32_t shapeIndex, int32_t frameIndex, ::ArrayW<::UnityEngine::Vector3> deltaVertices, ::ArrayW<::UnityEngine::Vector3> deltaNormals,
                                                          ::ArrayW<::UnityEngine::Vector3> deltaTangents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeFrameVertices",
                                                                                  {},
                                                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(),
                                                                                    ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shapeIndex, frameIndex, deltaVertices, deltaNormals, deltaTangents);
}
inline void UnityEngine::Mesh::AddBlendShapeFrame(::StringW shapeName, float_t frameWeight, ::System::ReadOnlySpan_1<::UnityEngine::Vector3> deltaVertices,
                                                  ::System::ReadOnlySpan_1<::UnityEngine::Vector3> deltaNormals, ::System::ReadOnlySpan_1<::UnityEngine::Vector3> deltaTangents) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "AddBlendShapeFrame",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Vector3>>(),
                                                  ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shapeName, frameWeight, deltaVertices, deltaNormals, deltaTangents);
}
inline void UnityEngine::Mesh::AddBlendShapeFrame(::StringW shapeName, float_t frameWeight, ::ArrayW<::UnityEngine::Vector3> deltaVertices, ::ArrayW<::UnityEngine::Vector3> deltaNormals,
                                                  ::ArrayW<::UnityEngine::Vector3> deltaTangents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "AddBlendShapeFrame",
                                                                                  {},
                                                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(),
                                                                                    ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shapeName, frameWeight, deltaVertices, deltaNormals, deltaTangents);
}
inline ::UnityEngine::BlendShape UnityEngine::Mesh::GetBlendShapeOffsetInternal(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeOffsetInternal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::BlendShape>(this, ___internal_method, index);
}
inline bool UnityEngine::Mesh::HasBoneWeights() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "HasBoneWeights", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::BoneWeight> UnityEngine::Mesh::GetBoneWeightsImpl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBoneWeightsImpl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::BoneWeight>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::SetBoneWeightsImpl(::ArrayW<::UnityEngine::BoneWeight> weights) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetBoneWeightsImpl", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::BoneWeight>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, weights);
}
inline void UnityEngine::Mesh::SetBoneWeights(::Unity::Collections::NativeArray_1<uint8_t> bonesPerVertex, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1> weights) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Mesh*>(),
          { "SetBoneWeights", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bonesPerVertex, weights);
}
inline void UnityEngine::Mesh::InternalSetBoneWeights(::System::IntPtr bonesPerVertex, int32_t bonesPerVertexSize, ::System::IntPtr weights, int32_t weightsSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "InternalSetBoneWeights", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bonesPerVertex, bonesPerVertexSize, weights, weightsSize);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1> UnityEngine::Mesh::GetAllBoneWeights() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetAllBoneWeights", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>>(this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::Mesh::GetBonesPerVertex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBonesPerVertex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(this, ___internal_method);
}
inline int32_t UnityEngine::Mesh::GetAllBoneWeightsArraySize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetAllBoneWeightsArraySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Mesh::GetBoneWeightBufferLayoutInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBoneWeightBufferLayoutInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Mesh::GetAllBoneWeightsArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetAllBoneWeightsArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Mesh::GetBonesPerVertexArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBonesPerVertexArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline int32_t UnityEngine::Mesh::get_bindposeCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_bindposeCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Mesh::get_bindposes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_bindposes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_bindposes(::ArrayW<::UnityEngine::Matrix4x4> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_bindposes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> UnityEngine::Mesh::GetBindposes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBindposes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::SetBindposes(::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> poses) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetBindposes", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poses);
}
inline void UnityEngine::Mesh::SetBindposesFromScript_NativeArray(::System::IntPtr posesPtr, int32_t posesCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetBindposesFromScript_NativeArray", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, posesPtr, posesCount);
}
inline ::System::IntPtr UnityEngine::Mesh::GetBindposesArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBindposesArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline void UnityEngine::Mesh::GetBoneWeightsNonAllocImpl(::ArrayW<::UnityEngine::BoneWeight> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBoneWeightsNonAllocImpl", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::BoneWeight>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
inline void UnityEngine::Mesh::GetBindposesNonAllocImpl(::ArrayW<::UnityEngine::Matrix4x4> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBindposesNonAllocImpl", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
inline bool UnityEngine::Mesh::get_isReadable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_isReadable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Mesh::get_canAccess() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_canAccess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::Mesh::get_vertexCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_vertexCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Mesh::get_subMeshCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_subMeshCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_subMeshCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_subMeshCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Mesh::SetSubMesh(int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Mesh*>(),
          { "SetSubMesh", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::SubMeshDescriptor>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, desc, flags);
}
inline ::UnityEngine::Rendering::SubMeshDescriptor UnityEngine::Mesh::GetSubMesh(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetSubMesh", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SubMeshDescriptor>(this, ___internal_method, index);
}
inline void UnityEngine::Mesh::SetAllSubMeshesAtOnceFromArray(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor> desc, int32_t start, int32_t count,
                                                              ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetAllSubMeshesAtOnceFromArray",
                                                                                         {},
                                                                                         { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor>>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc, start, count, flags);
}
inline void UnityEngine::Mesh::SetAllSubMeshesAtOnceFromNativeArray(::System::IntPtr desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetAllSubMeshesAtOnceFromNativeArray",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc, start, count, flags);
}
inline void UnityEngine::Mesh::SetLodCount(int32_t numLevels) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLodCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numLevels);
}
inline void UnityEngine::Mesh::SetLodSelectionCurve(::UnityEngine::Mesh_LodSelectionCurve lodSelectionCurve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLodSelectionCurve", {}, { ::i2c::type_of<::UnityEngine::Mesh_LodSelectionCurve>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lodSelectionCurve);
}
inline void UnityEngine::Mesh::SetLodsFromArray(::ArrayW<::UnityEngine::MeshLodRange> levelRanges, int32_t start, int32_t count, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLodsFromArray",
                                                                                  {},
                                                                                  { ::i2c::type_of<::ArrayW<::UnityEngine::MeshLodRange>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelRanges, start, count, submesh, flags);
}
inline void UnityEngine::Mesh::SetLodsFromNativeArray(::System::IntPtr lodLevels, int32_t count, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLodsFromNativeArray",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lodLevels, count, submesh, flags);
}
inline void UnityEngine::Mesh::SetLodImpl(int32_t subMeshIndex, int32_t level, ::UnityEngine::MeshLodRange levelRange, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Mesh*>(),
          { "SetLodImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshLodRange>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subMeshIndex, level, levelRange, flags);
}
inline ::ArrayW<::UnityEngine::MeshLodRange> UnityEngine::Mesh::GetLodsAlloc(int32_t subMeshIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetLodsAlloc", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::MeshLodRange>>(this, ___internal_method, subMeshIndex);
}
inline void UnityEngine::Mesh::GetLodsNonAlloc(::ArrayW<::UnityEngine::MeshLodRange> levels, int32_t subMeshIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetLodsNonAlloc", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::MeshLodRange>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levels, subMeshIndex);
}
inline int32_t UnityEngine::Mesh::GetLodCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetLodCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Mesh_LodSelectionCurve UnityEngine::Mesh::GetLodSelectionCurve() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetLodSelectionCurve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_LodSelectionCurve>(this, ___internal_method);
}
inline ::UnityEngine::MeshLodRange UnityEngine::Mesh::GetLod(int32_t subMeshIndex, int32_t levelIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetLod", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::MeshLodRange>(this, ___internal_method, subMeshIndex, levelIndex);
}
inline ::UnityEngine::Bounds UnityEngine::Mesh::get_bounds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_bounds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_bounds(::UnityEngine::Bounds value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_bounds", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Mesh::ClearImpl(bool keepVertexLayout) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "ClearImpl", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keepVertexLayout);
}
inline void UnityEngine::Mesh::RecalculateBoundsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateBoundsImpl", {}, { ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags);
}
inline void UnityEngine::Mesh::RecalculateNormalsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateNormalsImpl", {}, { ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags);
}
inline void UnityEngine::Mesh::RecalculateTangentsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateTangentsImpl", {}, { ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags);
}
inline void UnityEngine::Mesh::MarkDynamicImpl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "MarkDynamicImpl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Mesh::MarkModified() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "MarkModified", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Mesh::UploadMeshDataImpl(bool markNoLongerReadable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "UploadMeshDataImpl", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markNoLongerReadable);
}
inline ::UnityEngine::MeshTopology UnityEngine::Mesh::GetTopologyImpl(int32_t submesh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTopologyImpl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::MeshTopology>(this, ___internal_method, submesh);
}
inline void UnityEngine::Mesh::RecalculateUVDistributionMetricImpl(int32_t uvSetIndex, float_t uvAreaThreshold) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateUVDistributionMetricImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uvSetIndex, uvAreaThreshold);
}
inline void UnityEngine::Mesh::RecalculateUVDistributionMetricsImpl(float_t uvAreaThreshold) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateUVDistributionMetricsImpl", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uvAreaThreshold);
}
inline float_t UnityEngine::Mesh::GetUVDistributionMetric(int32_t uvSetIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetUVDistributionMetric", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, uvSetIndex);
}
inline void UnityEngine::Mesh::CombineMeshesImpl(::ArrayW<::UnityEngine::CombineInstance> combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "CombineMeshesImpl", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::CombineInstance>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, combine, mergeSubMeshes, useMatrices, hasLightmapData);
}
inline void UnityEngine::Mesh::OptimizeImpl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "OptimizeImpl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Mesh::OptimizeIndexBuffersImpl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "OptimizeIndexBuffersImpl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Mesh::OptimizeReorderVertexBufferImpl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "OptimizeReorderVertexBufferImpl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::VertexAttribute UnityEngine::Mesh::GetUVChannel(int32_t uvIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetUVChannel", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VertexAttribute>(nullptr, ___internal_method, uvIndex);
}
inline int32_t UnityEngine::Mesh::DefaultDimensionForChannel(::UnityEngine::Rendering::VertexAttribute channel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "DefaultDimensionForChannel", {}, { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, channel);
}
template <typename T>
inline ::ArrayW<T> UnityEngine::Mesh::GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetAllocArrayFromChannel",
                                                                                         { ::i2c::class_of<T>() },
                                                                                         { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(),
                                                                                           ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, channel, format, dim);
}
template <typename T> inline ::ArrayW<T> UnityEngine::Mesh::GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute channel) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetAllocArrayFromChannel", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, channel);
}
inline void UnityEngine::Mesh::SetSizedArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::Array* values,
                                                       int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetSizedArrayForChannel",
                                                                     {},
                                                                     { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, format, dim, values, valuesArrayLength, valuesStart, valuesCount, flags);
}
inline void UnityEngine::Mesh::SetSizedNativeArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim,
                                                             ::System::IntPtr values, int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount,
                                                             ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetSizedNativeArrayForChannel",
                                                                     {},
                                                                     { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, format, dim, values, valuesArrayLength, valuesStart, valuesCount, flags);
}
template <typename T>
inline void UnityEngine::Mesh::SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::ArrayW<T> values,
                                                  ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetArrayForChannel",
                                                                     { ::i2c::class_of<T>() },
                                                                     { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, format, dim, values, flags);
}
template <typename T> inline void UnityEngine::Mesh::SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::ArrayW<T> values, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetArrayForChannel",
                                                                                                      { ::i2c::class_of<T>() },
                                                                                                      { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::ArrayW<T>>(),
                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, values, flags);
}
template <typename T>
inline void UnityEngine::Mesh::SetListForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim,
                                                 ::System::Collections::Generic::List_1<T>* values, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetListForChannel",
                                                                     { ::i2c::class_of<T>() },
                                                                     { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, format, dim, values, start, length, flags);
}
template <typename T>
inline void UnityEngine::Mesh::SetListForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::System::Collections::Generic::List_1<T>* values, int32_t start, int32_t length,
                                                 ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetListForChannel",
                                                                     { ::i2c::class_of<T>() },
                                                                     { ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, values, start, length, flags);
}
template <typename T>
inline void UnityEngine::Mesh::GetListForChannel(::System::Collections::Generic::List_1<T>* buffer, int32_t capacity, ::UnityEngine::Rendering::VertexAttribute channel, int32_t dim) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetListForChannel",
                                                                                                      { ::i2c::class_of<T>() },
                                                                                                      { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, capacity, channel, dim);
}
template <typename T>
inline void UnityEngine::Mesh::GetListForChannel(::System::Collections::Generic::List_1<T>* buffer, int32_t capacity, ::UnityEngine::Rendering::VertexAttribute channel, int32_t dim,
                                                 ::UnityEngine::Rendering::VertexAttributeFormat channelType) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetListForChannel",
                                                                                                      { ::i2c::class_of<T>() },
                                                                                                      { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, capacity, channel, dim, channelType);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::Mesh::get_vertices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_vertices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_vertices(::ArrayW<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_vertices", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::Mesh::get_normals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_normals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_normals(::ArrayW<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_normals", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector4> UnityEngine::Mesh::get_tangents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_tangents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_tangents(::ArrayW<::UnityEngine::Vector4> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_tangents", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::Mesh::get_uv() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_uv", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_uv(::ArrayW<::UnityEngine::Vector2> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_uv", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::Mesh::get_uv2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_uv2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_uv2(::ArrayW<::UnityEngine::Vector2> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_uv2", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::Mesh::get_uv3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_uv3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_uv3(::ArrayW<::UnityEngine::Vector2> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_uv3", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::Mesh::get_uv4() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_uv4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_uv4(::ArrayW<::UnityEngine::Vector2> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_uv4", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::Mesh::get_uv5() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_uv5", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_uv5(::ArrayW<::UnityEngine::Vector2> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_uv5", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::Mesh::get_uv6() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_uv6", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_uv6(::ArrayW<::UnityEngine::Vector2> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_uv6", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::Mesh::get_uv7() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_uv7", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_uv7(::ArrayW<::UnityEngine::Vector2> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_uv7", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::Mesh::get_uv8() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_uv8", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_uv8(::ArrayW<::UnityEngine::Vector2> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_uv8", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Color> UnityEngine::Mesh::get_colors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_colors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_colors(::ArrayW<::UnityEngine::Color> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_colors", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Color32> UnityEngine::Mesh::get_colors32() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_colors32", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color32>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_colors32(::ArrayW<::UnityEngine::Color32> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_colors32", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Mesh::get_lodCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_lodCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_lodCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_lodCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Mesh::get_isLodSelectionActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_isLodSelectionActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Mesh_LodSelectionCurve UnityEngine::Mesh::get_lodSelectionCurve() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_lodSelectionCurve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_LodSelectionCurve>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_lodSelectionCurve(::UnityEngine::Mesh_LodSelectionCurve value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_lodSelectionCurve", {}, { ::i2c::type_of<::UnityEngine::Mesh_LodSelectionCurve>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Mesh::GetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices);
}
inline void UnityEngine::Mesh::SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetVertices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inVertices);
}
inline void UnityEngine::Mesh::SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "SetVertices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inVertices, start, length);
}
inline void UnityEngine::Mesh::SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices, int32_t start, int32_t length,
                                           /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetVertices",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inVertices, start, length, flags);
}
inline void UnityEngine::Mesh::SetVertices(::ArrayW<::UnityEngine::Vector3> inVertices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetVertices", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inVertices);
}
inline void UnityEngine::Mesh::SetVertices(::ArrayW<::UnityEngine::Vector3> inVertices, int32_t start, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "SetVertices", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inVertices, start, length);
}
inline void UnityEngine::Mesh::SetVertices(::ArrayW<::UnityEngine::Vector3> inVertices, int32_t start, int32_t length,
                                           /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetVertices",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inVertices, start, length, flags);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetVertices(::Unity::Collections::NativeArray_1<T> inVertices) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetVertices", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inVertices);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetVertices(::Unity::Collections::NativeArray_1<T> inVertices, int32_t start, int32_t length) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "SetVertices", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inVertices, start, length);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetVertices(::Unity::Collections::NativeArray_1<T> inVertices, int32_t start, int32_t length,
                                           /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetVertices",
                                                                                                      { ::i2c::class_of<T>() },
                                                                                                      { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inVertices, start, length, flags);
}
inline void UnityEngine::Mesh::GetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetNormals", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, normals);
}
inline void UnityEngine::Mesh::SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetNormals", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inNormals);
}
inline void UnityEngine::Mesh::SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "SetNormals", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inNormals, start, length);
}
inline void UnityEngine::Mesh::SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals, int32_t start, int32_t length,
                                          /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetNormals",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inNormals, start, length, flags);
}
inline void UnityEngine::Mesh::SetNormals(::ArrayW<::UnityEngine::Vector3> inNormals) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetNormals", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inNormals);
}
inline void UnityEngine::Mesh::SetNormals(::ArrayW<::UnityEngine::Vector3> inNormals, int32_t start, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "SetNormals", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inNormals, start, length);
}
inline void UnityEngine::Mesh::SetNormals(::ArrayW<::UnityEngine::Vector3> inNormals, int32_t start, int32_t length,
                                          /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetNormals",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inNormals, start, length, flags);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetNormals(::Unity::Collections::NativeArray_1<T> inNormals) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetNormals", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inNormals);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetNormals(::Unity::Collections::NativeArray_1<T> inNormals, int32_t start, int32_t length) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "SetNormals", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inNormals, start, length);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetNormals(::Unity::Collections::NativeArray_1<T> inNormals, int32_t start, int32_t length,
                                          /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetNormals",
                                                                                                      { ::i2c::class_of<T>() },
                                                                                                      { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inNormals, start, length, flags);
}
inline void UnityEngine::Mesh::GetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTangents", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tangents);
}
inline void UnityEngine::Mesh::SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTangents", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inTangents);
}
inline void UnityEngine::Mesh::SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "SetTangents", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inTangents, start, length);
}
inline void UnityEngine::Mesh::SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents, int32_t start, int32_t length,
                                           /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTangents",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inTangents, start, length, flags);
}
inline void UnityEngine::Mesh::SetTangents(::ArrayW<::UnityEngine::Vector4> inTangents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTangents", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inTangents);
}
inline void UnityEngine::Mesh::SetTangents(::ArrayW<::UnityEngine::Vector4> inTangents, int32_t start, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "SetTangents", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inTangents, start, length);
}
inline void UnityEngine::Mesh::SetTangents(::ArrayW<::UnityEngine::Vector4> inTangents, int32_t start, int32_t length,
                                           /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTangents",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inTangents, start, length, flags);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetTangents(::Unity::Collections::NativeArray_1<T> inTangents) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTangents", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inTangents);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetTangents(::Unity::Collections::NativeArray_1<T> inTangents, int32_t start, int32_t length) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "SetTangents", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inTangents, start, length);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetTangents(::Unity::Collections::NativeArray_1<T> inTangents, int32_t start, int32_t length,
                                           /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTangents",
                                                                                                      { ::i2c::class_of<T>() },
                                                                                                      { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inTangents, start, length, flags);
}
inline void UnityEngine::Mesh::GetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* colors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetColors", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors);
}
inline void UnityEngine::Mesh::SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors);
}
inline void UnityEngine::Mesh::SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "SetColors", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors, start, length);
}
inline void UnityEngine::Mesh::SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors, int32_t start, int32_t length,
                                         /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors, start, length, flags);
}
inline void UnityEngine::Mesh::SetColors(::ArrayW<::UnityEngine::Color> inColors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors);
}
inline void UnityEngine::Mesh::SetColors(::ArrayW<::UnityEngine::Color> inColors, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors, start, length);
}
inline void UnityEngine::Mesh::SetColors(::ArrayW<::UnityEngine::Color> inColors, int32_t start, int32_t length,
                                         /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors, start, length, flags);
}
inline void UnityEngine::Mesh::GetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetColors", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color32>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors);
}
inline void UnityEngine::Mesh::SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color32>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors);
}
inline void UnityEngine::Mesh::SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "SetColors", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color32>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors, start, length);
}
inline void UnityEngine::Mesh::SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors, int32_t start, int32_t length,
                                         /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color32>*>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors, start, length, flags);
}
inline void UnityEngine::Mesh::SetColors(::ArrayW<::UnityEngine::Color32> inColors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors);
}
inline void UnityEngine::Mesh::SetColors(::ArrayW<::UnityEngine::Color32> inColors, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors, start, length);
}
inline void UnityEngine::Mesh::SetColors(::ArrayW<::UnityEngine::Color32> inColors, int32_t start, int32_t length,
                                         /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors, start, length, flags);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetColors(::Unity::Collections::NativeArray_1<T> inColors) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetColors(::Unity::Collections::NativeArray_1<T> inColors, int32_t start, int32_t length) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                       { "SetColors", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors, start, length);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetColors(::Unity::Collections::NativeArray_1<T> inColors, int32_t start, int32_t length,
                                         /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetColors",
                                                                                                      { ::i2c::class_of<T>() },
                                                                                                      { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors, start, length, flags);
}
template <typename T>
inline void UnityEngine::Mesh::SetUvsImpl(int32_t uvIndex, int32_t dim, ::System::Collections::Generic::List_1<T>* uvs, int32_t start, int32_t length,
                                          ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUvsImpl",
                                                                     { ::i2c::class_of<T>() },
                                                                     { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uvIndex, dim, uvs, start, length, flags);
}
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Mesh*>(),
          { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length);
}
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs, int32_t start, int32_t length,
                                      /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUVs",
                                                                     {},
                                                                     { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length, flags);
}
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Mesh*>(),
          { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length);
}
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs, int32_t start, int32_t length,
                                      /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUVs",
                                                                     {},
                                                                     { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length, flags);
}
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Mesh*>(),
          { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length);
}
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs, int32_t start, int32_t length,
                                      /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUVs",
                                                                     {},
                                                                     { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length, flags);
}
inline void UnityEngine::Mesh::SetUvsImpl(int32_t uvIndex, int32_t dim, ::System::Array* uvs, int32_t arrayStart, int32_t arraySize, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUvsImpl",
                                                                                  {},
                                                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uvIndex, dim, uvs, arrayStart, arraySize, flags);
}
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2> uvs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3> uvs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4> uvs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2> uvs, int32_t start, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                       { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length);
}
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2> uvs, int32_t start, int32_t length,
                                      /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUVs",
                                                                                         {},
                                                                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length, flags);
}
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3> uvs, int32_t start, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                       { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length);
}
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3> uvs, int32_t start, int32_t length,
                                      /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUVs",
                                                                                         {},
                                                                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length, flags);
}
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4> uvs, int32_t start, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                       { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length);
}
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4> uvs, int32_t start, int32_t length,
                                      /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUVs",
                                                                                         {},
                                                                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length, flags);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::Unity::Collections::NativeArray_1<T> uvs) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUVs", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::Unity::Collections::NativeArray_1<T> uvs, int32_t start, int32_t length) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Mesh*>(),
          { "SetUVs", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetUVs(int32_t channel, ::Unity::Collections::NativeArray_1<T> uvs, int32_t start, int32_t length,
                                      /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetUVs",
                                                                                  { ::i2c::class_of<T>() },
                                                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length, flags);
}
template <typename T> inline void UnityEngine::Mesh::GetUVsImpl(int32_t uvIndex, ::System::Collections::Generic::List_1<T>* uvs, int32_t dim) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "GetUVsImpl", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uvIndex, uvs, dim);
}
inline void UnityEngine::Mesh::GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "GetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "GetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "GetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs);
}
inline int32_t UnityEngine::Mesh::get_vertexAttributeCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_vertexAttributeCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> UnityEngine::Mesh::GetVertexAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>(this, ___internal_method);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributes(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, attributes);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>* attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "GetVertexAttributes", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, attributes);
}
inline void UnityEngine::Mesh::SetVertexBufferParams(int32_t vertexCount, /* [ParamArray] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "SetVertexBufferParams", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertexCount, attributes);
}
inline void UnityEngine::Mesh::SetVertexBufferParams(int32_t vertexCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "SetVertexBufferParams", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertexCount, attributes);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetVertexBufferData(::Unity::Collections::NativeArray_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream,
                                                   ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetVertexBufferData",
                                                                     { ::i2c::class_of<T>() },
                                                                     { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, dataStart, meshBufferStart, count, stream, flags);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetVertexBufferData(::ArrayW<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetVertexBufferData",
                                                                                  { ::i2c::class_of<T>() },
                                                                                  { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, dataStart, meshBufferStart, count, stream, flags);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetVertexBufferData(::System::Collections::Generic::List_1<T>* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream,
                                                   ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetVertexBufferData",
                                                                     { ::i2c::class_of<T>() },
                                                                     { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, dataStart, meshBufferStart, count, stream, flags);
}
inline ::UnityEngine::Mesh_MeshDataArray UnityEngine::Mesh::AcquireReadOnlyMeshData(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "AcquireReadOnlyMeshData", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_MeshDataArray>(nullptr, ___internal_method, mesh);
}
inline ::UnityEngine::Mesh_MeshDataArray UnityEngine::Mesh::AcquireReadOnlyMeshData(::ArrayW<::UnityEngine::Mesh*> meshes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "AcquireReadOnlyMeshData", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_MeshDataArray>(nullptr, ___internal_method, meshes);
}
inline ::UnityEngine::Mesh_MeshDataArray UnityEngine::Mesh::AcquireReadOnlyMeshData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "AcquireReadOnlyMeshData", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_MeshDataArray>(nullptr, ___internal_method, meshes);
}
inline ::UnityEngine::Mesh_MeshDataArray UnityEngine::Mesh::AllocateWritableMeshData(int32_t meshCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "AllocateWritableMeshData", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_MeshDataArray>(nullptr, ___internal_method, meshCount);
}
inline ::UnityEngine::Mesh_MeshDataArray UnityEngine::Mesh::AllocateWritableMeshData(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "AllocateWritableMeshData", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_MeshDataArray>(nullptr, ___internal_method, mesh);
}
inline ::UnityEngine::Mesh_MeshDataArray UnityEngine::Mesh::AllocateWritableMeshData(::ArrayW<::UnityEngine::Mesh*> meshes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "AllocateWritableMeshData", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_MeshDataArray>(nullptr, ___internal_method, meshes);
}
inline ::UnityEngine::Mesh_MeshDataArray UnityEngine::Mesh::AllocateWritableMeshData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "AllocateWritableMeshData", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_MeshDataArray>(nullptr, ___internal_method, meshes);
}
inline void UnityEngine::Mesh::ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray data, ::UnityEngine::Mesh* mesh, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "ApplyAndDisposeWritableMeshData",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::UnityEngine::Mesh_MeshDataArray>(), ::i2c::type_of<::UnityEngine::Mesh*>(),
                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, mesh, flags);
}
inline void UnityEngine::Mesh::ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray data, ::ArrayW<::UnityEngine::Mesh*> meshes, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "ApplyAndDisposeWritableMeshData",
                                                                                         {},
                                                                                         { ::i2c::type_of<::UnityEngine::Mesh_MeshDataArray>(), ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(),
                                                                                           ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, meshes, flags);
}
inline void UnityEngine::Mesh::ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray data, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                                               ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "ApplyAndDisposeWritableMeshData",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::UnityEngine::Mesh_MeshDataArray>(),
                                                                                                        ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>(),
                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, meshes, flags);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Mesh::GetVertexBuffer(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexBuffer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method, index);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Mesh::GetIndexBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndexBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Mesh::GetBoneWeightBuffer(::UnityEngine::SkinWeights layout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBoneWeightBuffer", {}, { ::i2c::type_of<::UnityEngine::SkinWeights>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method, layout);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Mesh::GetBlendShapeBuffer(::UnityEngine::Rendering::BlendShapeBufferLayout layout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::BlendShapeBufferLayout>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method, layout);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Mesh::GetBlendShapeBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method);
}
inline ::UnityEngine::BlendShapeBufferRange UnityEngine::Mesh::GetBlendShapeBufferRange(int32_t blendShapeIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeBufferRange", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::BlendShapeBufferRange>(this, ___internal_method, blendShapeIndex);
}
inline void UnityEngine::Mesh::PrintErrorCantAccessIndices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "PrintErrorCantAccessIndices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Mesh::CheckCanAccessSubmesh(int32_t submesh, bool errorAboutTriangles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "CheckCanAccessSubmesh", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, submesh, errorAboutTriangles);
}
inline bool UnityEngine::Mesh::CheckCanAccessSubmeshTriangles(int32_t submesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "CheckCanAccessSubmeshTriangles", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, submesh);
}
inline bool UnityEngine::Mesh::CheckCanAccessSubmeshIndices(int32_t submesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "CheckCanAccessSubmeshIndices", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, submesh);
}
inline ::ArrayW<int32_t> UnityEngine::Mesh::get_triangles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_triangles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_triangles(::ArrayW<int32_t> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_triangles", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<int32_t> UnityEngine::Mesh::GetTriangles(int32_t submesh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTriangles", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, submesh);
}
inline ::ArrayW<int32_t> UnityEngine::Mesh::GetTriangles(int32_t submesh, /* [DefaultValue("true")] */ bool applyBaseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTriangles", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, submesh, applyBaseVertex);
}
inline ::ArrayW<int32_t> UnityEngine::Mesh::GetTriangles(int32_t submesh, int32_t meshLod, bool applyBaseVertex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTriangles", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, submesh, meshLod, applyBaseVertex);
}
inline void UnityEngine::Mesh::GetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTriangles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, submesh);
}
inline void UnityEngine::Mesh::GetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, /* [DefaultValue("true")] */ bool applyBaseVertex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "GetTriangles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, submesh, applyBaseVertex);
}
inline void UnityEngine::Mesh::GetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, int32_t meshLod, bool applyBaseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Mesh*>(),
                       { "GetTriangles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, submesh, meshLod, applyBaseVertex);
}
inline void UnityEngine::Mesh::GetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t submesh, bool applyBaseVertex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "GetTriangles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, submesh, applyBaseVertex);
}
inline void UnityEngine::Mesh::GetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t submesh, int32_t meshLod, bool applyBaseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Mesh*>(),
                       { "GetTriangles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, submesh, meshLod, applyBaseVertex);
}
inline ::ArrayW<int32_t> UnityEngine::Mesh::GetIndices(int32_t submesh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndices", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, submesh);
}
inline ::ArrayW<int32_t> UnityEngine::Mesh::GetIndices(int32_t submesh, /* [DefaultValue("true")] */ bool applyBaseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndices", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, submesh, applyBaseVertex);
}
inline ::ArrayW<int32_t> UnityEngine::Mesh::GetIndices(int32_t submesh, int32_t meshLod, bool applyBaseVertex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndices", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, submesh, meshLod, applyBaseVertex);
}
inline void UnityEngine::Mesh::GetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t submesh) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, submesh);
}
inline void UnityEngine::Mesh::GetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t submesh, /* [DefaultValue("true")] */ bool applyBaseVertex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "GetIndices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, submesh, applyBaseVertex);
}
inline void UnityEngine::Mesh::GetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t submesh, int32_t meshLod, bool applyBaseVertex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "GetIndices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, submesh, meshLod, applyBaseVertex);
}
inline void UnityEngine::Mesh::GetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, int32_t submesh, bool applyBaseVertex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "GetIndices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, submesh, applyBaseVertex);
}
inline void UnityEngine::Mesh::GetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, int32_t submesh, int32_t meshLod, bool applyBaseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Mesh*>(),
                       { "GetIndices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, submesh, meshLod, applyBaseVertex);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetIndexBufferData(::Unity::Collections::NativeArray_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count,
                                                  ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndexBufferData",
                                                                                  { ::i2c::class_of<T>() },
                                                                                  { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, dataStart, meshBufferStart, count, flags);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetIndexBufferData(::ArrayW<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndexBufferData",
                                                                                                      { ::i2c::class_of<T>() },
                                                                                                      { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, dataStart, meshBufferStart, count, flags);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetIndexBufferData(::System::Collections::Generic::List_1<T>* data, int32_t dataStart, int32_t meshBufferStart, int32_t count,
                                                  ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndexBufferData",
                                                                                  { ::i2c::class_of<T>() },
                                                                                  { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, dataStart, meshBufferStart, count, flags);
}
inline uint32_t UnityEngine::Mesh::GetIndexStart(int32_t submesh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndexStart", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, submesh);
}
inline uint32_t UnityEngine::Mesh::GetIndexStart(int32_t submesh, int32_t meshLod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndexStart", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, submesh, meshLod);
}
inline uint32_t UnityEngine::Mesh::GetIndexCount(int32_t submesh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndexCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, submesh);
}
inline uint32_t UnityEngine::Mesh::GetIndexCount(int32_t submesh, int32_t meshLod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndexCount", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, submesh, meshLod);
}
inline uint32_t UnityEngine::Mesh::GetBaseVertex(int32_t submesh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBaseVertex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, submesh);
}
inline void UnityEngine::Mesh::CheckIndicesArrayRange(int32_t valuesLength, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "CheckIndicesArrayRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valuesLength, start, length);
}
inline void UnityEngine::Mesh::SetTrianglesImpl(int32_t submesh, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::Array* triangles, int32_t trianglesArrayLength, int32_t start,
                                                int32_t length, bool calculateBounds, int32_t baseVertex, int32_t meshLod) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "SetTrianglesImpl",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, submesh, indicesFormat, triangles, trianglesArrayLength, start, length, calculateBounds, baseVertex, meshLod);
}
inline void UnityEngine::Mesh::SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, submesh);
}
inline void UnityEngine::Mesh::SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh, bool calculateBounds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, submesh, calculateBounds);
}
inline void UnityEngine::Mesh::SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh, /* [DefaultValue("true")] */ bool calculateBounds, /* [DefaultValue("0")] */ int32_t baseVertex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "SetTriangles", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "SetTriangles", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, submesh, meshLod, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(::ArrayW<int32_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, trianglesStart, trianglesLength, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(::ArrayW<int32_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles",
                                                                                  {},
                                                                                  { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, trianglesStart, trianglesLength, submesh, meshLod, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(::ArrayW<uint16_t> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "SetTriangles", {}, { ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(::ArrayW<uint16_t> triangles, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "SetTriangles", {}, { ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, submesh, meshLod, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(::ArrayW<uint16_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, trianglesStart, trianglesLength, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(::ArrayW<uint16_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles",
                                                                                  {},
                                                                                  { ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, trianglesStart, trianglesLength, submesh, meshLod, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, submesh);
}
inline void UnityEngine::Mesh::SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, bool calculateBounds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "SetTriangles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, submesh, calculateBounds);
}
inline void UnityEngine::Mesh::SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, /* [DefaultValue("true")] */ bool calculateBounds,
                                            /* [DefaultValue("0")] */ int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Mesh*>(),
                       { "SetTriangles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, submesh, meshLod, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds,
                                            int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, trianglesStart, trianglesLength, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, int32_t meshLod,
                                            bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles",
                                                                     {},
                                                                     { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, trianglesStart, trianglesLength, submesh, meshLod, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Mesh*>(),
                       { "SetTriangles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, submesh, meshLod, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds,
                                            int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, trianglesStart, trianglesLength, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, int32_t meshLod,
                                            bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetTriangles",
                                                                     {},
                                                                     { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, trianglesStart, trianglesLength, submesh, meshLod, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::ArrayW<int32_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "SetIndices", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, topology, submesh);
}
inline void UnityEngine::Mesh::SetIndices(::ArrayW<int32_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "SetIndices", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, topology, submesh, calculateBounds);
}
inline void UnityEngine::Mesh::SetIndices(::ArrayW<int32_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, /* [DefaultValue("true")] */ bool calculateBounds,
                                          /* [DefaultValue("0")] */ int32_t baseVertex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Mesh*>(),
          { "SetIndices", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, topology, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::ArrayW<int32_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                  {},
                                                                                  { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, topology, submesh, meshLod, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::ArrayW<int32_t> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds,
                                          int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "SetIndices",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, indicesStart, indicesLength, topology, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::ArrayW<int32_t> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod,
                                          bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "SetIndices",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, indicesStart, indicesLength, topology, submesh, meshLod, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::ArrayW<uint16_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, topology, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::ArrayW<uint16_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                  {},
                                                                                  { ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, topology, submesh, meshLod, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::ArrayW<uint16_t> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds,
                                          int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "SetIndices",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, indicesStart, indicesLength, topology, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::ArrayW<uint16_t> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod,
                                          bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, indicesStart, indicesLength, topology, submesh, meshLod, calculateBounds, baseVertex);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetIndices(::Unity::Collections::NativeArray_1<T> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                         { ::i2c::class_of<T>() },
                                                                                         { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, topology, submesh, calculateBounds, baseVertex);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetIndices(::Unity::Collections::NativeArray_1<T> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod, bool calculateBounds,
                                          int32_t baseVertex) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                  { ::i2c::class_of<T>() },
                                                                                  { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, topology, submesh, meshLod, calculateBounds, baseVertex);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetIndices(::Unity::Collections::NativeArray_1<T> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh,
                                          bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "SetIndices",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, indicesStart, indicesLength, topology, submesh, calculateBounds, baseVertex);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetIndices(::Unity::Collections::NativeArray_1<T> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh,
                                          int32_t meshLod, bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                         { ::i2c::class_of<T>() },
                                                                                         { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, indicesStart, indicesLength, topology, submesh, meshLod, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::System::Collections::Generic::List_1<int32_t>* indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::MeshTopology>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, topology, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::System::Collections::Generic::List_1<int32_t>* indices, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod, bool calculateBounds,
                                          int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::MeshTopology>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, topology, submesh, meshLod, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh,
                                          bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "SetIndices",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, indicesStart, indicesLength, topology, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh,
                                          int32_t meshLod, bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, indicesStart, indicesLength, topology, submesh, meshLod, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<::UnityEngine::MeshTopology>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, topology, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod, bool calculateBounds,
                                          int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<::UnityEngine::MeshTopology>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, topology, submesh, meshLod, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh,
                                          bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "SetIndices",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, indicesStart, indicesLength, topology, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh,
                                          int32_t meshLod, bool calculateBounds, int32_t baseVertex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndices",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, indicesStart, indicesLength, topology, submesh, meshLod, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetSubMeshes(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor> desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetSubMeshes",
                                                                                         {},
                                                                                         { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor>>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc, start, count, flags);
}
inline void UnityEngine::Mesh::SetSubMeshes(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "SetSubMeshes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor>>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc, flags);
}
inline void UnityEngine::Mesh::SetSubMeshes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>* desc, int32_t start, int32_t count,
                                            ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetSubMeshes",
                                                                     {},
                                                                     { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>*>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc, start, count, flags);
}
inline void UnityEngine::Mesh::SetSubMeshes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>* desc, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetSubMeshes",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>*>(),
                                                                                           ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc, flags);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetSubMeshes(::Unity::Collections::NativeArray_1<T> desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetSubMeshes",
                                                                                                      { ::i2c::class_of<T>() },
                                                                                                      { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc, start, count, flags);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Mesh::SetSubMeshes(::Unity::Collections::NativeArray_1<T> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "SetSubMeshes", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc, flags);
}
inline void UnityEngine::Mesh::ValidateLodIndex(int32_t level) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "ValidateLodIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline void UnityEngine::Mesh::ValidateSubMeshIndex(int32_t submesh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "ValidateSubMeshIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, submesh);
}
inline void UnityEngine::Mesh::ValidateCanWriteToLods() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "ValidateCanWriteToLods", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Mesh::SetLod(int32_t submesh, int32_t level, ::UnityEngine::MeshLodRange levelRange, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Mesh*>(),
          { "SetLod", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshLodRange>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, submesh, level, levelRange, flags);
}
inline void UnityEngine::Mesh::SetLods(::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>* levels, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLods",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>*>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levels, submesh, flags);
}
inline void UnityEngine::Mesh::SetLods(::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>* levels, int32_t start, int32_t count, int32_t submesh,
                                       ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLods",
                                                                     {},
                                                                     { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>*>(), ::i2c::type_of<int32_t>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levels, start, count, submesh, flags);
}
inline void UnityEngine::Mesh::SetLods(::ArrayW<::UnityEngine::MeshLodRange> levels, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "SetLods", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::MeshLodRange>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levels, submesh, flags);
}
inline void UnityEngine::Mesh::SetLods(::ArrayW<::UnityEngine::MeshLodRange> levels, int32_t start, int32_t count, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLods",
                                                                                  {},
                                                                                  { ::i2c::type_of<::ArrayW<::UnityEngine::MeshLodRange>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levels, start, count, submesh, flags);
}
inline void UnityEngine::Mesh::SetLods(::Unity::Collections::NativeArray_1<::UnityEngine::MeshLodRange> levels, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLods",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::MeshLodRange>>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levels, submesh, flags);
}
inline void UnityEngine::Mesh::SetLods(::Unity::Collections::NativeArray_1<::UnityEngine::MeshLodRange> levels, int32_t start, int32_t count, int32_t submesh,
                                       ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLods",
                                                                     {},
                                                                     { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::MeshLodRange>>(), ::i2c::type_of<int32_t>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levels, start, count, submesh, flags);
}
inline ::ArrayW<::UnityEngine::MeshLodRange> UnityEngine::Mesh::GetLods(int32_t submesh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetLods", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::MeshLodRange>>(this, ___internal_method, submesh);
}
inline void UnityEngine::Mesh::GetLods(::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>* levels, int32_t submesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "GetLods", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levels, submesh);
}
inline void UnityEngine::Mesh::GetBindposes(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* bindposes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBindposes", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindposes);
}
inline void UnityEngine::Mesh::GetBoneWeights(::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>* boneWeights) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBoneWeights", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boneWeights);
}
inline ::ArrayW<::UnityEngine::BoneWeight> UnityEngine::Mesh::get_boneWeights() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_boneWeights", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::BoneWeight>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_boneWeights(::ArrayW<::UnityEngine::BoneWeight> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_boneWeights", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::BoneWeight>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::SkinWeights UnityEngine::Mesh::get_skinWeightBufferLayout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_skinWeightBufferLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SkinWeights>(this, ___internal_method);
}
inline void UnityEngine::Mesh::Clear(/* [DefaultValue("true")] */ bool keepVertexLayout) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "Clear", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keepVertexLayout);
}
inline void UnityEngine::Mesh::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Mesh::RecalculateBounds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateBounds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Mesh::RecalculateNormals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateNormals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Mesh::RecalculateTangents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateTangents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Mesh::RecalculateBounds(/* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateBounds", {}, { ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags);
}
inline void UnityEngine::Mesh::RecalculateNormals(/* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateNormals", {}, { ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags);
}
inline void UnityEngine::Mesh::RecalculateTangents(/* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateTangents", {}, { ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags);
}
inline void UnityEngine::Mesh::RecalculateUVDistributionMetric(int32_t uvSetIndex, float_t uvAreaThreshold) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateUVDistributionMetric", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uvSetIndex, uvAreaThreshold);
}
inline void UnityEngine::Mesh::RecalculateUVDistributionMetrics(float_t uvAreaThreshold) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateUVDistributionMetrics", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uvAreaThreshold);
}
inline void UnityEngine::Mesh::MarkDynamic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "MarkDynamic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Mesh::UploadMeshData(bool markNoLongerReadable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "UploadMeshData", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markNoLongerReadable);
}
inline void UnityEngine::Mesh::Optimize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "Optimize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Mesh::OptimizeIndexBuffers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "OptimizeIndexBuffers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Mesh::OptimizeReorderVertexBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "OptimizeReorderVertexBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::MeshTopology UnityEngine::Mesh::GetTopology(int32_t submesh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTopology", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::MeshTopology>(this, ___internal_method, submesh);
}
inline void UnityEngine::Mesh::CombineMeshes(::ArrayW<::UnityEngine::CombineInstance> combine, /* [DefaultValue("true")] */ bool mergeSubMeshes, /* [DefaultValue("true")] */ bool useMatrices,
                                             /* [DefaultValue("false")] */ bool hasLightmapData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "CombineMeshes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::CombineInstance>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, combine, mergeSubMeshes, useMatrices, hasLightmapData);
}
inline void UnityEngine::Mesh::CombineMeshes(::ArrayW<::UnityEngine::CombineInstance> combine, bool mergeSubMeshes, bool useMatrices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "CombineMeshes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::CombineInstance>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, combine, mergeSubMeshes, useMatrices);
}
inline void UnityEngine::Mesh::CombineMeshes(::ArrayW<::UnityEngine::CombineInstance> combine, bool mergeSubMeshes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "CombineMeshes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::CombineInstance>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, combine, mergeSubMeshes);
}
inline void UnityEngine::Mesh::CombineMeshes(::ArrayW<::UnityEngine::CombineInstance> combine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "CombineMeshes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::CombineInstance>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, combine);
}
inline ::System::IntPtr UnityEngine::Mesh::FromInstanceID_Injected(::by_ref<::UnityEngine::EntityId const> id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "FromInstanceID_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::EntityId const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, id);
}
inline ::UnityEngine::Rendering::IndexFormat UnityEngine::Mesh::get_indexFormat_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_indexFormat_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IndexFormat>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::set_indexFormat_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::IndexFormat value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "set_indexFormat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline uint32_t UnityEngine::Mesh::GetTotalIndexCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTotalIndexCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::SetIndexBufferParams_Injected(::System::IntPtr _unity_self, int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "SetIndexBufferParams_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, indexCount, format);
}
inline void UnityEngine::Mesh::InternalSetIndexBufferData_Injected(::System::IntPtr _unity_self, ::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                                                   ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "InternalSetIndexBufferData_Injected",
                                                                     {},
                                                                     { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, data, dataStart, meshBufferStart, count, elemSize, flags);
}
inline void UnityEngine::Mesh::InternalSetIndexBufferDataFromArray_Injected(::System::IntPtr _unity_self, ::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count,
                                                                            int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "InternalSetIndexBufferDataFromArray_Injected",
                                                                     {},
                                                                     { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, data, dataStart, meshBufferStart, count, elemSize, flags);
}
inline void UnityEngine::Mesh::SetVertexBufferParamsFromPtr_Injected(::System::IntPtr _unity_self, int32_t vertexCount, ::System::IntPtr attributesPtr, int32_t attributesCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Mesh*>(),
          { "SetVertexBufferParamsFromPtr_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, vertexCount, attributesPtr, attributesCount);
}
inline void UnityEngine::Mesh::SetVertexBufferParamsFromArray_Injected(::System::IntPtr _unity_self, int32_t vertexCount,
                                                                       /* [ParamArray] */ ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "SetVertexBufferParamsFromArray_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, vertexCount, attributes);
}
inline void UnityEngine::Mesh::InternalSetVertexBufferData_Injected(::System::IntPtr _unity_self, int32_t stream, ::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count,
                                                                    int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "InternalSetVertexBufferData_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, stream, data, dataStart, meshBufferStart, count, elemSize, flags);
}
inline void UnityEngine::Mesh::InternalSetVertexBufferDataFromArray_Injected(::System::IntPtr _unity_self, int32_t stream, ::System::Array* data, int32_t dataStart, int32_t meshBufferStart,
                                                                             int32_t count, int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "InternalSetVertexBufferDataFromArray_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, stream, data, dataStart, meshBufferStart, count, elemSize, flags);
}
inline ::System::Array* UnityEngine::Mesh::GetVertexAttributesAlloc_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributesAlloc_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributesArray_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                       { "GetVertexAttributesArray_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, attributes);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributesList_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                       { "GetVertexAttributesList_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, attributes);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributeCountImpl_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexAttributeCountImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::GetVertexAttribute_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::Rendering::VertexAttributeDescriptor> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Mesh*>(),
          { "GetVertexAttribute_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::VertexAttributeDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index, ret);
}
inline uint32_t UnityEngine::Mesh::GetIndexStartImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, int32_t meshlod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "GetIndexStartImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, _unity_self, submesh, meshlod);
}
inline uint32_t UnityEngine::Mesh::GetIndexCountImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, int32_t meshlod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "GetIndexCountImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, _unity_self, submesh, meshlod);
}
inline uint32_t UnityEngine::Mesh::GetTrianglesCountImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, int32_t meshlod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "GetTrianglesCountImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, _unity_self, submesh, meshlod);
}
inline uint32_t UnityEngine::Mesh::GetBaseVertexImpl_Injected(::System::IntPtr _unity_self, int32_t submesh) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBaseVertexImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, _unity_self, submesh);
}
inline void UnityEngine::Mesh::GetTrianglesImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, bool applyBaseVertex, int32_t meshlod,
                                                         ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTrianglesImpl_Injected",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, submesh, applyBaseVertex, meshlod, ret);
}
inline void UnityEngine::Mesh::GetIndicesImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, bool applyBaseVertex, int32_t meshlod,
                                                       ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndicesImpl_Injected",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, submesh, applyBaseVertex, meshlod, ret);
}
inline void UnityEngine::Mesh::SetIndicesImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat,
                                                       ::System::Array* indices, int32_t arrayStart, int32_t arraySize, bool calculateBounds, int32_t baseVertex, int32_t meshlod) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndicesImpl_Injected",
                                                                     {},
                                                                     { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(),
                                                                       ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, submesh, topology, indicesFormat, indices, arrayStart, arraySize, calculateBounds, baseVertex, meshlod);
}
inline void UnityEngine::Mesh::SetIndicesNativeArrayImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, ::UnityEngine::MeshTopology topology,
                                                                  ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::IntPtr indices, int32_t arrayStart, int32_t arraySize,
                                                                  bool calculateBounds, int32_t baseVertex, int32_t meshlod) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetIndicesNativeArrayImpl_Injected",
                                                                     {},
                                                                     { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(),
                                                                       ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, submesh, topology, indicesFormat, indices, arrayStart, arraySize, calculateBounds, baseVertex, meshlod);
}
inline void UnityEngine::Mesh::GetTrianglesNonAllocImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values, int32_t submesh, bool applyBaseVertex,
                                                                 int32_t meshlod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTrianglesNonAllocImpl_Injected",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, values, submesh, applyBaseVertex, meshlod);
}
inline void UnityEngine::Mesh::GetTrianglesNonAllocImpl16_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values, int32_t submesh, bool applyBaseVertex,
                                                                   int32_t meshlod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTrianglesNonAllocImpl16_Injected",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, values, submesh, applyBaseVertex, meshlod);
}
inline void UnityEngine::Mesh::GetIndicesNonAllocImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values, int32_t submesh, bool applyBaseVertex,
                                                               int32_t meshlod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndicesNonAllocImpl_Injected",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, values, submesh, applyBaseVertex, meshlod);
}
inline void UnityEngine::Mesh::GetIndicesNonAllocImpl16_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values, int32_t submesh, bool applyBaseVertex,
                                                                 int32_t meshlod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndicesNonAllocImpl16_Injected",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, values, submesh, applyBaseVertex, meshlod);
}
inline void UnityEngine::Mesh::PrintErrorCantAccessChannel_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute ch) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "PrintErrorCantAccessChannel_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ch);
}
inline bool UnityEngine::Mesh::HasVertexAttribute_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "HasVertexAttribute_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, attr);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributeDimension_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "GetVertexAttributeDimension_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, attr);
}
inline ::UnityEngine::Rendering::VertexAttributeFormat UnityEngine::Mesh::GetVertexAttributeFormat_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "GetVertexAttributeFormat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VertexAttributeFormat>(nullptr, ___internal_method, _unity_self, attr);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributeStream_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "GetVertexAttributeStream_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, attr);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributeOffset_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "GetVertexAttributeOffset_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, attr);
}
inline void UnityEngine::Mesh::SetArrayForChannelImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format,
                                                               int32_t dim, ::System::Array* values, int32_t arraySize, int32_t valuesStart, int32_t valuesCount,
                                                               ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetArrayForChannelImpl_Injected",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(),
                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, channel, format, dim, values, arraySize, valuesStart, valuesCount, flags);
}
inline void UnityEngine::Mesh::SetNativeArrayForChannelImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute channel,
                                                                     ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::IntPtr values, int32_t arraySize,
                                                                     int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetNativeArrayForChannelImpl_Injected",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(),
                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, channel, format, dim, values, arraySize, valuesStart, valuesCount, flags);
}
inline ::System::Array* UnityEngine::Mesh::GetAllocArrayFromChannelImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute channel,
                                                                                 ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetAllocArrayFromChannelImpl_Injected",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(),
                                                                                           ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, _unity_self, channel, format, dim);
}
inline void UnityEngine::Mesh::GetArrayFromChannelImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format,
                                                                int32_t dim, ::System::Array* values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "GetArrayFromChannelImpl_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, channel, format, dim, values);
}
inline int32_t UnityEngine::Mesh::get_vertexBufferCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_vertexBufferCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Mesh::GetVertexBufferStride_Injected(::System::IntPtr _unity_self, int32_t stream) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexBufferStride_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, stream);
}
inline ::System::IntPtr UnityEngine::Mesh::GetNativeVertexBufferPtr_Injected(::System::IntPtr _unity_self, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetNativeVertexBufferPtr_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, index);
}
inline ::System::IntPtr UnityEngine::Mesh::GetNativeIndexBufferPtr_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetNativeIndexBufferPtr_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::Mesh::GetVertexBufferImpl_Injected(::System::IntPtr _unity_self, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetVertexBufferImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, index);
}
inline ::System::IntPtr UnityEngine::Mesh::GetIndexBufferImpl_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetIndexBufferImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::Mesh::GetBoneWeightBufferImpl_Injected(::System::IntPtr _unity_self, int32_t bonesPerVertex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBoneWeightBufferImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, bonesPerVertex);
}
inline ::System::IntPtr UnityEngine::Mesh::GetBlendShapeBufferImpl_Injected(::System::IntPtr _unity_self, int32_t layout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeBufferImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, layout);
}
inline ::UnityEngine::GraphicsBuffer_Target UnityEngine::Mesh::get_vertexBufferTarget_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_vertexBufferTarget_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer_Target>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::set_vertexBufferTarget_Injected(::System::IntPtr _unity_self, ::UnityEngine::GraphicsBuffer_Target value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "set_vertexBufferTarget_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::GraphicsBuffer_Target UnityEngine::Mesh::get_indexBufferTarget_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_indexBufferTarget_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer_Target>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::set_indexBufferTarget_Injected(::System::IntPtr _unity_self, ::UnityEngine::GraphicsBuffer_Target value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "set_indexBufferTarget_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Mesh::get_blendShapeCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_blendShapeCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::ClearBlendShapes_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "ClearBlendShapes_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::GetBlendShapeName_Injected(::System::IntPtr _unity_self, int32_t shapeIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Mesh*>(),
          { "GetBlendShapeName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, shapeIndex, ret);
}
inline int32_t UnityEngine::Mesh::GetBlendShapeIndex_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> blendShapeName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "GetBlendShapeIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, blendShapeName);
}
inline int32_t UnityEngine::Mesh::GetBlendShapeFrameCount_Injected(::System::IntPtr _unity_self, int32_t shapeIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBlendShapeFrameCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, shapeIndex);
}
inline float_t UnityEngine::Mesh::GetBlendShapeFrameWeight_Injected(::System::IntPtr _unity_self, int32_t shapeIndex, int32_t frameIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "GetBlendShapeFrameWeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self, shapeIndex, frameIndex);
}
inline void UnityEngine::Mesh::GetBlendShapeFrameVertices_Injected(::System::IntPtr _unity_self, int32_t shapeIndex, int32_t frameIndex,
                                                                   ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaVertices,
                                                                   ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaNormals,
                                                                   ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaTangents) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "GetBlendShapeFrameVertices_Injected",
                            {},
                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, shapeIndex, frameIndex, deltaVertices, deltaNormals, deltaTangents);
}
inline void UnityEngine::Mesh::AddBlendShapeFrame_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> shapeName, float_t frameWeight,
                                                           ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaVertices, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaNormals,
                                                           ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaTangents) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "AddBlendShapeFrame_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, shapeName, frameWeight, deltaVertices, deltaNormals, deltaTangents);
}
inline void UnityEngine::Mesh::GetBlendShapeOffsetInternal_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::BlendShape> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "GetBlendShapeOffsetInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::BlendShape>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index, ret);
}
inline bool UnityEngine::Mesh::HasBoneWeights_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "HasBoneWeights_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::GetBoneWeightsImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                       { "GetBoneWeightsImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Mesh::SetBoneWeightsImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> weights) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "SetBoneWeightsImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, weights);
}
inline void UnityEngine::Mesh::InternalSetBoneWeights_Injected(::System::IntPtr _unity_self, ::System::IntPtr bonesPerVertex, int32_t bonesPerVertexSize, ::System::IntPtr weights,
                                                               int32_t weightsSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "InternalSetBoneWeights_Injected",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, bonesPerVertex, bonesPerVertexSize, weights, weightsSize);
}
inline int32_t UnityEngine::Mesh::GetAllBoneWeightsArraySize_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetAllBoneWeightsArraySize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Mesh::GetBoneWeightBufferLayoutInternal_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBoneWeightBufferLayoutInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::Mesh::GetAllBoneWeightsArray_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetAllBoneWeightsArray_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::Mesh::GetBonesPerVertexArray_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBonesPerVertexArray_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Mesh::get_bindposeCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_bindposeCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::get_bindposes_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "get_bindposes_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Mesh::set_bindposes_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "set_bindposes_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Mesh::SetBindposesFromScript_NativeArray_Injected(::System::IntPtr _unity_self, ::System::IntPtr posesPtr, int32_t posesCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                       { "SetBindposesFromScript_NativeArray_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, posesPtr, posesCount);
}
inline ::System::IntPtr UnityEngine::Mesh::GetBindposesArray_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetBindposesArray_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::GetBoneWeightsNonAllocImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "GetBoneWeightsNonAllocImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, values);
}
inline void UnityEngine::Mesh::GetBindposesNonAllocImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "GetBindposesNonAllocImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, values);
}
inline bool UnityEngine::Mesh::get_isReadable_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_isReadable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Mesh::get_canAccess_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_canAccess_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Mesh::get_vertexCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_vertexCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Mesh::get_subMeshCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_subMeshCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::set_subMeshCount_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_subMeshCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Mesh::SetSubMesh_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor const> desc,
                                                   ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetSubMesh_Injected",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubMeshDescriptor const>>(),
                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index, desc, flags);
}
inline void UnityEngine::Mesh::GetSubMesh_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                          { "GetSubMesh_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index, ret);
}
inline void UnityEngine::Mesh::SetAllSubMeshesAtOnceFromArray_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> desc, int32_t start, int32_t count,
                                                                       ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetAllSubMeshesAtOnceFromArray_Injected",
                                                                     {},
                                                                     { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, desc, start, count, flags);
}
inline void UnityEngine::Mesh::SetAllSubMeshesAtOnceFromNativeArray_Injected(::System::IntPtr _unity_self, ::System::IntPtr desc, int32_t start, int32_t count,
                                                                             ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetAllSubMeshesAtOnceFromNativeArray_Injected",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, desc, start, count, flags);
}
inline void UnityEngine::Mesh::SetLodCount_Injected(::System::IntPtr _unity_self, int32_t numLevels) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLodCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, numLevels);
}
inline void UnityEngine::Mesh::SetLodSelectionCurve_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Mesh_LodSelectionCurve const> lodSelectionCurve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                       { "SetLodSelectionCurve_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Mesh_LodSelectionCurve const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, lodSelectionCurve);
}
inline void UnityEngine::Mesh::SetLodsFromArray_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> levelRanges, int32_t start, int32_t count, int32_t submesh,
                                                         ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "SetLodsFromArray_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, levelRanges, start, count, submesh, flags);
}
inline void UnityEngine::Mesh::SetLodsFromNativeArray_Injected(::System::IntPtr _unity_self, ::System::IntPtr lodLevels, int32_t count, int32_t submesh,
                                                               ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "SetLodsFromNativeArray_Injected",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, lodLevels, count, submesh, flags);
}
inline void UnityEngine::Mesh::SetLodImpl_Injected(::System::IntPtr _unity_self, int32_t subMeshIndex, int32_t level, ::by_ref<::UnityEngine::MeshLodRange const> levelRange,
                                                   ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                                           { "SetLodImpl_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::MeshLodRange const>>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, subMeshIndex, level, levelRange, flags);
}
inline void UnityEngine::Mesh::GetLodsAlloc_Injected(::System::IntPtr _unity_self, int32_t subMeshIndex, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Mesh*>(),
          { "GetLodsAlloc_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, subMeshIndex, ret);
}
inline void UnityEngine::Mesh::GetLodsNonAlloc_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> levels, int32_t subMeshIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Mesh*>(),
          { "GetLodsNonAlloc_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, levels, subMeshIndex);
}
inline int32_t UnityEngine::Mesh::GetLodCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetLodCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::GetLodSelectionCurve_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Mesh_LodSelectionCurve> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "GetLodSelectionCurve_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Mesh_LodSelectionCurve>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Mesh::GetLod_Injected(::System::IntPtr _unity_self, int32_t subMeshIndex, int32_t levelIndex, ::by_ref<::UnityEngine::MeshLodRange> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Mesh*>(),
          { "GetLod_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::MeshLodRange>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, subMeshIndex, levelIndex, ret);
}
inline void UnityEngine::Mesh::get_bounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "get_bounds_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Mesh::set_bounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds const> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "set_bounds_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Mesh::ClearImpl_Injected(::System::IntPtr _unity_self, bool keepVertexLayout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "ClearImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, keepVertexLayout);
}
inline void UnityEngine::Mesh::RecalculateBoundsImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "RecalculateBoundsImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, flags);
}
inline void UnityEngine::Mesh::RecalculateNormalsImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "RecalculateNormalsImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, flags);
}
inline void UnityEngine::Mesh::RecalculateTangentsImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "RecalculateTangentsImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, flags);
}
inline void UnityEngine::Mesh::MarkDynamicImpl_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "MarkDynamicImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::MarkModified_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "MarkModified_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::UploadMeshDataImpl_Injected(::System::IntPtr _unity_self, bool markNoLongerReadable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "UploadMeshDataImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, markNoLongerReadable);
}
inline ::UnityEngine::MeshTopology UnityEngine::Mesh::GetTopologyImpl_Injected(::System::IntPtr _unity_self, int32_t submesh) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetTopologyImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::MeshTopology>(nullptr, ___internal_method, _unity_self, submesh);
}
inline void UnityEngine::Mesh::RecalculateUVDistributionMetricImpl_Injected(::System::IntPtr _unity_self, int32_t uvSetIndex, float_t uvAreaThreshold) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(),
                                              { "RecalculateUVDistributionMetricImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, uvSetIndex, uvAreaThreshold);
}
inline void UnityEngine::Mesh::RecalculateUVDistributionMetricsImpl_Injected(::System::IntPtr _unity_self, float_t uvAreaThreshold) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "RecalculateUVDistributionMetricsImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, uvAreaThreshold);
}
inline float_t UnityEngine::Mesh::GetUVDistributionMetric_Injected(::System::IntPtr _unity_self, int32_t uvSetIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "GetUVDistributionMetric_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self, uvSetIndex);
}
inline void UnityEngine::Mesh::CombineMeshesImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> combine, bool mergeSubMeshes, bool useMatrices,
                                                          bool hasLightmapData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "CombineMeshesImpl_Injected",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                           ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, combine, mergeSubMeshes, useMatrices, hasLightmapData);
}
inline void UnityEngine::Mesh::OptimizeImpl_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "OptimizeImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::OptimizeIndexBuffersImpl_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "OptimizeIndexBuffersImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::OptimizeReorderVertexBufferImpl_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Mesh*>(), { "OptimizeReorderVertexBufferImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
/// @brief [RequiredByNativeCode]
inline ::UnityEngine::Mesh* UnityEngine::Mesh::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Mesh*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Mesh::Mesh() {}
