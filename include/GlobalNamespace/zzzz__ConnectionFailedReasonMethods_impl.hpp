#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReasonMethods_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConnectionFailedReasonMethods.LocalizedKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::ConnectionFailedReasonMethods::LocalizedKey)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x12998f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectionFailedReasonMethods*>::get(), "LocalizedKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectionFailedReasonMethods.ErrorCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::ConnectionFailedReasonMethods::ErrorCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x12999a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectionFailedReasonMethods*>::get(), "ErrorCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::ConnectionFailedReasonMethods::LocalizedKey(::GlobalNamespace::ConnectionFailedReason connectionFailedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectionFailedReasonMethods*>::get(), "LocalizedKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, connectionFailedReason);
}
inline ::StringW GlobalNamespace::ConnectionFailedReasonMethods::ErrorCode(::GlobalNamespace::ConnectionFailedReason connectionFailedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectionFailedReasonMethods*>::get(), "ErrorCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, connectionFailedReason);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectionFailedReasonMethods::ConnectionFailedReasonMethods() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
