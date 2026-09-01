#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Bson\BsonValue.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonValue_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonValue::*)(::System::Object*, ::Newtonsoft::Json::Bson::BsonType)>(
    &::Newtonsoft::Json::Bson::BsonValue::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5dae760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonValue*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Bson::BsonType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonValue.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Bson::BsonValue::*)()>(&::Newtonsoft::Json::Bson::BsonValue::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dae76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonValue*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonValue.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Bson::BsonType (::Newtonsoft::Json::Bson::BsonValue::*)()>(&::Newtonsoft::Json::Bson::BsonValue::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dae774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonValue*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonValue*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Newtonsoft::Json::Bson::BsonValue::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr ::System::Object* const& Newtonsoft::Json::Bson::BsonValue::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void Newtonsoft::Json::Bson::BsonValue::__cordl_internal_set__value(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
constexpr ::Newtonsoft::Json::Bson::BsonType& Newtonsoft::Json::Bson::BsonValue::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::Newtonsoft::Json::Bson::BsonType const& Newtonsoft::Json::Bson::BsonValue::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void Newtonsoft::Json::Bson::BsonValue::__cordl_internal_set__type(::Newtonsoft::Json::Bson::BsonType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
inline void Newtonsoft::Json::Bson::BsonValue::_ctor(::System::Object* value, ::Newtonsoft::Json::Bson::BsonType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonValue*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Bson::BsonType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, type);
}
inline ::System::Object* Newtonsoft::Json::Bson::BsonValue::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonValue*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Bson::BsonType Newtonsoft::Json::Bson::BsonValue::get_Type() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonValue*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonType>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Bson::BsonValue* Newtonsoft::Json::Bson::BsonValue::New_ctor(::System::Object* value, ::Newtonsoft::Json::Bson::BsonType type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Bson::BsonValue*>(value, type));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonValue::BsonValue() {}
