#pragma once
// IWYU pragma private; include "GlobalNamespace\OVROnCompleteListener.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "GlobalNamespace/zzzz__OVROnCompleteListener_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVROnCompleteListener._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROnCompleteListener::*)()>(&::GlobalNamespace::OVROnCompleteListener::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e73974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROnCompleteListener*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROnCompleteListener.onSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROnCompleteListener::*)()>(&::GlobalNamespace::OVROnCompleteListener::onSuccess)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROnCompleteListener*>(), { ::i2c::class_of<::GlobalNamespace::OVROnCompleteListener*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROnCompleteListener.onFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROnCompleteListener::*)()>(&::GlobalNamespace::OVROnCompleteListener::onFailure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROnCompleteListener*>(), { ::i2c::class_of<::GlobalNamespace::OVROnCompleteListener*>(), 11 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVROnCompleteListener::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROnCompleteListener*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVROnCompleteListener::onSuccess() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVROnCompleteListener*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVROnCompleteListener::onFailure() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVROnCompleteListener*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVROnCompleteListener* GlobalNamespace::OVROnCompleteListener::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVROnCompleteListener*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROnCompleteListener::OVROnCompleteListener() {}
