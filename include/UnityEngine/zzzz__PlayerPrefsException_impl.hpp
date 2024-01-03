#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/zzzz__PlayerPrefsException_def.hpp"
//  Writing Method size for method: ::UnityEngine::PlayerPrefsException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::PlayerPrefsException::*)(::StringW)>(&::UnityEngine::PlayerPrefsException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2c9e688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerPrefsException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::PlayerPrefsException* UnityEngine::PlayerPrefsException::New_ctor(::StringW error) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::PlayerPrefsException*>(error));
}
inline void UnityEngine::PlayerPrefsException::_ctor(::StringW error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerPrefsException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
// Ctor Parameters []
constexpr ::UnityEngine::PlayerPrefsException::PlayerPrefsException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
