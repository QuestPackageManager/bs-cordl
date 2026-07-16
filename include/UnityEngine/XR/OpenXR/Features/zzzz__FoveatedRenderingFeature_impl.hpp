#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/FoveatedRenderingFeature.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__FoveatedRenderingFeature_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature.OnInstanceCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature::OnInstanceCreate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x69f5b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature.HookGetInstanceProcAddr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature::*)(::System::IntPtr)>(
    &::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature::HookGetInstanceProcAddr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69f5cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature.Internal_Unity_intercept_xrGetInstanceProcAddr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(
    &::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature::Internal_Unity_intercept_xrGetInstanceProcAddr)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x69f5ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature*>(),
                                                                                           { "Internal_Unity_intercept_xrGetInstanceProcAddr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature.Internal_Unity_SetUseFoveatedRenderingLegacyMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature::Internal_Unity_SetUseFoveatedRenderingLegacyMode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x69f5c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature*>(),
                                                                                           { "Internal_Unity_SetUseFoveatedRenderingLegacyMode", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature.Internal_Unity_GetUseFoveatedRenderingLegacyMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature::Internal_Unity_GetUseFoveatedRenderingLegacyMode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x69f5d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature*>(), { "Internal_Unity_GetUseFoveatedRenderingLegacyMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69f5db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature::OnInstanceCreate(uint64_t instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance);
}
inline ::System::IntPtr UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature::HookGetInstanceProcAddr(::System::IntPtr func) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, func);
}
inline ::System::IntPtr UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature::Internal_Unity_intercept_xrGetInstanceProcAddr(::System::IntPtr func) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature*>(),
                                                                                         { "Internal_Unity_intercept_xrGetInstanceProcAddr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, func);
}
inline void UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature::Internal_Unity_SetUseFoveatedRenderingLegacyMode(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature*>(),
                                                                                         { "Internal_Unity_SetUseFoveatedRenderingLegacyMode", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature::Internal_Unity_GetUseFoveatedRenderingLegacyMode() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature*>(), { "Internal_Unity_GetUseFoveatedRenderingLegacyMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature* UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature::FoveatedRenderingFeature() {}
