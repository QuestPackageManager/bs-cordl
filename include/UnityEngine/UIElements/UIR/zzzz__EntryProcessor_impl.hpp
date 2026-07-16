#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/EntryProcessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VertexFlags_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryProcessor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ChainBuilderStats_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryPreProcessor_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryProcessor_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Entry_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChain_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
// Ctor Parameters [CppParam { name: "vertices", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "indices", ty:
// "::Unity::Collections::NativeSlice_1<uint16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "indexOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::EntryProcessor_MaskMesh::EntryProcessor_MaskMesh(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices,
                                                                                           ::Unity::Collections::NativeSlice_1<uint16_t> indices, int32_t indexOffset) noexcept {
  this->vertices = vertices;
  this->indices = indices;
  this->indexOffset = indexOffset;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::EntryProcessor_MaskMesh::EntryProcessor_MaskMesh() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.get_firstHeadCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderChainCommand* (::UnityEngine::UIElements::UIR::EntryProcessor::*)()>(
    &::UnityEngine::UIElements::UIR::EntryProcessor::get_firstHeadCommand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cd68c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "get_firstHeadCommand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.set_firstHeadCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryProcessor::*)(::UnityEngine::UIElements::UIR::RenderChainCommand*)>(
    &::UnityEngine::UIElements::UIR::EntryProcessor::set_firstHeadCommand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cd68cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                                                                                           { "set_firstHeadCommand", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.get_lastHeadCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderChainCommand* (::UnityEngine::UIElements::UIR::EntryProcessor::*)()>(
    &::UnityEngine::UIElements::UIR::EntryProcessor::get_lastHeadCommand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cd68d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "get_lastHeadCommand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.set_lastHeadCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryProcessor::*)(::UnityEngine::UIElements::UIR::RenderChainCommand*)>(
    &::UnityEngine::UIElements::UIR::EntryProcessor::set_lastHeadCommand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cd68dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                                                                                           { "set_lastHeadCommand", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.get_firstTailCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderChainCommand* (::UnityEngine::UIElements::UIR::EntryProcessor::*)()>(
    &::UnityEngine::UIElements::UIR::EntryProcessor::get_firstTailCommand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cd68e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "get_firstTailCommand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.set_firstTailCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryProcessor::*)(::UnityEngine::UIElements::UIR::RenderChainCommand*)>(
    &::UnityEngine::UIElements::UIR::EntryProcessor::set_firstTailCommand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cd68ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                                                                                           { "set_firstTailCommand", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.get_lastTailCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderChainCommand* (::UnityEngine::UIElements::UIR::EntryProcessor::*)()>(
    &::UnityEngine::UIElements::UIR::EntryProcessor::get_lastTailCommand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cd68f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "get_lastTailCommand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.set_lastTailCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryProcessor::*)(::UnityEngine::UIElements::UIR::RenderChainCommand*)>(
    &::UnityEngine::UIElements::UIR::EntryProcessor::set_lastTailCommand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cd68fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                                                                                           { "set_lastTailCommand", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryProcessor::*)(
    ::UnityEngine::UIElements::UIR::Entry*, ::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIR::EntryProcessor::Init)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x6cd6904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                                                             { "Init",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.ClearReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryProcessor::*)()>(&::UnityEngine::UIElements::UIR::EntryProcessor::ClearReferences)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6cd6b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "ClearReferences", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.ProcessHead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryProcessor::*)()>(&::UnityEngine::UIElements::UIR::EntryProcessor::ProcessHead)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6cd6b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "ProcessHead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.ProcessTail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryProcessor::*)()>(&::UnityEngine::UIElements::UIR::EntryProcessor::ProcessTail)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6cd76b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "ProcessTail", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.ProcessRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryProcessor::*)(int32_t, int32_t)>(&::UnityEngine::UIElements::UIR::EntryProcessor::ProcessRange)> {
  constexpr static std::size_t size = 0x994;
  constexpr static std::size_t addrs = 0x6cd6d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "ProcessRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.ProcessMeshEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryProcessor::*)(::UnityEngine::UIElements::UIR::Entry*, ::UnityEngine::UIElements::TextureId)>(
    &::UnityEngine::UIElements::UIR::EntryProcessor::ProcessMeshEntry)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x6cd77cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                                                { "ProcessMeshEntry", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::UnityEngine::UIElements::TextureId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.DrawReverseMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryProcessor::*)()>(&::UnityEngine::UIElements::UIR::EntryProcessor::DrawReverseMask)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x6cd7ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "DrawReverseMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.CreateMeshDrawCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderChainCommand* (
    ::UnityEngine::UIElements::UIR::EntryProcessor::*)(::UnityEngine::UIElements::UIR::MeshHandle*, int32_t, int32_t, ::UnityEngine::Material*, ::UnityEngine::UIElements::TextureId)>(
    &::UnityEngine::UIElements::UIR::EntryProcessor::CreateMeshDrawCommand)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6cd847c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                                                             { "CreateMeshDrawCommand",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::MeshHandle*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::UIElements::TextureId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.AppendCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryProcessor::*)(::UnityEngine::UIElements::UIR::RenderChainCommand*)>(
    &::UnityEngine::UIElements::UIR::EntryProcessor::AppendCommand)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6cd855c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                                                                                           { "AppendCommand", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.ProcessFirstAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryProcessor::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>*, ::by_ref<::UnityEngine::UIElements::UIR::MeshHandle*>)>(
    &::UnityEngine::UIElements::UIR::EntryProcessor::ProcessFirstAlloc)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6cd6bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                                                             { "ProcessFirstAlloc",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::MeshHandle*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.ProcessNextAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryProcessor::*)()>(&::UnityEngine::UIElements::UIR::EntryProcessor::ProcessNextAlloc)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6cd82cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "ProcessNextAlloc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.UpdateOrAllocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::UnityEngine::UIElements::UIR::MeshHandle*>, int32_t, int32_t, ::UnityEngine::UIElements::UIR::UIRenderDevice*,
                         ::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>, ::by_ref<::Unity::Collections::NativeSlice_1<uint16_t>>, ::by_ref<uint16_t>,
                         ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(&::UnityEngine::UIElements::UIR::EntryProcessor::UpdateOrAllocate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6cd859c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                            { "UpdateOrAllocate",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::MeshHandle*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeSlice_1<uint16_t>>>(), ::i2c::type_of<::by_ref<uint16_t>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.CreateBlitShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(float_t)>(&::UnityEngine::UIElements::UIR::EntryProcessor::CreateBlitShader)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6cd868c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "CreateBlitShader", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor.GetBlitMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::UIElements::VisualElement_RenderTargetMode)>(
    &::UnityEngine::UIElements::UIR::EntryProcessor::GetBlitMaterial)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x6cd8088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                                                             { "GetBlitMaterial", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement_RenderTargetMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryProcessor::*)()>(&::UnityEngine::UIElements::UIR::EntryProcessor::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6cd8888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UIR::EntryPreProcessor*& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_PreProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreProcessor;
}
constexpr ::UnityEngine::UIElements::UIR::EntryPreProcessor* const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_PreProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreProcessor;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_PreProcessor(::UnityEngine::UIElements::UIR::EntryPreProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreProcessor = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChain*& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_RenderChain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderChain;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChain* const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_RenderChain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderChain;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_RenderChain(::UnityEngine::UIElements::UIR::RenderChain* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderChain = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_CurrentElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentElement;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_CurrentElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentElement;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_CurrentElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentElement = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_MaskDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaskDepth;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_MaskDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaskDepth;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_MaskDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaskDepth = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_MaskDepthPopped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaskDepthPopped;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_MaskDepthPopped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaskDepthPopped;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_MaskDepthPopped(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaskDepthPopped = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_MaskDepthPushed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaskDepthPushed;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_MaskDepthPushed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaskDepthPushed;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_MaskDepthPushed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaskDepthPushed = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_StencilRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilRef;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_StencilRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilRef;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_StencilRef(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StencilRef = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_StencilRefPopped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilRefPopped;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_StencilRefPopped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilRefPopped;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_StencilRefPopped(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StencilRefPopped = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_StencilRefPushed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilRefPushed;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_StencilRefPushed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilRefPushed;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_StencilRefPushed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StencilRefPushed = value;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_ClipRectId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClipRectId;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_ClipRectId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClipRectId;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_ClipRectId(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClipRectId = value;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_ClipRectIdPopped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClipRectIdPopped;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_ClipRectIdPopped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClipRectIdPopped;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_ClipRectIdPopped(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClipRectIdPopped = value;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_ClipRectIdPushed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClipRectIdPushed;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_ClipRectIdPushed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClipRectIdPushed;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_ClipRectIdPushed(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClipRectIdPushed = value;
}
constexpr bool& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_IsDrawingMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDrawingMask;
}
constexpr bool const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_IsDrawingMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDrawingMask;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_IsDrawingMask(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsDrawingMask = value;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::EntryProcessor_MaskMesh>*& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_MaskMeshes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaskMeshes;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::EntryProcessor_MaskMesh>* const&
UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_MaskMeshes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaskMeshes;
}
constexpr void
UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_MaskMeshes(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::EntryProcessor_MaskMesh>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaskMeshes = value;
}
constexpr bool& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_VertexDataComputed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexDataComputed;
}
constexpr bool const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_VertexDataComputed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexDataComputed;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_VertexDataComputed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VertexDataComputed = value;
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_Transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Transform;
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_Transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Transform;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_Transform(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Transform = value;
}
constexpr ::UnityEngine::Color32& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_TransformData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformData;
}
constexpr ::UnityEngine::Color32 const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_TransformData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformData;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_TransformData(::UnityEngine::Color32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TransformData = value;
}
constexpr ::UnityEngine::Color32& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_OpacityData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpacityData;
}
constexpr ::UnityEngine::Color32 const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_OpacityData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpacityData;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_OpacityData(::UnityEngine::Color32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OpacityData = value;
}
constexpr ::UnityEngine::Color32& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_TextCoreSettingsPage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextCoreSettingsPage;
}
constexpr ::UnityEngine::Color32 const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_TextCoreSettingsPage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextCoreSettingsPage;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_TextCoreSettingsPage(::UnityEngine::Color32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextCoreSettingsPage = value;
}
constexpr ::UnityEngine::UIElements::UIR::MeshHandle*& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_Mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr ::UnityEngine::UIElements::UIR::MeshHandle* const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_Mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_Mesh(::UnityEngine::UIElements::UIR::MeshHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Mesh = value;
}
constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_Verts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Verts;
}
constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_Verts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Verts;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_Verts(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Verts = value;
}
constexpr ::Unity::Collections::NativeSlice_1<uint16_t>& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_Indices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Indices;
}
constexpr ::Unity::Collections::NativeSlice_1<uint16_t> const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_Indices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Indices;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_Indices(::Unity::Collections::NativeSlice_1<uint16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Indices = value;
}
constexpr uint16_t& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_IndexOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexOffset;
}
constexpr uint16_t const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_IndexOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexOffset;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_IndexOffset(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IndexOffset = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_AllocVertexCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocVertexCount;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_AllocVertexCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocVertexCount;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_AllocVertexCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllocVertexCount = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_AllocIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocIndex;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_AllocIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocIndex;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_AllocIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllocIndex = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_VertsFilled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertsFilled;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_VertsFilled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertsFilled;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_VertsFilled(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VertsFilled = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_IndicesFilled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndicesFilled;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_IndicesFilled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndicesFilled;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_IndicesFilled(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IndicesFilled = value;
}
constexpr ::UnityEngine::UIElements::UIR::VertexFlags& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_RenderType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderType;
}
constexpr ::UnityEngine::UIElements::UIR::VertexFlags const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_RenderType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderType;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_RenderType(::UnityEngine::UIElements::UIR::VertexFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderType = value;
}
constexpr bool& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_RemapUVs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemapUVs;
}
constexpr bool const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_RemapUVs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemapUVs;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_RemapUVs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RemapUVs = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_AtlasRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasRect;
}
constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_AtlasRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasRect;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_AtlasRect(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasRect = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_GradientSettingIndexOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GradientSettingIndexOffset;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_GradientSettingIndexOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GradientSettingIndexOffset;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_GradientSettingIndexOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GradientSettingIndexOffset = value;
}
constexpr bool& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_IsTail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsTail;
}
constexpr bool const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_IsTail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsTail;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_IsTail(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsTail = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_FirstCommand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstCommand;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_FirstCommand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstCommand;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_FirstCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FirstCommand = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_LastCommand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastCommand;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get_m_LastCommand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastCommand;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set_m_LastCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastCommand = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get__firstHeadCommand_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstHeadCommand_k__BackingField;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get__firstHeadCommand_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstHeadCommand_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set__firstHeadCommand_k__BackingField(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstHeadCommand_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get__lastHeadCommand_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastHeadCommand_k__BackingField;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get__lastHeadCommand_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastHeadCommand_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set__lastHeadCommand_k__BackingField(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastHeadCommand_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get__firstTailCommand_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstTailCommand_k__BackingField;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get__firstTailCommand_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstTailCommand_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set__firstTailCommand_k__BackingField(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstTailCommand_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get__lastTailCommand_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTailCommand_k__BackingField;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_get__lastTailCommand_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTailCommand_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::EntryProcessor::__cordl_internal_set__lastTailCommand_k__BackingField(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastTailCommand_k__BackingField = value;
}
inline void UnityEngine::UIElements::UIR::EntryProcessor::setStaticF_s_blitMaterial_LinearToGamma(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_blitMaterial_LinearToGamma", ::UnityEngine::UIElements::UIR::EntryProcessor*>(
      std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::UIR::EntryProcessor::getStaticF_s_blitMaterial_LinearToGamma() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_blitMaterial_LinearToGamma", ::UnityEngine::UIElements::UIR::EntryProcessor*>();
}
inline void UnityEngine::UIElements::UIR::EntryProcessor::setStaticF_s_blitMaterial_GammaToLinear(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_blitMaterial_GammaToLinear", ::UnityEngine::UIElements::UIR::EntryProcessor*>(
      std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::UIR::EntryProcessor::getStaticF_s_blitMaterial_GammaToLinear() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_blitMaterial_GammaToLinear", ::UnityEngine::UIElements::UIR::EntryProcessor*>();
}
inline void UnityEngine::UIElements::UIR::EntryProcessor::setStaticF_s_blitMaterial_NoChange(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_blitMaterial_NoChange", ::UnityEngine::UIElements::UIR::EntryProcessor*>(
      std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::UIR::EntryProcessor::getStaticF_s_blitMaterial_NoChange() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_blitMaterial_NoChange", ::UnityEngine::UIElements::UIR::EntryProcessor*>();
}
inline void UnityEngine::UIElements::UIR::EntryProcessor::setStaticF_s_blitShader(::UnityW<::UnityEngine::Shader> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "s_blitShader", ::UnityEngine::UIElements::UIR::EntryProcessor*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::UIElements::UIR::EntryProcessor::getStaticF_s_blitShader() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "s_blitShader", ::UnityEngine::UIElements::UIR::EntryProcessor*>();
}
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::EntryProcessor::get_firstHeadCommand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "get_firstHeadCommand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChainCommand*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::EntryProcessor::set_firstHeadCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                                                                                         { "set_firstHeadCommand", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::EntryProcessor::get_lastHeadCommand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "get_lastHeadCommand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChainCommand*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::EntryProcessor::set_lastHeadCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                                                                                         { "set_lastHeadCommand", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::EntryProcessor::get_firstTailCommand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "get_firstTailCommand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChainCommand*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::EntryProcessor::set_firstTailCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                                                                                         { "set_firstTailCommand", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::EntryProcessor::get_lastTailCommand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "get_lastTailCommand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChainCommand*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::EntryProcessor::set_lastTailCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                                                                                         { "set_lastTailCommand", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::EntryProcessor::Init(::UnityEngine::UIElements::UIR::Entry* root, ::UnityEngine::UIElements::UIR::RenderChain* renderChain,
                                                               ::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                                                           { "Init",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, renderChain, ve);
}
inline void UnityEngine::UIElements::UIR::EntryProcessor::ClearReferences() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "ClearReferences", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::EntryProcessor::ProcessHead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "ProcessHead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::EntryProcessor::ProcessTail() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "ProcessTail", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::EntryProcessor::ProcessRange(int32_t first, int32_t last) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "ProcessRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, first, last);
}
inline void UnityEngine::UIElements::UIR::EntryProcessor::ProcessMeshEntry(::UnityEngine::UIElements::UIR::Entry* entry, ::UnityEngine::UIElements::TextureId textureId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                                              { "ProcessMeshEntry", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::UnityEngine::UIElements::TextureId>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry, textureId);
}
inline void UnityEngine::UIElements::UIR::EntryProcessor::DrawReverseMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "DrawReverseMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::EntryProcessor::CreateMeshDrawCommand(::UnityEngine::UIElements::UIR::MeshHandle* mesh, int32_t indexCount,
                                                                                                                               int32_t indexOffset, ::UnityEngine::Material* material,
                                                                                                                               ::UnityEngine::UIElements::TextureId texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                                                           { "CreateMeshDrawCommand",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::MeshHandle*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::UIElements::TextureId>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChainCommand*>(this, ___internal_method, mesh, indexCount, indexOffset, material, texture);
}
inline void UnityEngine::UIElements::UIR::EntryProcessor::AppendCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* next) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                                                                                         { "AppendCommand", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, next);
}
inline void UnityEngine::UIElements::UIR::EntryProcessor::ProcessFirstAlloc(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* allocList,
                                                                            ::by_ref<::UnityEngine::UIElements::UIR::MeshHandle*> mesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                                                           { "ProcessFirstAlloc",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::MeshHandle*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allocList, mesh);
}
inline void UnityEngine::UIElements::UIR::EntryProcessor::ProcessNextAlloc() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "ProcessNextAlloc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::EntryProcessor::UpdateOrAllocate(::by_ref<::UnityEngine::UIElements::UIR::MeshHandle*> data, int32_t vertexCount, int32_t indexCount,
                                                                           ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                                                           ::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> verts,
                                                                           ::by_ref<::Unity::Collections::NativeSlice_1<uint16_t>> indices, ::by_ref<uint16_t> indexOffset,
                                                                           ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                          { "UpdateOrAllocate",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::MeshHandle*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeSlice_1<uint16_t>>>(), ::i2c::type_of<::by_ref<uint16_t>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, vertexCount, indexCount, device, verts, indices, indexOffset, stats);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::UIR::EntryProcessor::CreateBlitShader(float_t colorConversion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { "CreateBlitShader", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method, colorConversion);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::UIR::EntryProcessor::GetBlitMaterial(::UnityEngine::UIElements::VisualElement_RenderTargetMode mode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(),
                                                                                         { "GetBlitMaterial", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement_RenderTargetMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method, mode);
}
inline void UnityEngine::UIElements::UIR::EntryProcessor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryProcessor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::EntryProcessor* UnityEngine::UIElements::UIR::EntryProcessor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::EntryProcessor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::EntryProcessor::EntryProcessor() {}
