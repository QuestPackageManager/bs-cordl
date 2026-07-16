#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/ValidationEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Newtonsoft/Json/Schema/zzzz__ValidationEventArgs_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaException_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Schema::ValidationEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::ValidationEventArgs::*)(::Newtonsoft::Json::Schema::JsonSchemaException*)>(
    &::Newtonsoft::Json::Schema::ValidationEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d6620c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::ValidationEventArgs*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaException*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::ValidationEventArgs.get_Exception
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchemaException* (::Newtonsoft::Json::Schema::ValidationEventArgs::*)()>(
    &::Newtonsoft::Json::Schema::ValidationEventArgs::get_Exception)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d66298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::ValidationEventArgs*>(), { "get_Exception", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::ValidationEventArgs.get_Path
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Schema::ValidationEventArgs::*)()>(&::Newtonsoft::Json::Schema::ValidationEventArgs::get_Path)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d662a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::ValidationEventArgs*>(), { "get_Path", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::ValidationEventArgs.get_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Schema::ValidationEventArgs::*)()>(&::Newtonsoft::Json::Schema::ValidationEventArgs::get_Message)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d5b230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::ValidationEventArgs*>(), { "get_Message", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Schema::JsonSchemaException*& Newtonsoft::Json::Schema::ValidationEventArgs::__cordl_internal_get__ex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ex;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaException* const& Newtonsoft::Json::Schema::ValidationEventArgs::__cordl_internal_get__ex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ex;
}
constexpr void Newtonsoft::Json::Schema::ValidationEventArgs::__cordl_internal_set__ex(::Newtonsoft::Json::Schema::JsonSchemaException* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ex = value;
}
inline void Newtonsoft::Json::Schema::ValidationEventArgs::_ctor(::Newtonsoft::Json::Schema::JsonSchemaException* ex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::ValidationEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaException*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ex);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaException* Newtonsoft::Json::Schema::ValidationEventArgs::get_Exception() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::ValidationEventArgs*>(), { "get_Exception", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchemaException*>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Schema::ValidationEventArgs::get_Path() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::ValidationEventArgs*>(), { "get_Path", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Schema::ValidationEventArgs::get_Message() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::ValidationEventArgs*>(), { "get_Message", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Schema::ValidationEventArgs* Newtonsoft::Json::Schema::ValidationEventArgs::New_ctor(::Newtonsoft::Json::Schema::JsonSchemaException* ex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Schema::ValidationEventArgs*>(ex));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::ValidationEventArgs::ValidationEventArgs() {}
