#pragma once
#include "GlobalNamespace/zzzz__IMissionNodesManager_def.hpp"
#include "GlobalNamespace/zzzz__IMissionNode_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IMissionNodesManager.get_finalMissionNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IMissionNode* (::GlobalNamespace::IMissionNodesManager::*)()>(
    &::GlobalNamespace::IMissionNodesManager::get_finalMissionNode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMissionNodesManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMissionNodesManager*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IMissionNodesManager.get_allMissionNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::IMissionNode*>* (
    ::GlobalNamespace::IMissionNodesManager::*)()>(&::GlobalNamespace::IMissionNodesManager::get_allMissionNodes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMissionNodesManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMissionNodesManager*>::get(), 1));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IMissionNode* GlobalNamespace::IMissionNodesManager::get_finalMissionNode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMissionNodesManager*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IMissionNode*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::IMissionNode*>* GlobalNamespace::IMissionNodesManager::get_allMissionNodes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMissionNodesManager*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::IMissionNode*>*, false>(this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
