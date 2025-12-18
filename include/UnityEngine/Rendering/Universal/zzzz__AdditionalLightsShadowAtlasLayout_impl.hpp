#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/AdditionalLightsShadowAtlasLayout.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AdditionalLightsShadowAtlasLayout_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AdditionalLightsShadowAtlasLayout_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalShadowData_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions(
    uint16_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions() {}
constexpr ::UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions
    UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions::None{ static_cast<uint16_t>(0x0u) };
constexpr ::UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions
    UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions::SoftShadow{ static_cast<uint16_t>(0x1u) };
constexpr ::UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions
    UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions::PointLightShadow{ static_cast<uint16_t>(0x2u) };
constexpr ::UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions
    UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions::All{ static_cast<uint16_t>(0xffffu) };
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest.get_softShadow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::*)()>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::get_softShadow)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66c8d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>::get(),
                                    "get_softShadow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest.set_softShadow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::*)(bool)>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::set_softShadow)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66c8c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>::get(), "set_softShadow",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest.get_pointLightShadow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::*)()>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::get_pointLightShadow)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66c8d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>::get(),
                                    "get_pointLightShadow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest.set_pointLightShadow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::*)(bool)>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::set_pointLightShadow)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66c8c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>::get(), "set_pointLightShadow",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::get_softShadow() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>::get(),
                                  "get_softShadow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::set_softShadow(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>::get(), "set_softShadow",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::get_pointLightShadow() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>::get(),
                                  "get_pointLightShadow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::set_pointLightShadow(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>::get(), "set_pointLightShadow",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "visibleLightIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "perLightShadowSliceIndex", ty: "uint16_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "requestedResolution", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "offsetX", ty: "uint16_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "offsetY", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "allocatedResolution", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_ShadowProperties", ty: "::UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest(
    uint16_t visibleLightIndex, uint16_t perLightShadowSliceIndex, uint16_t requestedResolution, uint16_t offsetX, uint16_t offsetY, uint16_t allocatedResolution,
    ::UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions m_ShadowProperties) noexcept {
  this->visibleLightIndex = visibleLightIndex;
  this->perLightShadowSliceIndex = perLightShadowSliceIndex;
  this->requestedResolution = requestedResolution;
  this->offsetX = offsetX;
  this->offsetY = offsetY;
  this->allocatedResolution = allocatedResolution;
  this->m_ShadowProperties = m_ShadowProperties;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::*)()>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66c8e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c._CreateCompareShadowResolutionRequesPredicate_b__24_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::*)(
    ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest)>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::_CreateCompareShadowResolutionRequesPredicate_b__24_0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x66c8e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*>::get(),
        "<CreateCompareShadowResolutionRequesPredicate>b__24_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::setStaticF___9(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c* UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::setStaticF___9__24_0(
    ::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                     ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                                     ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*,
                                    "<>9__24_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*>::get>(
      std::forward<::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                    ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*>(value));
}
inline ::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                        ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*
UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::getStaticF___9__24_0() {
  return ::cordl_internals::getStaticField<::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                                            ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*,
                                           "<>9__24_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::_CreateCompareShadowResolutionRequesPredicate_b__24_0(
    ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest curr,
    ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*>::get(),
                                  "<CreateCompareShadowResolutionRequesPredicate>b__24_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, curr, other);
}
inline ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c* UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::AdditionalLightsShadowAtlasLayout___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::*)(
    ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::_ctor)> {
  constexpr static std::size_t size = 0xe4c;
  constexpr static std::size_t addrs = 0x66c7d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.GetTotalShadowSlicesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::*)()>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetTotalShadowSlicesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c8d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(),
                                                 "GetTotalShadowSlicesCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.GetTotalShadowResolutionRequestCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::*)()>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetTotalShadowResolutionRequestCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c8d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(),
                                                 "GetTotalShadowResolutionRequestCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.HasTooManyShadowMaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::*)()>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::HasTooManyShadowMaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c8d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(),
                                                 "HasTooManyShadowMaps", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.GetShadowSlicesScaleFactor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::*)()>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetShadowSlicesScaleFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c8d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(),
                                                 "GetShadowSlicesScaleFactor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.GetAtlasSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::*)()>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetAtlasSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c8d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(), "GetAtlasSize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.HasSpaceForLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::HasSpaceForLight)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66c8d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(), "HasSpaceForLight",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.GetSortedShadowResolutionRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest (
    ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::*)(int32_t)>(&::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetSortedShadowResolutionRequest)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x66c8d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(), "GetSortedShadowResolutionRequest",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.GetSliceShadowResolutionRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest (
    ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetSliceShadowResolutionRequest)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x66c8d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(), "GetSliceShadowResolutionRequest",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.ClearStaticCaches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::ClearStaticCaches)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c8da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(),
                                                 "ClearStaticCaches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.EstimateScaleFactorNeededToFitAllShadowsInAtlas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>>, int32_t, int32_t)>(
        &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::EstimateScaleFactorNeededToFitAllShadowsInAtlas)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c8ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(), "EstimateScaleFactorNeededToFitAllShadowsInAtlas",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.CreateCompareShadowResolutionRequesPredicate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                 ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>* (*)()>(
        &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::CreateCompareShadowResolutionRequesPredicate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x66c8b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(),
                                                 "CreateCompareShadowResolutionRequesPredicate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::setStaticF_s_UnusedAtlasSquareAreas(::System::Collections::Generic::List_1<::UnityEngine::RectInt>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::RectInt>*, "s_UnusedAtlasSquareAreas",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::RectInt>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::RectInt>* UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::getStaticF_s_UnusedAtlasSquareAreas() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::RectInt>*, "s_UnusedAtlasSquareAreas",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get>();
}
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::setStaticF_s_ShadowResolutionRequests(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>*,
                                    "s_ShadowResolutionRequests", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>*
UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::getStaticF_s_ShadowResolutionRequests() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>*,
                                           "s_ShadowResolutionRequests",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get>();
}
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::setStaticF_s_VisibleLightIndexToCameraSquareDistance(::ArrayW<float_t, ::Array<float_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<float_t, ::Array<float_t>*>, "s_VisibleLightIndexToCameraSquareDistance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get>(
      std::forward<::ArrayW<float_t, ::Array<float_t>*>>(value));
}
inline ::ArrayW<float_t, ::Array<float_t>*> UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::getStaticF_s_VisibleLightIndexToCameraSquareDistance() {
  return ::cordl_internals::getStaticField<::ArrayW<float_t, ::Array<float_t>*>, "s_VisibleLightIndexToCameraSquareDistance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get>();
}
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::setStaticF_s_CompareShadowResolutionRequest(
    ::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                     ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                                     ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*,
                                    "s_CompareShadowResolutionRequest",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get>(
      std::forward<::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                    ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*>(value));
}
inline ::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                        ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*
UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::getStaticF_s_CompareShadowResolutionRequest() {
  return ::cordl_internals::getStaticField<::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                                            ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*,
                                           "s_CompareShadowResolutionRequest",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get>();
}
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::setStaticF_s_SortedShadowResolutionRequests(
    ::ArrayW<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
             ::Array<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>*>
        value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                             ::Array<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>*>,
                                    "s_SortedShadowResolutionRequests",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get>(
      std::forward<::ArrayW<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                            ::Array<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>*>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                ::Array<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>*>
UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::getStaticF_s_SortedShadowResolutionRequests() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                                    ::Array<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>*>,
                                           "s_SortedShadowResolutionRequests",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get>();
}
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::_ctor(::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                        ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData,
                                                                                        ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightData, shadowData, cameraData);
}
inline int32_t UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetTotalShadowSlicesCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(),
                                               "GetTotalShadowSlicesCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetTotalShadowResolutionRequestCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(),
                                               "GetTotalShadowResolutionRequestCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::HasTooManyShadowMaps() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(),
                                               "HasTooManyShadowMaps", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetShadowSlicesScaleFactor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(),
                                               "GetShadowSlicesScaleFactor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetAtlasSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(), "GetAtlasSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::HasSpaceForLight(int32_t originalVisibleLightIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(), "HasSpaceForLight",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, originalVisibleLightIndex);
}
inline ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest
UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetSortedShadowResolutionRequest(int32_t sortedShadowResolutionRequestIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(), "GetSortedShadowResolutionRequest",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, false>(this, ___internal_method,
                                                                                                                                                    sortedShadowResolutionRequestIndex);
}
inline ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest
UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetSliceShadowResolutionRequest(int32_t originalVisibleLightIndex, int32_t sliceIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(), "GetSliceShadowResolutionRequest",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, false>(this, ___internal_method, originalVisibleLightIndex,
                                                                                                                                                    sliceIndex);
}
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::ClearStaticCaches() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(),
                                               "ClearStaticCaches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::EstimateScaleFactorNeededToFitAllShadowsInAtlas(
    ::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>> shadowResolutionRequests, int32_t endIndex,
    int32_t atlasSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(), "EstimateScaleFactorNeededToFitAllShadowsInAtlas",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, shadowResolutionRequests, endIndex, atlasSize);
}
inline ::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                        ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*
UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::CreateCompareShadowResolutionRequesPredicate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>::get(),
                                               "CreateCompareShadowResolutionRequesPredicate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                                              ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*,
                                             false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_SortedShadowResolutionRequests", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_TotalShadowSlicesCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TotalShadowResolutionRequestCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_TooManyShadowMaps", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ShadowSlicesScaleFactor", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_AtlasSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::AdditionalLightsShadowAtlasLayout(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest> m_SortedShadowResolutionRequests,
    ::Unity::Collections::NativeArray_1<int32_t> m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex, int32_t m_TotalShadowSlicesCount, int32_t m_TotalShadowResolutionRequestCount,
    bool m_TooManyShadowMaps, int32_t m_ShadowSlicesScaleFactor, int32_t m_AtlasSize) noexcept {
  this->m_SortedShadowResolutionRequests = m_SortedShadowResolutionRequests;
  this->m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex = m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex;
  this->m_TotalShadowSlicesCount = m_TotalShadowSlicesCount;
  this->m_TotalShadowResolutionRequestCount = m_TotalShadowResolutionRequestCount;
  this->m_TooManyShadowMaps = m_TooManyShadowMaps;
  this->m_ShadowSlicesScaleFactor = m_ShadowSlicesScaleFactor;
  this->m_AtlasSize = m_AtlasSize;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::AdditionalLightsShadowAtlasLayout() {}
