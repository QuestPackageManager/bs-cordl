#pragma once
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/ComponentModel/zzzz__IContainer_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ITypeDescriptorContext.get_Container
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::IContainer* (::System::ComponentModel::ITypeDescriptorContext::*)()>(
    &::System::ComponentModel::ITypeDescriptorContext::get_Container)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ITypeDescriptorContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ITypeDescriptorContext*>::get(), 0));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IServiceProvider"
constexpr System::ComponentModel::ITypeDescriptorContext::operator ::System::IServiceProvider*() noexcept {
  return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IServiceProvider"
constexpr ::System::IServiceProvider* System::ComponentModel::ITypeDescriptorContext::i___System__IServiceProvider() noexcept {
  return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
inline ::System::ComponentModel::IContainer* System::ComponentModel::ITypeDescriptorContext::get_Container() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ITypeDescriptorContext*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IContainer*, false>(this, ___internal_method);
}
