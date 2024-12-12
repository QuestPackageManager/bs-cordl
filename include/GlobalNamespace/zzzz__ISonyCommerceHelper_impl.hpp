#pragma once
// IWYU pragma private; include "GlobalNamespace/ISonyCommerceHelper.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult::ISonyCommerceHelper_DisplayProductBrowseDialogResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult::ISonyCommerceHelper_DisplayProductBrowseDialogResult() {}
constexpr ::GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult::OK{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult::Failed{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ISonyCommerceHelper_DisplayCategoryBrowseDialogResult::ISonyCommerceHelper_DisplayCategoryBrowseDialogResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ISonyCommerceHelper_DisplayCategoryBrowseDialogResult::ISonyCommerceHelper_DisplayCategoryBrowseDialogResult() {}
constexpr ::GlobalNamespace::ISonyCommerceHelper_DisplayCategoryBrowseDialogResult GlobalNamespace::ISonyCommerceHelper_DisplayCategoryBrowseDialogResult::OK{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ISonyCommerceHelper_DisplayCategoryBrowseDialogResult GlobalNamespace::ISonyCommerceHelper_DisplayCategoryBrowseDialogResult::Failed{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ISonyCommerceHelper_GetAdditionalContentEntitlementsResult::ISonyCommerceHelper_GetAdditionalContentEntitlementsResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ISonyCommerceHelper_GetAdditionalContentEntitlementsResult::ISonyCommerceHelper_GetAdditionalContentEntitlementsResult() {}
constexpr ::GlobalNamespace::ISonyCommerceHelper_GetAdditionalContentEntitlementsResult GlobalNamespace::ISonyCommerceHelper_GetAdditionalContentEntitlementsResult::OK{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ISonyCommerceHelper_GetAdditionalContentEntitlementsResult GlobalNamespace::ISonyCommerceHelper_GetAdditionalContentEntitlementsResult::Failed{ static_cast<int32_t>(
    0x1) };
// Ctor Parameters [CppParam { name: "result", ty: "::GlobalNamespace::ISonyCommerceHelper_GetAdditionalContentEntitlementsResult", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "entitlementsLabels", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult::ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult(
    ::GlobalNamespace::ISonyCommerceHelper_GetAdditionalContentEntitlementsResult result, ::ArrayW<::StringW, ::Array<::StringW>*> entitlementsLabels) noexcept {
  this->result = result;
  this->entitlementsLabels = entitlementsLabels;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult::ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult() {}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult>*
GlobalNamespace::ISonyCommerceHelper::GetAdditionalContentEntitlementsAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyCommerceHelper*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult>*, false>(this, ___internal_method,
                                                                                                                                                                          cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult>*
GlobalNamespace::ISonyCommerceHelper::DisplayProductBrowseDialogAsync(::StringW productLabel, ::System::Threading::CancellationToken token) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyCommerceHelper*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult>*, false>(this, ___internal_method,
                                                                                                                                                                  productLabel, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::ISonyCommerceHelper_DisplayCategoryBrowseDialogResult>*
GlobalNamespace::ISonyCommerceHelper::DisplayCategoryBrowseDialogAsync(::StringW categoryLabel, ::System::Threading::CancellationToken token) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyCommerceHelper*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::ISonyCommerceHelper_DisplayCategoryBrowseDialogResult>*, false>(this, ___internal_method,
                                                                                                                                                                   categoryLabel, token);
}
