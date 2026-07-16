#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLRequestException.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLException_impl.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__GraphErrorCode_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequestException_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLRequestException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLRequestException::*)()>(&::OculusStudios::GraphQL::Client::GraphQLRequestException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f1ca88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLRequestException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLRequestException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLRequestException::*)(::StringW)>(
    &::OculusStudios::GraphQL::Client::GraphQLRequestException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f1ca8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLRequestException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLRequestException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLRequestException::*)(int32_t, ::StringW)>(
    &::OculusStudios::GraphQL::Client::GraphQLRequestException::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f1c8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLRequestException*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode& OculusStudios::GraphQL::Client::GraphQLRequestException::__cordl_internal_get_graphErrorCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphErrorCode;
}
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const& OculusStudios::GraphQL::Client::GraphQLRequestException::__cordl_internal_get_graphErrorCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphErrorCode;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLRequestException::__cordl_internal_set_graphErrorCode(::OculusStudios::GraphQL::ClientInterface::GraphErrorCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___graphErrorCode = value;
}
constexpr int32_t& OculusStudios::GraphQL::Client::GraphQLRequestException::__cordl_internal_get_errorCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorCode;
}
constexpr int32_t const& OculusStudios::GraphQL::Client::GraphQLRequestException::__cordl_internal_get_errorCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorCode;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLRequestException::__cordl_internal_set_errorCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___errorCode = value;
}
inline void OculusStudios::GraphQL::Client::GraphQLRequestException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLRequestException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLRequestException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLRequestException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void OculusStudios::GraphQL::Client::GraphQLRequestException::_ctor(int32_t errorCode, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLRequestException*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorCode, message);
}
inline ::OculusStudios::GraphQL::Client::GraphQLRequestException* OculusStudios::GraphQL::Client::GraphQLRequestException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::GraphQLRequestException*>());
}
inline ::OculusStudios::GraphQL::Client::GraphQLRequestException* OculusStudios::GraphQL::Client::GraphQLRequestException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::GraphQLRequestException*>(message));
}
inline ::OculusStudios::GraphQL::Client::GraphQLRequestException* OculusStudios::GraphQL::Client::GraphQLRequestException::New_ctor(int32_t errorCode, ::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::GraphQLRequestException*>(errorCode, message));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLRequestException::GraphQLRequestException() {}
