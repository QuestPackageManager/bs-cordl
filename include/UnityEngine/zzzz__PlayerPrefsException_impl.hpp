#pragma once
// IWYU pragma private; include "UnityEngine/PlayerPrefsException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/zzzz__PlayerPrefsException_def.hpp"
//  Writing Method size for method: ::UnityEngine::PlayerPrefsException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::PlayerPrefsException::*)(::StringW)>(&::UnityEngine::PlayerPrefsException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x48a6d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerPrefsException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::PlayerPrefsException::_ctor(::StringW error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerPrefsException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::UnityEngine::PlayerPrefsException* UnityEngine::PlayerPrefsException::New_ctor(::StringW error) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::PlayerPrefsException*>(error));
}
// Ctor Parameters []
constexpr ::UnityEngine::PlayerPrefsException::PlayerPrefsException() {}
