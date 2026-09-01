#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\Client\MutationRequest_1.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__MutationRequest_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__MutationRequest_1_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLMutationOperation_def.hpp"
template <typename TInputModel>
inline void OculusStudios::GraphQL::Client::MutationRequest_1<TInputModel>::_ctor(::OculusStudios::GraphQL::Client::GraphQLMutationOperation* mutation, TInputModel inputObject,
                                                                                  bool forceRequestWhenOffline) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::MutationRequest_1<TInputModel>*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::GraphQLMutationOperation*>(), ::i2c::type_of<TInputModel>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mutation, inputObject, forceRequestWhenOffline);
}
template <typename TInputModel> inline bool OculusStudios::GraphQL::Client::MutationRequest_1<TInputModel>::SupportsClientMutationId() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::MutationRequest_1<TInputModel>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TInputModel>
inline ::OculusStudios::GraphQL::Client::MutationRequest_1<TInputModel>*
OculusStudios::GraphQL::Client::MutationRequest_1<TInputModel>::New_ctor(::OculusStudios::GraphQL::Client::GraphQLMutationOperation* mutation, TInputModel inputObject, bool forceRequestWhenOffline) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::MutationRequest_1<TInputModel>*>(mutation, inputObject, forceRequestWhenOffline));
}
// Ctor Parameters []
template <typename TInputModel> constexpr ::OculusStudios::GraphQL::Client::MutationRequest_1<TInputModel>::MutationRequest_1() {}
