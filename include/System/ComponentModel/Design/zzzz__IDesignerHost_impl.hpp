#pragma once
#include "System/ComponentModel/Design/zzzz__IDesignerHost_def.hpp"
#include "System/ComponentModel/Design/zzzz__IDesigner_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::IDesignerHost.get_RootComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::IComponent* (::System::ComponentModel::Design::IDesignerHost::*)()>(
    &::System::ComponentModel::Design::IDesignerHost::get_RootComponent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IDesignerHost*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IDesignerHost*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::IDesignerHost.GetDesigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::Design::IDesigner* (
    ::System::ComponentModel::Design::IDesignerHost::*)(::System::ComponentModel::IComponent*)>(&::System::ComponentModel::Design::IDesignerHost::GetDesigner)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IDesignerHost*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IDesignerHost*>::get(), 1));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IServiceProvider"
constexpr System::ComponentModel::Design::IDesignerHost::operator ::System::IServiceProvider*() noexcept {
  return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IServiceProvider"
constexpr ::System::IServiceProvider* System::ComponentModel::Design::IDesignerHost::i___System__IServiceProvider() noexcept {
  return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
inline ::System::ComponentModel::IComponent* System::ComponentModel::Design::IDesignerHost::get_RootComponent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IDesignerHost*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IComponent*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::Design::IDesigner* System::ComponentModel::Design::IDesignerHost::GetDesigner(::System::ComponentModel::IComponent* component) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IDesignerHost*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::Design::IDesigner*, false>(this, ___internal_method, component);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
