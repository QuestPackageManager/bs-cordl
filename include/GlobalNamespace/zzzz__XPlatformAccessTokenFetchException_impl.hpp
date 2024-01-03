#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenFetchException_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XPlatformAccessTokenFetchException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::XPlatformAccessTokenFetchException::*)(::StringW)>(
    &::GlobalNamespace::XPlatformAccessTokenFetchException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27fdd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenFetchException*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::XPlatformAccessTokenFetchException* GlobalNamespace::XPlatformAccessTokenFetchException::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::XPlatformAccessTokenFetchException*>(message));
}
inline void GlobalNamespace::XPlatformAccessTokenFetchException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenFetchException*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XPlatformAccessTokenFetchException::XPlatformAccessTokenFetchException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
