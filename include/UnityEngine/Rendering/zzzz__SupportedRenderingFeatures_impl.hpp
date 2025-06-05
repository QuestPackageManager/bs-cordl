#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SupportedRenderingFeatures.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LightmapBakeType_impl.hpp"
#include "UnityEngine/zzzz__LightmapsMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SupportedRenderingFeatures_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__SupportedRenderingFeatures_def.hpp"
#include "UnityEngine/zzzz__LightmapBakeType_def.hpp"
#include "UnityEngine/zzzz__LightmapsMode_def.hpp"
#include "UnityEngine/zzzz__MixedLightingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes::SupportedRenderingFeatures_ReflectionProbeModes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes::SupportedRenderingFeatures_ReflectionProbeModes() {}
constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes::Rotation{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes::SupportedRenderingFeatures_LightmapMixedBakeModes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes::SupportedRenderingFeatures_LightmapMixedBakeModes() {}
constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes::IndirectOnly{ static_cast<int32_t>(
    0x1) };
constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes::Subtractive{ static_cast<int32_t>(
    0x2) };
constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes::Shadowmask{ static_cast<int32_t>(
    0x4) };
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_active
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::SupportedRenderingFeatures* (*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_active)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x48ca330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               "get_active", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.set_active
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::SupportedRenderingFeatures*)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::set_active)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x48c9730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "set_active", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_defaultMixedLightingModes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes (
    ::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&::UnityEngine::Rendering::SupportedRenderingFeatures::get_defaultMixedLightingModes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48ca3d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               "get_defaultMixedLightingModes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_mixedLightingModes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes (
    ::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&::UnityEngine::Rendering::SupportedRenderingFeatures::get_mixedLightingModes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48ca3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               "get_mixedLightingModes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_lightmapBakeTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LightmapBakeType (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapBakeTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48ca3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               "get_lightmapBakeTypes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_lightmapsModes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LightmapsMode (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapsModes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48ca3e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               "get_lightmapsModes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_enlightenLightmapper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_enlightenLightmapper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48ca3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               "get_enlightenLightmapper", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_enlighten
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_enlighten)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48ca3f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               "get_enlighten", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_rendersUIOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_rendersUIOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48ca400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               "get_rendersUIOverlay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_autoAmbientProbeBaking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_autoAmbientProbeBaking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48ca408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               "get_autoAmbientProbeBaking", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_autoDefaultReflectionProbeBaking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_autoDefaultReflectionProbeBaking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48ca410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                 "get_autoDefaultReflectionProbeBaking", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_overridesLightProbeSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_overridesLightProbeSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48ca418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               "get_overridesLightProbeSystem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.FallbackMixedLightingModeByRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::FallbackMixedLightingModeByRef)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x48ca420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "FallbackMixedLightingModeByRef",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsMixedLightingModeSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::MixedLightingMode)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupported)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x48ca554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsMixedLightingModeSupported", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MixedLightingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsMixedLightingModeSupportedByRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::MixedLightingMode, ::System::IntPtr)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x48ca5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                 "IsMixedLightingModeSupportedByRef", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MixedLightingMode>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsLightmapBakeTypeSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::LightmapBakeType)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupported)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x48ca6c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsLightmapBakeTypeSupported", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightmapBakeType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsLightmapBakeTypeSupportedByRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::LightmapBakeType, ::System::IntPtr)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x48ca734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                 "IsLightmapBakeTypeSupportedByRef", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightmapBakeType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsLightmapsModeSupportedByRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::LightmapsMode, ::System::IntPtr)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapsModeSupportedByRef)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x48ca824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsLightmapsModeSupportedByRef", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightmapsMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsLightmapperSupportedByRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::System::IntPtr)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapperSupportedByRef)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x48ca8b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsLightmapperSupportedByRef", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsUIOverlayRenderedBySRP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::IsUIOverlayRenderedBySRP)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x48ca934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsUIOverlayRenderedBySRP",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsAutoAmbientProbeBakingSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::IsAutoAmbientProbeBakingSupported)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x48ca9ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsAutoAmbientProbeBakingSupported",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsAutoDefaultReflectionProbeBakingSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::IsAutoDefaultReflectionProbeBakingSupported)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x48caa24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsAutoDefaultReflectionProbeBakingSupported",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.OverridesLightProbeSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::OverridesLightProbeSystem)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x48caa9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "OverridesLightProbeSystem",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.FallbackLightmapperByRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::FallbackLightmapperByRef)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x48cab14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "FallbackLightmapperByRef",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x48c96ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__reflectionProbeModes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionProbeModes_k__BackingField;
}
constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes const&
UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__reflectionProbeModes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionProbeModes_k__BackingField;
}
constexpr void
UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__reflectionProbeModes_k__BackingField(::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reflectionProbeModes_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes&
UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__defaultMixedLightingModes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultMixedLightingModes_k__BackingField;
}
constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes const&
UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__defaultMixedLightingModes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultMixedLightingModes_k__BackingField;
}
constexpr void
UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__defaultMixedLightingModes_k__BackingField(::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultMixedLightingModes_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__mixedLightingModes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mixedLightingModes_k__BackingField;
}
constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes const&
UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__mixedLightingModes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mixedLightingModes_k__BackingField;
}
constexpr void
UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__mixedLightingModes_k__BackingField(::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mixedLightingModes_k__BackingField = value;
}
constexpr ::UnityEngine::LightmapBakeType& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__lightmapBakeTypes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapBakeTypes_k__BackingField;
}
constexpr ::UnityEngine::LightmapBakeType const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__lightmapBakeTypes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapBakeTypes_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__lightmapBakeTypes_k__BackingField(::UnityEngine::LightmapBakeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightmapBakeTypes_k__BackingField = value;
}
constexpr ::UnityEngine::LightmapsMode& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__lightmapsModes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapsModes_k__BackingField;
}
constexpr ::UnityEngine::LightmapsMode const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__lightmapsModes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapsModes_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__lightmapsModes_k__BackingField(::UnityEngine::LightmapsMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightmapsModes_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__enlightenLightmapper_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enlightenLightmapper_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__enlightenLightmapper_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enlightenLightmapper_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__enlightenLightmapper_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enlightenLightmapper_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__enlighten_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enlighten_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__enlighten_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enlighten_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__enlighten_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enlighten_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__lightProbeProxyVolumes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightProbeProxyVolumes_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__lightProbeProxyVolumes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightProbeProxyVolumes_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__lightProbeProxyVolumes_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightProbeProxyVolumes_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__motionVectors_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____motionVectors_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__motionVectors_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____motionVectors_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__motionVectors_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____motionVectors_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__receiveShadows_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiveShadows_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__receiveShadows_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiveShadows_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__receiveShadows_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____receiveShadows_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__reflectionProbes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionProbes_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__reflectionProbes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionProbes_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__reflectionProbes_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reflectionProbes_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__reflectionProbesBlendDistance_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionProbesBlendDistance_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__reflectionProbesBlendDistance_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionProbesBlendDistance_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__reflectionProbesBlendDistance_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reflectionProbesBlendDistance_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__rendererPriority_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rendererPriority_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__rendererPriority_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rendererPriority_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__rendererPriority_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rendererPriority_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__rendersUIOverlay_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rendersUIOverlay_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__rendersUIOverlay_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rendersUIOverlay_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__rendersUIOverlay_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rendersUIOverlay_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__overridesEnvironmentLighting_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesEnvironmentLighting_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__overridesEnvironmentLighting_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesEnvironmentLighting_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__overridesEnvironmentLighting_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overridesEnvironmentLighting_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__overridesFog_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesFog_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__overridesFog_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesFog_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__overridesFog_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overridesFog_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__overridesRealtimeReflectionProbes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesRealtimeReflectionProbes_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__overridesRealtimeReflectionProbes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesRealtimeReflectionProbes_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__overridesRealtimeReflectionProbes_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overridesRealtimeReflectionProbes_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__overridesOtherLightingSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesOtherLightingSettings_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__overridesOtherLightingSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesOtherLightingSettings_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__overridesOtherLightingSettings_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overridesOtherLightingSettings_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__editableMaterialRenderQueue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editableMaterialRenderQueue_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__editableMaterialRenderQueue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editableMaterialRenderQueue_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__editableMaterialRenderQueue_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editableMaterialRenderQueue_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__overridesLODBias_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesLODBias_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__overridesLODBias_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesLODBias_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__overridesLODBias_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overridesLODBias_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__overridesMaximumLODLevel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesMaximumLODLevel_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__overridesMaximumLODLevel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesMaximumLODLevel_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__overridesMaximumLODLevel_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overridesMaximumLODLevel_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__overridesEnableLODCrossFade_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesEnableLODCrossFade_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__overridesEnableLODCrossFade_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesEnableLODCrossFade_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__overridesEnableLODCrossFade_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overridesEnableLODCrossFade_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__rendererProbes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rendererProbes_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__rendererProbes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rendererProbes_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__rendererProbes_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rendererProbes_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__particleSystemInstancing_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemInstancing_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__particleSystemInstancing_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemInstancing_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__particleSystemInstancing_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particleSystemInstancing_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__autoAmbientProbeBaking_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoAmbientProbeBaking_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__autoAmbientProbeBaking_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoAmbientProbeBaking_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__autoAmbientProbeBaking_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autoAmbientProbeBaking_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__autoDefaultReflectionProbeBaking_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoDefaultReflectionProbeBaking_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__autoDefaultReflectionProbeBaking_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoDefaultReflectionProbeBaking_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__autoDefaultReflectionProbeBaking_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autoDefaultReflectionProbeBaking_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__overridesShadowmask_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesShadowmask_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__overridesShadowmask_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesShadowmask_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__overridesShadowmask_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overridesShadowmask_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__overridesLightProbeSystem_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesLightProbeSystem_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__overridesLightProbeSystem_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesLightProbeSystem_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__overridesLightProbeSystem_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overridesLightProbeSystem_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__supportsHDR_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____supportsHDR_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__supportsHDR_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____supportsHDR_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__supportsHDR_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____supportsHDR_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__overridesLightProbeSystemWarningMessage_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesLightProbeSystemWarningMessage_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__overridesLightProbeSystemWarningMessage_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesLightProbeSystemWarningMessage_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__overridesLightProbeSystemWarningMessage_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overridesLightProbeSystemWarningMessage_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::setStaticF_s_Active(::UnityEngine::Rendering::SupportedRenderingFeatures* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::SupportedRenderingFeatures*, "s_Active",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get>(
      std::forward<::UnityEngine::Rendering::SupportedRenderingFeatures*>(value));
}
inline ::UnityEngine::Rendering::SupportedRenderingFeatures* UnityEngine::Rendering::SupportedRenderingFeatures::getStaticF_s_Active() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::SupportedRenderingFeatures*, "s_Active",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get>();
}
inline ::UnityEngine::Rendering::SupportedRenderingFeatures* UnityEngine::Rendering::SupportedRenderingFeatures::get_active() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             "get_active", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SupportedRenderingFeatures*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::set_active(::UnityEngine::Rendering::SupportedRenderingFeatures* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "set_active", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes UnityEngine::Rendering::SupportedRenderingFeatures::get_defaultMixedLightingModes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             "get_defaultMixedLightingModes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes UnityEngine::Rendering::SupportedRenderingFeatures::get_mixedLightingModes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             "get_mixedLightingModes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes, false>(this, ___internal_method);
}
inline ::UnityEngine::LightmapBakeType UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapBakeTypes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             "get_lightmapBakeTypes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LightmapBakeType, false>(this, ___internal_method);
}
inline ::UnityEngine::LightmapsMode UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapsModes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             "get_lightmapsModes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LightmapsMode, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_enlightenLightmapper() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             "get_enlightenLightmapper", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_enlighten() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             "get_enlighten", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_rendersUIOverlay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             "get_rendersUIOverlay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_autoAmbientProbeBaking() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             "get_autoAmbientProbeBaking", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_autoDefaultReflectionProbeBaking() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                               "get_autoDefaultReflectionProbeBaking", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_overridesLightProbeSystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             "get_overridesLightProbeSystem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::FallbackMixedLightingModeByRef(::System::IntPtr fallbackModePtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "FallbackMixedLightingModeByRef",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fallbackModePtr);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupported(::UnityEngine::MixedLightingMode mixedMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsMixedLightingModeSupported", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MixedLightingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mixedMode);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef(::UnityEngine::MixedLightingMode mixedMode, ::System::IntPtr isSupportedPtr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                               "IsMixedLightingModeSupportedByRef", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MixedLightingMode>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mixedMode, isSupportedPtr);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupported(::UnityEngine::LightmapBakeType bakeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsLightmapBakeTypeSupported", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightmapBakeType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bakeType);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef(::UnityEngine::LightmapBakeType bakeType, ::System::IntPtr isSupportedPtr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsLightmapBakeTypeSupportedByRef",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightmapBakeType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bakeType, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapsModeSupportedByRef(::UnityEngine::LightmapsMode mode, ::System::IntPtr isSupportedPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsLightmapsModeSupportedByRef", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightmapsMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mode, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapperSupportedByRef(int32_t lightmapper, ::System::IntPtr isSupportedPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsLightmapperSupportedByRef", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lightmapper, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsUIOverlayRenderedBySRP(::System::IntPtr isSupportedPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsUIOverlayRenderedBySRP",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsAutoAmbientProbeBakingSupported(::System::IntPtr isSupportedPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsAutoAmbientProbeBakingSupported",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsAutoDefaultReflectionProbeBakingSupported(::System::IntPtr isSupportedPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsAutoDefaultReflectionProbeBakingSupported",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::OverridesLightProbeSystem(::System::IntPtr overridesPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "OverridesLightProbeSystem",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, overridesPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::FallbackLightmapperByRef(::System::IntPtr lightmapperPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "FallbackLightmapperByRef",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lightmapperPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::SupportedRenderingFeatures* UnityEngine::Rendering::SupportedRenderingFeatures::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::SupportedRenderingFeatures*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures::SupportedRenderingFeatures() {}
