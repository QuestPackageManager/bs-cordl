#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/zzzz__ExitGUIException_def.hpp"
//  Writing Method size for method: ::UnityEngine::ExitGUIException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ExitGUIException::*)()>(&::UnityEngine::ExitGUIException::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d0e090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExitGUIException*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::ExitGUIException* UnityEngine::ExitGUIException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ExitGUIException*>());
}
inline void UnityEngine::ExitGUIException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExitGUIException*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ExitGUIException::ExitGUIException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
