#pragma once
// IWYU pragma private; include "TMPro\TMP_MeshInfo.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "TMPro/zzzz__TMP_MeshInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "TMPro/zzzz__VertexSortingOrder_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_MeshInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_MeshInfo::*)(::UnityEngine::Mesh*, int32_t)>(&::TMPro::TMP_MeshInfo::_ctor)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x6998514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MeshInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_MeshInfo::*)(::UnityEngine::Mesh*, int32_t, bool)>(&::TMPro::TMP_MeshInfo::_ctor)> {
  constexpr static std::size_t size = 0x7b8;
  constexpr static std::size_t addrs = 0x6998a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MeshInfo.ResizeMeshInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_MeshInfo::*)(int32_t)>(&::TMPro::TMP_MeshInfo::ResizeMeshInfo)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x699921c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { "ResizeMeshInfo", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MeshInfo.ResizeMeshInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_MeshInfo::*)(int32_t, bool)>(&::TMPro::TMP_MeshInfo::ResizeMeshInfo)> {
  constexpr static std::size_t size = 0x8d8;
  constexpr static std::size_t addrs = 0x6999690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { "ResizeMeshInfo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MeshInfo.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_MeshInfo::*)()>(&::TMPro::TMP_MeshInfo::Clear)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6999f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MeshInfo.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_MeshInfo::*)(bool)>(&::TMPro::TMP_MeshInfo::Clear)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x699a010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { "Clear", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MeshInfo.ClearUnusedVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_MeshInfo::*)()>(&::TMPro::TMP_MeshInfo::ClearUnusedVertices)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x699a148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { "ClearUnusedVertices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MeshInfo.ClearUnusedVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_MeshInfo::*)(int32_t)>(&::TMPro::TMP_MeshInfo::ClearUnusedVertices)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x699a17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { "ClearUnusedVertices", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MeshInfo.ClearUnusedVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_MeshInfo::*)(int32_t, bool)>(&::TMPro::TMP_MeshInfo::ClearUnusedVertices)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x699a1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { "ClearUnusedVertices", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MeshInfo.SortGeometry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_MeshInfo::*)(::TMPro::VertexSortingOrder)>(&::TMPro::TMP_MeshInfo::SortGeometry)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x699a270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { "SortGeometry", {}, { ::i2c::type_of<::TMPro::VertexSortingOrder>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MeshInfo.SortGeometry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_MeshInfo::*)(::System::Collections::Generic::IList_1<int32_t>*)>(&::TMPro::TMP_MeshInfo::SortGeometry)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x699a8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { "SortGeometry", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MeshInfo.SwapVertexData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_MeshInfo::*)(int32_t, int32_t)>(&::TMPro::TMP_MeshInfo::SwapVertexData)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x699a328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { "SwapVertexData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_MeshInfo::setStaticF_s_DefaultColor(::UnityEngine::Color32 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color32, "s_DefaultColor", ::TMPro::TMP_MeshInfo>(std::forward<::UnityEngine::Color32>(value));
}
inline ::UnityEngine::Color32 TMPro::TMP_MeshInfo::getStaticF_s_DefaultColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color32, "s_DefaultColor", ::TMPro::TMP_MeshInfo>();
}
inline void TMPro::TMP_MeshInfo::setStaticF_s_DefaultNormal(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "s_DefaultNormal", ::TMPro::TMP_MeshInfo>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 TMPro::TMP_MeshInfo::getStaticF_s_DefaultNormal() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "s_DefaultNormal", ::TMPro::TMP_MeshInfo>();
}
inline void TMPro::TMP_MeshInfo::setStaticF_s_DefaultTangent(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "s_DefaultTangent", ::TMPro::TMP_MeshInfo>(std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 TMPro::TMP_MeshInfo::getStaticF_s_DefaultTangent() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "s_DefaultTangent", ::TMPro::TMP_MeshInfo>();
}
inline void TMPro::TMP_MeshInfo::setStaticF_s_DefaultBounds(::UnityEngine::Bounds value) {
  ::cordl_internals::setStaticField<::UnityEngine::Bounds, "s_DefaultBounds", ::TMPro::TMP_MeshInfo>(std::forward<::UnityEngine::Bounds>(value));
}
inline ::UnityEngine::Bounds TMPro::TMP_MeshInfo::getStaticF_s_DefaultBounds() {
  return ::cordl_internals::getStaticField<::UnityEngine::Bounds, "s_DefaultBounds", ::TMPro::TMP_MeshInfo>();
}
inline void TMPro::TMP_MeshInfo::_ctor(::UnityEngine::Mesh* mesh, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, size);
}
inline void TMPro::TMP_MeshInfo::_ctor(::UnityEngine::Mesh* mesh, int32_t size, bool isVolumetric) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, size, isVolumetric);
}
inline void TMPro::TMP_MeshInfo::ResizeMeshInfo(int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { "ResizeMeshInfo", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, size);
}
inline void TMPro::TMP_MeshInfo::ResizeMeshInfo(int32_t size, bool isVolumetric) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { "ResizeMeshInfo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, size, isVolumetric);
}
inline void TMPro::TMP_MeshInfo::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void TMPro::TMP_MeshInfo::Clear(bool uploadChanges) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { "Clear", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, uploadChanges);
}
inline void TMPro::TMP_MeshInfo::ClearUnusedVertices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { "ClearUnusedVertices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void TMPro::TMP_MeshInfo::ClearUnusedVertices(int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { "ClearUnusedVertices", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startIndex);
}
inline void TMPro::TMP_MeshInfo::ClearUnusedVertices(int32_t startIndex, bool updateMesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { "ClearUnusedVertices", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startIndex, updateMesh);
}
inline void TMPro::TMP_MeshInfo::SortGeometry(::TMPro::VertexSortingOrder order) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { "SortGeometry", {}, { ::i2c::type_of<::TMPro::VertexSortingOrder>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, order);
}
inline void TMPro::TMP_MeshInfo::SortGeometry(::System::Collections::Generic::IList_1<int32_t>* sortingOrder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { "SortGeometry", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sortingOrder);
}
inline void TMPro::TMP_MeshInfo::SwapVertexData(int32_t src, int32_t dst) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_MeshInfo>(), { "SwapVertexData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, src, dst);
}
// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "vertices", ty: "::ArrayW<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "normals", ty: "::ArrayW<::UnityEngine::Vector3>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "tangents", ty: "::ArrayW<::UnityEngine::Vector4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "uvs0", ty:
// "::ArrayW<::UnityEngine::Vector4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "uvs2", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "colors32", ty: "::ArrayW<::UnityEngine::Color32>", modifiers: "", def_value: Some("{}") }, CppParam { name: "triangles", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TMP_MeshInfo::TMP_MeshInfo(::UnityW<::UnityEngine::Mesh> mesh, int32_t vertexCount, ::ArrayW<::UnityEngine::Vector3> vertices, ::ArrayW<::UnityEngine::Vector3> normals,
                                              ::ArrayW<::UnityEngine::Vector4> tangents, ::ArrayW<::UnityEngine::Vector4> uvs0, ::ArrayW<::UnityEngine::Vector2> uvs2,
                                              ::ArrayW<::UnityEngine::Color32> colors32, ::ArrayW<int32_t> triangles, ::UnityW<::UnityEngine::Material> material) noexcept {
  this->mesh = mesh;
  this->vertexCount = vertexCount;
  this->vertices = vertices;
  this->normals = normals;
  this->tangents = tangents;
  this->uvs0 = uvs0;
  this->uvs2 = uvs2;
  this->colors32 = colors32;
  this->triangles = triangles;
  this->material = material;
}
// Ctor Parameters []
constexpr ::TMPro::TMP_MeshInfo::TMP_MeshInfo() {}
