#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/IDebugUIPanel.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IDebugUIPanel_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Category_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IInspector_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel.RegisterInspector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::IInspector* (
    ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel::*)(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::Manager::Category)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel::RegisterInspector)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel.UnregisterInspector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel::*)(
    ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::Manager::Category, bool)>(&::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel::UnregisterInspector)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel.GetInspector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::IInspector* (
    ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel::*)(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::Manager::Category)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel::GetInspector)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>::get(), 2));
    return ___internal_method;
  }
};
inline ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*
Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel::RegisterInspector(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instance, ::Meta::XR::ImmersiveDebugger::Manager::Category category) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*, false>(this, ___internal_method, instance, category);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel::UnregisterInspector(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instance,
                                                                                           ::Meta::XR::ImmersiveDebugger::Manager::Category category, bool allCategories) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, category, allCategories);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector* Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel::GetInspector(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instance,
                                                                                                                                         ::Meta::XR::ImmersiveDebugger::Manager::Category category) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*, false>(this, ___internal_method, instance, category);
}
