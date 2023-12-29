#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SupportedRenderingFeatures_impl.hpp"
#include "UnityEngine/zzzz__LightmapBakeType_impl.hpp"
#include "UnityEngine/zzzz__LightmapsMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SupportedRenderingFeatures_def.hpp"
#include "UnityEngine/Rendering/zzzz__SupportedRenderingFeatures_def.hpp"
#include "UnityEngine/zzzz__LightmapBakeType_def.hpp"
#include "UnityEngine/zzzz__LightmapsMode_def.hpp"
#include "UnityEngine/zzzz__MixedLightingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes::__SupportedRenderingFeatures__ReflectionProbeModes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes::__SupportedRenderingFeatures__ReflectionProbeModes() {}
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes::Rotation{ static_cast<int32_t>(
    0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes::__SupportedRenderingFeatures__LightmapMixedBakeModes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes::__SupportedRenderingFeatures__LightmapMixedBakeModes() {}
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes::None{ static_cast<int32_t>(
    0x0) };
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes::IndirectOnly{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes::Subtractive{
  static_cast<int32_t>(0x2)
};
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes::Shadowmask{ static_cast<int32_t>(
    0x4) };
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_active
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::SupportedRenderingFeatures* (*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_active)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2b87080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               "get_active", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.set_active
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::SupportedRenderingFeatures*)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::set_active)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b85cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "set_active", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_defaultMixedLightingModes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes (
    ::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&::UnityEngine::Rendering::SupportedRenderingFeatures::get_defaultMixedLightingModes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b87128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               "get_defaultMixedLightingModes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_mixedLightingModes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes (
    ::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&::UnityEngine::Rendering::SupportedRenderingFeatures::get_mixedLightingModes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b87130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               "get_mixedLightingModes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_lightmapBakeTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LightmapBakeType (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapBakeTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b87138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               "get_lightmapBakeTypes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_lightmapsModes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LightmapsMode (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapsModes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b87140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               "get_lightmapsModes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_enlightenLightmapper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_enlightenLightmapper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b87148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               "get_enlightenLightmapper", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_enlighten
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_enlighten)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b87150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               "get_enlighten", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_rendersUIOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_rendersUIOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b87158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               "get_rendersUIOverlay", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_autoAmbientProbeBaking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_autoAmbientProbeBaking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b87160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               "get_autoAmbientProbeBaking", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_autoDefaultReflectionProbeBaking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::get_autoDefaultReflectionProbeBaking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b87168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               "get_autoDefaultReflectionProbeBaking", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.FallbackMixedLightingModeByRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::FallbackMixedLightingModeByRef)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2b87170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "FallbackMixedLightingModeByRef",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsMixedLightingModeSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::MixedLightingMode)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupported)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b872a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsMixedLightingModeSupported",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MixedLightingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsMixedLightingModeSupportedByRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::MixedLightingMode, void*)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2b87310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsMixedLightingModeSupportedByRef", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MixedLightingMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsLightmapBakeTypeSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::LightmapBakeType)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupported)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b87418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsLightmapBakeTypeSupported",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightmapBakeType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsLightmapBakeTypeSupportedByRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::LightmapBakeType, void*)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2b87484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsLightmapBakeTypeSupportedByRef", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightmapBakeType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsLightmapsModeSupportedByRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::LightmapsMode, void*)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapsModeSupportedByRef)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b87574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsLightmapsModeSupportedByRef", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightmapsMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsLightmapperSupportedByRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, void*)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapperSupportedByRef)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b87600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsLightmapperSupportedByRef", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsUIOverlayRenderedBySRP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::IsUIOverlayRenderedBySRP)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b87684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsUIOverlayRenderedBySRP",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsAutoAmbientProbeBakingSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::IsAutoAmbientProbeBakingSupported)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b876fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsAutoAmbientProbeBakingSupported",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsAutoDefaultReflectionProbeBakingSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*)>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::IsAutoDefaultReflectionProbeBakingSupported)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b87774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsAutoDefaultReflectionProbeBakingSupported",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.FallbackLightmapperByRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::FallbackLightmapperByRef)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2b877ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "FallbackLightmapperByRef",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(
    &::UnityEngine::Rendering::SupportedRenderingFeatures::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2b85c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes& UnityEngine::Rendering::SupportedRenderingFeatures::__get__reflectionProbeModes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionProbeModes_k__BackingField;
}
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__reflectionProbeModes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionProbeModes_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__reflectionProbeModes_k__BackingField(::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reflectionProbeModes_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes& UnityEngine::Rendering::SupportedRenderingFeatures::__get__defaultMixedLightingModes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultMixedLightingModes_k__BackingField;
}
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes const&
UnityEngine::Rendering::SupportedRenderingFeatures::__get__defaultMixedLightingModes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultMixedLightingModes_k__BackingField;
}
constexpr void
UnityEngine::Rendering::SupportedRenderingFeatures::__set__defaultMixedLightingModes_k__BackingField(::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultMixedLightingModes_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes& UnityEngine::Rendering::SupportedRenderingFeatures::__get__mixedLightingModes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mixedLightingModes_k__BackingField;
}
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__mixedLightingModes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mixedLightingModes_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__mixedLightingModes_k__BackingField(::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mixedLightingModes_k__BackingField = value;
}
constexpr ::UnityEngine::LightmapBakeType& UnityEngine::Rendering::SupportedRenderingFeatures::__get__lightmapBakeTypes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapBakeTypes_k__BackingField;
}
constexpr ::UnityEngine::LightmapBakeType const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__lightmapBakeTypes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapBakeTypes_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__lightmapBakeTypes_k__BackingField(::UnityEngine::LightmapBakeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightmapBakeTypes_k__BackingField = value;
}
constexpr ::UnityEngine::LightmapsMode& UnityEngine::Rendering::SupportedRenderingFeatures::__get__lightmapsModes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapsModes_k__BackingField;
}
constexpr ::UnityEngine::LightmapsMode const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__lightmapsModes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapsModes_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__lightmapsModes_k__BackingField(::UnityEngine::LightmapsMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightmapsModes_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__enlightenLightmapper_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enlightenLightmapper_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__enlightenLightmapper_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enlightenLightmapper_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__enlightenLightmapper_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enlightenLightmapper_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__enlighten_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enlighten_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__enlighten_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enlighten_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__enlighten_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enlighten_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__lightProbeProxyVolumes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightProbeProxyVolumes_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__lightProbeProxyVolumes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightProbeProxyVolumes_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__lightProbeProxyVolumes_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightProbeProxyVolumes_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__motionVectors_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____motionVectors_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__motionVectors_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____motionVectors_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__motionVectors_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____motionVectors_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__receiveShadows_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiveShadows_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__receiveShadows_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiveShadows_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__receiveShadows_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____receiveShadows_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__reflectionProbes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionProbes_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__reflectionProbes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionProbes_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__reflectionProbes_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reflectionProbes_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__reflectionProbesBlendDistance_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionProbesBlendDistance_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__reflectionProbesBlendDistance_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionProbesBlendDistance_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__reflectionProbesBlendDistance_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reflectionProbesBlendDistance_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__rendererPriority_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rendererPriority_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__rendererPriority_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rendererPriority_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__rendererPriority_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rendererPriority_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__rendersUIOverlay_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rendersUIOverlay_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__rendersUIOverlay_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rendersUIOverlay_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__rendersUIOverlay_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rendersUIOverlay_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesEnvironmentLighting_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesEnvironmentLighting_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesEnvironmentLighting_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesEnvironmentLighting_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesEnvironmentLighting_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overridesEnvironmentLighting_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesFog_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesFog_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesFog_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesFog_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesFog_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overridesFog_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesRealtimeReflectionProbes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesRealtimeReflectionProbes_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesRealtimeReflectionProbes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesRealtimeReflectionProbes_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesRealtimeReflectionProbes_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overridesRealtimeReflectionProbes_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesOtherLightingSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesOtherLightingSettings_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesOtherLightingSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesOtherLightingSettings_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesOtherLightingSettings_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overridesOtherLightingSettings_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__editableMaterialRenderQueue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editableMaterialRenderQueue_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__editableMaterialRenderQueue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editableMaterialRenderQueue_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__editableMaterialRenderQueue_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editableMaterialRenderQueue_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesLODBias_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesLODBias_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesLODBias_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesLODBias_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesLODBias_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overridesLODBias_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesMaximumLODLevel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesMaximumLODLevel_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesMaximumLODLevel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesMaximumLODLevel_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesMaximumLODLevel_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overridesMaximumLODLevel_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__rendererProbes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rendererProbes_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__rendererProbes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rendererProbes_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__rendererProbes_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rendererProbes_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__particleSystemInstancing_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemInstancing_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__particleSystemInstancing_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemInstancing_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__particleSystemInstancing_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particleSystemInstancing_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__autoAmbientProbeBaking_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoAmbientProbeBaking_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__autoAmbientProbeBaking_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoAmbientProbeBaking_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__autoAmbientProbeBaking_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autoAmbientProbeBaking_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__autoDefaultReflectionProbeBaking_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoDefaultReflectionProbeBaking_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__autoDefaultReflectionProbeBaking_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoDefaultReflectionProbeBaking_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__autoDefaultReflectionProbeBaking_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autoDefaultReflectionProbeBaking_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesShadowmask_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesShadowmask_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesShadowmask_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overridesShadowmask_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesShadowmask_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overridesShadowmask_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overrideShadowmaskMessage_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideShadowmaskMessage_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overrideShadowmaskMessage_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideShadowmaskMessage_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overrideShadowmaskMessage_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overrideShadowmaskMessage_k__BackingField)),
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
                                                                             "get_active", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SupportedRenderingFeatures*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::set_active(::UnityEngine::Rendering::SupportedRenderingFeatures* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "set_active", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes UnityEngine::Rendering::SupportedRenderingFeatures::get_defaultMixedLightingModes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             "get_defaultMixedLightingModes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes UnityEngine::Rendering::SupportedRenderingFeatures::get_mixedLightingModes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             "get_mixedLightingModes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes, false>(this, ___internal_method);
}
inline ::UnityEngine::LightmapBakeType UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapBakeTypes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             "get_lightmapBakeTypes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LightmapBakeType, false>(this, ___internal_method);
}
inline ::UnityEngine::LightmapsMode UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapsModes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             "get_lightmapsModes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LightmapsMode, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_enlightenLightmapper() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             "get_enlightenLightmapper", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_enlighten() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             "get_enlighten", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_rendersUIOverlay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             "get_rendersUIOverlay", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_autoAmbientProbeBaking() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             "get_autoAmbientProbeBaking", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_autoDefaultReflectionProbeBaking() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             "get_autoDefaultReflectionProbeBaking", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::FallbackMixedLightingModeByRef(void* fallbackModePtr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "FallbackMixedLightingModeByRef",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fallbackModePtr);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupported(::UnityEngine::MixedLightingMode mixedMode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsMixedLightingModeSupported",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MixedLightingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mixedMode);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef(::UnityEngine::MixedLightingMode mixedMode, void* isSupportedPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsMixedLightingModeSupportedByRef", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MixedLightingMode>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mixedMode, isSupportedPtr);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupported(::UnityEngine::LightmapBakeType bakeType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsLightmapBakeTypeSupported",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightmapBakeType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bakeType);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef(::UnityEngine::LightmapBakeType bakeType, void* isSupportedPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsLightmapBakeTypeSupportedByRef", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightmapBakeType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bakeType, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapsModeSupportedByRef(::UnityEngine::LightmapsMode mode, void* isSupportedPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsLightmapsModeSupportedByRef", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightmapsMode>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mode, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapperSupportedByRef(int32_t lightmapper, void* isSupportedPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsLightmapperSupportedByRef", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lightmapper, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsUIOverlayRenderedBySRP(void* isSupportedPtr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsUIOverlayRenderedBySRP",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsAutoAmbientProbeBakingSupported(void* isSupportedPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsAutoAmbientProbeBakingSupported",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsAutoDefaultReflectionProbeBakingSupported(void* isSupportedPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "IsAutoDefaultReflectionProbeBakingSupported",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::FallbackLightmapperByRef(void* lightmapperPtr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(), "FallbackLightmapperByRef",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lightmapperPtr);
}
inline ::UnityEngine::Rendering::SupportedRenderingFeatures* UnityEngine::Rendering::SupportedRenderingFeatures::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Rendering::SupportedRenderingFeatures*>());
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures::SupportedRenderingFeatures() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
