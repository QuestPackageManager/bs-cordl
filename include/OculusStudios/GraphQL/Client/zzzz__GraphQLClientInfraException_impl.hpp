#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLClientInfraException.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLException_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLClientInfraException_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClientInfraException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClientInfraException::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLClientInfraException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d707e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClientInfraException*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClientInfraException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClientInfraException::*)(::StringW)>(
    &::OculusStudios::GraphQL::Client::GraphQLClientInfraException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d707e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClientInfraException*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::GraphQLClientInfraException::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClientInfraException*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLClientInfraException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClientInfraException*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::OculusStudios::GraphQL::Client::GraphQLClientInfraException* OculusStudios::GraphQL::Client::GraphQLClientInfraException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::GraphQLClientInfraException*>());
}
inline ::OculusStudios::GraphQL::Client::GraphQLClientInfraException* OculusStudios::GraphQL::Client::GraphQLClientInfraException::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::GraphQLClientInfraException*>(message));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLClientInfraException::GraphQLClientInfraException() {}
