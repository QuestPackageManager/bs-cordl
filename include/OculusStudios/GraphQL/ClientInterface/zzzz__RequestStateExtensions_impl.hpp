#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\ClientInterface\RequestStateExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__RequestStateExtensions_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__RequestState_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::RequestStateExtensions.ToVerboseLogFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::OculusStudios::GraphQL::ClientInterface::RequestState)>(
    &::OculusStudios::GraphQL::ClientInterface::RequestStateExtensions::ToVerboseLogFormat)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5f2d794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::RequestStateExtensions*>(),
                                                             { "ToVerboseLogFormat", {}, { ::i2c::type_of<::OculusStudios::GraphQL::ClientInterface::RequestState>() } })));
    return ___internal_method;
  }
};
inline ::StringW OculusStudios::GraphQL::ClientInterface::RequestStateExtensions::ToVerboseLogFormat(::OculusStudios::GraphQL::ClientInterface::RequestState state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::RequestStateExtensions*>(),
                                                                                         { "ToVerboseLogFormat", {}, { ::i2c::type_of<::OculusStudios::GraphQL::ClientInterface::RequestState>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, state);
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestStateExtensions::RequestStateExtensions() {}
