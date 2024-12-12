#pragma once
// IWYU pragma private; include "System/ComponentModel/IRevertibleChangeTracking.hpp"
#include "System/ComponentModel/zzzz__IChangeTracking_impl.hpp"
#include "System/ComponentModel/zzzz__IRevertibleChangeTracking_def.hpp"
inline void System::ComponentModel::IRevertibleChangeTracking::RejectChanges() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::IRevertibleChangeTracking*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::ComponentModel::IChangeTracking"
constexpr System::ComponentModel::IRevertibleChangeTracking::operator ::System::ComponentModel::IChangeTracking*() noexcept {
  return static_cast<::System::ComponentModel::IChangeTracking*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::IChangeTracking"
constexpr ::System::ComponentModel::IChangeTracking* System::ComponentModel::IRevertibleChangeTracking::i___System__ComponentModel__IChangeTracking() noexcept {
  return static_cast<::System::ComponentModel::IChangeTracking*>(static_cast<void*>(this));
}
