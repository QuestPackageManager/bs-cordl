#pragma once
// IWYU pragma private; include "GlobalNamespace/HierarchyIgnorePrefabOverrides.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HierarchyIgnorePrefabOverrides_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HierarchyIgnorePrefabOverrides._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HierarchyIgnorePrefabOverrides::*)()>(
    &::GlobalNamespace::HierarchyIgnorePrefabOverrides::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b4c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HierarchyIgnorePrefabOverrides*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HierarchyIgnorePrefabOverrides::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HierarchyIgnorePrefabOverrides*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HierarchyIgnorePrefabOverrides* GlobalNamespace::HierarchyIgnorePrefabOverrides::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::HierarchyIgnorePrefabOverrides*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HierarchyIgnorePrefabOverrides::HierarchyIgnorePrefabOverrides() {}
