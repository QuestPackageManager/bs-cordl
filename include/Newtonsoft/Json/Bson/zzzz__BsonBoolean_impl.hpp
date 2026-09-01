#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Bson\BsonBoolean.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonValue_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonBoolean_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBoolean._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonBoolean::*)(bool)>(&::Newtonsoft::Json::Bson::BsonBoolean::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5dae77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBoolean*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Bson::BsonBoolean::setStaticF_False(::Newtonsoft::Json::Bson::BsonBoolean* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Bson::BsonBoolean*, "False", ::Newtonsoft::Json::Bson::BsonBoolean*>(std::forward<::Newtonsoft::Json::Bson::BsonBoolean*>(value));
}
inline ::Newtonsoft::Json::Bson::BsonBoolean* Newtonsoft::Json::Bson::BsonBoolean::getStaticF_False() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Bson::BsonBoolean*, "False", ::Newtonsoft::Json::Bson::BsonBoolean*>();
}
inline void Newtonsoft::Json::Bson::BsonBoolean::setStaticF_True(::Newtonsoft::Json::Bson::BsonBoolean* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Bson::BsonBoolean*, "True", ::Newtonsoft::Json::Bson::BsonBoolean*>(std::forward<::Newtonsoft::Json::Bson::BsonBoolean*>(value));
}
inline ::Newtonsoft::Json::Bson::BsonBoolean* Newtonsoft::Json::Bson::BsonBoolean::getStaticF_True() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Bson::BsonBoolean*, "True", ::Newtonsoft::Json::Bson::BsonBoolean*>();
}
inline void Newtonsoft::Json::Bson::BsonBoolean::_ctor(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBoolean*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Bson::BsonBoolean* Newtonsoft::Json::Bson::BsonBoolean::New_ctor(bool value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Bson::BsonBoolean*>(value));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonBoolean::BsonBoolean() {}
