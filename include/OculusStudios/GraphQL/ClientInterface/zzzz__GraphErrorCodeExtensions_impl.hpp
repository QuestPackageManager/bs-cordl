#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/GraphErrorCodeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__GraphErrorCodeExtensions_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__GraphErrorCode_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions.IsGraphQLErrorCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions::IsGraphQLErrorCode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d7e0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions*>::get(), "IsGraphQLErrorCode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions.GetGraphQLErrorCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusStudios::GraphQL::ClientInterface::GraphErrorCode (*)(int32_t)>(
    &::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions::GetGraphQLErrorCode)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d7e16c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions*>::get(), "GetGraphQLErrorCode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline bool OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions::IsGraphQLErrorCode(int32_t code) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions*>::get(), "IsGraphQLErrorCode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, code);
}
inline ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions::GetGraphQLErrorCode(int32_t code) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions*>::get(), "GetGraphQLErrorCode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::ClientInterface::GraphErrorCode, false>(nullptr, ___internal_method, code);
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions::GraphErrorCodeExtensions() {}
