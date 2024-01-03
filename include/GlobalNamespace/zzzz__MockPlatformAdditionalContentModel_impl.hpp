#pragma once
#include "GlobalNamespace/zzzz__AdditionalContentModel_impl.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlatformAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "GlobalNamespace/zzzz__IsPackBetterBuyThanLevelResult_def.hpp"
#include "GlobalNamespace/zzzz__MockPlatformAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__MockPlatformAdditionalContentModelInitialDataSO_def.hpp"
#include "GlobalNamespace/zzzz__AlwaysOwnedContentContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__MockPlatformEntitlement_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::*)()>(
    &::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2234f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22351ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "__4__this", ty: "::GlobalNamespace::MockPlatformAdditionalContentModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder, ::System::Threading::CancellationToken token,
    ::StringW levelId, ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this, ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->token = token;
  this->levelId = levelId;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8() {}
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlatformAdditionalContentModel::*)(
    ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*, ::GlobalNamespace::AlwaysOwnedContentContainerSO*)>(&::GlobalNamespace::MockPlatformAdditionalContentModel::_ctor)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x223440c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AlwaysOwnedContentContainerSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModel.InvalidateDataInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlatformAdditionalContentModel::*)()>(
    &::GlobalNamespace::MockPlatformAdditionalContentModel::InvalidateDataInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2234a24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModel.GetLevelEntitlementStatusInternalAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (
    ::GlobalNamespace::MockPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::MockPlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2234a28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModel.GetPackEntitlementStatusInternalAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (
    ::GlobalNamespace::MockPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::MockPlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2234b00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModel.IsPackBetterBuyThanLevelAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* (
    ::GlobalNamespace::MockPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::MockPlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2234bd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModel.OpenLevelProductStoreAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* (
    ::GlobalNamespace::MockPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::MockPlatformAdditionalContentModel::OpenLevelProductStoreAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2234c68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModel.BuyLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlatformAdditionalContentModel::*)(::StringW)>(
    &::GlobalNamespace::MockPlatformAdditionalContentModel::BuyLevel)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2234d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(), "BuyLevel",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModel.OpenLevelPackProductStoreAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* (
    ::GlobalNamespace::MockPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::MockPlatformAdditionalContentModel::OpenLevelPackProductStoreAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2234e94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(), 17));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>*& GlobalNamespace::MockPlatformAdditionalContentModel::__get__levelsEntitlements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelsEntitlements;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>*> const&
GlobalNamespace::MockPlatformAdditionalContentModel::__get__levelsEntitlements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelsEntitlements;
}
constexpr void
GlobalNamespace::MockPlatformAdditionalContentModel::__set__levelsEntitlements(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelsEntitlements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>*& GlobalNamespace::MockPlatformAdditionalContentModel::__get__levelPacksEntitlements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPacksEntitlements;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>*> const&
GlobalNamespace::MockPlatformAdditionalContentModel::__get__levelPacksEntitlements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPacksEntitlements;
}
constexpr void
GlobalNamespace::MockPlatformAdditionalContentModel::__set__levelPacksEntitlements(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPacksEntitlements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MockPlatformAdditionalContentModel::__get__packBetterBuyThanLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packBetterBuyThanLevel;
}
constexpr bool const& GlobalNamespace::MockPlatformAdditionalContentModel::__get__packBetterBuyThanLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packBetterBuyThanLevel;
}
constexpr void GlobalNamespace::MockPlatformAdditionalContentModel::__set__packBetterBuyThanLevel(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packBetterBuyThanLevel = value;
}
inline ::GlobalNamespace::MockPlatformAdditionalContentModel*
GlobalNamespace::MockPlatformAdditionalContentModel::New_ctor(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* mockPlatformAdditionalContentModelInitialData,
                                                              ::GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MockPlatformAdditionalContentModel*>(mockPlatformAdditionalContentModelInitialData, alwaysOwnedContentContainer));
}
inline void GlobalNamespace::MockPlatformAdditionalContentModel::_ctor(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* mockPlatformAdditionalContentModelInitialData,
                                                                       ::GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AlwaysOwnedContentContainerSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mockPlatformAdditionalContentModelInitialData, alwaysOwnedContentContainer);
}
inline void GlobalNamespace::MockPlatformAdditionalContentModel::InvalidateDataInternal() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*
GlobalNamespace::MockPlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*, false>(this, ___internal_method, levelId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*
GlobalNamespace::MockPlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync(::StringW levelPackId, ::System::Threading::CancellationToken token) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*, false>(this, ___internal_method, levelPackId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>*
GlobalNamespace::MockPlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>*, false>(this, ___internal_method, levelPackId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*
GlobalNamespace::MockPlatformAdditionalContentModel::OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken token) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*, false>(this, ___internal_method, levelId, token);
}
inline void GlobalNamespace::MockPlatformAdditionalContentModel::BuyLevel(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(), "BuyLevel",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelId);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*
GlobalNamespace::MockPlatformAdditionalContentModel::OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken token) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*, false>(this, ___internal_method, levelPackId, token);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlatformAdditionalContentModel::MockPlatformAdditionalContentModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
