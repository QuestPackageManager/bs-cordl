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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::SupportedRenderingFeatures* (*)()>(&::UnityEngine::Rendering::SupportedRenderingFeatures::get_active)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b25a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "get_active", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.set_active
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::SupportedRenderingFeatures*)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::set_active)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6b207bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(),
                                                                                           { "set_active", {}, { ::i2c::type_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_defaultMixedLightingModes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_defaultMixedLightingModes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "get_defaultMixedLightingModes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_mixedLightingModes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_mixedLightingModes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "get_mixedLightingModes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_lightmapBakeTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LightmapBakeType (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapBakeTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "get_lightmapBakeTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_lightmapsModes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LightmapsMode (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapsModes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "get_lightmapsModes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_enlighten
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&::UnityEngine::Rendering::SupportedRenderingFeatures::get_enlighten)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "get_enlighten", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.set_skyOcclusion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SupportedRenderingFeatures::*)(bool)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::set_skyOcclusion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "set_skyOcclusion", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_rendersUIOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&::UnityEngine::Rendering::SupportedRenderingFeatures::get_rendersUIOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "get_rendersUIOverlay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.set_rendersUIOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SupportedRenderingFeatures::*)(bool)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::set_rendersUIOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "set_rendersUIOverlay", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_ambientProbeBaking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_ambientProbeBaking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "get_ambientProbeBaking", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_defaultReflectionProbeBaking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_defaultReflectionProbeBaking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "get_defaultReflectionProbeBaking", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_overridesLightProbeSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_overridesLightProbeSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "get_overridesLightProbeSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.set_overridesLightProbeSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SupportedRenderingFeatures::*)(bool)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::set_overridesLightProbeSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "set_overridesLightProbeSystem", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.set_supportsHDR
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SupportedRenderingFeatures::*)(bool)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::set_supportsHDR)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "set_supportsHDR", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.FallbackMixedLightingModeByRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::FallbackMixedLightingModeByRef)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6b25bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "FallbackMixedLightingModeByRef", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsMixedLightingModeSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::MixedLightingMode)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupported)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b25ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(),
                                                                                           { "IsMixedLightingModeSupported", {}, { ::i2c::type_of<::UnityEngine::MixedLightingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsMixedLightingModeSupportedByRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::MixedLightingMode, ::System::IntPtr)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6b25d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(),
                                                             { "IsMixedLightingModeSupportedByRef", {}, { ::i2c::type_of<::UnityEngine::MixedLightingMode>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsLightmapBakeTypeSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::LightmapBakeType)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupported)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b25e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(),
                                                                                           { "IsLightmapBakeTypeSupported", {}, { ::i2c::type_of<::UnityEngine::LightmapBakeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsLightmapBakeTypeSupportedByRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LightmapBakeType, ::System::IntPtr)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6b25eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(),
                                                             { "IsLightmapBakeTypeSupportedByRef", {}, { ::i2c::type_of<::UnityEngine::LightmapBakeType>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsLightmapsModeSupportedByRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LightmapsMode, ::System::IntPtr)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapsModeSupportedByRef)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b25fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(),
                                                             { "IsLightmapsModeSupportedByRef", {}, { ::i2c::type_of<::UnityEngine::LightmapsMode>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsLightmapperSupportedByRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::IntPtr)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapperSupportedByRef)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b26020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(),
                                                                                           { "IsLightmapperSupportedByRef", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsUIOverlayRenderedBySRP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::IsUIOverlayRenderedBySRP)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b26030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "IsUIOverlayRenderedBySRP", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsAmbientProbeBakingSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::IsAmbientProbeBakingSupported)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b26098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "IsAmbientProbeBakingSupported", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsDefaultReflectionProbeBakingSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::IsDefaultReflectionProbeBakingSupported)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b26100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(),
                                                                                           { "IsDefaultReflectionProbeBakingSupported", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.OverridesLightProbeSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::OverridesLightProbeSystem)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b26168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "OverridesLightProbeSystem", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.FallbackLightmapperByRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::FallbackLightmapperByRef)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b261d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "FallbackLightmapperByRef", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&::UnityEngine::Rendering::SupportedRenderingFeatures::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b25ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { ".ctor", {}, {} })));
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
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__skyOcclusion_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skyOcclusion_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__skyOcclusion_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skyOcclusion_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__skyOcclusion_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____skyOcclusion_k__BackingField = value;
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
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__ambientProbeBaking_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ambientProbeBaking_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__ambientProbeBaking_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ambientProbeBaking_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__ambientProbeBaking_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ambientProbeBaking_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__defaultReflectionProbeBaking_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultReflectionProbeBaking_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__defaultReflectionProbeBaking_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultReflectionProbeBaking_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__defaultReflectionProbeBaking_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultReflectionProbeBaking_k__BackingField = value;
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
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__supportsClouds_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____supportsClouds_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_get__supportsClouds_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____supportsClouds_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__cordl_internal_set__supportsClouds_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____supportsClouds_k__BackingField = value;
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
  this->____overridesLightProbeSystemWarningMessage_k__BackingField = value;
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::setStaticF_s_Active(::UnityEngine::Rendering::SupportedRenderingFeatures* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::SupportedRenderingFeatures*, "s_Active", ::UnityEngine::Rendering::SupportedRenderingFeatures*>(
      std::forward<::UnityEngine::Rendering::SupportedRenderingFeatures*>(value));
}
inline ::UnityEngine::Rendering::SupportedRenderingFeatures* UnityEngine::Rendering::SupportedRenderingFeatures::getStaticF_s_Active() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::SupportedRenderingFeatures*, "s_Active", ::UnityEngine::Rendering::SupportedRenderingFeatures*>();
}
inline ::UnityEngine::Rendering::SupportedRenderingFeatures* UnityEngine::Rendering::SupportedRenderingFeatures::get_active() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "get_active", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SupportedRenderingFeatures*>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::set_active(::UnityEngine::Rendering::SupportedRenderingFeatures* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(),
                                                                                         { "set_active", {}, { ::i2c::type_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes UnityEngine::Rendering::SupportedRenderingFeatures::get_defaultMixedLightingModes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "get_defaultMixedLightingModes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes UnityEngine::Rendering::SupportedRenderingFeatures::get_mixedLightingModes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "get_mixedLightingModes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes>(this, ___internal_method);
}
inline ::UnityEngine::LightmapBakeType UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapBakeTypes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "get_lightmapBakeTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LightmapBakeType>(this, ___internal_method);
}
inline ::UnityEngine::LightmapsMode UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapsModes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "get_lightmapsModes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LightmapsMode>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_enlighten() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "get_enlighten", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::set_skyOcclusion(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "set_skyOcclusion", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_rendersUIOverlay() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "get_rendersUIOverlay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::set_rendersUIOverlay(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "set_rendersUIOverlay", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_ambientProbeBaking() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "get_ambientProbeBaking", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_defaultReflectionProbeBaking() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "get_defaultReflectionProbeBaking", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_overridesLightProbeSystem() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "get_overridesLightProbeSystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::set_overridesLightProbeSystem(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "set_overridesLightProbeSystem", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::set_supportsHDR(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "set_supportsHDR", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::FallbackMixedLightingModeByRef(::System::IntPtr fallbackModePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "FallbackMixedLightingModeByRef", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fallbackModePtr);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupported(::UnityEngine::MixedLightingMode mixedMode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(),
                                                                                         { "IsMixedLightingModeSupported", {}, { ::i2c::type_of<::UnityEngine::MixedLightingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mixedMode);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef(::UnityEngine::MixedLightingMode mixedMode, ::System::IntPtr isSupportedPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(),
                                                           { "IsMixedLightingModeSupportedByRef", {}, { ::i2c::type_of<::UnityEngine::MixedLightingMode>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mixedMode, isSupportedPtr);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupported(::UnityEngine::LightmapBakeType bakeType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(),
                                                                                         { "IsLightmapBakeTypeSupported", {}, { ::i2c::type_of<::UnityEngine::LightmapBakeType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bakeType);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef(::UnityEngine::LightmapBakeType bakeType, ::System::IntPtr isSupportedPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(),
                                                           { "IsLightmapBakeTypeSupportedByRef", {}, { ::i2c::type_of<::UnityEngine::LightmapBakeType>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bakeType, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapsModeSupportedByRef(::UnityEngine::LightmapsMode mode, ::System::IntPtr isSupportedPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(),
                                                           { "IsLightmapsModeSupportedByRef", {}, { ::i2c::type_of<::UnityEngine::LightmapsMode>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mode, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapperSupportedByRef(int32_t lightmapper, ::System::IntPtr isSupportedPtr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(),
                                                                                         { "IsLightmapperSupportedByRef", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lightmapper, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsUIOverlayRenderedBySRP(::System::IntPtr isSupportedPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "IsUIOverlayRenderedBySRP", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsAmbientProbeBakingSupported(::System::IntPtr isSupportedPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "IsAmbientProbeBakingSupported", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsDefaultReflectionProbeBakingSupported(::System::IntPtr isSupportedPtr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(),
                                                                                         { "IsDefaultReflectionProbeBakingSupported", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::OverridesLightProbeSystem(::System::IntPtr overridesPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "OverridesLightProbeSystem", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, overridesPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::FallbackLightmapperByRef(::System::IntPtr lightmapperPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { "FallbackLightmapperByRef", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lightmapperPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedRenderingFeatures*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::SupportedRenderingFeatures* UnityEngine::Rendering::SupportedRenderingFeatures::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::SupportedRenderingFeatures*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures::SupportedRenderingFeatures() {}
