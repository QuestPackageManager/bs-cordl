#pragma once
#include "System/ComponentModel/Design/zzzz__IComponentChangeService_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/ComponentModel/zzzz__MemberDescriptor_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::IComponentChangeService.OnComponentChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::Design::IComponentChangeService::*)(
    ::System::Object*, ::System::ComponentModel::MemberDescriptor*, ::System::Object*, ::System::Object*)>(&::System::ComponentModel::Design::IComponentChangeService::OnComponentChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IComponentChangeService*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IComponentChangeService*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::IComponentChangeService.OnComponentChanging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::Design::IComponentChangeService::*)(
    ::System::Object*, ::System::ComponentModel::MemberDescriptor*)>(&::System::ComponentModel::Design::IComponentChangeService::OnComponentChanging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IComponentChangeService*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IComponentChangeService*>::get(), 1));
    return ___internal_method;
  }
};
inline void System::ComponentModel::Design::IComponentChangeService::OnComponentChanged(::System::Object* component, ::System::ComponentModel::MemberDescriptor* member, ::System::Object* oldValue,
                                                                                        ::System::Object* newValue) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IComponentChangeService*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, component, member, oldValue, newValue);
}
inline void System::ComponentModel::Design::IComponentChangeService::OnComponentChanging(::System::Object* component, ::System::ComponentModel::MemberDescriptor* member) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IComponentChangeService*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, component, member);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
