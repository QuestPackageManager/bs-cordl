#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/Implementation/UIRStylePainter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__UIRStylePainter_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VertexFlags_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__UIRStylePainter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__UIRStylePainter_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshBuilder_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChain_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TempAllocator_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VectorImageManager_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VertexFlags_def.hpp"
#include "UnityEngine/UIElements/zzzz__AtlasBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStylePainter_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContextUtils_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshWriteDataInterface_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshWriteData_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "vertices", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "indices", ty:
// "::Unity::Collections::NativeSlice_1<uint16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "fontTexSDFScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "texture", ty: "::UnityEngine::UIElements::TextureId", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "customCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "clipRectID", ty:
// "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "addFlags", ty: "::UnityEngine::UIElements::UIR::VertexFlags", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "uvIsDisplacement", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isTextEntry", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "isClipRegisterEntry", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "stencilRef", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maskDepth",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry::__UIRStylePainter__Entry(
    ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices, ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityW<::UnityEngine::Material> material,
    float_t fontTexSDFScale, ::UnityEngine::UIElements::TextureId texture, ::UnityEngine::UIElements::UIR::RenderChainCommand* customCommand, ::UnityEngine::UIElements::UIR::BMPAlloc clipRectID,
    ::UnityEngine::UIElements::UIR::VertexFlags addFlags, bool uvIsDisplacement, bool isTextEntry, bool isClipRegisterEntry, int32_t stencilRef, int32_t maskDepth) noexcept {
  this->vertices = vertices;
  this->indices = indices;
  this->material = material;
  this->fontTexSDFScale = fontTexSDFScale;
  this->texture = texture;
  this->customCommand = customCommand;
  this->clipRectID = clipRectID;
  this->addFlags = addFlags;
  this->uvIsDisplacement = uvIsDisplacement;
  this->isTextEntry = isTextEntry;
  this->isClipRegisterEntry = isClipRegisterEntry;
  this->stencilRef = stencilRef;
  this->maskDepth = maskDepth;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry::__UIRStylePainter__Entry() {}
// Ctor Parameters [CppParam { name: "needsClosing", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "popViewMatrix", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "popScissorClip", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "blitAndPopRenderTexture", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "PopDefaultMaterial", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "clipUnregisterDrawCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "clipperRegisterVertices", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "clipperRegisterIndices", ty: "::Unity::Collections::NativeSlice_1<uint16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "clipperRegisterIndexOffset", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "maskStencilRef", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo::__UIRStylePainter__ClosingInfo(
    bool needsClosing, bool popViewMatrix, bool popScissorClip, bool blitAndPopRenderTexture, bool PopDefaultMaterial, ::UnityEngine::UIElements::UIR::RenderChainCommand* clipUnregisterDrawCommand,
    ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> clipperRegisterVertices, ::Unity::Collections::NativeSlice_1<uint16_t> clipperRegisterIndices,
    int32_t clipperRegisterIndexOffset, int32_t maskStencilRef) noexcept {
  this->needsClosing = needsClosing;
  this->popViewMatrix = popViewMatrix;
  this->popScissorClip = popScissorClip;
  this->blitAndPopRenderTexture = blitAndPopRenderTexture;
  this->PopDefaultMaterial = PopDefaultMaterial;
  this->clipUnregisterDrawCommand = clipUnregisterDrawCommand;
  this->clipperRegisterVertices = clipperRegisterVertices;
  this->clipperRegisterIndices = clipperRegisterIndices;
  this->clipperRegisterIndexOffset = clipperRegisterIndexOffset;
  this->maskStencilRef = maskStencilRef;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo::__UIRStylePainter__ClosingInfo() {}
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}")
// }]
constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV::__UIRStylePainter__RepeatRectUV(::UnityEngine::Rect rect, ::UnityEngine::Rect uv) noexcept {
  this->rect = rect;
  this->uv = uv;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV::__UIRStylePainter__RepeatRectUV() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.GetPooledMeshWriteData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteData* (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::GetPooledMeshWriteData)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x495c76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(),
                                                 "GetPooledMeshWriteData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.AllocRawVertsIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteData* (
    ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(uint32_t, uint32_t, ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::AllocRawVertsIndices)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x495c87c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "AllocRawVertsIndices",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.AllocThroughDrawMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteData* (
    ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(uint32_t, uint32_t, ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::AllocThroughDrawMesh)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x495c93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "AllocThroughDrawMesh",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::UnityEngine::UIElements::UIR::RenderChain*)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::_ctor)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x495cdf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.get_meshGenerationContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshGenerationContext* (
    ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_meshGenerationContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x495d0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(),
                                                 "get_meshGenerationContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.get_currentElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_currentElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x495d0d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "get_currentElement",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.set_currentElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::set_currentElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x495d0dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "set_currentElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.get_entries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry>* (
    ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_entries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x495d0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "get_entries",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.get_closingInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo (
    ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_closingInfo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x495d0ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "get_closingInfo",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.get_totalVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_totalVertices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x495d108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "get_totalVertices",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.set_totalVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(int32_t)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::set_totalVertices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x495d110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "set_totalVertices",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.get_totalIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_totalIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x495d118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "get_totalIndices",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.set_totalIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(int32_t)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::set_totalIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x495d120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "set_totalIndices",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.Begin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::Begin)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x495d128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "Begin", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.LandClipUnregisterMeshDrawCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::UnityEngine::UIElements::UIR::RenderChainCommand*)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::LandClipUnregisterMeshDrawCommand)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x495d638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(),
                                    "LandClipUnregisterMeshDrawCommand", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.LandClipRegisterMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, ::Unity::Collections::NativeSlice_1<uint16_t>, int32_t)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::LandClipRegisterMesh)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x495d6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "LandClipRegisterMesh",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<uint16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::MeshWriteData* (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(int32_t, int32_t, ::UnityEngine::Texture*, ::UnityEngine::Material*,
                                                                                                                               ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags)>(
        &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawMesh)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x495c950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.TryAtlasTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::UnityEngine::Texture*, ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags, ByRef<::UnityEngine::Rect>, ByRef<bool>, ByRef<::UnityEngine::UIElements::TextureId>,
    ByRef<::UnityEngine::UIElements::UIR::VertexFlags>)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::TryAtlasTexture)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x495d748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "TryAtlasTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::TextureId>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::VertexFlags>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.BuildEntryFromNativeMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::UnityEngine::UIElements::MeshWriteDataInterface, ::UnityEngine::Texture*, ::UnityEngine::UIElements::TextureId, bool, ::UnityEngine::Material*,
    ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags, ::UnityEngine::Rect, ::UnityEngine::UIElements::UIR::VertexFlags)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::BuildEntryFromNativeMesh)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x495d900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "BuildEntryFromNativeMesh",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteDataInterface>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::VertexFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.BuildGradientEntryFromNativeMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::UnityEngine::UIElements::MeshWriteDataInterface, ::UnityEngine::UIElements::TextureId)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::BuildGradientEntryFromNativeMesh)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x495dd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(),
                                                 "BuildGradientEntryFromNativeMesh", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteDataInterface>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.BuildRawEntryFromNativeMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::UnityEngine::UIElements::MeshWriteDataInterface)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::BuildRawEntryFromNativeMesh)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x495e14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "BuildRawEntryFromNativeMesh",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteDataInterface>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(::UnityEngine::UIElements::TextElement*)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawText)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x495e32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawTextInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::UnityEngine::TextCore::Text::TextInfo*, ::UnityEngine::Vector2, bool)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawTextInfo)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x495e3c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawTextInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawRectangle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawRectangle)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x495e9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawRectangle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawBorder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawBorder)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x495f51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawBorder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawImmediate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(::System::Action*, bool)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawImmediate)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x495f5ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawImmediate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.get_visualElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_visualElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x495f714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "get_visualElement",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawVisualElementBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawVisualElementBackground)> {
  constexpr static std::size_t size = 0x1130;
  constexpr static std::size_t addrs = 0x495f71c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(),
                                                 "DrawVisualElementBackground", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawRectangleRepeat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, ::UnityEngine::Rect, float_t)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawRectangleRepeat)> {
  constexpr static std::size_t size = 0x1450;
  constexpr static std::size_t addrs = 0x496084c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawRectangleRepeat",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.StampRectangleWithSubRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, ::UnityEngine::Rect, ::UnityEngine::Rect)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::StampRectangleWithSubRect)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x4961c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "StampRectangleWithSubRect",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawVisualElementBorder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawVisualElementBorder)> {
  constexpr static std::size_t size = 0x938;
  constexpr static std::size_t addrs = 0x4961e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(),
                                                 "DrawVisualElementBorder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.ApplyVisualElementClipping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::ApplyVisualElementClipping)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x49627d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(),
                                                 "ApplyVisualElementClipping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.AdjustSpriteWinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint16_t, ::Array<uint16_t>*> (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, ::ArrayW<uint16_t, ::Array<uint16_t>*>)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::AdjustSpriteWinding)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x49636bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "AdjustSpriteWinding",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawSprite)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x495efa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawSprite", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.ApplyInset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ByRef<::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams>, ::UnityEngine::Texture*)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::ApplyInset)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x495f300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "ApplyInset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawVectorImage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawVectorImage)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x495ebdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawVectorImage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.MakeVectorGraphics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, bool, ::UnityEngine::UIElements::TextureId, int32_t, ByRef<int32_t>, ByRef<int32_t>)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::MakeVectorGraphics)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x49639dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "MakeVectorGraphics", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::Reset)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4963dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.ValidateMeshWriteData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::ValidateMeshWriteData)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x4963e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(),
                                                 "ValidateMeshWriteData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.GenerateStencilClipEntryForRoundedRectBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::GenerateStencilClipEntryForRoundedRectBackground)> {
  constexpr static std::size_t size = 0x930;
  constexpr static std::size_t addrs = 0x4962d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(),
                                                 "GenerateStencilClipEntryForRoundedRectBackground", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.GenerateStencilClipEntryForSVGBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::GenerateStencilClipEntryForSVGBackground)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x4962a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(),
                                                 "GenerateStencilClipEntryForSVGBackground", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::IStylePainter"
constexpr UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::operator ::UnityEngine::UIElements::IStylePainter*() noexcept {
  return static_cast<::UnityEngine::UIElements::IStylePainter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IStylePainter"
constexpr ::UnityEngine::UIElements::IStylePainter* UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::i___UnityEngine__UIElements__IStylePainter() noexcept {
  return static_cast<::UnityEngine::UIElements::IStylePainter*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::UIElements::UIR::RenderChain*& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_Owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Owner;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::RenderChain*> const& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_Owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Owner;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_Owner(::UnityEngine::UIElements::UIR::RenderChain* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Owner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry>*&
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_Entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Entries;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry>*> const&
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_Entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Entries;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_Entries(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::AtlasBase*& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_Atlas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Atlas;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::AtlasBase*> const& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_Atlas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Atlas;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_Atlas(::UnityEngine::UIElements::AtlasBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Atlas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::VectorImageManager*& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_VectorImageManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VectorImageManager;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::VectorImageManager*> const&
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_VectorImageManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VectorImageManager;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_VectorImageManager(::UnityEngine::UIElements::UIR::VectorImageManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VectorImageManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_CurrentEntry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentEntry;
}
constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry const& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_CurrentEntry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentEntry;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_CurrentEntry(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentEntry = value;
}
constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_ClosingInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClosingInfo;
}
constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo const&
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_ClosingInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClosingInfo;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_ClosingInfo(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClosingInfo = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_MaskDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaskDepth;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_MaskDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaskDepth;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_MaskDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaskDepth = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_StencilRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilRef;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_StencilRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilRef;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_StencilRef(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StencilRef = value;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_ClipRectID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClipRectID;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_ClipRectID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClipRectID;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_ClipRectID(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClipRectID = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_SVGBackgroundEntryIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SVGBackgroundEntryIndex;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_SVGBackgroundEntryIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SVGBackgroundEntryIndex;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_SVGBackgroundEntryIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SVGBackgroundEntryIndex = value;
}
constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>*& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_VertsPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertsPool;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>*> const&
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_VertsPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertsPool;
}
constexpr void
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_VertsPool(::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VertsPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>*& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_IndicesPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndicesPool;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>*> const&
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_IndicesPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndicesPool;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_IndicesPool(::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IndicesPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>*&
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_MeshWriteDataPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshWriteDataPool;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>*> const&
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_MeshWriteDataPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshWriteDataPool;
}
constexpr void
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_MeshWriteDataPool(::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MeshWriteDataPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_NextMeshWriteDataPoolItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextMeshWriteDataPoolItem;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_NextMeshWriteDataPoolItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextMeshWriteDataPoolItem;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_NextMeshWriteDataPoolItem(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NextMeshWriteDataPoolItem = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV>*,
                   ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV>*>*>&
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_RepeatRectUVList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RepeatRectUVList;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV>*,
                   ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV>*>*> const&
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_RepeatRectUVList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RepeatRectUVList;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_RepeatRectUVList(
    ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV>*,
             ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV>*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RepeatRectUVList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_AllocRawVertsIndicesDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocRawVertsIndicesDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*> const&
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_AllocRawVertsIndicesDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocRawVertsIndicesDelegate;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_AllocRawVertsIndicesDelegate(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AllocRawVertsIndicesDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_AllocThroughDrawMeshDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocThroughDrawMeshDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*> const&
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_AllocThroughDrawMeshDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocThroughDrawMeshDelegate;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_AllocThroughDrawMeshDelegate(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AllocThroughDrawMeshDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::MeshGenerationContext*& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get__meshGenerationContext_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshGenerationContext_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::MeshGenerationContext*> const&
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get__meshGenerationContext_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshGenerationContext_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set__meshGenerationContext_k__BackingField(::UnityEngine::UIElements::MeshGenerationContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshGenerationContext_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get__currentElement_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentElement_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const&
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get__currentElement_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentElement_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set__currentElement_k__BackingField(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentElement_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get__totalVertices_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalVertices_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get__totalVertices_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalVertices_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set__totalVertices_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____totalVertices_k__BackingField = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get__totalIndices_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalIndices_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get__totalIndices_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalIndices_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set__totalIndices_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____totalIndices_k__BackingField = value;
}
constexpr ::UnityEngine::TextCore::Text::TextInfo*& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_TextInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextInfo;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextInfo*> const& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_TextInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextInfo;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_TextInfo(::UnityEngine::TextCore::Text::TextInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TextInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::MeshWriteData* UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::GetPooledMeshWriteData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(),
                                               "GetPooledMeshWriteData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteData*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MeshWriteData*
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::AllocRawVertsIndices(uint32_t vertexCount, uint32_t indexCount,
                                                                                    ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData> allocatorData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "AllocRawVertsIndices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteData*, false>(this, ___internal_method, vertexCount, indexCount, allocatorData);
}
inline ::UnityEngine::UIElements::MeshWriteData*
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::AllocThroughDrawMesh(uint32_t vertexCount, uint32_t indexCount,
                                                                                    ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData> allocatorData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "AllocThroughDrawMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteData*, false>(this, ___internal_method, vertexCount, indexCount, allocatorData);
}
inline ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::New_ctor(::UnityEngine::UIElements::UIR::RenderChain* renderChain) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>(renderChain));
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::_ctor(::UnityEngine::UIElements::UIR::RenderChain* renderChain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderChain);
}
inline ::UnityEngine::UIElements::MeshGenerationContext* UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_meshGenerationContext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(),
                                               "get_meshGenerationContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshGenerationContext*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_currentElement() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "get_currentElement",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::set_currentElement(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "set_currentElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry>* UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_entries() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "get_entries",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry>*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_closingInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "get_closingInfo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, false>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_totalVertices() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "get_totalVertices",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::set_totalVertices(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "set_totalVertices",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_totalIndices() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "get_totalIndices",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::set_totalIndices(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "set_totalIndices",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::Begin(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "Begin", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::LandClipUnregisterMeshDrawCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* cmd) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "LandClipUnregisterMeshDrawCommand",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::LandClipRegisterMesh(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices,
                                                                                                ::Unity::Collections::NativeSlice_1<uint16_t> indices, int32_t indexOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "LandClipRegisterMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vertices, indices, indexOffset);
}
inline ::UnityEngine::UIElements::MeshWriteData* UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawMesh(int32_t vertexCount, int32_t indexCount, ::UnityEngine::Texture* texture,
                                                                                                                         ::UnityEngine::Material* material,
                                                                                                                         ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteData*, false>(this, ___internal_method, vertexCount, indexCount, texture, material, flags);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::TryAtlasTexture(::UnityEngine::Texture* texture, ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags flags,
                                                                                           ByRef<::UnityEngine::Rect> outUVRegion, ByRef<bool> outIsAtlas,
                                                                                           ByRef<::UnityEngine::UIElements::TextureId> outTextureId,
                                                                                           ByRef<::UnityEngine::UIElements::UIR::VertexFlags> outAddFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "TryAtlasTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::TextureId>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::VertexFlags>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, texture, flags, outUVRegion, outIsAtlas, outTextureId, outAddFlags);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::BuildEntryFromNativeMesh(::UnityEngine::UIElements::MeshWriteDataInterface meshData, ::UnityEngine::Texture* texture,
                                                                                                    ::UnityEngine::UIElements::TextureId textureId, bool isAtlas, ::UnityEngine::Material* material,
                                                                                                    ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags flags, ::UnityEngine::Rect uvRegion,
                                                                                                    ::UnityEngine::UIElements::UIR::VertexFlags addFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "BuildEntryFromNativeMesh",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteDataInterface>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::VertexFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, meshData, texture, textureId, isAtlas, material, flags, uvRegion, addFlags);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::BuildGradientEntryFromNativeMesh(::UnityEngine::UIElements::MeshWriteDataInterface meshData,
                                                                                                            ::UnityEngine::UIElements::TextureId svgTextureId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(),
                                               "BuildGradientEntryFromNativeMesh", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteDataInterface>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, meshData, svgTextureId);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::BuildRawEntryFromNativeMesh(::UnityEngine::UIElements::MeshWriteDataInterface meshData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(),
                                               "BuildRawEntryFromNativeMesh", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteDataInterface>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, meshData);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawText(::UnityEngine::UIElements::TextElement* te) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawText", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, te);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawTextInfo(::UnityEngine::TextCore::Text::TextInfo* textInfo, ::UnityEngine::Vector2 offset, bool useHints) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawTextInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textInfo, offset, useHints);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawRectangle(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawRectangle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rectParams);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawBorder(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams borderParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawBorder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, borderParams);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawImmediate(::System::Action* callback, bool cullingEnabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawImmediate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, cullingEnabled);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_visualElement() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "get_visualElement",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawVisualElementBackground() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(),
                                               "DrawVisualElementBackground", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawRectangleRepeat(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams,
                                                                                               ::UnityEngine::Rect totalRect, float_t scaledPixelsPerPoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawRectangleRepeat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rectParams, totalRect, scaledPixelsPerPoint);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::StampRectangleWithSubRect(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams,
                                                                                                     ::UnityEngine::Rect targetRect, ::UnityEngine::Rect targetUV) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "StampRectangleWithSubRect",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rectParams, targetRect, targetUV);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawVisualElementBorder() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(),
                                               "DrawVisualElementBorder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::ApplyVisualElementClipping() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(),
                                               "ApplyVisualElementClipping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<uint16_t, ::Array<uint16_t>*>
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::AdjustSpriteWinding(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> vertices,
                                                                                   ::ArrayW<uint16_t, ::Array<uint16_t>*> indices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "AdjustSpriteWinding", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint16_t, ::Array<uint16_t>*>, false>(this, ___internal_method, vertices, indices);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawSprite(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawSprite", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rectParams);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::ApplyInset(ByRef<::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams> rectParams, ::UnityEngine::Texture* tex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "ApplyInset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rectParams, tex);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawVectorImage(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawVectorImage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rectParams);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::MakeVectorGraphics(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams,
                                                                                              bool isUsingGradients, ::UnityEngine::UIElements::TextureId svgTexture, int32_t settingIndexOffset,
                                                                                              ByRef<int32_t> finalVertexCount, ByRef<int32_t> finalIndexCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "MakeVectorGraphics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rectParams, isUsingGradients, svgTexture, settingIndexOffset, finalVertexCount, finalIndexCount);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::ValidateMeshWriteData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "ValidateMeshWriteData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::GenerateStencilClipEntryForRoundedRectBackground() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(),
                                               "GenerateStencilClipEntryForRoundedRectBackground", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::GenerateStencilClipEntryForSVGBackground() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(),
                                               "GenerateStencilClipEntryForSVGBackground", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::UIRStylePainter() {}
