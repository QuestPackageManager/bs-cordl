#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemRenderer.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystemRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemBakeMeshOptions_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemBakeTextureOptions_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemMeshDistribution_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemRenderMode_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemRenderSpace_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemRenderer_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemSortMode_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemVertexStream_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemVertexStreams_def.hpp"
#include "UnityEngine/zzzz__SpriteMaskInteraction_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "vertices", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "indices", ty:
// "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystemRenderer__BakeTextureOutput::__ParticleSystemRenderer__BakeTextureOutput(::UnityW<::UnityEngine::Texture2D> vertices,
                                                                                                                  ::UnityW<::UnityEngine::Texture2D> indices) noexcept {
  this->vertices = vertices;
  this->indices = indices;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystemRenderer__BakeTextureOutput::__ParticleSystemRenderer__BakeTextureOutput() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.EnableVertexStreams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::ParticleSystemVertexStreams)>(
    &::UnityEngine::ParticleSystemRenderer::EnableVertexStreams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488a68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "EnableVertexStreams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemVertexStreams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.DisableVertexStreams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::ParticleSystemVertexStreams)>(
    &::UnityEngine::ParticleSystemRenderer::DisableVertexStreams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488b35c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "DisableVertexStreams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemVertexStreams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.AreVertexStreamsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::ParticleSystemVertexStreams)>(
    &::UnityEngine::ParticleSystemRenderer::AreVertexStreamsEnabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x488b364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "AreVertexStreamsEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemVertexStreams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.GetEnabledVertexStreams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ParticleSystemVertexStreams (::UnityEngine::ParticleSystemRenderer::*)(
    ::UnityEngine::ParticleSystemVertexStreams)>(&::UnityEngine::ParticleSystemRenderer::GetEnabledVertexStreams)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x488b5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "GetEnabledVertexStreams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemVertexStreams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.Internal_SetVertexStreams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::ParticleSystemVertexStreams, bool)>(
    &::UnityEngine::ParticleSystemRenderer::Internal_SetVertexStreams)> {
  constexpr static std::size_t size = 0xcc8;
  constexpr static std::size_t addrs = 0x488a694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "Internal_SetVertexStreams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemVertexStreams>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.Internal_GetEnabledVertexStreams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ParticleSystemVertexStreams (::UnityEngine::ParticleSystemRenderer::*)(
    ::UnityEngine::ParticleSystemVertexStreams)>(&::UnityEngine::ParticleSystemRenderer::Internal_GetEnabledVertexStreams)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x488b380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "Internal_GetEnabledVertexStreams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemVertexStreams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Mesh*, bool)>(
    &::UnityEngine::ParticleSystemRenderer::BakeMesh)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x488b6c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Mesh*, ::UnityEngine::Camera*, bool)>(
    &::UnityEngine::ParticleSystemRenderer::BakeMesh)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x488b6fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeMesh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTrailsMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Mesh*, bool)>(
    &::UnityEngine::ParticleSystemRenderer::BakeTrailsMesh)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x488b7bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTrailsMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTrailsMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Mesh*, ::UnityEngine::Camera*, bool)>(
    &::UnityEngine::ParticleSystemRenderer::BakeTrailsMesh)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x488b7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTrailsMesh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_alignment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ParticleSystemRenderSpace (::UnityEngine::ParticleSystemRenderer::*)()>(
    &::UnityEngine::ParticleSystemRenderer::get_alignment)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488b8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_alignment",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_alignment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::ParticleSystemRenderSpace)>(
    &::UnityEngine::ParticleSystemRenderer::set_alignment)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488b8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_alignment", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemRenderSpace>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_renderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ParticleSystemRenderMode (::UnityEngine::ParticleSystemRenderer::*)()>(
    &::UnityEngine::ParticleSystemRenderer::get_renderMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488b934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_renderMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_renderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::ParticleSystemRenderMode)>(
    &::UnityEngine::ParticleSystemRenderer::set_renderMode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488b970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_renderMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemRenderMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_meshDistribution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ParticleSystemMeshDistribution (::UnityEngine::ParticleSystemRenderer::*)()>(
    &::UnityEngine::ParticleSystemRenderer::get_meshDistribution)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488b9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                               "get_meshDistribution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_meshDistribution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::ParticleSystemMeshDistribution)>(
    &::UnityEngine::ParticleSystemRenderer::set_meshDistribution)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488b9f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_meshDistribution", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemMeshDistribution>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_sortMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ParticleSystemSortMode (::UnityEngine::ParticleSystemRenderer::*)()>(
    &::UnityEngine::ParticleSystemRenderer::get_sortMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488ba34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_sortMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_sortMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::ParticleSystemSortMode)>(
    &::UnityEngine::ParticleSystemRenderer::set_sortMode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488ba70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_sortMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemSortMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_lengthScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_lengthScale)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488bab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_lengthScale",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_lengthScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(float_t)>(&::UnityEngine::ParticleSystemRenderer::set_lengthScale)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488baf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_lengthScale", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_velocityScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_velocityScale)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488bb3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                               "get_velocityScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_velocityScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(float_t)>(
    &::UnityEngine::ParticleSystemRenderer::set_velocityScale)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488bb78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_velocityScale",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_cameraVelocityScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ParticleSystemRenderer::*)()>(
    &::UnityEngine::ParticleSystemRenderer::get_cameraVelocityScale)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488bbc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                               "get_cameraVelocityScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_cameraVelocityScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(float_t)>(
    &::UnityEngine::ParticleSystemRenderer::set_cameraVelocityScale)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488bc00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_cameraVelocityScale",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_normalDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_normalDirection)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488bc4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                               "get_normalDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_normalDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(float_t)>(
    &::UnityEngine::ParticleSystemRenderer::set_normalDirection)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488bc88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_normalDirection",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_shadowBias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_shadowBias)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488bcd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_shadowBias",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_shadowBias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(float_t)>(&::UnityEngine::ParticleSystemRenderer::set_shadowBias)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488bd10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_shadowBias", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_sortingFudge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_sortingFudge)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488bd5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                               "get_sortingFudge", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_sortingFudge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(float_t)>(&::UnityEngine::ParticleSystemRenderer::set_sortingFudge)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488bd98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_sortingFudge", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_minParticleSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_minParticleSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488bde4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                               "get_minParticleSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_minParticleSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(float_t)>(
    &::UnityEngine::ParticleSystemRenderer::set_minParticleSize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488be20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_minParticleSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_maxParticleSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_maxParticleSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488be6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                               "get_maxParticleSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_maxParticleSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(float_t)>(
    &::UnityEngine::ParticleSystemRenderer::set_maxParticleSize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488bea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_maxParticleSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_pivot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ParticleSystemRenderer::*)()>(
    &::UnityEngine::ParticleSystemRenderer::get_pivot)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x488bef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_pivot",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_pivot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::ParticleSystemRenderer::set_pivot)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x488bf94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_pivot", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_flip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ParticleSystemRenderer::*)()>(
    &::UnityEngine::ParticleSystemRenderer::get_flip)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x488c02c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_flip",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_flip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::ParticleSystemRenderer::set_flip)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x488c0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_flip", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_maskInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SpriteMaskInteraction (::UnityEngine::ParticleSystemRenderer::*)()>(
    &::UnityEngine::ParticleSystemRenderer::get_maskInteraction)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488c164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                               "get_maskInteraction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_maskInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::SpriteMaskInteraction)>(
    &::UnityEngine::ParticleSystemRenderer::set_maskInteraction)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488c1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_maskInteraction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpriteMaskInteraction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_trailMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::ParticleSystemRenderer::*)()>(
    &::UnityEngine::ParticleSystemRenderer::get_trailMaterial)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488c1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                               "get_trailMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_trailMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Material*)>(
    &::UnityEngine::ParticleSystemRenderer::set_trailMaterial)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488c220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_trailMaterial", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_oldTrailMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Material*)>(
    &::UnityEngine::ParticleSystemRenderer::set_oldTrailMaterial)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488c264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_oldTrailMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_enableGPUInstancing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_enableGPUInstancing)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488c2a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                               "get_enableGPUInstancing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_enableGPUInstancing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(bool)>(
    &::UnityEngine::ParticleSystemRenderer::set_enableGPUInstancing)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488c2e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_enableGPUInstancing",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_allowRoll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_allowRoll)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488c328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_allowRoll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_allowRoll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(bool)>(&::UnityEngine::ParticleSystemRenderer::set_allowRoll)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488c364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_allowRoll",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_freeformStretching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_freeformStretching)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488c3a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                               "get_freeformStretching", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_freeformStretching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(bool)>(
    &::UnityEngine::ParticleSystemRenderer::set_freeformStretching)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488c3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_freeformStretching",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_rotateWithStretchDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ParticleSystemRenderer::*)()>(
    &::UnityEngine::ParticleSystemRenderer::get_rotateWithStretchDirection)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488c428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                               "get_rotateWithStretchDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_rotateWithStretchDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(bool)>(
    &::UnityEngine::ParticleSystemRenderer::set_rotateWithStretchDirection)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488c464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_rotateWithStretchDirection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_mesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::ParticleSystemRenderer::*)()>(
    &::UnityEngine::ParticleSystemRenderer::get_mesh)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488c4a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_mesh",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_mesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Mesh*)>(
    &::UnityEngine::ParticleSystemRenderer::set_mesh)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488c4e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_mesh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.GetMeshes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)(ByRef<::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*>>)>(&::UnityEngine::ParticleSystemRenderer::GetMeshes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488c528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "GetMeshes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.SetMeshes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*>, int32_t)>(&::UnityEngine::ParticleSystemRenderer::SetMeshes)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x488c56c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "SetMeshes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.SetMeshes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*>)>(
    &::UnityEngine::ParticleSystemRenderer::SetMeshes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x488c5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "SetMeshes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.GetMeshWeightings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)(ByRef<::ArrayW<float_t, ::Array<float_t>*>>)>(
    &::UnityEngine::ParticleSystemRenderer::GetMeshWeightings)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488c61c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "GetMeshWeightings", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t, ::Array<float_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.SetMeshWeightings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::ArrayW<float_t, ::Array<float_t>*>, int32_t)>(
    &::UnityEngine::ParticleSystemRenderer::SetMeshWeightings)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x488c660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "SetMeshWeightings", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.SetMeshWeightings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::ArrayW<float_t, ::Array<float_t>*>)>(
    &::UnityEngine::ParticleSystemRenderer::SetMeshWeightings)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x488c6b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "SetMeshWeightings", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_meshCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::get_meshCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488c710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_meshCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Mesh*, ::UnityEngine::ParticleSystemBakeMeshOptions)>(
    &::UnityEngine::ParticleSystemRenderer::BakeMesh)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x488c74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeMesh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeMeshOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(
    ::UnityEngine::Mesh*, ::UnityEngine::Camera*, ::UnityEngine::ParticleSystemBakeMeshOptions)>(&::UnityEngine::ParticleSystemRenderer::BakeMesh)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x488b760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeMesh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeMeshOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTrailsMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(::UnityEngine::Mesh*, ::UnityEngine::ParticleSystemBakeMeshOptions)>(
    &::UnityEngine::ParticleSystemRenderer::BakeTrailsMesh)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x488c7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTrailsMesh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeMeshOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTrailsMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(
    ::UnityEngine::Mesh*, ::UnityEngine::Camera*, ::UnityEngine::ParticleSystemBakeMeshOptions)>(&::UnityEngine::ParticleSystemRenderer::BakeTrailsMesh)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x488b858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTrailsMesh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeMeshOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)(
    ByRef<::UnityEngine::Texture2D*>, ::UnityEngine::ParticleSystemBakeTextureOptions)>(&::UnityEngine::ParticleSystemRenderer::BakeTexture)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x488c814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTexture", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)(
    ByRef<::UnityEngine::Texture2D*>, ::UnityEngine::Camera*, ::UnityEngine::ParticleSystemBakeTextureOptions)>(&::UnityEngine::ParticleSystemRenderer::BakeTexture)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x488c84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTexture", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTextureNoIndicesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::ParticleSystemRenderer::*)(
    ::UnityEngine::Texture2D*, ::UnityEngine::Camera*, ::UnityEngine::ParticleSystemBakeTextureOptions, ByRef<int32_t>)>(&::UnityEngine::ParticleSystemRenderer::BakeTextureNoIndicesInternal)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x488c940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTextureNoIndicesInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)(
    ByRef<::UnityEngine::Texture2D*>, ByRef<::UnityEngine::Texture2D*>, ::UnityEngine::ParticleSystemBakeTextureOptions)>(&::UnityEngine::ParticleSystemRenderer::BakeTexture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x488c9ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTexture", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)(
    ByRef<::UnityEngine::Texture2D*>, ByRef<::UnityEngine::Texture2D*>, ::UnityEngine::Camera*, ::UnityEngine::ParticleSystemBakeTextureOptions)>(
    &::UnityEngine::ParticleSystemRenderer::BakeTexture)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488ca0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTexture", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTextureInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystemRenderer__BakeTextureOutput (::UnityEngine::ParticleSystemRenderer::*)(
    ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, ::UnityEngine::Camera*, ::UnityEngine::ParticleSystemBakeTextureOptions, ByRef<int32_t>)>(
    &::UnityEngine::ParticleSystemRenderer::BakeTextureInternal)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x488ca48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTextureInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTrailsTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)(
    ByRef<::UnityEngine::Texture2D*>, ByRef<::UnityEngine::Texture2D*>, ::UnityEngine::ParticleSystemBakeTextureOptions)>(&::UnityEngine::ParticleSystemRenderer::BakeTrailsTexture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x488cb58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTrailsTexture", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTrailsTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)(
    ByRef<::UnityEngine::Texture2D*>, ByRef<::UnityEngine::Texture2D*>, ::UnityEngine::Camera*, ::UnityEngine::ParticleSystemBakeTextureOptions)>(
    &::UnityEngine::ParticleSystemRenderer::BakeTrailsTexture)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488cbb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTrailsTexture", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTrailsTextureInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystemRenderer__BakeTextureOutput (::UnityEngine::ParticleSystemRenderer::*)(
    ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, ::UnityEngine::Camera*, ::UnityEngine::ParticleSystemBakeTextureOptions, ByRef<int32_t>)>(
    &::UnityEngine::ParticleSystemRenderer::BakeTrailsTextureInternal)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x488cbf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTrailsTextureInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_activeVertexStreamsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)()>(
    &::UnityEngine::ParticleSystemRenderer::get_activeVertexStreamsCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488b600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                               "get_activeVertexStreamsCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.SetActiveVertexStreams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*)>(&::UnityEngine::ParticleSystemRenderer::SetActiveVertexStreams)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488b680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "SetActiveVertexStreams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.GetActiveVertexStreams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*)>(&::UnityEngine::ParticleSystemRenderer::GetActiveVertexStreams)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488b63c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "GetActiveVertexStreams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_activeTrailVertexStreamsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)()>(
    &::UnityEngine::ParticleSystemRenderer::get_activeTrailVertexStreamsCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488cd04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_activeTrailVertexStreamsCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.SetActiveTrailVertexStreams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*)>(&::UnityEngine::ParticleSystemRenderer::SetActiveTrailVertexStreams)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488cd40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "SetActiveTrailVertexStreams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.GetActiveTrailVertexStreams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*)>(&::UnityEngine::ParticleSystemRenderer::GetActiveTrailVertexStreams)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488cd84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "GetActiveTrailVertexStreams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)()>(&::UnityEngine::ParticleSystemRenderer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488cdc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_pivot_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(ByRef<::UnityEngine::Vector3>)>(
    &::UnityEngine::ParticleSystemRenderer::get_pivot_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488bf50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_pivot_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_pivot_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(ByRef<::UnityEngine::Vector3>)>(
    &::UnityEngine::ParticleSystemRenderer::set_pivot_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488bfe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_pivot_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.get_flip_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(ByRef<::UnityEngine::Vector3>)>(
    &::UnityEngine::ParticleSystemRenderer::get_flip_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488c088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_flip_Injected", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.set_flip_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(ByRef<::UnityEngine::Vector3>)>(
    &::UnityEngine::ParticleSystemRenderer::set_flip_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488c120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_flip_Injected", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTextureInternal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(
    ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, ::UnityEngine::Camera*, ::UnityEngine::ParticleSystemBakeTextureOptions, ByRef<int32_t>,
    ByRef<::UnityEngine::__ParticleSystemRenderer__BakeTextureOutput>)>(&::UnityEngine::ParticleSystemRenderer::BakeTextureInternal_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x488cad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTextureInternal_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystemRenderer__BakeTextureOutput>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.BakeTrailsTextureInternal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemRenderer::*)(
    ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, ::UnityEngine::Camera*, ::UnityEngine::ParticleSystemBakeTextureOptions, ByRef<int32_t>,
    ByRef<::UnityEngine::__ParticleSystemRenderer__BakeTextureOutput>)>(&::UnityEngine::ParticleSystemRenderer::BakeTrailsTextureInternal_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x488cc80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTrailsTextureInternal_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystemRenderer__BakeTextureOutput>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystemRenderer::EnableVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "EnableVertexStreams", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemVertexStreams>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, streams);
}
inline void UnityEngine::ParticleSystemRenderer::DisableVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "DisableVertexStreams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemVertexStreams>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, streams);
}
inline bool UnityEngine::ParticleSystemRenderer::AreVertexStreamsEnabled(::UnityEngine::ParticleSystemVertexStreams streams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "AreVertexStreamsEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemVertexStreams>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, streams);
}
inline ::UnityEngine::ParticleSystemVertexStreams UnityEngine::ParticleSystemRenderer::GetEnabledVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "GetEnabledVertexStreams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemVertexStreams>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemVertexStreams, false>(this, ___internal_method, streams);
}
inline void UnityEngine::ParticleSystemRenderer::Internal_SetVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams, bool enabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "Internal_SetVertexStreams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemVertexStreams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, streams, enabled);
}
inline ::UnityEngine::ParticleSystemVertexStreams UnityEngine::ParticleSystemRenderer::Internal_GetEnabledVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "Internal_GetEnabledVertexStreams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemVertexStreams>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemVertexStreams, false>(this, ___internal_method, streams);
}
/// @param useTransform: bool (default: false)
inline void UnityEngine::ParticleSystemRenderer::BakeMesh(::UnityEngine::Mesh* mesh, bool useTransform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, useTransform);
}
/// @param useTransform: bool (default: false)
inline void UnityEngine::ParticleSystemRenderer::BakeMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, bool useTransform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, camera, useTransform);
}
/// @param useTransform: bool (default: false)
inline void UnityEngine::ParticleSystemRenderer::BakeTrailsMesh(::UnityEngine::Mesh* mesh, bool useTransform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTrailsMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, useTransform);
}
/// @param useTransform: bool (default: false)
inline void UnityEngine::ParticleSystemRenderer::BakeTrailsMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, bool useTransform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTrailsMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, camera, useTransform);
}
inline ::UnityEngine::ParticleSystemRenderSpace UnityEngine::ParticleSystemRenderer::get_alignment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_alignment",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemRenderSpace, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_alignment(::UnityEngine::ParticleSystemRenderSpace value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_alignment", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemRenderSpace>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::ParticleSystemRenderMode UnityEngine::ParticleSystemRenderer::get_renderMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_renderMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemRenderMode, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_renderMode(::UnityEngine::ParticleSystemRenderMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_renderMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemRenderMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::ParticleSystemMeshDistribution UnityEngine::ParticleSystemRenderer::get_meshDistribution() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                             "get_meshDistribution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemMeshDistribution, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_meshDistribution(::UnityEngine::ParticleSystemMeshDistribution value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_meshDistribution", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemMeshDistribution>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::ParticleSystemSortMode UnityEngine::ParticleSystemRenderer::get_sortMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_sortMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemSortMode, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_sortMode(::UnityEngine::ParticleSystemSortMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_sortMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemSortMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_lengthScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_lengthScale",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_lengthScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_lengthScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_velocityScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_velocityScale",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_velocityScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_velocityScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_cameraVelocityScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                             "get_cameraVelocityScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_cameraVelocityScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_cameraVelocityScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_normalDirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                             "get_normalDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_normalDirection(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_normalDirection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_shadowBias() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_shadowBias",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_shadowBias(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_shadowBias",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_sortingFudge() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_sortingFudge",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_sortingFudge(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_sortingFudge",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_minParticleSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                             "get_minParticleSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_minParticleSize(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_minParticleSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystemRenderer::get_maxParticleSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                             "get_maxParticleSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_maxParticleSize(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_maxParticleSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ParticleSystemRenderer::get_pivot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_pivot",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_pivot(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_pivot", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ParticleSystemRenderer::get_flip() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_flip",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_flip(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_flip", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::SpriteMaskInteraction UnityEngine::ParticleSystemRenderer::get_maskInteraction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                             "get_maskInteraction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpriteMaskInteraction, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_maskInteraction(::UnityEngine::SpriteMaskInteraction value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_maskInteraction", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpriteMaskInteraction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::ParticleSystemRenderer::get_trailMaterial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_trailMaterial",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_trailMaterial(::UnityEngine::Material* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_trailMaterial", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystemRenderer::set_oldTrailMaterial(::UnityEngine::Material* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_oldTrailMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystemRenderer::get_enableGPUInstancing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                             "get_enableGPUInstancing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_enableGPUInstancing(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_enableGPUInstancing",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystemRenderer::get_allowRoll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_allowRoll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_allowRoll(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_allowRoll",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystemRenderer::get_freeformStretching() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                             "get_freeformStretching", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_freeformStretching(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_freeformStretching",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystemRenderer::get_rotateWithStretchDirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                             "get_rotateWithStretchDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_rotateWithStretchDirection(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_rotateWithStretchDirection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::ParticleSystemRenderer::get_mesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_mesh",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::set_mesh(::UnityEngine::Mesh* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_mesh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ParticleSystemRenderer::GetMeshes(ByRef<::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*>> meshes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "GetMeshes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, meshes);
}
inline void UnityEngine::ParticleSystemRenderer::SetMeshes(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "SetMeshes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, meshes, size);
}
inline void UnityEngine::ParticleSystemRenderer::SetMeshes(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "SetMeshes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, meshes);
}
inline int32_t UnityEngine::ParticleSystemRenderer::GetMeshWeightings(ByRef<::ArrayW<float_t, ::Array<float_t>*>> weightings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "GetMeshWeightings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t, ::Array<float_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, weightings);
}
inline void UnityEngine::ParticleSystemRenderer::SetMeshWeightings(::ArrayW<float_t, ::Array<float_t>*> weightings, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "SetMeshWeightings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, weightings, size);
}
inline void UnityEngine::ParticleSystemRenderer::SetMeshWeightings(::ArrayW<float_t, ::Array<float_t>*> weightings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "SetMeshWeightings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, weightings);
}
inline int32_t UnityEngine::ParticleSystemRenderer::get_meshCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_meshCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::BakeMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::ParticleSystemBakeMeshOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeMesh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeMeshOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, options);
}
inline void UnityEngine::ParticleSystemRenderer::BakeMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, ::UnityEngine::ParticleSystemBakeMeshOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeMesh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeMeshOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, camera, options);
}
inline void UnityEngine::ParticleSystemRenderer::BakeTrailsMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::ParticleSystemBakeMeshOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTrailsMesh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeMeshOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, options);
}
inline void UnityEngine::ParticleSystemRenderer::BakeTrailsMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, ::UnityEngine::ParticleSystemBakeMeshOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTrailsMesh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeMeshOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, camera, options);
}
inline int32_t UnityEngine::ParticleSystemRenderer::BakeTexture(ByRef<::UnityEngine::Texture2D*> verticesTexture, ::UnityEngine::ParticleSystemBakeTextureOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTexture", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, verticesTexture, options);
}
inline int32_t UnityEngine::ParticleSystemRenderer::BakeTexture(ByRef<::UnityEngine::Texture2D*> verticesTexture, ::UnityEngine::Camera* camera,
                                                                ::UnityEngine::ParticleSystemBakeTextureOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTexture", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, verticesTexture, camera, options);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::ParticleSystemRenderer::BakeTextureNoIndicesInternal(::UnityEngine::Texture2D* verticesTexture, ::UnityEngine::Camera* camera,
                                                                                                            ::UnityEngine::ParticleSystemBakeTextureOptions options, ByRef<int32_t> indexCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTextureNoIndicesInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(this, ___internal_method, verticesTexture, camera, options, indexCount);
}
inline int32_t UnityEngine::ParticleSystemRenderer::BakeTexture(ByRef<::UnityEngine::Texture2D*> verticesTexture, ByRef<::UnityEngine::Texture2D*> indicesTexture,
                                                                ::UnityEngine::ParticleSystemBakeTextureOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTexture", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, verticesTexture, indicesTexture, options);
}
inline int32_t UnityEngine::ParticleSystemRenderer::BakeTexture(ByRef<::UnityEngine::Texture2D*> verticesTexture, ByRef<::UnityEngine::Texture2D*> indicesTexture, ::UnityEngine::Camera* camera,
                                                                ::UnityEngine::ParticleSystemBakeTextureOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTexture", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, verticesTexture, indicesTexture, camera, options);
}
inline ::UnityEngine::__ParticleSystemRenderer__BakeTextureOutput UnityEngine::ParticleSystemRenderer::BakeTextureInternal(::UnityEngine::Texture2D* verticesTexture,
                                                                                                                           ::UnityEngine::Texture2D* indicesTexture, ::UnityEngine::Camera* camera,
                                                                                                                           ::UnityEngine::ParticleSystemBakeTextureOptions options,
                                                                                                                           ByRef<int32_t> indexCount) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTextureInternal", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystemRenderer__BakeTextureOutput, false>(this, ___internal_method, verticesTexture, indicesTexture, camera, options, indexCount);
}
inline int32_t UnityEngine::ParticleSystemRenderer::BakeTrailsTexture(ByRef<::UnityEngine::Texture2D*> verticesTexture, ByRef<::UnityEngine::Texture2D*> indicesTexture,
                                                                      ::UnityEngine::ParticleSystemBakeTextureOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTrailsTexture", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, verticesTexture, indicesTexture, options);
}
inline int32_t UnityEngine::ParticleSystemRenderer::BakeTrailsTexture(ByRef<::UnityEngine::Texture2D*> verticesTexture, ByRef<::UnityEngine::Texture2D*> indicesTexture, ::UnityEngine::Camera* camera,
                                                                      ::UnityEngine::ParticleSystemBakeTextureOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTrailsTexture", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, verticesTexture, indicesTexture, camera, options);
}
inline ::UnityEngine::__ParticleSystemRenderer__BakeTextureOutput
UnityEngine::ParticleSystemRenderer::BakeTrailsTextureInternal(::UnityEngine::Texture2D* verticesTexture, ::UnityEngine::Texture2D* indicesTexture, ::UnityEngine::Camera* camera,
                                                               ::UnityEngine::ParticleSystemBakeTextureOptions options, ByRef<int32_t> indexCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTrailsTextureInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystemRenderer__BakeTextureOutput, false>(this, ___internal_method, verticesTexture, indicesTexture, camera, options, indexCount);
}
inline int32_t UnityEngine::ParticleSystemRenderer::get_activeVertexStreamsCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(),
                                                                             "get_activeVertexStreamsCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::SetActiveVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "SetActiveVertexStreams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, streams);
}
inline void UnityEngine::ParticleSystemRenderer::GetActiveVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "GetActiveVertexStreams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, streams);
}
inline int32_t UnityEngine::ParticleSystemRenderer::get_activeTrailVertexStreamsCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_activeTrailVertexStreamsCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::SetActiveTrailVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "SetActiveTrailVertexStreams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, streams);
}
inline void UnityEngine::ParticleSystemRenderer::GetActiveTrailVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "GetActiveTrailVertexStreams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, streams);
}
inline ::UnityEngine::ParticleSystemRenderer* UnityEngine::ParticleSystemRenderer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ParticleSystemRenderer*>());
}
inline void UnityEngine::ParticleSystemRenderer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemRenderer::get_pivot_Injected(ByRef<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_pivot_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline void UnityEngine::ParticleSystemRenderer::set_pivot_Injected(ByRef<::UnityEngine::Vector3> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_pivot_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystemRenderer::get_flip_Injected(ByRef<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "get_flip_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline void UnityEngine::ParticleSystemRenderer::set_flip_Injected(ByRef<::UnityEngine::Vector3> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "set_flip_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystemRenderer::BakeTextureInternal_Injected(::UnityEngine::Texture2D* verticesTexture, ::UnityEngine::Texture2D* indicesTexture, ::UnityEngine::Camera* camera,
                                                                              ::UnityEngine::ParticleSystemBakeTextureOptions options, ByRef<int32_t> indexCount,
                                                                              ByRef<::UnityEngine::__ParticleSystemRenderer__BakeTextureOutput> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTextureInternal_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystemRenderer__BakeTextureOutput>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, verticesTexture, indicesTexture, camera, options, indexCount, ret);
}
inline void UnityEngine::ParticleSystemRenderer::BakeTrailsTextureInternal_Injected(::UnityEngine::Texture2D* verticesTexture, ::UnityEngine::Texture2D* indicesTexture, ::UnityEngine::Camera* camera,
                                                                                    ::UnityEngine::ParticleSystemBakeTextureOptions options, ByRef<int32_t> indexCount,
                                                                                    ByRef<::UnityEngine::__ParticleSystemRenderer__BakeTextureOutput> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer*>::get(), "BakeTrailsTextureInternal_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemBakeTextureOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystemRenderer__BakeTextureOutput>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, verticesTexture, indicesTexture, camera, options, indexCount, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemRenderer::ParticleSystemRenderer() {}
