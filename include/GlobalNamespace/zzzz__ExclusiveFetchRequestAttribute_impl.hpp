#pragma once
// IWYU pragma private; include "GlobalNamespace\ExclusiveFetchRequestAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__ExclusiveFetchRequestAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ExclusiveFetchRequestAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExclusiveFetchRequestAttribute::*)()>(&::GlobalNamespace::ExclusiveFetchRequestAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f2c198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExclusiveFetchRequestAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ExclusiveFetchRequestAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExclusiveFetchRequestAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ExclusiveFetchRequestAttribute* GlobalNamespace::ExclusiveFetchRequestAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ExclusiveFetchRequestAttribute*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExclusiveFetchRequestAttribute::ExclusiveFetchRequestAttribute() {}
