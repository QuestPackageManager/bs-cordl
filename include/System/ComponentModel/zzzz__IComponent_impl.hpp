#pragma once
// IWYU pragma private; include "System/ComponentModel/IComponent.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
#include "System/ComponentModel/zzzz__ISite_def.hpp"
inline ::System::ComponentModel::ISite* System::ComponentModel::IComponent::get_Site() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::IComponent*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ISite*, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::ComponentModel::IComponent::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::ComponentModel::IComponent::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
