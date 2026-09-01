#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\Client\ClientExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__ClientExtensions_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLError_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequestException_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLResponse_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::ClientExtensions.ProcessModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW, ::System::Type*)>(&::OculusStudios::GraphQL::Client::ClientExtensions::ProcessModel)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5f1e6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ClientExtensions*>(),
                                                                                           { "ProcessModel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::ClientExtensions.ExtractDataStringFromResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::OculusStudios::GraphQL::Client::GraphQLResponse*)>(
    &::OculusStudios::GraphQL::Client::ClientExtensions::ExtractDataStringFromResponse)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5f1e7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ClientExtensions*>(),
                                                             { "ExtractDataStringFromResponse", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::GraphQLResponse*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::ClientExtensions.CreateGraphQLRequestExceptionFromError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::GraphQL::Client::GraphQLRequestException* (*)(::OculusStudios::GraphQL::Client::GraphQLError*)>(
    &::OculusStudios::GraphQL::Client::ClientExtensions::CreateGraphQLRequestExceptionFromError)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5f1e9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ClientExtensions*>(),
                                                             { "CreateGraphQLRequestExceptionFromError", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::GraphQLError*>() } })));
    return ___internal_method;
  }
};
template <typename T> inline T OculusStudios::GraphQL::Client::ClientExtensions::ProcessModel(::StringW dataString) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ClientExtensions*>(), { "ProcessModel", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, dataString);
}
inline ::System::Object* OculusStudios::GraphQL::Client::ClientExtensions::ProcessModel(::StringW dataString, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ClientExtensions*>(),
                                                                                         { "ProcessModel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, dataString, type);
}
inline ::StringW OculusStudios::GraphQL::Client::ClientExtensions::ExtractDataStringFromResponse(::OculusStudios::GraphQL::Client::GraphQLResponse* response) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ClientExtensions*>(),
                                                           { "ExtractDataStringFromResponse", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::GraphQLResponse*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, response);
}
inline ::OculusStudios::GraphQL::Client::GraphQLRequestException*
OculusStudios::GraphQL::Client::ClientExtensions::CreateGraphQLRequestExceptionFromError(::OculusStudios::GraphQL::Client::GraphQLError* error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ClientExtensions*>(),
                                                           { "CreateGraphQLRequestExceptionFromError", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::GraphQLError*>() } })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::Client::GraphQLRequestException*>(nullptr, ___internal_method, error);
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::ClientExtensions::ClientExtensions() {}
