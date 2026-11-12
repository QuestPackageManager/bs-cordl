#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/IGraphQLOperationSupportsClientMutationId.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLOperationSupportsClientMutationId_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::IGraphQLOperationSupportsClientMutationId.set_ClientMutationId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::IGraphQLOperationSupportsClientMutationId::*)(::StringW)>(
    &::OculusStudios::GraphQL::ClientInterface::IGraphQLOperationSupportsClientMutationId::set_ClientMutationId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::IGraphQLOperationSupportsClientMutationId*>(),
                                                            { ::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::IGraphQLOperationSupportsClientMutationId*>(), 0 }));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::ClientInterface::IGraphQLOperationSupportsClientMutationId::set_ClientMutationId(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::IGraphQLOperationSupportsClientMutationId*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
