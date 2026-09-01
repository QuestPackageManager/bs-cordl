#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRReadOnlyAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__OVRReadOnlyAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRReadOnlyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRReadOnlyAttribute::*)()>(&::GlobalNamespace::OVRReadOnlyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0bf80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRReadOnlyAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRReadOnlyAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRReadOnlyAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRReadOnlyAttribute* GlobalNamespace::OVRReadOnlyAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRReadOnlyAttribute*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRReadOnlyAttribute::OVRReadOnlyAttribute() {}
