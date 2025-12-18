#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/MeshInfo.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__VertexDataLayout_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MeshInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextCoreVertex_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__VertexDataLayout_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__VertexSortingOrder_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MeshInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::MeshInfo::*)(int32_t, ::UnityEngine::TextCore::Text::VertexDataLayout, bool)>(
    &::UnityEngine::TextCore::Text::MeshInfo::_ctor)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x69fd468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MeshInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::VertexDataLayout>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MeshInfo.ResizeMeshInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::MeshInfo::*)(int32_t, bool)>(
    &::UnityEngine::TextCore::Text::MeshInfo::ResizeMeshInfo)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x69fd914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MeshInfo>::get(), "ResizeMeshInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MeshInfo.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::MeshInfo::*)(bool)>(&::UnityEngine::TextCore::Text::MeshInfo::Clear)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x69fdb58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MeshInfo>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MeshInfo.ClearUnusedVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::MeshInfo::*)()>(&::UnityEngine::TextCore::Text::MeshInfo::ClearUnusedVertices)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69fdbc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MeshInfo>::get(),
                                                                               "ClearUnusedVertices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MeshInfo.SortGeometry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::MeshInfo::*)(::UnityEngine::TextCore::Text::VertexSortingOrder)>(
    &::UnityEngine::TextCore::Text::MeshInfo::SortGeometry)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x69fdc48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MeshInfo>::get(), "SortGeometry", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::VertexSortingOrder>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MeshInfo.SwapVertexData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::MeshInfo::*)(int32_t, int32_t)>(
    &::UnityEngine::TextCore::Text::MeshInfo::SwapVertexData)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x69fdd00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MeshInfo>::get(), "SwapVertexData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::MeshInfo::setStaticF_k_DefaultColor(::UnityEngine::Color32 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color32, "k_DefaultColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MeshInfo>::get>(
      std::forward<::UnityEngine::Color32>(value));
}
inline ::UnityEngine::Color32 UnityEngine::TextCore::Text::MeshInfo::getStaticF_k_DefaultColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color32, "k_DefaultColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MeshInfo>::get>();
}
inline void UnityEngine::TextCore::Text::MeshInfo::setStaticF_k_DefaultNormal(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "k_DefaultNormal", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MeshInfo>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 UnityEngine::TextCore::Text::MeshInfo::getStaticF_k_DefaultNormal() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "k_DefaultNormal", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MeshInfo>::get>();
}
inline void UnityEngine::TextCore::Text::MeshInfo::setStaticF_k_DefaultTangent(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "k_DefaultTangent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MeshInfo>::get>(
      std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::TextCore::Text::MeshInfo::getStaticF_k_DefaultTangent() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "k_DefaultTangent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MeshInfo>::get>();
}
inline void UnityEngine::TextCore::Text::MeshInfo::_ctor(int32_t size, ::UnityEngine::TextCore::Text::VertexDataLayout layout, bool isIMGUI) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MeshInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::VertexDataLayout>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size, layout, isIMGUI);
}
inline void UnityEngine::TextCore::Text::MeshInfo::ResizeMeshInfo(int32_t size, bool isIMGUI) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MeshInfo>::get(), "ResizeMeshInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size, isIMGUI);
}
inline void UnityEngine::TextCore::Text::MeshInfo::Clear(bool uploadChanges) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MeshInfo>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uploadChanges);
}
inline void UnityEngine::TextCore::Text::MeshInfo::ClearUnusedVertices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MeshInfo>::get(),
                                                                             "ClearUnusedVertices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::MeshInfo::SortGeometry(::UnityEngine::TextCore::Text::VertexSortingOrder order) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MeshInfo>::get(), "SortGeometry", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::VertexSortingOrder>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, order);
}
inline void UnityEngine::TextCore::Text::MeshInfo::SwapVertexData(int32_t src, int32_t dst) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MeshInfo>::get(), "SwapVertexData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dst);
}
// Ctor Parameters [CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexData", ty:
// "::ArrayW<::UnityEngine::TextCore::Text::TextCoreVertex,::Array<::UnityEngine::TextCore::Text::TextCoreVertex>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "material", ty:
// "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertices", ty: "::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "normals", ty: "::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "tangents",
// ty: "::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexBufferSize", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "uvs0", ty: "::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "uvs2", ty:
// "::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "colors32", ty:
// "::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "triangles", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "vertexDataLayout", ty: "::UnityEngine::TextCore::Text::VertexDataLayout", modifiers: "", def_value: Some("{}") }, CppParam { name: "applySDF", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "glyphRenderMode", ty: "::UnityEngine::TextCore::LowLevel::GlyphRenderMode", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::MeshInfo::MeshInfo(
    int32_t vertexCount, ::ArrayW<::UnityEngine::TextCore::Text::TextCoreVertex, ::Array<::UnityEngine::TextCore::Text::TextCoreVertex>*> vertexData, ::UnityW<::UnityEngine::Material> material,
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals,
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> tangents, int32_t vertexBufferSize, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> uvs0,
    ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs2, ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors32,
    ::ArrayW<int32_t, ::Array<int32_t>*> triangles, ::UnityEngine::TextCore::Text::VertexDataLayout vertexDataLayout, bool applySDF,
    ::UnityEngine::TextCore::LowLevel::GlyphRenderMode glyphRenderMode) noexcept {
  this->vertexCount = vertexCount;
  this->vertexData = vertexData;
  this->material = material;
  this->vertices = vertices;
  this->normals = normals;
  this->tangents = tangents;
  this->vertexBufferSize = vertexBufferSize;
  this->uvs0 = uvs0;
  this->uvs2 = uvs2;
  this->colors32 = colors32;
  this->triangles = triangles;
  this->vertexDataLayout = vertexDataLayout;
  this->applySDF = applySDF;
  this->glyphRenderMode = glyphRenderMode;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::MeshInfo::MeshInfo() {}
