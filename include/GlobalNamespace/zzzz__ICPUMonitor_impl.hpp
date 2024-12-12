#pragma once
// IWYU pragma private; include "GlobalNamespace/ICPUMonitor.hpp"
#include "GlobalNamespace/zzzz__IPollable_impl.hpp"
#include "GlobalNamespace/zzzz__ICPUMonitor_def.hpp"
inline float_t GlobalNamespace::ICPUMonitor::get_utilization() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICPUMonitor*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr GlobalNamespace::ICPUMonitor::operator ::GlobalNamespace::IPollable*() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPollable"
constexpr ::GlobalNamespace::IPollable* GlobalNamespace::ICPUMonitor::i___GlobalNamespace__IPollable() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
