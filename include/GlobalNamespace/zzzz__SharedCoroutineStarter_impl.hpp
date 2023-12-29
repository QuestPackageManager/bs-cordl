#pragma once
#include "GlobalNamespace/zzzz__PersistentSingleton_1_impl.hpp"
#include "GlobalNamespace/zzzz__SharedCoroutineStarter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SharedCoroutineStarter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SharedCoroutineStarter::*)()>(&::GlobalNamespace::SharedCoroutineStarter::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1f99410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SharedCoroutineStarter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::SharedCoroutineStarter* GlobalNamespace::SharedCoroutineStarter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SharedCoroutineStarter*>());
}
inline void GlobalNamespace::SharedCoroutineStarter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SharedCoroutineStarter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SharedCoroutineStarter::SharedCoroutineStarter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
