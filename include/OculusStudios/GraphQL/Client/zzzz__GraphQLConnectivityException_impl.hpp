#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\Client\GraphQLConnectivityException.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLException_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLConnectivityException_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLConnectivityException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLConnectivityException::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLConnectivityException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f1ec98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLConnectivityException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLConnectivityException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLConnectivityException::*)(::StringW)>(
    &::OculusStudios::GraphQL::Client::GraphQLConnectivityException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f1ec9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLConnectivityException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::GraphQLConnectivityException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLConnectivityException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLConnectivityException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLConnectivityException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::OculusStudios::GraphQL::Client::GraphQLConnectivityException* OculusStudios::GraphQL::Client::GraphQLConnectivityException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::GraphQLConnectivityException*>());
}
inline ::OculusStudios::GraphQL::Client::GraphQLConnectivityException* OculusStudios::GraphQL::Client::GraphQLConnectivityException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::GraphQLConnectivityException*>(message));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLConnectivityException::GraphQLConnectivityException() {}
