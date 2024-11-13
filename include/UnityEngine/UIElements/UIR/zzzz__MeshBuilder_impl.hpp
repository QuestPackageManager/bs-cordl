#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshBuilder.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshBuilder_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MeshInfo_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshBuilder_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VertexFlags_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshWriteData_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4943264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteData* (
    ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator::*)(uint32_t, uint32_t, ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>)>(
    &::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x49432f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*>(object, method));
}
inline void GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
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
  constexpr static std::size_t addrs = 0x4943108;

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
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.ConvertTextVertexToUIRVertex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::Vertex (*)(::UnityEngine::TextCore::Text::MeshInfo, int32_t, ::UnityEngine::Vector2, ::UnityEngine::UIElements::UIR::VertexFlags, bool)>(
        &::UnityEngine::UIElements::UIR::MeshBuilder::ConvertTextVertexToUIRVertex)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x4942a08;

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
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshBuilder.LimitTextVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, bool)>(&::UnityEngine::UIElements::UIR::MeshBuilder::LimitTextVertices)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x4942b08;

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
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x4942c38;

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
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::MeshBuilder::MeshBuilder() {}
