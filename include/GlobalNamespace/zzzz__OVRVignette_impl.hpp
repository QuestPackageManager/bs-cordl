#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVignette.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRVignette_def.hpp"
#include "GlobalNamespace/zzzz__OVRVignette_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRVignette_MeshComplexityLevel::OVRVignette_MeshComplexityLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVignette_MeshComplexityLevel::OVRVignette_MeshComplexityLevel() {}
constexpr ::GlobalNamespace::OVRVignette_MeshComplexityLevel GlobalNamespace::OVRVignette_MeshComplexityLevel::VerySimple{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRVignette_MeshComplexityLevel GlobalNamespace::OVRVignette_MeshComplexityLevel::Simple{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRVignette_MeshComplexityLevel GlobalNamespace::OVRVignette_MeshComplexityLevel::Normal{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRVignette_MeshComplexityLevel GlobalNamespace::OVRVignette_MeshComplexityLevel::Detailed{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRVignette_MeshComplexityLevel GlobalNamespace::OVRVignette_MeshComplexityLevel::VeryDetailed{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRVignette_FalloffType::OVRVignette_FalloffType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVignette_FalloffType::OVRVignette_FalloffType() {}
constexpr ::GlobalNamespace::OVRVignette_FalloffType GlobalNamespace::OVRVignette_FalloffType::Linear{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRVignette_FalloffType GlobalNamespace::OVRVignette_FalloffType::Quadratic{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.GetTriangleCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::GetTriangleCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x404a304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "GetTriangleCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.BuildMeshes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::BuildMeshes)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0x404a328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "BuildMeshes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.BuildMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::BuildMaterials)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x404a9a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "BuildMaterials",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::OnEnable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x404ad50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::OnDisable)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x404adf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::Awake)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x404aed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.GetTanFovAndOffsetForStereoEye
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)(
    ::UnityEngine::Camera_StereoscopicEye, ::ByRef<float_t>, ::ByRef<float_t>, ::ByRef<float_t>, ::ByRef<float_t>)>(&::GlobalNamespace::OVRVignette::GetTanFovAndOffsetForStereoEye)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x404b1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "GetTanFovAndOffsetForStereoEye", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_StereoscopicEye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.GetTanFovAndOffsetForMonoEye
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)(::ByRef<float_t>, ::ByRef<float_t>, ::ByRef<float_t>, ::ByRef<float_t>)>(
    &::GlobalNamespace::OVRVignette::GetTanFovAndOffsetForMonoEye)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x404b3b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "GetTanFovAndOffsetForMonoEye", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.VisibilityTest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRVignette::*)(float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::OVRVignette::VisibilityTest)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x404b440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "VisibilityTest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::Update)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x404b474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.EnableRenderers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::EnableRenderers)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x404b7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "EnableRenderers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.DisableRenderers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::DisableRenderers)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x404aea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "DisableRenderers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.OnPreCull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::OnPreCull)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x404b810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "OnPreCull",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.OnPostRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::OnPostRender)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x404b814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "OnPostRender",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.OnBeginCameraRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(
    &::GlobalNamespace::OVRVignette::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x404b818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "OnBeginCameraRendering", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x404b8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::OVRVignette::__cordl_internal_get_VignetteShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VignetteShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::OVRVignette::__cordl_internal_get_VignetteShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VignetteShader;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set_VignetteShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___VignetteShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRVignette_MeshComplexityLevel& GlobalNamespace::OVRVignette::__cordl_internal_get_MeshComplexity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MeshComplexity;
}
constexpr ::GlobalNamespace::OVRVignette_MeshComplexityLevel const& GlobalNamespace::OVRVignette::__cordl_internal_get_MeshComplexity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MeshComplexity;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set_MeshComplexity(::GlobalNamespace::OVRVignette_MeshComplexityLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MeshComplexity = value;
}
constexpr ::GlobalNamespace::OVRVignette_FalloffType& GlobalNamespace::OVRVignette::__cordl_internal_get_Falloff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Falloff;
}
constexpr ::GlobalNamespace::OVRVignette_FalloffType const& GlobalNamespace::OVRVignette::__cordl_internal_get_Falloff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Falloff;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set_Falloff(::GlobalNamespace::OVRVignette_FalloffType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Falloff = value;
}
constexpr float_t& GlobalNamespace::OVRVignette::__cordl_internal_get_VignetteFieldOfView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VignetteFieldOfView;
}
constexpr float_t const& GlobalNamespace::OVRVignette::__cordl_internal_get_VignetteFieldOfView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VignetteFieldOfView;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set_VignetteFieldOfView(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___VignetteFieldOfView = value;
}
constexpr float_t& GlobalNamespace::OVRVignette::__cordl_internal_get_VignetteAspectRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VignetteAspectRatio;
}
constexpr float_t const& GlobalNamespace::OVRVignette::__cordl_internal_get_VignetteAspectRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VignetteAspectRatio;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set_VignetteAspectRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___VignetteAspectRatio = value;
}
constexpr float_t& GlobalNamespace::OVRVignette::__cordl_internal_get_VignetteFalloffDegrees() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VignetteFalloffDegrees;
}
constexpr float_t const& GlobalNamespace::OVRVignette::__cordl_internal_get_VignetteFalloffDegrees() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VignetteFalloffDegrees;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set_VignetteFalloffDegrees(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___VignetteFalloffDegrees = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::OVRVignette::__cordl_internal_get_VignetteColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VignetteColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::OVRVignette::__cordl_internal_get_VignetteColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VignetteColor;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set_VignetteColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___VignetteColor = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::OVRVignette::__cordl_internal_get__Camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::OVRVignette::__cordl_internal_get__Camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Camera;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set__Camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& GlobalNamespace::OVRVignette::__cordl_internal_get__OpaqueMeshFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OpaqueMeshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& GlobalNamespace::OVRVignette::__cordl_internal_get__OpaqueMeshFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OpaqueMeshFilter;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set__OpaqueMeshFilter(::UnityW<::UnityEngine::MeshFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____OpaqueMeshFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& GlobalNamespace::OVRVignette::__cordl_internal_get__TransparentMeshFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TransparentMeshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& GlobalNamespace::OVRVignette::__cordl_internal_get__TransparentMeshFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TransparentMeshFilter;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set__TransparentMeshFilter(::UnityW<::UnityEngine::MeshFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TransparentMeshFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::OVRVignette::__cordl_internal_get__OpaqueMeshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OpaqueMeshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::OVRVignette::__cordl_internal_get__OpaqueMeshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OpaqueMeshRenderer;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set__OpaqueMeshRenderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____OpaqueMeshRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::OVRVignette::__cordl_internal_get__TransparentMeshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TransparentMeshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::OVRVignette::__cordl_internal_get__TransparentMeshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TransparentMeshRenderer;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set__TransparentMeshRenderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TransparentMeshRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::OVRVignette::__cordl_internal_get__OpaqueMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OpaqueMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::OVRVignette::__cordl_internal_get__OpaqueMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OpaqueMesh;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set__OpaqueMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____OpaqueMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::OVRVignette::__cordl_internal_get__TransparentMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TransparentMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::OVRVignette::__cordl_internal_get__TransparentMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TransparentMesh;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set__TransparentMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TransparentMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OVRVignette::__cordl_internal_get__OpaqueMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OpaqueMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OVRVignette::__cordl_internal_get__OpaqueMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OpaqueMaterial;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set__OpaqueMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____OpaqueMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OVRVignette::__cordl_internal_get__TransparentMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TransparentMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OVRVignette::__cordl_internal_get__TransparentMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TransparentMaterial;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set__TransparentMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TransparentMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::OVRVignette::__cordl_internal_get__ShaderScaleAndOffset0Property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ShaderScaleAndOffset0Property;
}
constexpr int32_t const& GlobalNamespace::OVRVignette::__cordl_internal_get__ShaderScaleAndOffset0Property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ShaderScaleAndOffset0Property;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set__ShaderScaleAndOffset0Property(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ShaderScaleAndOffset0Property = value;
}
constexpr int32_t& GlobalNamespace::OVRVignette::__cordl_internal_get__ShaderScaleAndOffset1Property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ShaderScaleAndOffset1Property;
}
constexpr int32_t const& GlobalNamespace::OVRVignette::__cordl_internal_get__ShaderScaleAndOffset1Property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ShaderScaleAndOffset1Property;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set__ShaderScaleAndOffset1Property(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ShaderScaleAndOffset1Property = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& GlobalNamespace::OVRVignette::__cordl_internal_get__TransparentScaleAndOffset0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TransparentScaleAndOffset0;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::OVRVignette::__cordl_internal_get__TransparentScaleAndOffset0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TransparentScaleAndOffset0;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set__TransparentScaleAndOffset0(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TransparentScaleAndOffset0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& GlobalNamespace::OVRVignette::__cordl_internal_get__TransparentScaleAndOffset1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TransparentScaleAndOffset1;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::OVRVignette::__cordl_internal_get__TransparentScaleAndOffset1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TransparentScaleAndOffset1;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set__TransparentScaleAndOffset1(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TransparentScaleAndOffset1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& GlobalNamespace::OVRVignette::__cordl_internal_get__OpaqueScaleAndOffset0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OpaqueScaleAndOffset0;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::OVRVignette::__cordl_internal_get__OpaqueScaleAndOffset0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OpaqueScaleAndOffset0;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set__OpaqueScaleAndOffset0(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____OpaqueScaleAndOffset0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& GlobalNamespace::OVRVignette::__cordl_internal_get__OpaqueScaleAndOffset1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OpaqueScaleAndOffset1;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::OVRVignette::__cordl_internal_get__OpaqueScaleAndOffset1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OpaqueScaleAndOffset1;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set__OpaqueScaleAndOffset1(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____OpaqueScaleAndOffset1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRVignette::__cordl_internal_get__OpaqueVignetteVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OpaqueVignetteVisible;
}
constexpr bool const& GlobalNamespace::OVRVignette::__cordl_internal_get__OpaqueVignetteVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OpaqueVignetteVisible;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set__OpaqueVignetteVisible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____OpaqueVignetteVisible = value;
}
constexpr bool& GlobalNamespace::OVRVignette::__cordl_internal_get__TransparentVignetteVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TransparentVignetteVisible;
}
constexpr bool const& GlobalNamespace::OVRVignette::__cordl_internal_get__TransparentVignetteVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TransparentVignetteVisible;
}
constexpr void GlobalNamespace::OVRVignette::__cordl_internal_set__TransparentVignetteVisible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TransparentVignetteVisible = value;
}
inline void GlobalNamespace::OVRVignette::setStaticF_QUADRATIC_FALLOFF(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "QUADRATIC_FALLOFF", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRVignette::getStaticF_QUADRATIC_FALLOFF() {
  return ::cordl_internals::getStaticField<::StringW, "QUADRATIC_FALLOFF", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get>();
}
inline int32_t GlobalNamespace::OVRVignette::GetTriangleCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "GetTriangleCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::BuildMeshes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "BuildMeshes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::BuildMaterials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "BuildMaterials",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::GetTanFovAndOffsetForStereoEye(::UnityEngine::Camera_StereoscopicEye eye, ::ByRef<float_t> tanFovX, ::ByRef<float_t> tanFovY, ::ByRef<float_t> offsetX,
                                                                         ::ByRef<float_t> offsetY) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "GetTanFovAndOffsetForStereoEye", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_StereoscopicEye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eye, tanFovX, tanFovY, offsetX, offsetY);
}
inline void GlobalNamespace::OVRVignette::GetTanFovAndOffsetForMonoEye(::ByRef<float_t> tanFovX, ::ByRef<float_t> tanFovY, ::ByRef<float_t> offsetX, ::ByRef<float_t> offsetY) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "GetTanFovAndOffsetForMonoEye", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tanFovX, tanFovY, offsetX, offsetY);
}
inline bool GlobalNamespace::OVRVignette::VisibilityTest(float_t scaleX, float_t scaleY, float_t offsetX, float_t offsetY) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "VisibilityTest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, scaleX, scaleY, offsetX, offsetY);
}
inline void GlobalNamespace::OVRVignette::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::EnableRenderers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "EnableRenderers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::DisableRenderers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "DisableRenderers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::OnPreCull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "OnPreCull",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::OnPostRender() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "OnPostRender",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), "OnBeginCameraRendering", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, camera);
}
inline void GlobalNamespace::OVRVignette::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRVignette* GlobalNamespace::OVRVignette::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRVignette*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVignette::OVRVignette() {}
