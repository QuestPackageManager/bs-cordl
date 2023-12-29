#pragma once
#include "GlobalNamespace/zzzz__AdditionalContentModel_impl.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_def.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>>::get(), "MoveNext",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void
GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>::
    __SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5(
        int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder,
        ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelId,
        ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->levelId = levelId;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<
    T>::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>>::get(), "MoveNext",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void
GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>::
    __SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6(
        int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder,
        ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelPackId,
        ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->levelPackId = levelPackId;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<
    T>::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __t__builder,
    ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::StringW levelId, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->levelId = levelId;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __t__builder,
    ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->levelPackId = levelPackId;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __t__builder,
    ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelPackId,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->levelPackId = levelPackId;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __t__builder,
    ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13() {}
template <typename T> constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__entitlementsLabels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementsLabels;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const&
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__entitlementsLabels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementsLabels;
}
template <typename T> constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__entitlementsLabels(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entitlementsLabels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Threading::SemaphoreSlim*& GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__semaphoreSlim() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____semaphoreSlim;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__semaphoreSlim() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____semaphoreSlim;
}
template <typename T> constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__semaphoreSlim(::System::Threading::SemaphoreSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____semaphoreSlim)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr bool& GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__isDataValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDataValid;
}
template <typename T> constexpr bool const& GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__isDataValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDataValid;
}
template <typename T> constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__isDataValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDataValid = value;
}
template <typename T> constexpr ::GlobalNamespace::ISonyCommerceHelper*& GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__sonyCommerceHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sonyCommerceHelper;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISonyCommerceHelper*> const& GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__sonyCommerceHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sonyCommerceHelper;
}
template <typename T> constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__sonyCommerceHelper(::GlobalNamespace::ISonyCommerceHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sonyCommerceHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::InvalidateDataInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(),
                                                                             "InvalidateDataInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>*
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(), "GetLevelEntitlementStatusInternalAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>*, false>(this, ___internal_method, levelId,
                                                                                                                                                         cancellationToken);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>*
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::GetPackEntitlementStatusInternalAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(), "GetPackEntitlementStatusInternalAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>*, false>(this, ___internal_method, levelPackId,
                                                                                                                                                         cancellationToken);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>*
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(), "OpenLevelProductStoreAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>*, false>(this, ___internal_method, levelId,
                                                                                                                                                              cancellationToken);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>*
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(), "OpenLevelPackProductStoreAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>*, false>(this, ___internal_method, levelPackId,
                                                                                                                                                              cancellationToken);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult>*
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(), "IsPackBetterBuyThanLevelAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult>*, false>(this, ___internal_method,
                                                                                                                                                                      levelPackId, cancellationToken);
}
template <typename T> inline bool GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::HasLevelEntitlement(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(), "HasLevelEntitlement",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, levelId);
}
template <typename T> inline bool GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::HasLevelPackEntitlement(::StringW levelPackId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(), "HasLevelPackEntitlement",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, levelPackId);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::EnsureDataValidity(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(), "EnsureDataValidity", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, cancellationToken);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>*
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::UpdateEntitlementsAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(), "UpdateEntitlementsAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>*, false>(this, ___internal_method,
                                                                                                                                                                cancellationToken);
}
template <typename T> inline T GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::GetLevelProductsModel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(),
                                                                             "GetLevelProductsModel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>());
}
template <typename T> inline void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::SonyPlatformAdditionalContentModel_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
