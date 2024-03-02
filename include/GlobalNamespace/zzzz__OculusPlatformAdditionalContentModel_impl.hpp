#pragma once
#include "GlobalNamespace/zzzz__AdditionalContentModel_impl.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OculusPlatformAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__IsPackBetterBuyThanLevelResult_def.hpp"
#include "GlobalNamespace/zzzz__OculusLevelProductCollectionModel_def.hpp"
#include "GlobalNamespace/zzzz__OculusPlatformAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetailsList_def.hpp"
#include "Oculus/Platform/Models/zzzz__PurchaseList_def.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__5::*)()>(
    &::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x12a225c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__5>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__5::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12a254c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__5>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__5::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__5>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__5>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_originalPack_5__2", ty:
// "::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_levelPackRedirectionData_5__3", ty:
// "::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__5::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__5(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW packId,
    ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData* _originalPack_5__2,
    ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData* _levelPackRedirectionData_5__3,
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
constexpr ::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__5::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__5() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7::*)()>(
    &::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x12a25a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7>::get(), "MoveNext",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12a27b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7>::get(), "SetStateMachine",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7>::get(),
                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7>::get(),
                                 "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
    ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelId,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->levelId = levelId;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7::
    __OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8::*)()>(
    &::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x12a280c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8>::get(), "MoveNext",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12a2a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8>::get(), "SetStateMachine",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
    ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW packId,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->packId = packId;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8::
    __OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__9::*)()>(
    &::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x12a2a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__9>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__9.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__9::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12a2e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__9>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__9::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__9>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__9>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__9::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__9(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this,
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
constexpr ::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__9::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__9() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10::*)()>(
    &::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x12a2e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12a31d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
    ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW levelId, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->levelId = levelId;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11::*)()>(
    &::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x12a3228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12a3938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
    ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->levelPackId = levelPackId;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::*)()>(
    &::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12a1c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0._LaunchCheckoutFlow_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*)>(&::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::_LaunchCheckoutFlow_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12a3990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0*>::get(), "<LaunchCheckoutFlow>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>*&
GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::__cordl_internal_get_launchCheckoutFlowTaskSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___launchCheckoutFlowTaskSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>*> const&
GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::__cordl_internal_get_launchCheckoutFlowTaskSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___launchCheckoutFlowTaskSource;
}
constexpr void GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::__cordl_internal_set_launchCheckoutFlowTaskSource(
    ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___launchCheckoutFlowTaskSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0* GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0*>());
}
inline void GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::_LaunchCheckoutFlow_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0*>::get(), "<LaunchCheckoutFlow>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::*)()>(
    &::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12a1de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0._CheckForNewEntitlementsAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*)>(
        &::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::_CheckForNewEntitlementsAsync_b__0)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x12a39e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0*>::get(), "<CheckForNewEntitlementsAsync>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0._CheckForNewEntitlementsAsync_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>*)>(
        &::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::_CheckForNewEntitlementsAsync_b__1)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x12a3f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0*>::get(), "<CheckForNewEntitlementsAsync>b__1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::__cordl_internal_get_cancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::__cordl_internal_get_cancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
constexpr void GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancellationToken = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>*&
GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::__cordl_internal_get_getViewerPurchasesTaskSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getViewerPurchasesTaskSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>*> const&
GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::__cordl_internal_get_getViewerPurchasesTaskSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getViewerPurchasesTaskSource;
}
constexpr void GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::__cordl_internal_set_getViewerPurchasesTaskSource(
    ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getViewerPurchasesTaskSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel*& GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformAdditionalContentModel*> const&
GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::__cordl_internal_set___4__this(::GlobalNamespace::OculusPlatformAdditionalContentModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PurchaseList*>*&
GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::__cordl_internal_get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PurchaseList*>*> const&
GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::__cordl_internal_get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr void GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::__cordl_internal_set___9__1(
    ::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PurchaseList*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0* GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0*>());
}
inline void GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::_CheckForNewEntitlementsAsync_b__0(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>* getListMsg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0*>::get(), "<CheckForNewEntitlementsAsync>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, getListMsg);
}
inline void GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::_CheckForNewEntitlementsAsync_b__1(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>* getPurchasesMsg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0*>::get(), "<CheckForNewEntitlementsAsync>b__1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, getPurchasesMsg);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0::__OculusPlatformAdditionalContentModel____c__DisplayClass14_0() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.GetLevelProductData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData* (
    ::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW)>(&::GlobalNamespace::OculusPlatformAdditionalContentModel::GetLevelProductData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x12a14a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), "GetLevelProductData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.GetRedirectedLevelPackProductData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
        &::GlobalNamespace::OculusPlatformAdditionalContentModel::GetRedirectedLevelPackProductData)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x12a14bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(),
                                                 "GetRedirectedLevelPackProductData", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.InvalidateDataInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)()>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::InvalidateDataInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12a15c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.GetLevelEntitlementStatusInternalAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (
    ::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x12a15cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.GetPackEntitlementStatusInternalAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (
    ::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x12a16d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.IsDataValidAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::OculusPlatformAdditionalContentModel::IsDataValidAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x12a17d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), "IsDataValidAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.OpenLevelProductStoreAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* (
    ::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::OpenLevelProductStoreAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x12a18d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.OpenLevelPackProductStoreAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* (
    ::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::OpenLevelPackProductStoreAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x12a19d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.LaunchCheckoutFlow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* (*)(::StringW)>(
        &::GlobalNamespace::OculusPlatformAdditionalContentModel::LaunchCheckoutFlow)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x12a1ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), "LaunchCheckoutFlow",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.IsPackBetterBuyThanLevelAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* (
    ::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x12a1c2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.CheckForNewEntitlementsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>* (
    ::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::OculusPlatformAdditionalContentModel::CheckForNewEntitlementsAsync)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x12a1c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), "CheckForNewEntitlementsAsync",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.HasLevelEntitlement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::HasLevelEntitlement)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x12a1de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), "HasLevelEntitlement",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.HasLevelPackEntitlement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::HasLevelPackEntitlement)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x12a1e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), "HasLevelPackEntitlement",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)()>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x12a21ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OculusLevelProductCollectionModel*& GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_get__oculusLevelProductCollectionModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusLevelProductCollectionModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusLevelProductCollectionModel*> const&
GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_get__oculusLevelProductCollectionModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusLevelProductCollectionModel;
}
constexpr void GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_set__oculusLevelProductCollectionModel(::GlobalNamespace::OculusLevelProductCollectionModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____oculusLevelProductCollectionModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_get__entitlementsSKU() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementsSKU;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const&
GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_get__entitlementsSKU() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementsSKU;
}
constexpr void GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_set__entitlementsSKU(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entitlementsSKU)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::SemaphoreSlim*& GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_get__semaphoreSlim() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____semaphoreSlim;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_get__semaphoreSlim() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____semaphoreSlim;
}
constexpr void GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_set__semaphoreSlim(::System::Threading::SemaphoreSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____semaphoreSlim)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_get__isDataValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDataValid;
}
constexpr bool const& GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_get__isDataValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDataValid;
}
constexpr void GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_set__isDataValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDataValid = value;
}
inline ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData* GlobalNamespace::OculusPlatformAdditionalContentModel::GetLevelProductData(::StringW GetLevelProductData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), "GetLevelProductData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*, false>(this, ___internal_method, GetLevelProductData);
}
inline ::System::Threading::Tasks::Task_1<::StringW>*
GlobalNamespace::OculusPlatformAdditionalContentModel::GetRedirectedLevelPackProductData(::StringW packId, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(),
                                               "GetRedirectedLevelPackProductData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, packId, cancellationToken);
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel::InvalidateDataInternal() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*
GlobalNamespace::OculusPlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*, false>(this, ___internal_method, levelId, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*
GlobalNamespace::OculusPlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync(::StringW packId, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*, false>(this, ___internal_method, packId, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::OculusPlatformAdditionalContentModel::IsDataValidAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), "IsDataValidAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*
GlobalNamespace::OculusPlatformAdditionalContentModel::OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*, false>(this, ___internal_method, levelId, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*
GlobalNamespace::OculusPlatformAdditionalContentModel::OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*, false>(this, ___internal_method, levelPackId, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>*
GlobalNamespace::OculusPlatformAdditionalContentModel::LaunchCheckoutFlow(::StringW sku) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), "LaunchCheckoutFlow",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>*, false>(nullptr, ___internal_method, sku);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>*
GlobalNamespace::OculusPlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>*, false>(this, ___internal_method, levelPackId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>*
GlobalNamespace::OculusPlatformAdditionalContentModel::CheckForNewEntitlementsAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), "CheckForNewEntitlementsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>*, false>(this, ___internal_method,
                                                                                                                                                                cancellationToken);
}
inline bool GlobalNamespace::OculusPlatformAdditionalContentModel::HasLevelEntitlement(::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), "HasLevelEntitlement",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, levelId);
}
inline bool GlobalNamespace::OculusPlatformAdditionalContentModel::HasLevelPackEntitlement(::StringW levelPackId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(), "HasLevelPackEntitlement",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, levelPackId);
}
inline ::GlobalNamespace::OculusPlatformAdditionalContentModel* GlobalNamespace::OculusPlatformAdditionalContentModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OculusPlatformAdditionalContentModel*>());
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel::OculusPlatformAdditionalContentModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
