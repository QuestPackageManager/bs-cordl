#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLRequestExceptionRateLimitExceeded.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequestException_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequestExceptionRateLimitExceeded_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded::*)(int32_t, ::StringW)>(
    &::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d09bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded::_ctor(int32_t errorCode, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorCode, message);
}
inline ::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded* OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded::New_ctor(int32_t errorCode,
                                                                                                                                                                      ::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded*>(errorCode, message));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded::GraphQLRequestExceptionRateLimitExceeded() {}
