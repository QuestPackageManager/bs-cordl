#pragma once
#include "UnityEngine/zzzz__YieldInstruction_impl.hpp"
#include "UnityEngine/zzzz__WaitForEndOfFrame_def.hpp"
//  Writing Method size for method: ::UnityEngine::WaitForEndOfFrame._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::WaitForEndOfFrame::*)()>(&::UnityEngine::WaitForEndOfFrame::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32025f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitForEndOfFrame*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::WaitForEndOfFrame* UnityEngine::WaitForEndOfFrame::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::WaitForEndOfFrame*>());
}
inline void UnityEngine::WaitForEndOfFrame::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitForEndOfFrame*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::WaitForEndOfFrame::WaitForEndOfFrame() {}
