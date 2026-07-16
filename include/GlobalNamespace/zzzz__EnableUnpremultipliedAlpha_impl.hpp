#pragma once
// IWYU pragma private; include "GlobalNamespace/EnableUnpremultipliedAlpha.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnableUnpremultipliedAlpha_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnableUnpremultipliedAlpha.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnableUnpremultipliedAlpha::*)()>(&::GlobalNamespace::EnableUnpremultipliedAlpha::Start)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a2f6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableUnpremultipliedAlpha*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableUnpremultipliedAlpha._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnableUnpremultipliedAlpha::*)()>(&::GlobalNamespace::EnableUnpremultipliedAlpha::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a2f710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableUnpremultipliedAlpha*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EnableUnpremultipliedAlpha::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableUnpremultipliedAlpha*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnableUnpremultipliedAlpha::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableUnpremultipliedAlpha*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnableUnpremultipliedAlpha* GlobalNamespace::EnableUnpremultipliedAlpha::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnableUnpremultipliedAlpha*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnableUnpremultipliedAlpha::EnableUnpremultipliedAlpha() {}
