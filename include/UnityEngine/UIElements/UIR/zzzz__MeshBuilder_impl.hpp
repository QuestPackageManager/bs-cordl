#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MeshInfo_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshBuilder_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VertexFlags_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColorPage_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContextUtils_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshWriteData_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextVertex_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__ScaleMode_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3001128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteData* (
    ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator::*)(uint32_t, uint32_t, ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>)>(
    &::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x30011ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*>(object, method));
}
inline void GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::UnityEngine::UIElements::MeshWriteData* GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator::Invoke(uint32_t vertexCount, uint32_t indexCount,
                                                                                                                  ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData> allocatorData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteData*, false>(this, ___internal_method, vertexCount, indexCount, allocatorData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator::__MeshBuilder__AllocMeshData__Allocator() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData.Allocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteData* (
    ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData::*)(uint32_t, uint32_t)>(&::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData::Allocate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ffc0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::MeshWriteData* UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData::Allocate(uint32_t vertexCount, uint32_t indexCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteData*, false>(this, ___internal_method, vertexCount, indexCount);
}
// Ctor Parameters [CppParam { name: "alloc", ty: "::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "texture", ty:
// "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "svgTexture", ty: "::UnityEngine::UIElements::TextureId", modifiers: "", def_value: Some("{}") },
// CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "flags", ty:
// "::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorAlloc", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData::__MeshBuilder__AllocMeshData(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* alloc,
                                                                                                     ::UnityW<::UnityEngine::Texture> texture, ::UnityEngine::UIElements::TextureId svgTexture,
                                                                                                     ::UnityW<::UnityEngine::Material> material,
                                                                                                     ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags flags,
                                                                                                     ::UnityEngine::UIElements::UIR::BMPAlloc colorAlloc) noexcept {
  this->alloc = alloc;
  this->texture = texture;
  this->svgTexture = svgTexture;
  this->material = material;
  this->flags = flags;
  this->colorAlloc = colorAlloc;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData::__MeshBuilder__AllocMeshData() {}
// Ctor Parameters [CppParam { name: "firstClippedIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstDegenerateIndex", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "lastClippedIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "clippedTriangles", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "addedTriangles", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "degenerateTriangles", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts::__MeshBuilder__ClipCounts(int32_t firstClippedIndex, int32_t firstDegenerateIndex, int32_t lastClippedIndex,
                                                                                               int32_t clippedTriangles, int32_t addedTriangles, int32_t degenerateTriangles) noexcept {
  this->firstClippedIndex = firstClippedIndex;
  this->firstDegenerateIndex = firstDegenerateIndex;
  this->lastClippedIndex = lastClippedIndex;
  this->clippedTriangles = clippedTriangles;
  this->addedTriangles = addedTriangles;
  this->degenerateTriangles = degenerateTriangles;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts::__MeshBuilder__ClipCounts() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge::__MeshBuilder__VertexClipEdge(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge::__MeshBuilder__VertexClipEdge() {}
constexpr ::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge::Left{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge::Top{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge::Right{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge::Bottom{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.MakeBorder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, float_t, ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData)>(
        &::UnityEngine::UIElements::UIR::MeshBuilder::MakeBorder)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2ff91dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "MakeBorder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.MakeSolidRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, float_t, ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData)>(
        &::UnityEngine::UIElements::UIR::MeshBuilder::MakeSolidRect)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2ff9518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "MakeSolidRect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.MakeTexturedRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, float_t,
                                                                                           ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, ::UnityEngine::UIElements::ColorPage)>(
    &::UnityEngine::UIElements::UIR::MeshBuilder::MakeTexturedRect)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x2ffa100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "MakeTexturedRect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.ConvertTextVertexToUIRVertex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::Vertex (*)(::UnityEngine::TextCore::Text::MeshInfo, int32_t, ::UnityEngine::Vector2, ::UnityEngine::UIElements::UIR::VertexFlags, bool)>(
        &::UnityEngine::UIElements::UIR::MeshBuilder::ConvertTextVertexToUIRVertex)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2ffbb14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "ConvertTextVertexToUIRVertex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::MeshInfo>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::VertexFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.ConvertTextVertexToUIRVertex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Vertex (*)(::UnityEngine::UIElements::TextVertex, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::UIR::MeshBuilder::ConvertTextVertexToUIRVertex)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2ffbc24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "ConvertTextVertexToUIRVertex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextVertex>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.LimitTextVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, bool)>(&::UnityEngine::UIElements::UIR::MeshBuilder::LimitTextVertices)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2ffbc5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "LimitTextVertices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.MakeText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::TextCore::Text::MeshInfo, ::UnityEngine::Vector2, ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, ::UnityEngine::UIElements::UIR::VertexFlags, bool)>(
    &::UnityEngine::UIElements::UIR::MeshBuilder::MakeText)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x2ffbd8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "MakeText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::MeshInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::VertexFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.MakeText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>, ::UnityEngine::Vector2, ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData)>(
        &::UnityEngine::UIElements::UIR::MeshBuilder::MakeText)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x2ffc0e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "MakeText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.UpdateText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>, ::UnityEngine::Vector2, ::UnityEngine::Matrix4x4, ::UnityEngine::Color32, ::UnityEngine::Color32,
    ::UnityEngine::Color32, ::UnityEngine::Color32, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>)>(&::UnityEngine::UIElements::UIR::MeshBuilder::UpdateText)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2ffc3ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "UpdateText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.MakeQuad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Color, float_t, ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, ::UnityEngine::UIElements::ColorPage)>(
        &::UnityEngine::UIElements::UIR::MeshBuilder::MakeQuad)> {
  constexpr static std::size_t size = 0xd58;
  constexpr static std::size_t addrs = 0x2ffa414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "MakeQuad", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.MakeSlicedQuad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>, float_t, ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData)>(
        &::UnityEngine::UIElements::UIR::MeshBuilder::MakeSlicedQuad)> {
  constexpr static std::size_t size = 0x9a8;
  constexpr static std::size_t addrs = 0x2ffb16c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "MakeSlicedQuad", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.MakeVectorGraphics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, int32_t,
                                                                                           ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, ByRef<int32_t>, ByRef<int32_t>)>(
    &::UnityEngine::UIElements::UIR::MeshBuilder::MakeVectorGraphics)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x2ffc564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "MakeVectorGraphics", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.MakeVectorGraphicsStretchBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>, ::ArrayW<uint16_t, ::Array<uint16_t>*>, float_t, float_t, ::UnityEngine::Rect,
                         ::UnityEngine::Rect, ::UnityEngine::ScaleMode, ::UnityEngine::Color, int32_t, ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, ByRef<int32_t>, ByRef<int32_t>)>(
        &::UnityEngine::UIElements::UIR::MeshBuilder::MakeVectorGraphicsStretchBackground)> {
  constexpr static std::size_t size = 0xfec;
  constexpr static std::size_t addrs = 0x2ffc914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "MakeVectorGraphicsStretchBackground", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 12>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.SplitTriangle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex>, ::cordl_internals::Ptr<uint16_t>, ByRef<int32_t>,
                                                                                           int32_t, ByRef<int32_t>, float_t, float_t, ::UnityEngine::Vector4, int32_t)>(
    &::UnityEngine::UIElements::UIR::MeshBuilder::SplitTriangle)> {
  constexpr static std::size_t size = 0xc48;
  constexpr static std::size_t addrs = 0x2ffea94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "SplitTriangle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.ScaleSplittedTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex>, int32_t, float_t, float_t, ::UnityEngine::Rect,
                                                                                           ::UnityEngine::Vector4)>(&::UnityEngine::UIElements::UIR::MeshBuilder::ScaleSplittedTriangles)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x2fff6dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "ScaleSplittedTriangles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.MakeVectorGraphics9SliceBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>, ::ArrayW<uint16_t, ::Array<uint16_t>*>, float_t, float_t, ::UnityEngine::Rect, ::UnityEngine::Vector4,
    bool, ::UnityEngine::Color, int32_t, ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData)>(&::UnityEngine::UIElements::UIR::MeshBuilder::MakeVectorGraphics9SliceBackground)> {
  constexpr static std::size_t size = 0xbac;
  constexpr static std::size_t addrs = 0x2ffd900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "MakeVectorGraphics9SliceBackground", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.UpperBoundApproximateRectClippingResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts (*)(
    ::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>, ::ArrayW<uint16_t, ::Array<uint16_t>*>, ::UnityEngine::Vector4)>(
    &::UnityEngine::UIElements::UIR::MeshBuilder::UpperBoundApproximateRectClippingResults)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2ffe4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "UpperBoundApproximateRectClippingResults",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.RectClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>, ::ArrayW<uint16_t, ::Array<uint16_t>*>, ::UnityEngine::Vector4, ::UnityEngine::UIElements::MeshWriteData*,
    ::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts, ByRef<int32_t>)>(&::UnityEngine::UIElements::UIR::MeshBuilder::RectClip)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x2ffe658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "RectClip", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.RectClipTriangle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex>, ::cordl_internals::Ptr<uint16_t>,
                                                                                           ::UnityEngine::Vector4, ::UnityEngine::UIElements::MeshWriteData*, ByRef<uint16_t>)>(
    &::UnityEngine::UIElements::UIR::MeshBuilder::RectClipTriangle)> {
  constexpr static std::size_t size = 0xb5c;
  constexpr static std::size_t addrs = 0x2fff960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "RectClipTriangle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.GetVertexBaryCentricCoordinates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex>, float_t, float_t)>(
    &::UnityEngine::UIElements::UIR::MeshBuilder::GetVertexBaryCentricCoordinates)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x30004bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "GetVertexBaryCentricCoordinates", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.InterpolateVertexInTriangle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Vertex (*)(
    ::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex>, float_t, float_t, ::UnityEngine::Vector3)>(&::UnityEngine::UIElements::UIR::MeshBuilder::InterpolateVertexInTriangle)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x3000578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "InterpolateVertexInTriangle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.InterpolateVertexInTriangleEdge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Vertex (*)(
    ::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex>, int32_t, int32_t, float_t)>(&::UnityEngine::UIElements::UIR::MeshBuilder::InterpolateVertexInTriangleEdge)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x3000a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "InterpolateVertexInTriangleEdge", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.IntersectSegments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t)>(
    &::UnityEngine::UIElements::UIR::MeshBuilder::IntersectSegments)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x30009f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "IntersectSegments", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::MeshBuilder::setStaticF_s_VectorGraphics9Slice(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_VectorGraphics9Slice",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::MeshBuilder::getStaticF_s_VectorGraphics9Slice() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_VectorGraphics9Slice",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>();
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::setStaticF_s_VectorGraphicsSplitTriangle(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_VectorGraphicsSplitTriangle",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::MeshBuilder::getStaticF_s_VectorGraphicsSplitTriangle() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_VectorGraphicsSplitTriangle",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>();
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::setStaticF_s_VectorGraphicsScaleTriangle(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_VectorGraphicsScaleTriangle",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::MeshBuilder::getStaticF_s_VectorGraphicsScaleTriangle() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_VectorGraphicsScaleTriangle",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>();
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::setStaticF_s_VectorGraphicsStretch(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_VectorGraphicsStretch",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::MeshBuilder::getStaticF_s_VectorGraphicsStretch() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_VectorGraphicsStretch",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>();
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::setStaticF_s_MaxTextMeshVertices(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_MaxTextMeshVertices", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIR::MeshBuilder::getStaticF_s_MaxTextMeshVertices() {
  return ::cordl_internals::getStaticField<int32_t, "s_MaxTextMeshVertices", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>();
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::setStaticF_slicedQuadIndices(::ArrayW<uint16_t, ::Array<uint16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint16_t, ::Array<uint16_t>*>, "slicedQuadIndices",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>(
      std::forward<::ArrayW<uint16_t, ::Array<uint16_t>*>>(value));
}
inline ::ArrayW<uint16_t, ::Array<uint16_t>*> UnityEngine::UIElements::UIR::MeshBuilder::getStaticF_slicedQuadIndices() {
  return ::cordl_internals::getStaticField<::ArrayW<uint16_t, ::Array<uint16_t>*>, "slicedQuadIndices",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>();
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::setStaticF_k_TexCoordSlicesX(::ArrayW<float_t, ::Array<float_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<float_t, ::Array<float_t>*>, "k_TexCoordSlicesX",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>(
      std::forward<::ArrayW<float_t, ::Array<float_t>*>>(value));
}
inline ::ArrayW<float_t, ::Array<float_t>*> UnityEngine::UIElements::UIR::MeshBuilder::getStaticF_k_TexCoordSlicesX() {
  return ::cordl_internals::getStaticField<::ArrayW<float_t, ::Array<float_t>*>, "k_TexCoordSlicesX",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>();
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::setStaticF_k_TexCoordSlicesY(::ArrayW<float_t, ::Array<float_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<float_t, ::Array<float_t>*>, "k_TexCoordSlicesY",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>(
      std::forward<::ArrayW<float_t, ::Array<float_t>*>>(value));
}
inline ::ArrayW<float_t, ::Array<float_t>*> UnityEngine::UIElements::UIR::MeshBuilder::getStaticF_k_TexCoordSlicesY() {
  return ::cordl_internals::getStaticField<::ArrayW<float_t, ::Array<float_t>*>, "k_TexCoordSlicesY",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>();
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::setStaticF_k_PositionSlicesX(::ArrayW<float_t, ::Array<float_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<float_t, ::Array<float_t>*>, "k_PositionSlicesX",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>(
      std::forward<::ArrayW<float_t, ::Array<float_t>*>>(value));
}
inline ::ArrayW<float_t, ::Array<float_t>*> UnityEngine::UIElements::UIR::MeshBuilder::getStaticF_k_PositionSlicesX() {
  return ::cordl_internals::getStaticField<::ArrayW<float_t, ::Array<float_t>*>, "k_PositionSlicesX",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>();
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::setStaticF_k_PositionSlicesY(::ArrayW<float_t, ::Array<float_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<float_t, ::Array<float_t>*>, "k_PositionSlicesY",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>(
      std::forward<::ArrayW<float_t, ::Array<float_t>*>>(value));
}
inline ::ArrayW<float_t, ::Array<float_t>*> UnityEngine::UIElements::UIR::MeshBuilder::getStaticF_k_PositionSlicesY() {
  return ::cordl_internals::getStaticField<::ArrayW<float_t, ::Array<float_t>*>, "k_PositionSlicesY",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>();
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::setStaticF_s_AllClipEdges(
    ::ArrayW<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge, ::Array<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge, ::Array<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge>*>, "s_AllClipEdges",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>(
      std::forward<::ArrayW<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge, ::Array<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge>*>>(value));
}
inline ::ArrayW<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge, ::Array<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge>*>
UnityEngine::UIElements::UIR::MeshBuilder::getStaticF_s_AllClipEdges() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge, ::Array<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge>*>,
                                           "s_AllClipEdges", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get>();
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::MakeBorder(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams borderParams, float_t posZ,
                                                                  ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "MakeBorder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, borderParams, posZ, meshAlloc);
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::MakeSolidRect(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams, float_t posZ,
                                                                     ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "MakeSolidRect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rectParams, posZ, meshAlloc);
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::MakeTexturedRect(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams, float_t posZ,
                                                                        ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc, ::UnityEngine::UIElements::ColorPage colorPage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "MakeTexturedRect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rectParams, posZ, meshAlloc, colorPage);
}
/// @param flags: ::UnityEngine::UIElements::UIR::VertexFlags (default: static_cast<int32_t>(0x1))
/// @param isDynamicColor: bool (default: false)
inline ::UnityEngine::UIElements::Vertex UnityEngine::UIElements::UIR::MeshBuilder::ConvertTextVertexToUIRVertex(::UnityEngine::TextCore::Text::MeshInfo info, int32_t index,
                                                                                                                 ::UnityEngine::Vector2 offset, ::UnityEngine::UIElements::UIR::VertexFlags flags,
                                                                                                                 bool isDynamicColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "ConvertTextVertexToUIRVertex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::MeshInfo>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::VertexFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Vertex, false>(nullptr, ___internal_method, info, index, offset, flags, isDynamicColor);
}
inline ::UnityEngine::UIElements::Vertex UnityEngine::UIElements::UIR::MeshBuilder::ConvertTextVertexToUIRVertex(::UnityEngine::UIElements::TextVertex textVertex, ::UnityEngine::Vector2 offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "ConvertTextVertexToUIRVertex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextVertex>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Vertex, false>(nullptr, ___internal_method, textVertex, offset);
}
/// @param logTruncation: bool (default: true)
inline int32_t UnityEngine::UIElements::UIR::MeshBuilder::LimitTextVertices(int32_t vertexCount, bool logTruncation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "LimitTextVertices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, vertexCount, logTruncation);
}
/// @param flags: ::UnityEngine::UIElements::UIR::VertexFlags (default: static_cast<int32_t>(0x1))
/// @param isDynamicColor: bool (default: false)
inline void UnityEngine::UIElements::UIR::MeshBuilder::MakeText(::UnityEngine::TextCore::Text::MeshInfo meshInfo, ::UnityEngine::Vector2 offset,
                                                                ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc, ::UnityEngine::UIElements::UIR::VertexFlags flags,
                                                                bool isDynamicColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "MakeText", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::MeshInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::VertexFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, meshInfo, offset, meshAlloc, flags, isDynamicColor);
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::MakeText(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex> uiVertices, ::UnityEngine::Vector2 offset,
                                                                ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "MakeText", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, uiVertices, offset, meshAlloc);
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::UpdateText(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex> uiVertices, ::UnityEngine::Vector2 offset,
                                                                  ::UnityEngine::Matrix4x4 transform, ::UnityEngine::Color32 xformClipPages, ::UnityEngine::Color32 ids, ::UnityEngine::Color32 flags,
                                                                  ::UnityEngine::Color32 opacityPageSettingIndex, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "UpdateText", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, uiVertices, offset, transform, xformClipPages, ids, flags, opacityPageSettingIndex, vertices);
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::MakeQuad(::UnityEngine::Rect rcPosition, ::UnityEngine::Rect rcTexCoord, ::UnityEngine::Color color, float_t posZ,
                                                                ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc, ::UnityEngine::UIElements::ColorPage colorPage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "MakeQuad", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rcPosition, rcTexCoord, color, posZ, meshAlloc, colorPage);
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::MakeSlicedQuad(ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams> rectParams, float_t posZ,
                                                                      ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "MakeSlicedQuad", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rectParams, posZ, meshAlloc);
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::MakeVectorGraphics(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams, int32_t settingIndexOffset,
                                                                          ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc, ByRef<int32_t> finalVertexCount,
                                                                          ByRef<int32_t> finalIndexCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "MakeVectorGraphics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rectParams, settingIndexOffset, meshAlloc, finalVertexCount, finalIndexCount);
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::MakeVectorGraphicsStretchBackground(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> svgVertices,
                                                                                           ::ArrayW<uint16_t, ::Array<uint16_t>*> svgIndices, float_t svgWidth, float_t svgHeight,
                                                                                           ::UnityEngine::Rect targetRect, ::UnityEngine::Rect sourceUV, ::UnityEngine::ScaleMode scaleMode,
                                                                                           ::UnityEngine::Color tint, int32_t settingIndexOffset,
                                                                                           ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc, ByRef<int32_t> finalVertexCount,
                                                                                           ByRef<int32_t> finalIndexCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "MakeVectorGraphicsStretchBackground", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 12>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, svgVertices, svgIndices, svgWidth, svgHeight, targetRect, sourceUV, scaleMode, tint, settingIndexOffset,
                                                          meshAlloc, finalVertexCount, finalIndexCount);
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::SplitTriangle(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex> vertices, ::cordl_internals::Ptr<uint16_t> indices,
                                                                     ByRef<int32_t> vertexCount, int32_t indexToProcess, ByRef<int32_t> indexCount, float_t svgWidth, float_t svgHeight,
                                                                     ::UnityEngine::Vector4 sliceLTRB, int32_t sliceIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "SplitTriangle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, vertices, indices, vertexCount, indexToProcess, indexCount, svgWidth, svgHeight, sliceLTRB, sliceIndex);
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::ScaleSplittedTriangles(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex> vertices, int32_t vertexCount, float_t svgWidth,
                                                                              float_t svgHeight, ::UnityEngine::Rect targetRect, ::UnityEngine::Vector4 sliceLTRB) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "ScaleSplittedTriangles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, vertices, vertexCount, svgWidth, svgHeight, targetRect, sliceLTRB);
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::MakeVectorGraphics9SliceBackground(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> svgVertices,
                                                                                          ::ArrayW<uint16_t, ::Array<uint16_t>*> svgIndices, float_t svgWidth, float_t svgHeight,
                                                                                          ::UnityEngine::Rect targetRect, ::UnityEngine::Vector4 sliceLTRB, bool stretch, ::UnityEngine::Color tint,
                                                                                          int32_t settingIndexOffset, ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "MakeVectorGraphics9SliceBackground", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, svgVertices, svgIndices, svgWidth, svgHeight, targetRect, sliceLTRB, stretch, tint, settingIndexOffset,
                                                          meshAlloc);
}
inline ::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts
UnityEngine::UIElements::UIR::MeshBuilder::UpperBoundApproximateRectClippingResults(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> vertices,
                                                                                    ::ArrayW<uint16_t, ::Array<uint16_t>*> indices, ::UnityEngine::Vector4 clipRectMinMax) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "UpperBoundApproximateRectClippingResults", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts, false>(nullptr, ___internal_method, vertices, indices, clipRectMinMax);
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::RectClip(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> vertices,
                                                                ::ArrayW<uint16_t, ::Array<uint16_t>*> indices, ::UnityEngine::Vector4 clipRectMinMax, ::UnityEngine::UIElements::MeshWriteData* mwd,
                                                                ::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts cc, ByRef<int32_t> newVertexCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "RectClip", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, vertices, indices, clipRectMinMax, mwd, cc, newVertexCount);
}
inline void UnityEngine::UIElements::UIR::MeshBuilder::RectClipTriangle(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex> vt, ::cordl_internals::Ptr<uint16_t> it,
                                                                        ::UnityEngine::Vector4 clipRectMinMax, ::UnityEngine::UIElements::MeshWriteData* mwd, ByRef<uint16_t> nextNewVertex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "RectClipTriangle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, vt, it, clipRectMinMax, mwd, nextNewVertex);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::UIR::MeshBuilder::GetVertexBaryCentricCoordinates(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex> vt, float_t x, float_t y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "GetVertexBaryCentricCoordinates", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, vt, x, y);
}
inline ::UnityEngine::UIElements::Vertex UnityEngine::UIElements::UIR::MeshBuilder::InterpolateVertexInTriangle(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex> vt, float_t x, float_t y,
                                                                                                                ::UnityEngine::Vector3 uvw) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "InterpolateVertexInTriangle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Vertex, false>(nullptr, ___internal_method, vt, x, y, uvw);
}
inline ::UnityEngine::UIElements::Vertex UnityEngine::UIElements::UIR::MeshBuilder::InterpolateVertexInTriangleEdge(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex> vt, int32_t e0,
                                                                                                                    int32_t e1, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "InterpolateVertexInTriangleEdge", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Vertex, false>(nullptr, ___internal_method, vt, e0, e1, t);
}
inline float_t UnityEngine::UIElements::UIR::MeshBuilder::IntersectSegments(float_t ax, float_t ay, float_t bx, float_t by, float_t cx, float_t cy, float_t dx, float_t dy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshBuilder*>::get(), "IntersectSegments", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, ax, ay, bx, by, cx, cy, dx, dy);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::MeshBuilder::MeshBuilder() {}
