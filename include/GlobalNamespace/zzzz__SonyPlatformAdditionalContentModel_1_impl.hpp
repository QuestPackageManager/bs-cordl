#pragma once
#include "GlobalNamespace/zzzz__AdditionalContentModel_impl.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_impl.hpp"
#include "GlobalNamespace/zzzz__IsPackBetterBuyThanLevelResult_impl.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__IsPackBetterBuyThanLevelResult_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__SonyLevelProductModelSO_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "GlobalNamespace/zzzz__AlwaysOwnedContentContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>>::get(), "MoveNext",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void
GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::
    __SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11(
        int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
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
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<
    T>::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>>::get(), "MoveNext",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void
GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::
    __SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12(
        int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
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
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<
    T>::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
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
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
    ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->levelPackId = levelPackId;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult> __t__builder,
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
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void
GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_originalPack_5__2", ty:
// "::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_levelPackRedirectionData_5__3", ty:
// "::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::StringW packId,
    ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData* _originalPack_5__2,
    ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData* _levelPackRedirectionData_5__3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->packId = packId;
  this->cancellationToken = cancellationToken;
  this->_originalPack_5__2 = _originalPack_5__2;
  this->_levelPackRedirectionData_5__3 = _levelPackRedirectionData_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20(
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
template <typename T> constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21(
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
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21() {}
template <typename T> constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__entitlementsLabels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____entitlementsLabels;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const&
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__entitlementsLabels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____entitlementsLabels;
}
template <typename T> constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__entitlementsLabels(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entitlementsLabels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Threading::SemaphoreSlim*& GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__semaphoreSlim() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____semaphoreSlim;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__semaphoreSlim() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____semaphoreSlim;
}
template <typename T> constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__semaphoreSlim(::System::Threading::SemaphoreSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____semaphoreSlim)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr bool& GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__isDataValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____isDataValid;
}
template <typename T> constexpr bool const& GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__isDataValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____isDataValid;
}
template <typename T> constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__isDataValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____isDataValid = value;
}
template <typename T> constexpr ::GlobalNamespace::ISonyCommerceHelper*& GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__sonyCommerceHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sonyCommerceHelper;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISonyCommerceHelper*> const& GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__sonyCommerceHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sonyCommerceHelper;
}
template <typename T> constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__sonyCommerceHelper(::GlobalNamespace::ISonyCommerceHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sonyCommerceHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>*&
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__levelIdToProductData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____levelIdToProductData;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>*> const&
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__levelIdToProductData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____levelIdToProductData;
}
template <typename T>
constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__levelIdToProductData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelIdToProductData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>*&
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__levelPackIdToProductData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____levelPackIdToProductData;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>*> const&
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__levelPackIdToProductData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____levelPackIdToProductData;
}
template <typename T>
constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__levelPackIdToProductData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackIdToProductData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>*&
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__levelPackRedirectionData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____levelPackRedirectionData;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>*> const&
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__levelPackRedirectionData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____levelPackRedirectionData;
}
template <typename T>
constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__levelPackRedirectionData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackRedirectionData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::New_ctor(T levelPackProductsData, ::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper,
                                                                   ::GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>(levelPackProductsData, sonyCommerceHelper, alwaysOwnedContentContainer));
}
template <typename T>
inline void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::_ctor(T levelPackProductsData, ::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper,
                                                                            ::GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISonyCommerceHelper*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AlwaysOwnedContentContainerSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelPackProductsData, sonyCommerceHelper, alwaysOwnedContentContainer);
}
template <typename T> inline ::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::GetLevelProductData(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(), "GetLevelProductData",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*, false>(this, ___internal_method, levelId);
}
template <typename T>
inline ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::GetLevelPackProductData(::StringW levelPackId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(), "GetLevelPackProductData",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*, false>(this, ___internal_method, levelPackId);
}
template <typename T> inline void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::InvalidateDataInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(),
                                                                             "InvalidateDataInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(), "GetLevelEntitlementStatusInternalAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*, false>(this, ___internal_method, levelId, cancellationToken);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::GetPackEntitlementStatusInternalAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(), "GetPackEntitlementStatusInternalAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*, false>(this, ___internal_method, levelPackId, cancellationToken);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(), "OpenLevelProductStoreAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*, false>(this, ___internal_method, levelId, cancellationToken);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(), "OpenLevelPackProductStoreAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*, false>(this, ___internal_method, levelPackId, cancellationToken);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>*
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(), "IsPackBetterBuyThanLevelAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>*, false>(this, ___internal_method, levelPackId, cancellationToken);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<::StringW>*
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::GetRedirectedLevelPackProductData(::StringW packId, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(), "GetRedirectedLevelPackProductData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, packId, cancellationToken);
}
template <typename T>
inline ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::GetLevelPackRedirectionData(::StringW levelPackId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(), "GetLevelPackRedirectionData",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*, false>(this, ___internal_method, levelPackId);
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
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::SonyPlatformAdditionalContentModel_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
