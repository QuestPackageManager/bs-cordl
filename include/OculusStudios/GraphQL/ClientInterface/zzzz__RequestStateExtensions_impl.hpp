#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/RequestStateExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__RequestStateExtensions_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__RequestState_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::RequestStateExtensions.ToVerboseLogFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::OculusStudios::GraphQL::ClientInterface::RequestState)>(
    &::OculusStudios::GraphQL::ClientInterface::RequestStateExtensions::ToVerboseLogFormat)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5d7f244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::RequestStateExtensions*>::get(), "ToVerboseLogFormat",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::RequestState>::get() })));
    return ___internal_method;
  }
};
inline ::StringW OculusStudios::GraphQL::ClientInterface::RequestStateExtensions::ToVerboseLogFormat(::OculusStudios::GraphQL::ClientInterface::RequestState state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::RequestStateExtensions*>::get(), "ToVerboseLogFormat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::RequestState>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, state);
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestStateExtensions::RequestStateExtensions() {}
