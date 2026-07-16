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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::*)()>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::get_softShadow)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x687b8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>(), { "get_softShadow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest.set_softShadow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::*)(bool)>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::set_softShadow)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x687b830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>(), { "set_softShadow", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest.get_pointLightShadow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::*)()>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::get_pointLightShadow)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x687b8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>(), { "get_pointLightShadow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest.set_pointLightShadow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::*)(bool)>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::set_pointLightShadow)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x687b840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>(),
                                                             { "set_pointLightShadow", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::get_softShadow() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>(), { "get_softShadow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::set_softShadow(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>(), { "set_softShadow", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::get_pointLightShadow() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>(), { "get_pointLightShadow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest::set_pointLightShadow(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>(),
                                                           { "set_pointLightShadow", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::*)()>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x687ba18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c._CreateCompareShadowResolutionRequesPredicate_b__24_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::*)(
    ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest)>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::_CreateCompareShadowResolutionRequesPredicate_b__24_0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x687ba1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*>(),
                                                             { "<CreateCompareShadowResolutionRequesPredicate>b__24_0",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::setStaticF___9(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*, "<>9", ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*>(
      std::forward<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c* UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*, "<>9",
                                           ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*>();
}
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::setStaticF___9__24_0(
    ::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                     ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                                     ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*,
                                    "<>9__24_0", ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*>(
      std::forward<::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                    ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*>(value));
}
inline ::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                        ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*
UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::getStaticF___9__24_0() {
  return ::cordl_internals::getStaticField<::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                                            ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*,
                                           "<>9__24_0", ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*>();
}
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::_CreateCompareShadowResolutionRequesPredicate_b__24_0(
    ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest curr,
    ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*>(),
                                                           { "<CreateCompareShadowResolutionRequesPredicate>b__24_0",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, curr, other);
}
inline ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c* UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c::AdditionalLightsShadowAtlasLayout___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::*)(
    ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::_ctor)> {
  constexpr static std::size_t size = 0xe4c;
  constexpr static std::size_t addrs = 0x687a910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.GetTotalShadowSlicesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::*)()>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetTotalShadowSlicesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687b8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(), { "GetTotalShadowSlicesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.GetTotalShadowResolutionRequestCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::*)()>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetTotalShadowResolutionRequestCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687b8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(), { "GetTotalShadowResolutionRequestCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.HasTooManyShadowMaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::*)()>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::HasTooManyShadowMaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687b8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(), { "HasTooManyShadowMaps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.GetShadowSlicesScaleFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::*)()>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetShadowSlicesScaleFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687b8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(), { "GetShadowSlicesScaleFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.GetAtlasSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::*)()>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetAtlasSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687b8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(), { "GetAtlasSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.HasSpaceForLight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::HasSpaceForLight)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x687b900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(), { "HasSpaceForLight", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.GetSortedShadowResolutionRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest (
    ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::*)(int32_t)>(&::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetSortedShadowResolutionRequest)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x687b914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(),
                                                                                           { "GetSortedShadowResolutionRequest", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.GetSliceShadowResolutionRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest (
    ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetSliceShadowResolutionRequest)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x687b938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(),
                                                                                           { "GetSliceShadowResolutionRequest", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.ClearStaticCaches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::ClearStaticCaches)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x687b964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(), { "ClearStaticCaches", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.EstimateScaleFactorNeededToFitAllShadowsInAtlas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<int32_t (*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>>, int32_t, int32_t)>(
        &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::EstimateScaleFactorNeededToFitAllShadowsInAtlas)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x687b860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(),
                            { "EstimateScaleFactorNeededToFitAllShadowsInAtlas",
                              {},
                              { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>>>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout.CreateCompareShadowResolutionRequesPredicate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                                                        ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>* (*)()>(
    &::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::CreateCompareShadowResolutionRequesPredicate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x687b75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(), { "CreateCompareShadowResolutionRequesPredicate", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::setStaticF_s_UnusedAtlasSquareAreas(::System::Collections::Generic::List_1<::UnityEngine::RectInt>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::RectInt>*, "s_UnusedAtlasSquareAreas",
                                    ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::RectInt>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::RectInt>* UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::getStaticF_s_UnusedAtlasSquareAreas() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::RectInt>*, "s_UnusedAtlasSquareAreas",
                                           ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>();
}
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::setStaticF_s_ShadowResolutionRequests(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>*,
                                    "s_ShadowResolutionRequests", ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>*
UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::getStaticF_s_ShadowResolutionRequests() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>*,
                                           "s_ShadowResolutionRequests", ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>();
}
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::setStaticF_s_VisibleLightIndexToCameraSquareDistance(::ArrayW<float_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<float_t>, "s_VisibleLightIndexToCameraSquareDistance", ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(
      std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::getStaticF_s_VisibleLightIndexToCameraSquareDistance() {
  return ::cordl_internals::getStaticField<::ArrayW<float_t>, "s_VisibleLightIndexToCameraSquareDistance", ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>();
}
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::setStaticF_s_CompareShadowResolutionRequest(
    ::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                     ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                                     ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*,
                                    "s_CompareShadowResolutionRequest", ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(
      std::forward<::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                    ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*>(value));
}
inline ::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                        ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*
UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::getStaticF_s_CompareShadowResolutionRequest() {
  return ::cordl_internals::getStaticField<::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                                            ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*,
                                           "s_CompareShadowResolutionRequest", ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>();
}
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::setStaticF_s_SortedShadowResolutionRequests(
    ::ArrayW<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>, "s_SortedShadowResolutionRequests",
                                    ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(
      std::forward<::ArrayW<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>
UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::getStaticF_s_SortedShadowResolutionRequests() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>, "s_SortedShadowResolutionRequests",
                                           ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>();
}
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::_ctor(::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                        ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData,
                                                                                        ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lightData, shadowData, cameraData);
}
inline int32_t UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetTotalShadowSlicesCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(), { "GetTotalShadowSlicesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetTotalShadowResolutionRequestCount() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(), { "GetTotalShadowResolutionRequestCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::HasTooManyShadowMaps() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(), { "HasTooManyShadowMaps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetShadowSlicesScaleFactor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(), { "GetShadowSlicesScaleFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetAtlasSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(), { "GetAtlasSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::HasSpaceForLight(int32_t originalVisibleLightIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(), { "HasSpaceForLight", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, originalVisibleLightIndex);
}
inline ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest
UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetSortedShadowResolutionRequest(int32_t sortedShadowResolutionRequestIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(),
                                                                                         { "GetSortedShadowResolutionRequest", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>(*this, ___internal_method,
                                                                                                                                             sortedShadowResolutionRequestIndex);
}
inline ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest
UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::GetSliceShadowResolutionRequest(int32_t originalVisibleLightIndex, int32_t sliceIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(),
                                                                                         { "GetSliceShadowResolutionRequest", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>(*this, ___internal_method, originalVisibleLightIndex,
                                                                                                                                             sliceIndex);
}
inline void UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::ClearStaticCaches() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(), { "ClearStaticCaches", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::EstimateScaleFactorNeededToFitAllShadowsInAtlas(
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>> shadowResolutionRequests, int32_t endIndex,
    int32_t atlasSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(),
                          { "EstimateScaleFactorNeededToFitAllShadowsInAtlas",
                            {},
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>>>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, shadowResolutionRequests, endIndex, atlasSize);
}
inline ::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                        ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*
UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout::CreateCompareShadowResolutionRequesPredicate() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(), { "CreateCompareShadowResolutionRequesPredicate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                                              ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*>(nullptr, ___internal_method);
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
