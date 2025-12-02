#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/IGraphQLInputSupportsClientMutationId.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLInputSupportsClientMutationId_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId.set_ClientMutationId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId::*)(::StringW)>(
    &::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId::set_ClientMutationId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId*>::get(), 0));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId::set_ClientMutationId(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
