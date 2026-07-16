#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonRequiredAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonRequiredAttribute_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonRequiredAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonRequiredAttribute::*)()>(&::Newtonsoft::Json::JsonRequiredAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cdc5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonRequiredAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonRequiredAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonRequiredAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonRequiredAttribute* Newtonsoft::Json::JsonRequiredAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonRequiredAttribute*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonRequiredAttribute::JsonRequiredAttribute() {}
