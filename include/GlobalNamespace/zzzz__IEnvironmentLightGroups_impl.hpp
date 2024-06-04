#pragma once
// IWYU pragma private; include "GlobalNamespace/IEnvironmentLightGroups.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__ILightGroup_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IEnvironmentLightGroups.get_lightGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILightGroup*>* (
    ::GlobalNamespace::IEnvironmentLightGroups::*)()>(&::GlobalNamespace::IEnvironmentLightGroups::get_lightGroups)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IEnvironmentLightGroups*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IEnvironmentLightGroups*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IEnvironmentLightGroups.GetDataForGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ILightGroup* (::GlobalNamespace::IEnvironmentLightGroups::*)(int32_t)>(
    &::GlobalNamespace::IEnvironmentLightGroups::GetDataForGroup)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IEnvironmentLightGroups*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IEnvironmentLightGroups*>::get(), 1));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILightGroup*>* GlobalNamespace::IEnvironmentLightGroups::get_lightGroups() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IEnvironmentLightGroups*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILightGroup*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ILightGroup* GlobalNamespace::IEnvironmentLightGroups::GetDataForGroup(int32_t groupId) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IEnvironmentLightGroups*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILightGroup*, false>(this, ___internal_method, groupId);
}
