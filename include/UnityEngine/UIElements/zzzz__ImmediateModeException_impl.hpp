#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ImmediateModeException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ImmediateModeException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ImmediateModeException::*)(::System::Exception*)>(
    &::UnityEngine::UIElements::ImmediateModeException::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2dc7f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ImmediateModeException*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::ImmediateModeException* UnityEngine::UIElements::ImmediateModeException::New_ctor(::System::Exception* inner) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::ImmediateModeException*>(inner));
}
inline void UnityEngine::UIElements::ImmediateModeException::_ctor(::System::Exception* inner) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ImmediateModeException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inner);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ImmediateModeException::ImmediateModeException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
