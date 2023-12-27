#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlacementErrorCodeMethods_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlacementErrorCode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPlacementErrorCodeMethods.ToConnectionFailedReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectionFailedReason (*)(::GlobalNamespace::MultiplayerPlacementErrorCode)>(
    &::GlobalNamespace::MultiplayerPlacementErrorCodeMethods::ToConnectionFailedReason)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xe392e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlacementErrorCodeMethods*>::get(), "ToConnectionFailedReason", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlacementErrorCode>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ConnectionFailedReason GlobalNamespace::MultiplayerPlacementErrorCodeMethods::ToConnectionFailedReason(::GlobalNamespace::MultiplayerPlacementErrorCode errorCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlacementErrorCodeMethods*>::get(), "ToConnectionFailedReason", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlacementErrorCode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectionFailedReason, false>(nullptr, ___internal_method, errorCode);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerPlacementErrorCodeMethods::MultiplayerPlacementErrorCodeMethods() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
