#pragma once
// IWYU pragma private; include "BeatSaber\Main\Leaderboards\BeatLeaderboards.hpp"
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
#include "BGLib/Polyglot/zzzz__LocalizationModel_def.hpp"
#include "BeatSaber/GraphQL/zzzz__IGraphQLClientProvider_def.hpp"
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
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLClient_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32a20d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>* (
        ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::*)()>(&::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32a2444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::*)(::System::AsyncCallback*, ::System::Object*)>(
        &::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32a2458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>* (
        ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::*)(::System::IAsyncResult*)>(
        &::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32a2474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>(), 15 }));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*>(
      this, ___internal_method);
}
inline ::System::IAsyncResult* BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*>(
      this, ___internal_method, result);
}
inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction* BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::New_ctor(::System::Object* object,
                                                                                                                                                                              ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction::BeatLeaderboards_FetchLeaderboardTypeFunction() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::__c__DisplayClass12_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::BeatSaber::Main::Leaderboards::__c__DisplayClass12_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d::*)()>(
        &::BeatSaber::Main::Leaderboards::__c__DisplayClass12_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x32a2560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::__c__DisplayClass12_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d>(),
                                         { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::__c__DisplayClass12_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::BeatSaber::Main::Leaderboards::__c__DisplayClass12_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
        &::BeatSaber::Main::Leaderboards::__c__DisplayClass12_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32a2ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::__c__DisplayClass12_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d>(),
                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::__c__DisplayClass12_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::__c__DisplayClass12_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d>(),
                                       { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::__c__DisplayClass12_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::__c__DisplayClass12_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d>(),
                                       { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::Main::Leaderboards::__c__DisplayClass12_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d::operator ::System::Runtime::CompilerServices::
    IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::Main::Leaderboards::__c__DisplayClass12_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__8__1", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Main::Leaderboards::__c__DisplayClass12_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d::
    __c__DisplayClass12_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*> __t__builder,
        ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0* __4__this, ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1* __8__1,
        ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::__c__DisplayClass12_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d::
    __c__DisplayClass12_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32a20d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0._GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<
    ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>* (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0::_GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x32a2480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0*>(),
                                                                                           { "<GetLeaderboardAroundMeAsync>g__GetLeaderboardAroundMeInternal|0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards*& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards* const& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0::__cordl_internal_set___4__this(::BeatSaber::Main::Leaderboards::BeatLeaderboards* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::GlobalNamespace::BeatmapKey& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::GlobalNamespace::BeatmapKey const& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0::__cordl_internal_set_key(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
constexpr ::GlobalNamespace::GameplayModifierMask& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0::__cordl_internal_get_modifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiers;
}
constexpr ::GlobalNamespace::GameplayModifierMask const& BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0::__cordl_internal_get_modifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiers;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0::__cordl_internal_set_modifiers(::GlobalNamespace::GameplayModifierMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifiers = value;
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0::_GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0*>(),
                                                                                         { "<GetLeaderboardAroundMeAsync>g__GetLeaderboardAroundMeInternal|0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*>(
      this, ___internal_method);
}
inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0* BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_0::BeatLeaderboards___c__DisplayClass12_0() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32a2a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1._GetLeaderboardAroundMeAsync_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1::*)(
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_DataEnvironmentModel_FetchXOCBeatGamesEnvironmentPlayerRootModel_BSLeaderboardAroundMeModel_NodesModel*)>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1::_GetLeaderboardAroundMeAsync_b__1)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x32a2b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1*>(),
            { "<GetLeaderboardAroundMeAsync>b__1",
              {},
              { ::i2c::type_of<
                  ::BeatSaber::Main::GraphQL::Models::
                      LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_DataEnvironmentModel_FetchXOCBeatGamesEnvironmentPlayerRootModel_BSLeaderboardAroundMeModel_NodesModel*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*&
BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1::__cordl_internal_get_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>* const&
BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1::__cordl_internal_get_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1::__cordl_internal_set_result(
    ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___result = value;
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1::_GetLeaderboardAroundMeAsync_b__1(
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_DataEnvironmentModel_FetchXOCBeatGamesEnvironmentPlayerRootModel_BSLeaderboardAroundMeModel_NodesModel*
        node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1*>(),
          { "<GetLeaderboardAroundMeAsync>b__1",
            {},
            { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::
                                 LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_DataEnvironmentModel_FetchXOCBeatGamesEnvironmentPlayerRootModel_BSLeaderboardAroundMeModel_NodesModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1* BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass12_1::BeatLeaderboards___c__DisplayClass12_1() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d::*)()>(
        &::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x32a2d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d>(),
                                         { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
        &::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32a32e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d>(),
                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d>(),
                                       { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d>(),
                                       { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d::operator ::System::Runtime::CompilerServices::
    IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__8__1", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d::
    __c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*> __t__builder,
        ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0* __4__this, ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1* __8__1,
        ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d::
    __c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32a2330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0._GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<
    ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>* (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::_GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x32a2c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0*>(),
                                                                                           { "<GetLeaderboardFriendsAsync>g__GetLeaderboardFriendsInternal|0", {}, {} })));
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
  this->_____4__this = value;
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
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::_GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0*>(),
                                                                                         { "<GetLeaderboardFriendsAsync>g__GetLeaderboardFriendsInternal|0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*>(
      this, ___internal_method);
}
inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0* BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0::BeatLeaderboards___c__DisplayClass13_0() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32a3220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1._GetLeaderboardFriendsAsync_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1::*)(
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_DataEnvironmentModel_FetchXOCBeatGamesEnvironmentPlayerRootModel_BSLeaderboardFriendsModel_NodesModel*)>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1::_GetLeaderboardFriendsAsync_b__1)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x32a3364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1*>(),
            { "<GetLeaderboardFriendsAsync>b__1",
              {},
              { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::
                                   LeaderboardEntriesForUserFriendsModel_BeatmapModel_DataEnvironmentModel_FetchXOCBeatGamesEnvironmentPlayerRootModel_BSLeaderboardFriendsModel_NodesModel*>() } })));
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
  this->___result = value;
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1::_GetLeaderboardFriendsAsync_b__1(
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_DataEnvironmentModel_FetchXOCBeatGamesEnvironmentPlayerRootModel_BSLeaderboardFriendsModel_NodesModel*
        node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1*>(),
          { "<GetLeaderboardFriendsAsync>b__1",
            {},
            { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::
                                 LeaderboardEntriesForUserFriendsModel_BeatmapModel_DataEnvironmentModel_FetchXOCBeatGamesEnvironmentPlayerRootModel_BSLeaderboardFriendsModel_NodesModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1* BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1::BeatLeaderboards___c__DisplayClass13_1() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d::*)()>(
    &::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x32a3558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d>(),
                                                { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32a3ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d>(),
                                                { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d>(),
                                              { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d>(),
                                              { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d::operator ::System::Runtime::CompilerServices::
    IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__8__1", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d::
    __c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*> __t__builder,
        ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0* __4__this, ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1* __8__1,
        ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d::
    __c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32a243c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0._GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<
    ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>* (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::_GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x32a3478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0*>(),
                                                                                           { "<GetLeaderboardTopNAsync>g__GetLeaderboardTopNInternal|0", {}, {} })));
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
  this->_____4__this = value;
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
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::_GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0*>(),
                                                                                         { "<GetLeaderboardTopNAsync>g__GetLeaderboardTopNInternal|0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*>(
      this, ___internal_method);
}
inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0* BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0::BeatLeaderboards___c__DisplayClass14_0() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32a3a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1._GetLeaderboardTopNAsync_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1::*)(
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_DataEnvironmentModel_FetchXOCBeatGamesEnvironmentPlayerRootModel_BSLeaderboardTopNModel_NodesModel*)>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1::_GetLeaderboardTopNAsync_b__1)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x32a3b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1*>(),
                         { "<GetLeaderboardTopNAsync>b__1",
                           {},
                           { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::
                                                LeaderboardEntriesPageModel_BeatmapModel_DataEnvironmentModel_FetchXOCBeatGamesEnvironmentPlayerRootModel_BSLeaderboardTopNModel_NodesModel*>() } })));
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
  this->___result = value;
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1::_GetLeaderboardTopNAsync_b__1(
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_DataEnvironmentModel_FetchXOCBeatGamesEnvironmentPlayerRootModel_BSLeaderboardTopNModel_NodesModel* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1*>(),
                          { "<GetLeaderboardTopNAsync>b__1",
                            {},
                            { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::
                                                 LeaderboardEntriesPageModel_BeatmapModel_DataEnvironmentModel_FetchXOCBeatGamesEnvironmentPlayerRootModel_BSLeaderboardTopNModel_NodesModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1* BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1::BeatLeaderboards___c__DisplayClass14_1() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__16::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x32a3c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__16>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__16::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32a4228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__16>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__16>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__16>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards*", modifiers: "", def_value: Some("{}") }, CppParam { name: "fetchLeaderboard", ty:
// "::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__16::BeatLeaderboards__GetLeaderboardAsync_d__16(
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
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__16::BeatLeaderboards__GetLeaderboardAsync_d__16() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__10.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__10::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__10::MoveNext)> {
  constexpr static std::size_t size = 0xcb4;
  constexpr static std::size_t addrs = 0x32a42a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__10>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__10::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x32a5094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__10>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__10::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__10>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__10>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__10::BeatLeaderboards__InitializeAsync_d__10(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::Main::Leaderboards::BeatLeaderboards* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel*> __u__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel*> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__10::BeatLeaderboards__InitializeAsync_d__10() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__11.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__11::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x698;
  constexpr static std::size_t addrs = 0x32a5100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__11>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__11.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__11::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x32a585c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__11>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__11::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__11>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__11>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "results", ty: "::GlobalNamespace::LevelCompletionResults*", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapKey", ty:
// "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "modifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__11::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__11(
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
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__11::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__11() {}
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards.get_state
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::Leaderboards::BeatLeaderboardsState (::BeatSaber::Main::Leaderboards::BeatLeaderboards::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a1e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>(), { "get_state", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards.Zenject_IInitializable_Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards::Zenject_IInitializable_Initialize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x32a1e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>(), { "Zenject.IInitializable.Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards.InitializeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::Main::Leaderboards::BeatLeaderboards::*)()>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards::InitializeAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x32a1e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>(), { "InitializeAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards.SubmitLeaderboardEntryAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::BeatSaber::Main::Leaderboards::BeatLeaderboards::*)(::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapKey, ::GlobalNamespace::GameplayModifiers*)>(
    &::BeatSaber::Main::Leaderboards::BeatLeaderboards::SubmitLeaderboardEntryAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x32a1ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>(),
                                                             { "SubmitLeaderboardEntryAsync",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(),
                                                                 ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards.GetLeaderboardAroundMeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>* (
        ::BeatSaber::Main::Leaderboards::BeatLeaderboards::*)(::GlobalNamespace::BeatmapKey, ::GlobalNamespace::GameplayModifierMask)>(
        &::BeatSaber::Main::Leaderboards::BeatLeaderboards::GetLeaderboardAroundMeAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x32a1fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>(),
                                         { "GetLeaderboardAroundMeAsync", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards.GetLeaderboardFriendsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>* (
        ::BeatSaber::Main::Leaderboards::BeatLeaderboards::*)(::GlobalNamespace::BeatmapKey, ::GlobalNamespace::GameplayModifierMask)>(
        &::BeatSaber::Main::Leaderboards::BeatLeaderboards::GetLeaderboardFriendsAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x32a2228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>(),
                                                { "GetLeaderboardFriendsAsync", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards.GetLeaderboardTopNAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>* (
        ::BeatSaber::Main::Leaderboards::BeatLeaderboards::*)(::GlobalNamespace::BeatmapKey, ::GlobalNamespace::GameplayModifierMask)>(
        &::BeatSaber::Main::Leaderboards::BeatLeaderboards::GetLeaderboardTopNAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x32a2334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>(),
                                                { "GetLeaderboardTopNAsync", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards.GetLeaderboardAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>* (
        ::BeatSaber::Main::Leaderboards::BeatLeaderboards::*)(::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*)>(
        &::BeatSaber::Main::Leaderboards::BeatLeaderboards::GetLeaderboardAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x32a213c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>(),
                                                             { "GetLeaderboardAsync", {}, { ::i2c::type_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::BeatLeaderboards._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::BeatLeaderboards::*)()>(&::BeatSaber::Main::Leaderboards::BeatLeaderboards::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32a2440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BGLib::Polyglot::LocalizationModel*& BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_get__localizationModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizationModel;
}
constexpr ::BGLib::Polyglot::LocalizationModel* const& BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_get__localizationModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizationModel;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_set__localizationModel(::BGLib::Polyglot::LocalizationModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localizationModel = value;
}
constexpr ::BeatSaber::GraphQL::IGraphQLClientProvider*& BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_get__graphQlClientProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphQlClientProvider;
}
constexpr ::BeatSaber::GraphQL::IGraphQLClientProvider* const& BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_get__graphQlClientProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphQlClientProvider;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_set__graphQlClientProvider(::BeatSaber::GraphQL::IGraphQLClientProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____graphQlClientProvider = value;
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
  this->____userId = value;
}
constexpr ::StringW& BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_get__environmentPlayerRootId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentPlayerRootId;
}
constexpr ::StringW const& BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_get__environmentPlayerRootId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentPlayerRootId;
}
constexpr void BeatSaber::Main::Leaderboards::BeatLeaderboards::__cordl_internal_set__environmentPlayerRootId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentPlayerRootId = value;
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
  this->____initializationTask = value;
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
  this->____graphQLClient = value;
}
inline ::BeatSaber::Main::Leaderboards::BeatLeaderboardsState BeatSaber::Main::Leaderboards::BeatLeaderboards::get_state() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>(), { "get_state", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::Leaderboards::BeatLeaderboardsState>(this, ___internal_method);
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards::Zenject_IInitializable_Initialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>(), { "Zenject.IInitializable.Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::Main::Leaderboards::BeatLeaderboards::InitializeAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>(), { "InitializeAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::Main::Leaderboards::BeatLeaderboards::SubmitLeaderboardEntryAsync(::GlobalNamespace::LevelCompletionResults* results,
                                                                                                                      ::GlobalNamespace::BeatmapKey beatmapKey,
                                                                                                                      ::GlobalNamespace::GameplayModifiers* modifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>(),
                                                           { "SubmitLeaderboardEntryAsync",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(),
                                                               ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, results, beatmapKey, modifiers);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
BeatSaber::Main::Leaderboards::BeatLeaderboards::GetLeaderboardAroundMeAsync(::GlobalNamespace::BeatmapKey key, ::GlobalNamespace::GameplayModifierMask modifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>(),
                                              { "GetLeaderboardAroundMeAsync", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*>(
      this, ___internal_method, key, modifiers);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
BeatSaber::Main::Leaderboards::BeatLeaderboards::GetLeaderboardFriendsAsync(::GlobalNamespace::BeatmapKey key, ::GlobalNamespace::GameplayModifierMask modifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>(),
                                              { "GetLeaderboardFriendsAsync", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*>(
      this, ___internal_method, key, modifiers);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
BeatSaber::Main::Leaderboards::BeatLeaderboards::GetLeaderboardTopNAsync(::GlobalNamespace::BeatmapKey key, ::GlobalNamespace::GameplayModifierMask modifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>(),
                                              { "GetLeaderboardTopNAsync", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*>(
      this, ___internal_method, key, modifiers);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
BeatSaber::Main::Leaderboards::BeatLeaderboards::GetLeaderboardAsync(::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction* fetchLeaderboard) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>(),
                                                           { "GetLeaderboardAsync", {}, { ::i2c::type_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*>(
      this, ___internal_method, fetchLeaderboard);
}
inline void BeatSaber::Main::Leaderboards::BeatLeaderboards::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards* BeatSaber::Main::Leaderboards::BeatLeaderboards::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::Leaderboards::BeatLeaderboards*>());
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr BeatSaber::Main::Leaderboards::BeatLeaderboards::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* BeatSaber::Main::Leaderboards::BeatLeaderboards::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards::BeatLeaderboards() {}
