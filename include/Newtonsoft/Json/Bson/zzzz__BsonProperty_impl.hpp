#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Bson\BsonProperty.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonProperty_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonString_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Bson::BsonString* (::Newtonsoft::Json::Bson::BsonProperty::*)()>(&::Newtonsoft::Json::Bson::BsonProperty::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dae958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonProperty*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonProperty.set_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonProperty::*)(::Newtonsoft::Json::Bson::BsonString*)>(&::Newtonsoft::Json::Bson::BsonProperty::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dae960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonProperty*>(), { "set_Name", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonProperty.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Bson::BsonToken* (::Newtonsoft::Json::Bson::BsonProperty::*)()>(&::Newtonsoft::Json::Bson::BsonProperty::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dae968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonProperty*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonProperty.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonProperty::*)(::Newtonsoft::Json::Bson::BsonToken*)>(&::Newtonsoft::Json::Bson::BsonProperty::set_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dae970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonProperty*>(), { "set_Value", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonProperty::*)()>(&::Newtonsoft::Json::Bson::BsonProperty::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dae508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Bson::BsonString*& Newtonsoft::Json::Bson::BsonProperty::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::Newtonsoft::Json::Bson::BsonString* const& Newtonsoft::Json::Bson::BsonProperty::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void Newtonsoft::Json::Bson::BsonProperty::__cordl_internal_set__Name_k__BackingField(::Newtonsoft::Json::Bson::BsonString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::Bson::BsonToken*& Newtonsoft::Json::Bson::BsonProperty::__cordl_internal_get__Value_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
constexpr ::Newtonsoft::Json::Bson::BsonToken* const& Newtonsoft::Json::Bson::BsonProperty::__cordl_internal_get__Value_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
constexpr void Newtonsoft::Json::Bson::BsonProperty::__cordl_internal_set__Value_k__BackingField(::Newtonsoft::Json::Bson::BsonToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Value_k__BackingField = value;
}
inline ::Newtonsoft::Json::Bson::BsonString* Newtonsoft::Json::Bson::BsonProperty::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonProperty*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonString*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonProperty::set_Name(::Newtonsoft::Json::Bson::BsonString* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonProperty*>(), { "set_Name", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Bson::BsonToken* Newtonsoft::Json::Bson::BsonProperty::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonProperty*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonToken*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonProperty::set_Value(::Newtonsoft::Json::Bson::BsonToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonProperty*>(), { "set_Value", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Bson::BsonProperty* Newtonsoft::Json::Bson::BsonProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Bson::BsonProperty*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonProperty::BsonProperty() {}
