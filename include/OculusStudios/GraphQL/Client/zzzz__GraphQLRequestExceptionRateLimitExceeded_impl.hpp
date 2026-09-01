#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\Client\GraphQLRequestExceptionRateLimitExceeded.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequestException_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequestExceptionRateLimitExceeded_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded::*)(int32_t, ::StringW)>(
    &::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f1eb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded::_ctor(int32_t errorCode, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorCode, message);
}
inline ::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded* OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded::New_ctor(int32_t errorCode,
                                                                                                                                                                      ::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded*>(errorCode, message));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded::GraphQLRequestExceptionRateLimitExceeded() {}
