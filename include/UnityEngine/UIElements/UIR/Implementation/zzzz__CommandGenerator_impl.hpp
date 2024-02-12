#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__CommandGenerator_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__UIRStylePainter_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ChainBuilderStats_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChain_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.GetVerticesTransformInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ByRef<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::GetVerticesTransformInfo)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2dfdcfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(),
                                                 "GetVerticesTransformInfo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.ComputeTransformMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ByRef<::UnityEngine::Matrix4x4>)>(
        &::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::ComputeTransformMatrix)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2dfde88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(),
                                                 "ComputeTransformMatrix", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.IsParentOrAncestorOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::IsParentOrAncestorOf)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2dfdfb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(),
                                                 "IsParentOrAncestorOf", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.PaintElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo (*)(
    ::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(
    &::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::PaintElement)> {
  constexpr static std::size_t size = 0x14f8;
  constexpr static std::size_t addrs = 0x2dfe030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "PaintElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.CreateBlitShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(float_t)>(
    &::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::CreateBlitShader)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x2e00998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "CreateBlitShader",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.GetBlitMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::UIElements::__VisualElement__RenderTargetMode)>(
    &::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::GetBlitMaterial)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x2e00610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "GetBlitMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualElement__RenderTargetMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.ClosePaintElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, ::UnityEngine::UIElements::UIR::RenderChain*,
                         ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(&::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::ClosePaintElement)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2e00ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "ClosePaintElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.UpdateOrAllocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(ByRef<::UnityEngine::UIElements::UIR::MeshHandle*>, int32_t, int32_t, ::UnityEngine::UIElements::UIR::UIRenderDevice*,
                         ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>, ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>, ByRef<uint16_t>,
                         ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(&::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::UpdateOrAllocate)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2dff860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "UpdateOrAllocate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::MeshHandle*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.CopyTransformVertsPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, ::UnityEngine::Matrix4x4,
                         ::UnityEngine::Color32, ::UnityEngine::Color32, ::UnityEngine::Color32, ::UnityEngine::Color32, ::UnityEngine::Color32, bool, float_t)>(
        &::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::CopyTransformVertsPos)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x2dffd8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "CopyTransformVertsPos",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.CopyTransformVertsPosAndVec
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, ::UnityEngine::Matrix4x4,
                         ::UnityEngine::Color32, ::UnityEngine::Color32, ::UnityEngine::Color32, ::UnityEngine::Color32, ::UnityEngine::Color32, bool, float_t)>(
        &::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::CopyTransformVertsPosAndVec)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2dffb1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "CopyTransformVertsPosAndVec",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.CopyTriangleIndicesFlipWindingOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Collections::NativeSlice_1<uint16_t>, ::Unity::Collections::NativeSlice_1<uint16_t>, int32_t)>(
    &::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::CopyTriangleIndicesFlipWindingOrder)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2e000a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(),
                                                 "CopyTriangleIndicesFlipWindingOrder", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<uint16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<uint16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.CopyTriangleIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Collections::NativeSlice_1<uint16_t>, ::Unity::Collections::NativeSlice_1<uint16_t>, int32_t)>(
    &::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::CopyTriangleIndices)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2dfffd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(),
                                                 "CopyTriangleIndices", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<uint16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<uint16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.NudgeVerticesToNewSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::UIRenderDevice*)>(
    &::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::NudgeVerticesToNewSpace)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x2e00d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(),
                                                 "NudgeVerticesToNewSpace", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.DoNudgeVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::UIRenderDevice*, ::UnityEngine::UIElements::UIR::MeshHandle*, ByRef<::UnityEngine::Matrix4x4>)>(
        &::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::DoNudgeVertices)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x2e00fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "DoNudgeVertices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.InjectMeshDrawCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::UIR::RenderChainCommand* (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*,
                                                                        ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>,
                                                                        ::UnityEngine::UIElements::UIR::MeshHandle*, int32_t, int32_t, ::UnityEngine::Material*, ::UnityEngine::UIElements::TextureId,
                                                                        ::UnityEngine::Texture*, int32_t)>(&::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::InjectMeshDrawCommand)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2e00244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "InjectMeshDrawCommand",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.InjectClosingMeshDrawCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::UIElements::UIR::RenderChainCommand* (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*,
                                                            ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>,
                                                            ::UnityEngine::UIElements::UIR::MeshHandle*, int32_t, int32_t, ::UnityEngine::Material*, ::UnityEngine::UIElements::TextureId,
                                                            ::UnityEngine::Texture*, int32_t)>(&::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::InjectClosingMeshDrawCommand)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2e008b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "InjectClosingMeshDrawCommand",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.FindCommandInsertionPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>)>(
        &::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::FindCommandInsertionPoint)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2dff95c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "FindCommandInsertionPoint",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.FindClosingCommandInsertionPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>)>(
        &::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::FindClosingCommandInsertionPoint)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2e003bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(),
                                    "FindClosingCommandInsertionPoint", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.InjectCommandInBetween
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::UIR::RenderChainCommand*, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>,
                         ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>)>(&::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::InjectCommandInBetween)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2e00324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "InjectCommandInBetween",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.InjectClosingCommandInBetween
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::UIR::RenderChainCommand*, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>,
                         ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>)>(&::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::InjectClosingCommandInBetween)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2e00528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "InjectClosingCommandInBetween",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator.ResetCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::ResetCommands)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x2dff528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "ResetCommands", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::setStaticF_k_ConvertEntriesToCommandsMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ConvertEntriesToCommandsMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::Implementation::CommandGenerator::getStaticF_k_ConvertEntriesToCommandsMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ConvertEntriesToCommandsMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get>();
}
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::setStaticF_k_NudgeVerticesMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_NudgeVerticesMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::Implementation::CommandGenerator::getStaticF_k_NudgeVerticesMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_NudgeVerticesMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get>();
}
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::setStaticF_k_ComputeTransformMatrixMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ComputeTransformMatrixMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::Implementation::CommandGenerator::getStaticF_k_ComputeTransformMatrixMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ComputeTransformMatrixMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get>();
}
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::setStaticF_s_blitMaterial_LinearToGamma(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_blitMaterial_LinearToGamma",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get>(
      std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::UIR::Implementation::CommandGenerator::getStaticF_s_blitMaterial_LinearToGamma() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_blitMaterial_LinearToGamma",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get>();
}
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::setStaticF_s_blitMaterial_GammaToLinear(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_blitMaterial_GammaToLinear",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get>(
      std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::UIR::Implementation::CommandGenerator::getStaticF_s_blitMaterial_GammaToLinear() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_blitMaterial_GammaToLinear",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get>();
}
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::setStaticF_s_blitMaterial_NoChange(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_blitMaterial_NoChange",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get>(
      std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::UIR::Implementation::CommandGenerator::getStaticF_s_blitMaterial_NoChange() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_blitMaterial_NoChange",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get>();
}
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::setStaticF_s_blitShader(::UnityW<::UnityEngine::Shader> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "s_blitShader",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get>(
      std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::UIElements::UIR::Implementation::CommandGenerator::getStaticF_s_blitShader() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "s_blitShader",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get>();
}
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::GetVerticesTransformInfo(::UnityEngine::UIElements::VisualElement* ve, ByRef<::UnityEngine::Matrix4x4> transform) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(),
                                               "GetVerticesTransformInfo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ve, transform);
}
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::ComputeTransformMatrix(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VisualElement* ancestor,
                                                                                                   ByRef<::UnityEngine::Matrix4x4> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(),
                                               "ComputeTransformMatrix", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ve, ancestor, result);
}
inline bool UnityEngine::UIElements::UIR::Implementation::CommandGenerator::IsParentOrAncestorOf(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VisualElement* child) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "IsParentOrAncestorOf",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ve, child);
}
inline ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo
UnityEngine::UIElements::UIR::Implementation::CommandGenerator::PaintElement(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve,
                                                                             ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "PaintElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, false>(nullptr, ___internal_method, renderChain, ve, stats);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::UIR::Implementation::CommandGenerator::CreateBlitShader(float_t colorConversion) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "CreateBlitShader",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, colorConversion);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::UIR::Implementation::CommandGenerator::GetBlitMaterial(::UnityEngine::UIElements::__VisualElement__RenderTargetMode mode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "GetBlitMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualElement__RenderTargetMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, mode);
}
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::ClosePaintElement(::UnityEngine::UIElements::VisualElement* ve,
                                                                                              ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo closingInfo,
                                                                                              ::UnityEngine::UIElements::UIR::RenderChain* renderChain,
                                                                                              ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "ClosePaintElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ve, closingInfo, renderChain, stats);
}
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::UpdateOrAllocate(ByRef<::UnityEngine::UIElements::UIR::MeshHandle*> data, int32_t vertexCount, int32_t indexCount,
                                                                                             ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                                                                             ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> verts,
                                                                                             ByRef<::Unity::Collections::NativeSlice_1<uint16_t>> indices, ByRef<uint16_t> indexOffset,
                                                                                             ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "UpdateOrAllocate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::MeshHandle*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, vertexCount, indexCount, device, verts, indices, indexOffset, stats);
}
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::CopyTransformVertsPos(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> source,
                                                                                                  ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> target,
                                                                                                  ::UnityEngine::Matrix4x4 mat, ::UnityEngine::Color32 xformClipPages, ::UnityEngine::Color32 ids,
                                                                                                  ::UnityEngine::Color32 addFlags, ::UnityEngine::Color32 opacityPage,
                                                                                                  ::UnityEngine::Color32 textCoreSettingsPage, bool isText, float_t textureId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "CopyTransformVertsPos",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, target, mat, xformClipPages, ids, addFlags, opacityPage, textCoreSettingsPage, isText, textureId);
}
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::CopyTransformVertsPosAndVec(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> source,
                                                                                                        ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> target,
                                                                                                        ::UnityEngine::Matrix4x4 mat, ::UnityEngine::Color32 xformClipPages, ::UnityEngine::Color32 ids,
                                                                                                        ::UnityEngine::Color32 addFlags, ::UnityEngine::Color32 opacityPage,
                                                                                                        ::UnityEngine::Color32 textCoreSettingsPage, bool isText, float_t textureId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "CopyTransformVertsPosAndVec",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, target, mat, xformClipPages, ids, addFlags, opacityPage, textCoreSettingsPage, isText, textureId);
}
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::CopyTriangleIndicesFlipWindingOrder(::Unity::Collections::NativeSlice_1<uint16_t> source,
                                                                                                                ::Unity::Collections::NativeSlice_1<uint16_t> target, int32_t indexOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(),
                                               "CopyTriangleIndicesFlipWindingOrder", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<uint16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<uint16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, target, indexOffset);
}
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::CopyTriangleIndices(::Unity::Collections::NativeSlice_1<uint16_t> source,
                                                                                                ::Unity::Collections::NativeSlice_1<uint16_t> target, int32_t indexOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "CopyTriangleIndices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, target, indexOffset);
}
inline bool UnityEngine::UIElements::UIR::Implementation::CommandGenerator::NudgeVerticesToNewSpace(::UnityEngine::UIElements::VisualElement* ve,
                                                                                                    ::UnityEngine::UIElements::UIR::UIRenderDevice* device) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(),
                                               "NudgeVerticesToNewSpace", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ve, device);
}
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::DoNudgeVertices(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                                                                            ::UnityEngine::UIElements::UIR::MeshHandle* mesh, ByRef<::UnityEngine::Matrix4x4> nudgeTransform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "DoNudgeVertices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ve, device, mesh, nudgeTransform);
}
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::Implementation::CommandGenerator::InjectMeshDrawCommand(
    ::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> cmdPrev,
    ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> cmdNext, ::UnityEngine::UIElements::UIR::MeshHandle* mesh, int32_t indexCount, int32_t indexOffset, ::UnityEngine::Material* material,
    ::UnityEngine::UIElements::TextureId texture, ::UnityEngine::Texture* font, int32_t stencilRef) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "InjectMeshDrawCommand",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChainCommand*, false>(nullptr, ___internal_method, renderChain, ve, cmdPrev, cmdNext, mesh, indexCount, indexOffset,
                                                                                                         material, texture, font, stencilRef);
}
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::Implementation::CommandGenerator::InjectClosingMeshDrawCommand(
    ::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> cmdPrev,
    ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> cmdNext, ::UnityEngine::UIElements::UIR::MeshHandle* mesh, int32_t indexCount, int32_t indexOffset, ::UnityEngine::Material* material,
    ::UnityEngine::UIElements::TextureId texture, ::UnityEngine::Texture* font, int32_t stencilRef) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "InjectClosingMeshDrawCommand",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChainCommand*, false>(nullptr, ___internal_method, renderChain, ve, cmdPrev, cmdNext, mesh, indexCount, indexOffset,
                                                                                                         material, texture, font, stencilRef);
}
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::FindCommandInsertionPoint(::UnityEngine::UIElements::VisualElement* ve,
                                                                                                      ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> prev,
                                                                                                      ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> next) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "FindCommandInsertionPoint",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ve, prev, next);
}
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::FindClosingCommandInsertionPoint(::UnityEngine::UIElements::VisualElement* ve,
                                                                                                             ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> prev,
                                                                                                             ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> next) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "FindClosingCommandInsertionPoint",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ve, prev, next);
}
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::InjectCommandInBetween(::UnityEngine::UIElements::UIR::RenderChain* renderChain,
                                                                                                   ::UnityEngine::UIElements::UIR::RenderChainCommand* cmd,
                                                                                                   ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> prev,
                                                                                                   ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> next) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "InjectCommandInBetween",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, renderChain, cmd, prev, next);
}
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::InjectClosingCommandInBetween(::UnityEngine::UIElements::UIR::RenderChain* renderChain,
                                                                                                          ::UnityEngine::UIElements::UIR::RenderChainCommand* cmd,
                                                                                                          ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> prev,
                                                                                                          ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> next) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "InjectClosingCommandInBetween",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, renderChain, cmd, prev, next);
}
inline void UnityEngine::UIElements::UIR::Implementation::CommandGenerator::ResetCommands(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*>::get(), "ResetCommands", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, renderChain, ve);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Implementation::CommandGenerator::CommandGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
