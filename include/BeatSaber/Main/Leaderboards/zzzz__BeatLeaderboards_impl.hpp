#pragma once
// IWYU pragma private; include "BeatSaber/Main/Leaderboards/BeatLeaderboards.hpp"
#include "BeatSaber/Main/Leaderboards/zzzz__BeatLeaderboardsState_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Main/Leaderboards/zzzz__BeatLeaderboards_def.hpp"
#include "BeatSaber/Main/GraphQL/Models/zzzz__BSLeaderboardAroundMeModel_def.hpp"
#include "BeatSaber/Main/GraphQL/Models/zzzz__BSLeaderboardFriendsModel_def.hpp"
#include "BeatSaber/Main/GraphQL/Models/zzzz__BSLeaderboardHealthModel_def.hpp"
#include "BeatSaber/Main/GraphQL/Models/zzzz__BSLeaderboardTopNModel_def.hpp"
#include "BeatSaber/Main/GraphQL/Models/zzzz__BSUpsertLeaderboardEntryModel_def.hpp"
#include "BeatSaber/Main/GraphQL/Models/zzzz__BSUpsertUserModel_def.hpp"
#include "BeatSaber/Main/GraphQL/Models/zzzz__LeaderboardEntryWithRankModel_def.hpp"
#include "BeatSaber/Main/Leaderboards/zzzz__BeatLeaderboardsState_def.hpp"
#include "BeatSaber/Main/Leaderboards/zzzz__BeatLeaderboards_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLClient_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::*)(
    ::System::Object*, ::System::IntPtr)>(&::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x319d190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>* (
        ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::*)()>(&::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x319d4f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::*)(::System::AsyncCallback*, ::System::Object*)>(
        &::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x319d50c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>* (
        ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::*)(::System::IAsyncResult*)>(
        &::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x319d528;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>::get(), 15));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::Invoke() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*, false>(
      this, ___internal_method);
}
inline ::System::IAsyncResult* BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*, false>(
      this, ___internal_method, result);
}
inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction* BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::New_ctor(::System::Object* object,
                                                                                                                                                                              ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::BeatLeaderboards_FetchLeaderboardTypeFunction() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d::*)()>(
        &::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x319d614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                        ::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
        &::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x319db84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                        ::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                                   ::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                      ::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d::operator ::System::Runtime::CompilerServices::
    IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__8__1", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d::
    __c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*> __t__builder,
        ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0* __4__this, ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1* __8__1,
        ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d::
    __c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x319d18c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0._GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<
    ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>* (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::_GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x319d534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0*>::get(),
                                    "<GetLeaderboardAroundMeAsync>g__GetLeaderboardAroundMeInternal|0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards*& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards* const& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::__cordl_internal_set___4__this(::BeatSaber::Main::Leaderboards::BeatLeaderboards* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapKey& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::GlobalNamespace::BeatmapKey const& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::__cordl_internal_set_key(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
constexpr ::GlobalNamespace::GameplayModifierMask& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::__cordl_internal_get_modifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiers;
}
constexpr ::GlobalNamespace::GameplayModifierMask const& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::__cordl_internal_get_modifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiers;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::__cordl_internal_set_modifiers(::GlobalNamespace::GameplayModifierMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifiers = value;
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::_GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0*>::get(),
                                  "<GetLeaderboardAroundMeAsync>g__GetLeaderboardAroundMeInternal|0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*, false>(
      this, ___internal_method);
}
inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0* BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::BeatLeaderboards___c__DisplayClass13_0() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x319dac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1._GetLeaderboardAroundMeAsync_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1::*)(
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel*)>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1::_GetLeaderboardAroundMeAsync_b__1)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x319dc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1*>::get(), "<GetLeaderboardAroundMeAsync>b__1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel*>::
                                                get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*&
BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1::__cordl_internal_get_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>* const&
BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1::__cordl_internal_get_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1::__cordl_internal_set_result(
    ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1::_GetLeaderboardAroundMeAsync_b__1(
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1*>::get(), "<GetLeaderboardAroundMeAsync>b__1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel*>::
                                              get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1* BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1::BeatLeaderboards___c__DisplayClass13_1() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d::*)()>(
        &::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x319ddf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                                     ::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
        &::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x319e368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                        ::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                                   ::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                      ::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d::operator ::System::Runtime::CompilerServices::
    IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__8__1", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d::
    __c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*> __t__builder,
        ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0* __4__this, ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1* __8__1,
        ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d::
    __c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x319d3e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0._GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<
    ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>* (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::_GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x319dd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0*>::get(),
                                    "<GetLeaderboardFriendsAsync>g__GetLeaderboardFriendsInternal|0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards*& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards* const& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::__cordl_internal_set___4__this(::BeatSaber::Main::Leaderboards::BeatLeaderboards* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapKey& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::GlobalNamespace::BeatmapKey const& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::__cordl_internal_set_key(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
constexpr ::GlobalNamespace::GameplayModifierMask& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::__cordl_internal_get_modifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiers;
}
constexpr ::GlobalNamespace::GameplayModifierMask const& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::__cordl_internal_get_modifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiers;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::__cordl_internal_set_modifiers(::GlobalNamespace::GameplayModifierMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifiers = value;
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::_GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0*>::get(),
                                               "<GetLeaderboardFriendsAsync>g__GetLeaderboardFriendsInternal|0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*, false>(
      this, ___internal_method);
}
inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0* BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::BeatLeaderboards___c__DisplayClass14_0() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x319e2ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1._GetLeaderboardFriendsAsync_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1::*)(
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*)>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1::_GetLeaderboardFriendsAsync_b__1)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x319e3e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1*>::get(), "<GetLeaderboardFriendsAsync>b__1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>::
                                                get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*&
BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1::__cordl_internal_get_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>* const&
BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1::__cordl_internal_get_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1::__cordl_internal_set_result(
    ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1::_GetLeaderboardFriendsAsync_b__1(
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1*>::get(), "<GetLeaderboardFriendsAsync>b__1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>::
                                              get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1* BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1::BeatLeaderboards___c__DisplayClass14_1() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d::*)()>(
        &::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x319e5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                                     ::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (
    ::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x319eb20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                        ::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                                   ::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                      ::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d::operator ::System::Runtime::CompilerServices::
    IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__8__1", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d::
    __c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*> __t__builder,
        ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0* __4__this, ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1* __8__1,
        ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d::
    __c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x319d4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0._GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<
    ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>* (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0::_GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x319e4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0*>::get(),
                                                 "<GetLeaderboardTopNAsync>g__GetLeaderboardTopNInternal|0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapKey& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::GlobalNamespace::BeatmapKey const& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0::__cordl_internal_set_key(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
constexpr ::GlobalNamespace::GameplayModifierMask& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0::__cordl_internal_get_modifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiers;
}
constexpr ::GlobalNamespace::GameplayModifierMask const& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0::__cordl_internal_get_modifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiers;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0::__cordl_internal_set_modifiers(::GlobalNamespace::GameplayModifierMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifiers = value;
}
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards*& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards* const& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0::__cordl_internal_set___4__this(::BeatSaber::Main::Leaderboards::BeatLeaderboards* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0::_GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0*>::get(),
                                               "<GetLeaderboardTopNAsync>g__GetLeaderboardTopNInternal|0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*, false>(
      this, ___internal_method);
}
inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0* BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0::BeatLeaderboards___c__DisplayClass15_0() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x319ea74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1._GetLeaderboardTopNAsync_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1::*)(
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel*)>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1::_GetLeaderboardTopNAsync_b__1)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x319eba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1*>::get(), "<GetLeaderboardTopNAsync>b__1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*&
BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1::__cordl_internal_get_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>* const&
BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1::__cordl_internal_get_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1::__cordl_internal_set_result(
    ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1::_GetLeaderboardTopNAsync_b__1(
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1*>::get(), "<GetLeaderboardTopNAsync>b__1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1* BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1::BeatLeaderboards___c__DisplayClass15_1() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x319ecb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x319f288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards*", modifiers: "", def_value: Some("{}") }, CppParam { name: "fetchLeaderboard", ty:
// "::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17::BeatLeaderboards__GetLeaderboardAsync_d__17(
    int32_t __1__state,
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*> __t__builder,
    ::BeatSaber::Main::Leaderboards::BeatLeaderboards* __4__this, ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction* fetchLeaderboard,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->fetchLeaderboard = fetchLeaderboard;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17::BeatLeaderboards__GetLeaderboardAsync_d__17() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11::MoveNext)> {
  constexpr static std::size_t size = 0xea4;
  constexpr static std::size_t addrs = 0x319f308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x31a02ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11::BeatLeaderboards__InitializeAsync_d__11(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::Main::Leaderboards::BeatLeaderboards* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel*> __u__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel*> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11::BeatLeaderboards__InitializeAsync_d__11() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x688;
  constexpr static std::size_t addrs = 0x31a0358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x31a0a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "results", ty: "::GlobalNamespace::LevelCompletionResults*", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapKey", ty:
// "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "modifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::Main::Leaderboards::BeatLeaderboards* __4__this,
    ::GlobalNamespace::LevelCompletionResults* results, ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::GameplayModifiers* modifiers,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->results = results;
  this->beatmapKey = beatmapKey;
  this->modifiers = modifiers;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards.get_state
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Main::Leaderboards::BeatLeaderboardsState (::BeatSaber::Main::Leaderboards::BeatLeaderboards::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x319cde4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>::get(),
                                                                               "get_state", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards.Zenject_IInitializable_Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards::Zenject_IInitializable_Initialize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x319cdec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>::get(), "Zenject.IInitializable.Initialize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards.Zenject_ITickable_Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards::Zenject_ITickable_Tick)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x319cec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>::get(),
                                                                               "Zenject.ITickable.Tick", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards.InitializeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::Main::Leaderboards::BeatLeaderboards::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards::InitializeAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x319ce10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>::get(),
                                                                               "InitializeAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards.SubmitLeaderboardEntryAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::BeatSaber::Main::Leaderboards::BeatLeaderboards::*)(::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapKey, ::GlobalNamespace::GameplayModifiers*)>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards::SubmitLeaderboardEntryAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x319cfa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>::get(), "SubmitLeaderboardEntryAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards.GetLeaderboardAroundMeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>* (
        ::BeatSaber::Main::Leaderboards::BeatLeaderboards::*)(::GlobalNamespace::BeatmapKey, ::GlobalNamespace::GameplayModifierMask)>(
        &::BeatSaber::Main::Leaderboards::BeatLeaderboards::GetLeaderboardAroundMeAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x319d088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>::get(), "GetLeaderboardAroundMeAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards.GetLeaderboardFriendsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>* (
        ::BeatSaber::Main::Leaderboards::BeatLeaderboards::*)(::GlobalNamespace::BeatmapKey, ::GlobalNamespace::GameplayModifierMask)>(
        &::BeatSaber::Main::Leaderboards::BeatLeaderboards::GetLeaderboardFriendsAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x319d2e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>::get(), "GetLeaderboardFriendsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards.GetLeaderboardTopNAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>* (
        ::BeatSaber::Main::Leaderboards::BeatLeaderboards::*)(::GlobalNamespace::BeatmapKey, ::GlobalNamespace::GameplayModifierMask)>(
        &::BeatSaber::Main::Leaderboards::BeatLeaderboards::GetLeaderboardTopNAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x319d3ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>::get(), "GetLeaderboardTopNAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards.GetLeaderboardAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>* (
        ::BeatSaber::Main::Leaderboards::BeatLeaderboards::*)(::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*)>(
        &::BeatSaber::Main::Leaderboards::BeatLeaderboards::GetLeaderboardAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x319d1f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>::get(), "GetLeaderboardAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x319d4f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::OculusStudios::Platform::Core::IPlatform*& BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_get__platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr ::OculusStudios::Platform::Core::IPlatform* const& BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_get__platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SettingsManager*& BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::INetworkConfig*& BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_get__networkConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr ::GlobalNamespace::INetworkConfig* const& BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_get__networkConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_set__networkConfig(::GlobalNamespace::INetworkConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____networkConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboardsState& BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboardsState const& BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_set__state(::BeatSaber::Main::Leaderboards::BeatLeaderboardsState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
constexpr ::StringW& BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_get__userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr ::StringW const& BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_get__userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_set__userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*& BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_get__graphQLClient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphQLClient;
}
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* const& BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_get__graphQLClient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphQLClient;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_set__graphQLClient(::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____graphQLClient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task*& BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_get__initializationTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationTask;
}
constexpr ::System::Threading::Tasks::Task* const& BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_get__initializationTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationTask;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_set__initializationTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initializationTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaber::Main::Leaderboards::BeatLeaderboardsState BeatSaber::Main::Leaderboards::BeatLeaderboards::get_state() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>::get(),
                                                                             "get_state", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::Leaderboards::BeatLeaderboardsState, false>(this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards::Zenject_IInitializable_Initialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>::get(), "Zenject.IInitializable.Initialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards::Zenject_ITickable_Tick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>::get(),
                                                                             "Zenject.ITickable.Tick", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::Main::Leaderboards::BeatLeaderboards::InitializeAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>::get(),
                                                                             "InitializeAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::Main::Leaderboards::BeatLeaderboards::SubmitLeaderboardEntryAsync(::GlobalNamespace::LevelCompletionResults* results,
                                                                                                                      ::GlobalNamespace::BeatmapKey beatmapKey,
                                                                                                                      ::GlobalNamespace::GameplayModifiers* modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>::get(), "SubmitLeaderboardEntryAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, results, beatmapKey, modifiers);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
BeatSaber::Main::Leaderboards::BeatLeaderboards::GetLeaderboardAroundMeAsync(::GlobalNamespace::BeatmapKey key, ::GlobalNamespace::GameplayModifierMask modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>::get(), "GetLeaderboardAroundMeAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*, false>(
      this, ___internal_method, key, modifiers);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
BeatSaber::Main::Leaderboards::BeatLeaderboards::GetLeaderboardFriendsAsync(::GlobalNamespace::BeatmapKey key, ::GlobalNamespace::GameplayModifierMask modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>::get(), "GetLeaderboardFriendsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*, false>(
      this, ___internal_method, key, modifiers);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
BeatSaber::Main::Leaderboards::BeatLeaderboards::GetLeaderboardTopNAsync(::GlobalNamespace::BeatmapKey key, ::GlobalNamespace::GameplayModifierMask modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>::get(), "GetLeaderboardTopNAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*, false>(
      this, ___internal_method, key, modifiers);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
BeatSaber::Main::Leaderboards::BeatLeaderboards::GetLeaderboardAsync(::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction* fetchLeaderboard) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>::get(), "GetLeaderboardAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*, false>(
      this, ___internal_method, fetchLeaderboard);
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards* BeatSaber::Main::Leaderboards::BeatLeaderboards::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>());
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr BeatSaber::Main::Leaderboards::BeatLeaderboards::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* BeatSaber::Main::Leaderboards::BeatLeaderboards::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::ITickable"
constexpr BeatSaber::Main::Leaderboards::BeatLeaderboards::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ITickable"
constexpr ::Zenject::ITickable* BeatSaber::Main::Leaderboards::BeatLeaderboards::i___Zenject__ITickable() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards::BeatLeaderboards() {}
