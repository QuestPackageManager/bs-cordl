#pragma once
// IWYU pragma private; include "Meta\XR\MetaXREyeTrackedFoveationFeature.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "Meta/XR/zzzz__MetaXREyeTrackedFoveationFeature_def.hpp"
//  Writing Method size for method: ::Meta::XR::MetaXREyeTrackedFoveationFeature.OnSessionCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MetaXREyeTrackedFoveationFeature::*)(uint64_t)>(&::Meta::XR::MetaXREyeTrackedFoveationFeature::OnSessionCreate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e4f544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXREyeTrackedFoveationFeature*>(), { ::i2c::class_of<::Meta::XR::MetaXREyeTrackedFoveationFeature*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXREyeTrackedFoveationFeature.get_eyeTrackedFoveatedRenderingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Meta::XR::MetaXREyeTrackedFoveationFeature::get_eyeTrackedFoveatedRenderingEnabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e4f594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXREyeTrackedFoveationFeature*>(), { "get_eyeTrackedFoveatedRenderingEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXREyeTrackedFoveationFeature.set_eyeTrackedFoveatedRenderingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Meta::XR::MetaXREyeTrackedFoveationFeature::set_eyeTrackedFoveatedRenderingEnabled)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e4f640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXREyeTrackedFoveationFeature*>(), { "set_eyeTrackedFoveatedRenderingEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXREyeTrackedFoveationFeature.get_eyeTrackedFoveatedRenderingSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Meta::XR::MetaXREyeTrackedFoveationFeature::get_eyeTrackedFoveatedRenderingSupported)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e4f718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXREyeTrackedFoveationFeature*>(), { "get_eyeTrackedFoveatedRenderingSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXREyeTrackedFoveationFeature.MetaSetFoveationEyeTracked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, bool)>(&::Meta::XR::MetaXREyeTrackedFoveationFeature::MetaSetFoveationEyeTracked)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e4f694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXREyeTrackedFoveationFeature*>(),
                                                                                           { "MetaSetFoveationEyeTracked", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXREyeTrackedFoveationFeature.MetaGetFoveationEyeTracked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<bool>)>(&::Meta::XR::MetaXREyeTrackedFoveationFeature::MetaGetFoveationEyeTracked)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e4f5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXREyeTrackedFoveationFeature*>(), { "MetaGetFoveationEyeTracked", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXREyeTrackedFoveationFeature.MetaGetEyeTrackedFoveationSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<bool>)>(&::Meta::XR::MetaXREyeTrackedFoveationFeature::MetaGetEyeTrackedFoveationSupported)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e4f734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXREyeTrackedFoveationFeature*>(), { "MetaGetEyeTrackedFoveationSupported", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXREyeTrackedFoveationFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MetaXREyeTrackedFoveationFeature::*)()>(&::Meta::XR::MetaXREyeTrackedFoveationFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4f7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXREyeTrackedFoveationFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Meta::XR::MetaXREyeTrackedFoveationFeature::setStaticF__xrSession(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "_xrSession", ::Meta::XR::MetaXREyeTrackedFoveationFeature*>(std::forward<uint64_t>(value));
}
inline uint64_t Meta::XR::MetaXREyeTrackedFoveationFeature::getStaticF__xrSession() {
  return ::cordl_internals::getStaticField<uint64_t, "_xrSession", ::Meta::XR::MetaXREyeTrackedFoveationFeature*>();
}
inline void Meta::XR::MetaXREyeTrackedFoveationFeature::OnSessionCreate(uint64_t xrSession) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MetaXREyeTrackedFoveationFeature*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSession);
}
inline bool Meta::XR::MetaXREyeTrackedFoveationFeature::get_eyeTrackedFoveatedRenderingEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXREyeTrackedFoveationFeature*>(), { "get_eyeTrackedFoveatedRenderingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Meta::XR::MetaXREyeTrackedFoveationFeature::set_eyeTrackedFoveatedRenderingEnabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXREyeTrackedFoveationFeature*>(), { "set_eyeTrackedFoveatedRenderingEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Meta::XR::MetaXREyeTrackedFoveationFeature::get_eyeTrackedFoveatedRenderingSupported() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXREyeTrackedFoveationFeature*>(), { "get_eyeTrackedFoveatedRenderingSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Meta::XR::MetaXREyeTrackedFoveationFeature::MetaSetFoveationEyeTracked(uint64_t session, bool isEyeTracked) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXREyeTrackedFoveationFeature*>(),
                                                                                         { "MetaSetFoveationEyeTracked", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, session, isEyeTracked);
}
inline void Meta::XR::MetaXREyeTrackedFoveationFeature::MetaGetFoveationEyeTracked(::by_ref<bool> isEyeTracked) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXREyeTrackedFoveationFeature*>(), { "MetaGetFoveationEyeTracked", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, isEyeTracked);
}
inline void Meta::XR::MetaXREyeTrackedFoveationFeature::MetaGetEyeTrackedFoveationSupported(::by_ref<bool> supported) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXREyeTrackedFoveationFeature*>(), { "MetaGetEyeTrackedFoveationSupported", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, supported);
}
inline void Meta::XR::MetaXREyeTrackedFoveationFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXREyeTrackedFoveationFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MetaXREyeTrackedFoveationFeature* Meta::XR::MetaXREyeTrackedFoveationFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MetaXREyeTrackedFoveationFeature*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MetaXREyeTrackedFoveationFeature::MetaXREyeTrackedFoveationFeature() {}
