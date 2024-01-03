#pragma once
#include "UnityEngine/zzzz__YieldInstruction_impl.hpp"
#include "UnityEngine/zzzz__WaitForEndOfFrame_def.hpp"
//  Writing Method size for method: ::UnityEngine::WaitForEndOfFrame._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::WaitForEndOfFrame::*)()>(&::UnityEngine::WaitForEndOfFrame::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ccd2d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitForEndOfFrame*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::WaitForEndOfFrame* UnityEngine::WaitForEndOfFrame::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::WaitForEndOfFrame*>());
}
inline void UnityEngine::WaitForEndOfFrame::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitForEndOfFrame*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::WaitForEndOfFrame::WaitForEndOfFrame() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
