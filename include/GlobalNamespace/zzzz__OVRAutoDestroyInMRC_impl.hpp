#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRAutoDestroyInMRC.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAutoDestroyInMRC_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRAutoDestroyInMRC.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAutoDestroyInMRC::*)()>(&::GlobalNamespace::OVRAutoDestroyInMRC::Start)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5ef1990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAutoDestroyInMRC*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAutoDestroyInMRC._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAutoDestroyInMRC::*)()>(&::GlobalNamespace::OVRAutoDestroyInMRC::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ef1aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAutoDestroyInMRC*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRAutoDestroyInMRC::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAutoDestroyInMRC*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAutoDestroyInMRC::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAutoDestroyInMRC*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRAutoDestroyInMRC* GlobalNamespace::OVRAutoDestroyInMRC::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRAutoDestroyInMRC*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAutoDestroyInMRC::OVRAutoDestroyInMRC() {}
