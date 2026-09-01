#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\Client\ResponsePayload.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__ResponsePayload_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JRaw_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLError_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::ResponsePayload.get_error
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::GraphQL::Client::GraphQLError* (::OculusStudios::GraphQL::Client::ResponsePayload::*)()>(
    &::OculusStudios::GraphQL::Client::ResponsePayload::get_error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f22ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ResponsePayload*>(), { "get_error", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::ResponsePayload.set_error
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::ResponsePayload::*)(::OculusStudios::GraphQL::Client::GraphQLError*)>(
    &::OculusStudios::GraphQL::Client::ResponsePayload::set_error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f22ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ResponsePayload*>(),
                                                                                           { "set_error", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::GraphQLError*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::ResponsePayload.get_errors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::GraphQLError*>* (
    ::OculusStudios::GraphQL::Client::ResponsePayload::*)()>(&::OculusStudios::GraphQL::Client::ResponsePayload::get_errors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f22ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ResponsePayload*>(), { "get_errors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::ResponsePayload.set_errors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::ResponsePayload::*)(
    ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::GraphQLError*>*)>(&::OculusStudios::GraphQL::Client::ResponsePayload::set_errors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f22ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ResponsePayload*>(),
                                                             { "set_errors", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::GraphQLError*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::ResponsePayload.get_data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JRaw* (::OculusStudios::GraphQL::Client::ResponsePayload::*)()>(
    &::OculusStudios::GraphQL::Client::ResponsePayload::get_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f22ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ResponsePayload*>(), { "get_data", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::ResponsePayload.set_data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::ResponsePayload::*)(::Newtonsoft::Json::Linq::JRaw*)>(
    &::OculusStudios::GraphQL::Client::ResponsePayload::set_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f22ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ResponsePayload*>(), { "set_data", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JRaw*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::ResponsePayload._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::ResponsePayload::*)()>(&::OculusStudios::GraphQL::Client::ResponsePayload::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f22ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ResponsePayload*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::OculusStudios::GraphQL::Client::GraphQLError*& OculusStudios::GraphQL::Client::ResponsePayload::__cordl_internal_get__error_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____error_k__BackingField;
}
constexpr ::OculusStudios::GraphQL::Client::GraphQLError* const& OculusStudios::GraphQL::Client::ResponsePayload::__cordl_internal_get__error_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____error_k__BackingField;
}
constexpr void OculusStudios::GraphQL::Client::ResponsePayload::__cordl_internal_set__error_k__BackingField(::OculusStudios::GraphQL::Client::GraphQLError* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____error_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::GraphQLError*>*& OculusStudios::GraphQL::Client::ResponsePayload::__cordl_internal_get__errors_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____errors_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::GraphQLError*>* const&
OculusStudios::GraphQL::Client::ResponsePayload::__cordl_internal_get__errors_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____errors_k__BackingField;
}
constexpr void
OculusStudios::GraphQL::Client::ResponsePayload::__cordl_internal_set__errors_k__BackingField(::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::GraphQLError*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____errors_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::Linq::JRaw*& OculusStudios::GraphQL::Client::ResponsePayload::__cordl_internal_get__data_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data_k__BackingField;
}
constexpr ::Newtonsoft::Json::Linq::JRaw* const& OculusStudios::GraphQL::Client::ResponsePayload::__cordl_internal_get__data_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data_k__BackingField;
}
constexpr void OculusStudios::GraphQL::Client::ResponsePayload::__cordl_internal_set__data_k__BackingField(::Newtonsoft::Json::Linq::JRaw* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____data_k__BackingField = value;
}
inline ::OculusStudios::GraphQL::Client::GraphQLError* OculusStudios::GraphQL::Client::ResponsePayload::get_error() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ResponsePayload*>(), { "get_error", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::Client::GraphQLError*>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::ResponsePayload::set_error(::OculusStudios::GraphQL::Client::GraphQLError* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ResponsePayload*>(),
                                                                                         { "set_error", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::GraphQLError*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::GraphQLError*>* OculusStudios::GraphQL::Client::ResponsePayload::get_errors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ResponsePayload*>(), { "get_errors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::GraphQLError*>*>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::ResponsePayload::set_errors(::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::GraphQLError*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ResponsePayload*>(),
                                                           { "set_errors", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::GraphQLError*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JRaw* OculusStudios::GraphQL::Client::ResponsePayload::get_data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ResponsePayload*>(), { "get_data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JRaw*>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::ResponsePayload::set_data(::Newtonsoft::Json::Linq::JRaw* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ResponsePayload*>(), { "set_data", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JRaw*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OculusStudios::GraphQL::Client::ResponsePayload::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ResponsePayload*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::ResponsePayload* OculusStudios::GraphQL::Client::ResponsePayload::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::ResponsePayload*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::ResponsePayload::ResponsePayload() {}
