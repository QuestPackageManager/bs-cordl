#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\OnErrorAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__OnErrorAttribute_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::OnErrorAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::OnErrorAttribute::*)()>(&::Newtonsoft::Json::Serialization::OnErrorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d59fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::OnErrorAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Serialization::OnErrorAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::OnErrorAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::OnErrorAttribute* Newtonsoft::Json::Serialization::OnErrorAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::OnErrorAttribute*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::OnErrorAttribute::OnErrorAttribute() {}
