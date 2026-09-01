#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\Client\GraphQLQuery.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequest_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLQuery_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLQuery._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLQuery::*)()>(&::OculusStudios::GraphQL::Client::GraphQLQuery::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f2bd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLQuery*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::GraphQLQuery::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLQuery*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::GraphQLQuery* OculusStudios::GraphQL::Client::GraphQLQuery::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::GraphQLQuery*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLQuery::GraphQLQuery() {}
