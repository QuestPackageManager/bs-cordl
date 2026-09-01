#pragma once
// IWYU pragma private; include "Unity\Properties\DontCreatePropertyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Properties/zzzz__DontCreatePropertyAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Properties::DontCreatePropertyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::DontCreatePropertyAttribute::*)()>(&::Unity::Properties::DontCreatePropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b9e4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::DontCreatePropertyAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Properties::DontCreatePropertyAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::DontCreatePropertyAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::DontCreatePropertyAttribute* Unity::Properties::DontCreatePropertyAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::DontCreatePropertyAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::DontCreatePropertyAttribute::DontCreatePropertyAttribute() {}
