#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeColorFloatFxFilter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CompositeColorFloatFxFilter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CompositeColorFloatFxFilter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeColorFloatFxFilter::*)()>(&::GlobalNamespace::CompositeColorFloatFxFilter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598daf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeColorFloatFxFilter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CompositeColorFloatFxFilter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeColorFloatFxFilter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CompositeColorFloatFxFilter* GlobalNamespace::CompositeColorFloatFxFilter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CompositeColorFloatFxFilter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompositeColorFloatFxFilter::CompositeColorFloatFxFilter() {}
