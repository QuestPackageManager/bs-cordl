#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReasonMethods_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisconnectedReasonMethods.LocalizedKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::DisconnectedReasonMethods::LocalizedKey)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2206a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisconnectedReasonMethods*>::get(), "LocalizedKey", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisconnectedReasonMethods.ErrorCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::DisconnectedReasonMethods::ErrorCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2206af8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisconnectedReasonMethods*>::get(), "ErrorCode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::DisconnectedReasonMethods::LocalizedKey(::GlobalNamespace::DisconnectedReason connectionFailedReason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisconnectedReasonMethods*>::get(), "LocalizedKey", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, connectionFailedReason);
}
inline ::StringW GlobalNamespace::DisconnectedReasonMethods::ErrorCode(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisconnectedReasonMethods*>::get(), "ErrorCode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, disconnectedReason);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisconnectedReasonMethods::DisconnectedReasonMethods() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
