#pragma once
// IWYU pragma private; include "GlobalNamespace/IJumpOffsetYProvider.hpp"
#include "GlobalNamespace/zzzz__IJumpOffsetYProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IJumpOffsetYProvider.get_jumpOffsetY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IJumpOffsetYProvider::*)()>(&::GlobalNamespace::IJumpOffsetYProvider::get_jumpOffsetY)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IJumpOffsetYProvider*>(), { ::i2c::class_of<::GlobalNamespace::IJumpOffsetYProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::IJumpOffsetYProvider::get_jumpOffsetY() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IJumpOffsetYProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
