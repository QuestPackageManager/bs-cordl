#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Bson\BsonEmpty.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonEmpty_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonEmpty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonEmpty::*)(::Newtonsoft::Json::Bson::BsonType)>(&::Newtonsoft::Json::Bson::BsonEmpty::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dae6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonEmpty*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonEmpty.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Bson::BsonType (::Newtonsoft::Json::Bson::BsonEmpty::*)()>(&::Newtonsoft::Json::Bson::BsonEmpty::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dae6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonEmpty*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonEmpty*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Bson::BsonType& Newtonsoft::Json::Bson::BsonEmpty::__cordl_internal_get__Type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr ::Newtonsoft::Json::Bson::BsonType const& Newtonsoft::Json::Bson::BsonEmpty::__cordl_internal_get__Type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr void Newtonsoft::Json::Bson::BsonEmpty::__cordl_internal_set__Type_k__BackingField(::Newtonsoft::Json::Bson::BsonType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Type_k__BackingField = value;
}
inline void Newtonsoft::Json::Bson::BsonEmpty::setStaticF_Null(::Newtonsoft::Json::Bson::BsonToken* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Bson::BsonToken*, "Null", ::Newtonsoft::Json::Bson::BsonEmpty*>(std::forward<::Newtonsoft::Json::Bson::BsonToken*>(value));
}
inline ::Newtonsoft::Json::Bson::BsonToken* Newtonsoft::Json::Bson::BsonEmpty::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Bson::BsonToken*, "Null", ::Newtonsoft::Json::Bson::BsonEmpty*>();
}
inline void Newtonsoft::Json::Bson::BsonEmpty::setStaticF_Undefined(::Newtonsoft::Json::Bson::BsonToken* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Bson::BsonToken*, "Undefined", ::Newtonsoft::Json::Bson::BsonEmpty*>(std::forward<::Newtonsoft::Json::Bson::BsonToken*>(value));
}
inline ::Newtonsoft::Json::Bson::BsonToken* Newtonsoft::Json::Bson::BsonEmpty::getStaticF_Undefined() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Bson::BsonToken*, "Undefined", ::Newtonsoft::Json::Bson::BsonEmpty*>();
}
inline void Newtonsoft::Json::Bson::BsonEmpty::_ctor(::Newtonsoft::Json::Bson::BsonType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonEmpty*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::Newtonsoft::Json::Bson::BsonType Newtonsoft::Json::Bson::BsonEmpty::get_Type() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonEmpty*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonType>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Bson::BsonEmpty* Newtonsoft::Json::Bson::BsonEmpty::New_ctor(::Newtonsoft::Json::Bson::BsonType type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Bson::BsonEmpty*>(type));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonEmpty::BsonEmpty() {}
