#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/IDesignerHost.hpp"
#include "System/zzzz__IServiceProvider_impl.hpp"
#include "System/ComponentModel/Design/zzzz__IDesignerHost_def.hpp"
#include "System/ComponentModel/Design/zzzz__IDesigner_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
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
/// @brief Convert operator to "::System::IServiceProvider"
constexpr System::ComponentModel::Design::IDesignerHost::operator ::System::IServiceProvider*() noexcept {
  return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IServiceProvider"
constexpr ::System::IServiceProvider* System::ComponentModel::Design::IDesignerHost::i___System__IServiceProvider() noexcept {
  return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
