#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HierarchyIgnorePrefabOverrides_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HierarchyIgnorePrefabOverrides._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HierarchyIgnorePrefabOverrides::*)()>(
    &::GlobalNamespace::HierarchyIgnorePrefabOverrides::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2327400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HierarchyIgnorePrefabOverrides*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::HierarchyIgnorePrefabOverrides* GlobalNamespace::HierarchyIgnorePrefabOverrides::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HierarchyIgnorePrefabOverrides*>());
}
inline void GlobalNamespace::HierarchyIgnorePrefabOverrides::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HierarchyIgnorePrefabOverrides*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HierarchyIgnorePrefabOverrides::HierarchyIgnorePrefabOverrides() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
