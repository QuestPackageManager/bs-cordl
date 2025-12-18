#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/ClientExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__ClientExtensions_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLError_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequestException_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLResponse_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::ClientExtensions.ProcessModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::StringW, ::System::Type*)>(
    &::OculusStudios::GraphQL::Client::ClientExtensions::ProcessModel)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5d70200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::ClientExtensions*>::get(), "ProcessModel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::ClientExtensions.ExtractDataStringFromResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::OculusStudios::GraphQL::Client::GraphQLResponse*)>(
    &::OculusStudios::GraphQL::Client::ClientExtensions::ExtractDataStringFromResponse)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5d70324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::ClientExtensions*>::get(), "ExtractDataStringFromResponse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::ClientExtensions.CreateGraphQLRequestExceptionFromError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusStudios::GraphQL::Client::GraphQLRequestException* (*)(::OculusStudios::GraphQL::Client::GraphQLError*)>(
    &::OculusStudios::GraphQL::Client::ClientExtensions::CreateGraphQLRequestExceptionFromError)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5d704f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::ClientExtensions*>::get(),
                                                 "CreateGraphQLRequestExceptionFromError", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLError*>::get() })));
    return ___internal_method;
  }
};
template <typename T> inline T OculusStudios::GraphQL::Client::ClientExtensions::ProcessModel(::StringW dataString) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::ClientExtensions*>::get(),
                                                                                  "ProcessModel", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, dataString);
}
inline ::System::Object* OculusStudios::GraphQL::Client::ClientExtensions::ProcessModel(::StringW dataString, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::ClientExtensions*>::get(), "ProcessModel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, dataString, type);
}
inline ::StringW OculusStudios::GraphQL::Client::ClientExtensions::ExtractDataStringFromResponse(::OculusStudios::GraphQL::Client::GraphQLResponse* response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::ClientExtensions*>::get(), "ExtractDataStringFromResponse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, response);
}
inline ::OculusStudios::GraphQL::Client::GraphQLRequestException*
OculusStudios::GraphQL::Client::ClientExtensions::CreateGraphQLRequestExceptionFromError(::OculusStudios::GraphQL::Client::GraphQLError* error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::ClientExtensions*>::get(), "CreateGraphQLRequestExceptionFromError",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLError*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::Client::GraphQLRequestException*, false>(nullptr, ___internal_method, error);
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::ClientExtensions::ClientExtensions() {}
