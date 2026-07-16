#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonRegex.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonRegex_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonString_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonRegex.get_Pattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Bson::BsonString* (::Newtonsoft::Json::Bson::BsonRegex::*)()>(&::Newtonsoft::Json::Bson::BsonRegex::get_Pattern)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dac67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonRegex*>(), { "get_Pattern", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonRegex.set_Pattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonRegex::*)(::Newtonsoft::Json::Bson::BsonString*)>(&::Newtonsoft::Json::Bson::BsonRegex::set_Pattern)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dac684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonRegex*>(), { "set_Pattern", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonRegex.get_Options
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Bson::BsonString* (::Newtonsoft::Json::Bson::BsonRegex::*)()>(&::Newtonsoft::Json::Bson::BsonRegex::get_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dac68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonRegex*>(), { "get_Options", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonRegex.set_Options
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonRegex::*)(::Newtonsoft::Json::Bson::BsonString*)>(&::Newtonsoft::Json::Bson::BsonRegex::set_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dac694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonRegex*>(), { "set_Options", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonRegex._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonRegex::*)(::StringW, ::StringW)>(&::Newtonsoft::Json::Bson::BsonRegex::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5dac69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonRegex*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonRegex.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Bson::BsonType (::Newtonsoft::Json::Bson::BsonRegex::*)()>(&::Newtonsoft::Json::Bson::BsonRegex::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dac728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonRegex*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonRegex*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Bson::BsonString*& Newtonsoft::Json::Bson::BsonRegex::__cordl_internal_get__Pattern_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Pattern_k__BackingField;
}
constexpr ::Newtonsoft::Json::Bson::BsonString* const& Newtonsoft::Json::Bson::BsonRegex::__cordl_internal_get__Pattern_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Pattern_k__BackingField;
}
constexpr void Newtonsoft::Json::Bson::BsonRegex::__cordl_internal_set__Pattern_k__BackingField(::Newtonsoft::Json::Bson::BsonString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Pattern_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::Bson::BsonString*& Newtonsoft::Json::Bson::BsonRegex::__cordl_internal_get__Options_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Options_k__BackingField;
}
constexpr ::Newtonsoft::Json::Bson::BsonString* const& Newtonsoft::Json::Bson::BsonRegex::__cordl_internal_get__Options_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Options_k__BackingField;
}
constexpr void Newtonsoft::Json::Bson::BsonRegex::__cordl_internal_set__Options_k__BackingField(::Newtonsoft::Json::Bson::BsonString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Options_k__BackingField = value;
}
inline ::Newtonsoft::Json::Bson::BsonString* Newtonsoft::Json::Bson::BsonRegex::get_Pattern() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonRegex*>(), { "get_Pattern", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonString*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonRegex::set_Pattern(::Newtonsoft::Json::Bson::BsonString* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonRegex*>(), { "set_Pattern", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Bson::BsonString* Newtonsoft::Json::Bson::BsonRegex::get_Options() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonRegex*>(), { "get_Options", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonString*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonRegex::set_Options(::Newtonsoft::Json::Bson::BsonString* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonRegex*>(), { "set_Options", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonRegex::_ctor(::StringW pattern, ::StringW options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonRegex*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pattern, options);
}
inline ::Newtonsoft::Json::Bson::BsonType Newtonsoft::Json::Bson::BsonRegex::get_Type() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonRegex*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonType>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Bson::BsonRegex* Newtonsoft::Json::Bson::BsonRegex::New_ctor(::StringW pattern, ::StringW options) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Bson::BsonRegex*>(pattern, options));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonRegex::BsonRegex() {}
