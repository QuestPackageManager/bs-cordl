#pragma once
#include "UnityEngine/Bindings/zzzz__NativeMethodAttribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__ThreadSafeAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::ThreadSafeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::ThreadSafeAttribute::*)()>(&::UnityEngine::Bindings::ThreadSafeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d1891c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::ThreadSafeAttribute*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::Bindings::ThreadSafeAttribute* UnityEngine::Bindings::ThreadSafeAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Bindings::ThreadSafeAttribute*>());
}
inline void UnityEngine::Bindings::ThreadSafeAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::ThreadSafeAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::ThreadSafeAttribute::ThreadSafeAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
