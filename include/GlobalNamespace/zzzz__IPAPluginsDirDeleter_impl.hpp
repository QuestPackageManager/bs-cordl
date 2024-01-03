#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__IPAPluginsDirDeleter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IPAPluginsDirDeleter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IPAPluginsDirDeleter::*)()>(&::GlobalNamespace::IPAPluginsDirDeleter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226ca3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPAPluginsDirDeleter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IPAPluginsDirDeleter* GlobalNamespace::IPAPluginsDirDeleter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::IPAPluginsDirDeleter*>());
}
inline void GlobalNamespace::IPAPluginsDirDeleter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPAPluginsDirDeleter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IPAPluginsDirDeleter::IPAPluginsDirDeleter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
