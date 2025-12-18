#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLQueryOperation.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLOperationBase_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLQueryOperation_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLOperation_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLQueryOperation.GetPersistedQueryID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OculusStudios::GraphQL::Client::GraphQLQueryOperation::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLQueryOperation::GetPersistedQueryID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLQueryOperation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLQueryOperation*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLQueryOperation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLQueryOperation::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLQueryOperation::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d74058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLQueryOperation*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline uint64_t OculusStudios::GraphQL::Client::GraphQLQueryOperation::GetPersistedQueryID() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLQueryOperation*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLQueryOperation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLQueryOperation*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::GraphQLQueryOperation* OculusStudios::GraphQL::Client::GraphQLQueryOperation::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::GraphQLQueryOperation*>());
}
/// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation"
constexpr OculusStudios::GraphQL::Client::GraphQLQueryOperation::operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation*() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation"
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation*
OculusStudios::GraphQL::Client::GraphQLQueryOperation::i___OculusStudios__GraphQL__ClientInterface__IGraphQLOperation() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLQueryOperation::GraphQLQueryOperation() {}
