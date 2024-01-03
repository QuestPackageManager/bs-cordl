#pragma once
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_impl.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult::__ISonyCommerceHelper__DisplayProductBrowseDialogResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult::__ISonyCommerceHelper__DisplayProductBrowseDialogResult() {}
constexpr ::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult::OK{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult::Failed{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult() {}
constexpr ::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult::OK{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult::Failed{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult() {}
constexpr ::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult::OK{ static_cast<int32_t>(
    0x0) };
constexpr ::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult::Failed{ static_cast<int32_t>(
    0x1) };
// Ctor Parameters [CppParam { name: "result", ty: "::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "entitlementsLabels", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult(
    ::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult result, ::ArrayW<::StringW, ::Array<::StringW>*> entitlementsLabels) noexcept {
  this->result = result;
  this->entitlementsLabels = entitlementsLabels;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult() {}
//  Writing Method size for method: ::GlobalNamespace::ISonyCommerceHelper.GetAdditionalContentEntitlementsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* (
        ::GlobalNamespace::ISonyCommerceHelper::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::ISonyCommerceHelper::GetAdditionalContentEntitlementsAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyCommerceHelper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyCommerceHelper*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISonyCommerceHelper.DisplayProductBrowseDialogAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>* (
    ::GlobalNamespace::ISonyCommerceHelper::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::ISonyCommerceHelper::DisplayProductBrowseDialogAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyCommerceHelper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyCommerceHelper*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISonyCommerceHelper.DisplayCategoryBrowseDialogAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult>* (
    ::GlobalNamespace::ISonyCommerceHelper::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::ISonyCommerceHelper::DisplayCategoryBrowseDialogAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyCommerceHelper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyCommerceHelper*>::get(), 2));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*
GlobalNamespace::ISonyCommerceHelper::GetAdditionalContentEntitlementsAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyCommerceHelper*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*, false>(this, ___internal_method,
                                                                                                                                                                             cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>*
GlobalNamespace::ISonyCommerceHelper::DisplayProductBrowseDialogAsync(::StringW productLabel, ::System::Threading::CancellationToken token) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyCommerceHelper*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>*, false>(this, ___internal_method,
                                                                                                                                                                     productLabel, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult>*
GlobalNamespace::ISonyCommerceHelper::DisplayCategoryBrowseDialogAsync(::StringW categoryLabel, ::System::Threading::CancellationToken token) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyCommerceHelper*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult>*, false>(this, ___internal_method,
                                                                                                                                                                      categoryLabel, token);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
