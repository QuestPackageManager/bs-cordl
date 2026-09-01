#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeTransformTarget.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CompositeTransformTarget_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CompositeTransformTarget._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeTransformTarget::*)()>(&::GlobalNamespace::CompositeTransformTarget::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59933a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeTransformTarget*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CompositeTransformTarget::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeTransformTarget*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CompositeTransformTarget* GlobalNamespace::CompositeTransformTarget::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CompositeTransformTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompositeTransformTarget::CompositeTransformTarget() {}
