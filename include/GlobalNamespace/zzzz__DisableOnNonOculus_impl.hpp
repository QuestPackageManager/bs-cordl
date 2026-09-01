#pragma once
// IWYU pragma private; include "GlobalNamespace\DisableOnNonOculus.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisableOnNonOculus_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisableOnNonOculus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableOnNonOculus::*)()>(&::GlobalNamespace::DisableOnNonOculus::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5851df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableOnNonOculus*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DisableOnNonOculus::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableOnNonOculus*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DisableOnNonOculus* GlobalNamespace::DisableOnNonOculus::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DisableOnNonOculus*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisableOnNonOculus::DisableOnNonOculus() {}
