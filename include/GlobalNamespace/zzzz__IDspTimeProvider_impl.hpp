#pragma once
// IWYU pragma private; include "GlobalNamespace/IDspTimeProvider.hpp"
#include "GlobalNamespace/zzzz__IDspTimeProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IDspTimeProvider.get_dspTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::IDspTimeProvider::*)()>(&::GlobalNamespace::IDspTimeProvider::get_dspTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IDspTimeProvider*>(), { ::i2c::class_of<::GlobalNamespace::IDspTimeProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline double_t GlobalNamespace::IDspTimeProvider::get_dspTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IDspTimeProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
