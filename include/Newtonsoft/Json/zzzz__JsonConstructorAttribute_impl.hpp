#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonConstructorAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonConstructorAttribute_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonConstructorAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonConstructorAttribute::*)()>(&::Newtonsoft::Json::JsonConstructorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cd0f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConstructorAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonConstructorAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConstructorAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonConstructorAttribute* Newtonsoft::Json::JsonConstructorAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonConstructorAttribute*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonConstructorAttribute::JsonConstructorAttribute() {}
