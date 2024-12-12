#pragma once
// IWYU pragma private; include "GlobalNamespace/ISonyPSPremiumHelper.hpp"
#include "GlobalNamespace/zzzz__ISonyPSPremiumHelper_def.hpp"
#include "GlobalNamespace/zzzz__ISonyPSPremiumHelper_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult::ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult::ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult() {}
constexpr ::GlobalNamespace::ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult GlobalNamespace::ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult::OK{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult GlobalNamespace::ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult::Failed{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ISonyPSPremiumHelper_GetPremiumStatusResult::ISonyPSPremiumHelper_GetPremiumStatusResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ISonyPSPremiumHelper_GetPremiumStatusResult::ISonyPSPremiumHelper_GetPremiumStatusResult() {}
constexpr ::GlobalNamespace::ISonyPSPremiumHelper_GetPremiumStatusResult GlobalNamespace::ISonyPSPremiumHelper_GetPremiumStatusResult::Authorized{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ISonyPSPremiumHelper_GetPremiumStatusResult GlobalNamespace::ISonyPSPremiumHelper_GetPremiumStatusResult::Unauthorized{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::ISonyPSPremiumHelper_GetPremiumStatusResult GlobalNamespace::ISonyPSPremiumHelper_GetPremiumStatusResult::Failed{ static_cast<int32_t>(0x2) };
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult>*
GlobalNamespace::ISonyPSPremiumHelper::DisplayJoinPremiumDialogAsync(::System::Threading::CancellationToken token) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyPSPremiumHelper*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult>*, false>(this, ___internal_method, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::ISonyPSPremiumHelper_GetPremiumStatusResult>*
GlobalNamespace::ISonyPSPremiumHelper::GetPremiumStatusAsync(::System::Threading::CancellationToken token) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyPSPremiumHelper*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::ISonyPSPremiumHelper_GetPremiumStatusResult>*, false>(this, ___internal_method, token);
}
inline void GlobalNamespace::ISonyPSPremiumHelper::NotifyPremiumFeature(bool isSpectator) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyPSPremiumHelper*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isSpectator);
}
