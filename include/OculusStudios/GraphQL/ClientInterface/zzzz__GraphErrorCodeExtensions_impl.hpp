#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/GraphErrorCodeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__GraphErrorCodeExtensions_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__GraphErrorCode_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions.IsGraphQLErrorCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions::IsGraphQLErrorCode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f2a3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions*>(), { "IsGraphQLErrorCode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions.GetGraphQLErrorCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::GraphQL::ClientInterface::GraphErrorCode (*)(int32_t)>(
    &::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions::GetGraphQLErrorCode)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f2a490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions*>(), { "GetGraphQLErrorCode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline bool OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions::IsGraphQLErrorCode(int32_t code) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions*>(), { "IsGraphQLErrorCode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, code);
}
inline ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions::GetGraphQLErrorCode(int32_t code) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions*>(), { "GetGraphQLErrorCode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::ClientInterface::GraphErrorCode>(nullptr, ___internal_method, code);
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions::GraphErrorCodeExtensions() {}
