#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\Client\GraphQLResponseParseException.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLException_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLResponseParseException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponseParseException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLResponseParseException::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLResponseParseException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f1ec94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseParseException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponseParseException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLResponseParseException::*)(::StringW, ::System::Exception*)>(
    &::OculusStudios::GraphQL::Client::GraphQLResponseParseException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f1e7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseParseException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::GraphQLResponseParseException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseParseException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLResponseParseException::_ctor(::StringW message, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseParseException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerException);
}
inline ::OculusStudios::GraphQL::Client::GraphQLResponseParseException* OculusStudios::GraphQL::Client::GraphQLResponseParseException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::GraphQLResponseParseException*>());
}
inline ::OculusStudios::GraphQL::Client::GraphQLResponseParseException* OculusStudios::GraphQL::Client::GraphQLResponseParseException::New_ctor(::StringW message,
                                                                                                                                                ::System::Exception* innerException) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::GraphQLResponseParseException*>(message, innerException));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLResponseParseException::GraphQLResponseParseException() {}
