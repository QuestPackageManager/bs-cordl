#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/MutationRequest_1.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__MutationRequest_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__MutationRequest_1_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLMutationOperation_def.hpp"
template <typename TInputModel>
inline void OculusStudios::GraphQL::Client::MutationRequest_1<TInputModel>::_ctor(::OculusStudios::GraphQL::Client::GraphQLMutationOperation* mutation, TInputModel inputObject,
                                                                                  bool forceRequestWhenOffline) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::MutationRequest_1<TInputModel>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLMutationOperation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInputModel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mutation, inputObject, forceRequestWhenOffline);
}
template <typename TInputModel> inline bool OculusStudios::GraphQL::Client::MutationRequest_1<TInputModel>::SupportsClientMutationId() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::MutationRequest_1<TInputModel>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TInputModel>
inline ::OculusStudios::GraphQL::Client::MutationRequest_1<TInputModel>*
OculusStudios::GraphQL::Client::MutationRequest_1<TInputModel>::New_ctor(::OculusStudios::GraphQL::Client::GraphQLMutationOperation* mutation, TInputModel inputObject, bool forceRequestWhenOffline) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::MutationRequest_1<TInputModel>*>(mutation, inputObject, forceRequestWhenOffline));
}
// Ctor Parameters []
template <typename TInputModel> constexpr ::OculusStudios::GraphQL::Client::MutationRequest_1<TInputModel>::MutationRequest_1() {}
