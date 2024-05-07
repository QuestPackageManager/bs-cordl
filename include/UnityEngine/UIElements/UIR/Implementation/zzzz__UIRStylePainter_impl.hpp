#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/Implementation/UIRStylePainter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__UIRStylePainter_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VertexFlags_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_impl.hpp"
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__UIRStylePainter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__UIRStylePainter_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshBuilder_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChain_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VectorImageManager_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VertexFlags_def.hpp"
#include "UnityEngine/UIElements/zzzz__AtlasBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStylePainter_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContextUtils_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshWriteData_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "vertices", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "indices", ty:
// "::Unity::Collections::NativeSlice_1<uint16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "custom", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "font", ty: "::UnityW<::UnityEngine::Texture>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "fontTexSDFScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "texture", ty:
// "::UnityEngine::UIElements::TextureId", modifiers: "", def_value: Some("{}") }, CppParam { name: "customCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "clipRectID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "addFlags", ty:
// "::UnityEngine::UIElements::UIR::VertexFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "uvIsDisplacement", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "isTextEntry", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isClipRegisterEntry", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "stencilRef", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maskDepth", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry::__UIRStylePainter__Entry(
    ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices, ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityW<::UnityEngine::Material> material,
    ::UnityW<::UnityEngine::Texture> custom, ::UnityW<::UnityEngine::Texture> font, float_t fontTexSDFScale, ::UnityEngine::UIElements::TextureId texture,
    ::UnityEngine::UIElements::UIR::RenderChainCommand* customCommand, ::UnityEngine::UIElements::UIR::BMPAlloc clipRectID, ::UnityEngine::UIElements::UIR::VertexFlags addFlags, bool uvIsDisplacement,
    bool isTextEntry, bool isClipRegisterEntry, int32_t stencilRef, int32_t maskDepth) noexcept {
  this->vertices = vertices;
  this->indices = indices;
  this->material = material;
  this->custom = custom;
  this->font = font;
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
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<T>::_ctor(int32_t maxPoolElems) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<T>>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxPoolElems);
}
template <typename T> inline void UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<T>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<T>>::get(),
                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::NativeSlice_1<T> UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<T>::Alloc(uint32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<T>>::get(), "Alloc",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeSlice_1<T>, false>(this, ___internal_method, count);
}
template <typename T> inline void UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<T>::SessionDone() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<T>>::get(),
                                               "SessionDone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "maxPoolElemCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pool", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "excess", ty: "::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<T>>*", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "takenFromPool", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<T>::__UIRStylePainter__TempDataAlloc_1(
    int32_t maxPoolElemCount, ::Unity::Collections::NativeArray_1<T> pool, ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<T>>* excess, uint32_t takenFromPool) noexcept {
  this->maxPoolElemCount = maxPoolElemCount;
  this->pool = pool;
  this->excess = excess;
  this->takenFromPool = takenFromPool;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<T>::__UIRStylePainter__TempDataAlloc_1() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.GetPooledMeshWriteData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteData* (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::GetPooledMeshWriteData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x352dfdc;

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
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x352e0fc;

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
  constexpr static std::size_t addrs = 0x352e1b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "AllocThroughDrawMesh",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.AllocThroughDrawGradients
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteData* (
    ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(uint32_t, uint32_t, ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::AllocThroughDrawGradients)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x352e69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "AllocThroughDrawGradients",
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
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x352e9b0;

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
  constexpr static std::size_t addrs = 0x352ed18;

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
  constexpr static std::size_t addrs = 0x352ed20;

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
  constexpr static std::size_t addrs = 0x352ed28;

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
  constexpr static std::size_t addrs = 0x352ed30;

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
  constexpr static std::size_t addrs = 0x352ed38;

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
  constexpr static std::size_t addrs = 0x352ed54;

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
  constexpr static std::size_t addrs = 0x352ed5c;

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
  constexpr static std::size_t addrs = 0x352ed64;

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
  constexpr static std::size_t addrs = 0x352ed6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "set_totalIndices",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.get_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x352ed74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "get_disposed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.set_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(bool)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::set_disposed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x352ed7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "set_disposed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x352ed88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(bool)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::Dispose)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x352edec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.Begin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::Begin)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x352ee70;

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
  constexpr static std::size_t addrs = 0x352f380;

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
  constexpr static std::size_t addrs = 0x352f3f4;

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
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.AddGradientsEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteData* (
    ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(int32_t, int32_t, ::UnityEngine::UIElements::TextureId, ::UnityEngine::Material*,
                                                                        ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::AddGradientsEntry)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x352e6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "AddGradientsEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::MeshWriteData* (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(int32_t, int32_t, ::UnityEngine::Texture*, ::UnityEngine::Material*,
                                                                                                                               ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags)>(
        &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawMesh)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x352e1cc;

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
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, ::UnityEngine::UIElements::ITextHandle*, float_t)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawText)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x352f490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawTextNative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, ::UnityEngine::UIElements::ITextHandle*, float_t)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawTextNative)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x352f5c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawTextNative", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawTextCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, ::UnityEngine::UIElements::ITextHandle*, float_t)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawTextCore)> {
  constexpr static std::size_t size = 0x628;
  constexpr static std::size_t addrs = 0x352fa00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawTextCore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawRectangle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawRectangle)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x3530028;

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
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3530d80;

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
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3530e60;

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
  constexpr static std::size_t addrs = 0x3530fdc;

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
  constexpr static std::size_t size = 0xe08;
  constexpr static std::size_t addrs = 0x3530fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(),
                                                 "DrawVisualElementBackground", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawVisualElementBorder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawVisualElementBorder)> {
  constexpr static std::size_t size = 0x974;
  constexpr static std::size_t addrs = 0x3531dec;

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
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x3532760;

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
  constexpr static std::size_t addrs = 0x353373c;

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
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x3530728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawSprite", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawVectorImage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(
    ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawVectorImage)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x35302c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawVectorImage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::Reset)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3533a5c;

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
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x3533b40;

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
  constexpr static std::size_t size = 0xa1c;
  constexpr static std::size_t addrs = 0x3532d20;

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
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x35329ac;

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
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
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
constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>&
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_VertsPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertsPool;
}
constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex> const&
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_VertsPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertsPool;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_VertsPool(
    ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VertsPool = value;
}
constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<uint16_t>&
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_IndicesPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndicesPool;
}
constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<uint16_t> const&
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_IndicesPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndicesPool;
}
constexpr void
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_IndicesPool(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<uint16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IndicesPool = value;
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
constexpr ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_AllocThroughDrawGradientsDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocThroughDrawGradientsDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*> const&
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get_m_AllocThroughDrawGradientsDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocThroughDrawGradientsDelegate;
}
constexpr void
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set_m_AllocThroughDrawGradientsDelegate(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AllocThroughDrawGradientsDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr bool& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
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
inline ::UnityEngine::UIElements::MeshWriteData*
UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::AllocThroughDrawGradients(uint32_t vertexCount, uint32_t indexCount,
                                                                                         ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData> allocatorData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "AllocThroughDrawGradients",
      std::span<Il2CppClass const* const, 0>(),
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
inline bool UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_disposed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "get_disposed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "set_disposed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
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
inline ::UnityEngine::UIElements::MeshWriteData* UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::AddGradientsEntry(int32_t vertexCount, int32_t indexCount,
                                                                                                                                  ::UnityEngine::UIElements::TextureId texture,
                                                                                                                                  ::UnityEngine::Material* material,
                                                                                                                                  ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "AddGradientsEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteData*, false>(this, ___internal_method, vertexCount, indexCount, texture, material, flags);
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
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawText(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParams,
                                                                                    ::UnityEngine::UIElements::ITextHandle* handle, float_t pixelsPerPoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawText", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textParams, handle, pixelsPerPoint);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawTextNative(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParams,
                                                                                          ::UnityEngine::UIElements::ITextHandle* handle, float_t pixelsPerPoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawTextNative", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textParams, handle, pixelsPerPoint);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawTextCore(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParams,
                                                                                        ::UnityEngine::UIElements::ITextHandle* handle, float_t pixelsPerPoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawTextCore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textParams, handle, pixelsPerPoint);
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
inline void UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawVectorImage(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get(), "DrawVectorImage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rectParams);
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
