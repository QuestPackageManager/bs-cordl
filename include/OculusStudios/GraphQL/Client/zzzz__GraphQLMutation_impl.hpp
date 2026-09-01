#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\Client\GraphQLMutation.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequest_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLMutation_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLMutation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLMutation::*)()>(&::OculusStudios::GraphQL::Client::GraphQLMutation::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f2bd08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLMutation*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::GraphQLMutation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLMutation*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::GraphQLMutation* OculusStudios::GraphQL::Client::GraphQLMutation::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::GraphQLMutation*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLMutation::GraphQLMutation() {}
