#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/ReflectedPropertyBagAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Properties/Internal/zzzz__ReflectedPropertyBagAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Properties::Internal::ReflectedPropertyBagAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::ReflectedPropertyBagAttribute::*)()>(
    &::Unity::Properties::Internal::ReflectedPropertyBagAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb1a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ReflectedPropertyBagAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Properties::Internal::ReflectedPropertyBagAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ReflectedPropertyBagAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::ReflectedPropertyBagAttribute* Unity::Properties::Internal::ReflectedPropertyBagAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::ReflectedPropertyBagAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::ReflectedPropertyBagAttribute::ReflectedPropertyBagAttribute() {}
