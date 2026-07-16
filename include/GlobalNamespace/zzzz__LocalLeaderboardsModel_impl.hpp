#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalLeaderboardsModel.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsSettingsSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType::LocalLeaderboardsModel_LeaderboardType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType::LocalLeaderboardsModel_LeaderboardType() {}
constexpr ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType GlobalNamespace::LocalLeaderboardsModel_LeaderboardType::AllTime{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType GlobalNamespace::LocalLeaderboardsModel_LeaderboardType::Daily{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel_ScoreData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel_ScoreData::*)()>(&::GlobalNamespace::LocalLeaderboardsModel_ScoreData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3755494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LocalLeaderboardsModel_ScoreData::__cordl_internal_get__score() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____score;
}
constexpr int32_t const& GlobalNamespace::LocalLeaderboardsModel_ScoreData::__cordl_internal_get__score() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____score;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel_ScoreData::__cordl_internal_set__score(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____score = value;
}
constexpr ::StringW& GlobalNamespace::LocalLeaderboardsModel_ScoreData::__cordl_internal_get__playerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerName;
}
constexpr ::StringW const& GlobalNamespace::LocalLeaderboardsModel_ScoreData::__cordl_internal_get__playerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerName;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel_ScoreData::__cordl_internal_set__playerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerName = value;
}
constexpr bool& GlobalNamespace::LocalLeaderboardsModel_ScoreData::__cordl_internal_get__fullCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullCombo;
}
constexpr bool const& GlobalNamespace::LocalLeaderboardsModel_ScoreData::__cordl_internal_get__fullCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullCombo;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel_ScoreData::__cordl_internal_set__fullCombo(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullCombo = value;
}
constexpr int64_t& GlobalNamespace::LocalLeaderboardsModel_ScoreData::__cordl_internal_get__timestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timestamp;
}
constexpr int64_t const& GlobalNamespace::LocalLeaderboardsModel_ScoreData::__cordl_internal_get__timestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timestamp;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel_ScoreData::__cordl_internal_set__timestamp(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timestamp = value;
}
inline void GlobalNamespace::LocalLeaderboardsModel_ScoreData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalLeaderboardsModel_ScoreData* GlobalNamespace::LocalLeaderboardsModel_ScoreData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardsModel_ScoreData::LocalLeaderboardsModel_ScoreData() {}
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData::*)()>(&::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3755490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LocalLeaderboardsModel_LeaderboardData::__cordl_internal_get__leaderboardId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardId;
}
constexpr ::StringW const& GlobalNamespace::LocalLeaderboardsModel_LeaderboardData::__cordl_internal_get__leaderboardId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardId;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel_LeaderboardData::__cordl_internal_set__leaderboardId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leaderboardId = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>*& GlobalNamespace::LocalLeaderboardsModel_LeaderboardData::__cordl_internal_get__scores() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scores;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>* const&
GlobalNamespace::LocalLeaderboardsModel_LeaderboardData::__cordl_internal_get__scores() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scores;
}
constexpr void
GlobalNamespace::LocalLeaderboardsModel_LeaderboardData::__cordl_internal_set__scores(::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scores = value;
}
inline void GlobalNamespace::LocalLeaderboardsModel_LeaderboardData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData* GlobalNamespace::LocalLeaderboardsModel_LeaderboardData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData::LocalLeaderboardsModel_LeaderboardData() {}
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData::*)()>(
    &::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3755cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*&
GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData::__cordl_internal_get__leaderboardsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardsData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* const&
GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData::__cordl_internal_get__leaderboardsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardsData;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData::__cordl_internal_set__leaderboardsData(
    ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leaderboardsData = value;
}
inline void GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData* GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData::LocalLeaderboardsModel_SavedLeaderboardsData() {}
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel___c::*)()>(&::GlobalNamespace::LocalLeaderboardsModel___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3755d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel___c._AppendLeaderboardScores_b__21_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LocalLeaderboardsModel___c::*)(
    ::GlobalNamespace::LocalLeaderboardsModel_ScoreData*, ::GlobalNamespace::LocalLeaderboardsModel_ScoreData*)>(&::GlobalNamespace::LocalLeaderboardsModel___c::_AppendLeaderboardScores_b__21_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3755d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel___c*>(),
                                         { "<AppendLeaderboardScores>b__21_0",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel___c._MigrateQuestLeaderboards_b__22_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LocalLeaderboardsModel___c::*)(::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*)>(
    &::GlobalNamespace::LocalLeaderboardsModel___c::_MigrateQuestLeaderboards_b__22_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3755d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel___c*>(),
                                                             { "<MigrateQuestLeaderboards>b__22_0", {}, { ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel___c._MigrateQuestLeaderboards_b__22_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LocalLeaderboardsModel___c::*)(::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*)>(
    &::GlobalNamespace::LocalLeaderboardsModel___c::_MigrateQuestLeaderboards_b__22_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3755d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel___c*>(),
                                                             { "<MigrateQuestLeaderboards>b__22_1", {}, { ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalLeaderboardsModel___c::setStaticF___9(::GlobalNamespace::LocalLeaderboardsModel___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::LocalLeaderboardsModel___c*, "<>9", ::GlobalNamespace::LocalLeaderboardsModel___c*>(
      std::forward<::GlobalNamespace::LocalLeaderboardsModel___c*>(value));
}
inline ::GlobalNamespace::LocalLeaderboardsModel___c* GlobalNamespace::LocalLeaderboardsModel___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::LocalLeaderboardsModel___c*, "<>9", ::GlobalNamespace::LocalLeaderboardsModel___c*>();
}
inline void GlobalNamespace::LocalLeaderboardsModel___c::setStaticF___9__21_0(::System::Comparison_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>*, "<>9__21_0", ::GlobalNamespace::LocalLeaderboardsModel___c*>(
      std::forward<::System::Comparison_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>* GlobalNamespace::LocalLeaderboardsModel___c::getStaticF___9__21_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>*, "<>9__21_0", ::GlobalNamespace::LocalLeaderboardsModel___c*>();
}
inline void GlobalNamespace::LocalLeaderboardsModel___c::setStaticF___9__22_0(::System::Func_2<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*, bool>*, "<>9__22_0", ::GlobalNamespace::LocalLeaderboardsModel___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*, bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*, bool>* GlobalNamespace::LocalLeaderboardsModel___c::getStaticF___9__22_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*, bool>*, "<>9__22_0", ::GlobalNamespace::LocalLeaderboardsModel___c*>();
}
inline void GlobalNamespace::LocalLeaderboardsModel___c::setStaticF___9__22_1(::System::Predicate_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*, "<>9__22_1", ::GlobalNamespace::LocalLeaderboardsModel___c*>(
      std::forward<::System::Predicate_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*>(value));
}
inline ::System::Predicate_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* GlobalNamespace::LocalLeaderboardsModel___c::getStaticF___9__22_1() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*, "<>9__22_1", ::GlobalNamespace::LocalLeaderboardsModel___c*>();
}
inline void GlobalNamespace::LocalLeaderboardsModel___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LocalLeaderboardsModel___c::_AppendLeaderboardScores_b__21_0(::GlobalNamespace::LocalLeaderboardsModel_ScoreData* a,
                                                                                             ::GlobalNamespace::LocalLeaderboardsModel_ScoreData* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel___c*>(),
                                              { "<AppendLeaderboardScores>b__21_0",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline bool GlobalNamespace::LocalLeaderboardsModel___c::_MigrateQuestLeaderboards_b__22_0(::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData* leaderboardData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel___c*>(),
                                                           { "<MigrateQuestLeaderboards>b__22_0", {}, { ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, leaderboardData);
}
inline bool GlobalNamespace::LocalLeaderboardsModel___c::_MigrateQuestLeaderboards_b__22_1(::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData* leaderboardData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel___c*>(),
                                                           { "<MigrateQuestLeaderboards>b__22_1", {}, { ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, leaderboardData);
}
inline ::GlobalNamespace::LocalLeaderboardsModel___c* GlobalNamespace::LocalLeaderboardsModel___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalLeaderboardsModel___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardsModel___c::LocalLeaderboardsModel___c() {}
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38::*)()>(
    &::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38::MoveNext)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x3755da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x37561d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LocalLeaderboardsModel*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "deleteLeaderboardFile", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::LocalLeaderboardsModel* __4__this, bool deleteLeaderboardFile,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->deleteLeaderboardFile = deleteLeaderboardFile;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38() {}
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39::*)()>(&::GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x3756240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3756560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LocalLeaderboardsModel*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39::LocalLeaderboardsModel__LoadAsync_d__39(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::LocalLeaderboardsModel* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39::LocalLeaderboardsModel__LoadAsync_d__39() {}
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16::*)()>(
    &::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x37565cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3756848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LocalLeaderboardsModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "filename", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData*>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*> __t__builder,
    ::GlobalNamespace::LocalLeaderboardsModel* __4__this, ::StringW filename,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->filename = filename;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16() {}
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23::*)()>(&::GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x37568c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3756b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LocalLeaderboardsModel*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23::LocalLeaderboardsModel__SaveAsync_d__23(int32_t __1__state,
                                                                                                              ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                              ::GlobalNamespace::LocalLeaderboardsModel* __4__this,
                                                                                                              ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23::LocalLeaderboardsModel__SaveAsync_d__23() {}
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19::*)()>(
    &::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x3756bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3756f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "leaderboardsData", ty:
// "::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::LocalLeaderboardsModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19::LocalLeaderboardsModel__SaveLeaderboardsData_d__19(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
    ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* leaderboardsData, ::GlobalNamespace::LocalLeaderboardsModel* __4__this, ::StringW filename,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->leaderboardsData = leaderboardsData;
  this->__4__this = __4__this;
  this->filename = filename;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19::LocalLeaderboardsModel__SaveLeaderboardsData_d__19() {}
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.add_newScoreWasAddedToLeaderboardEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::System::Action_2<::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>*)>(
    &::GlobalNamespace::LocalLeaderboardsModel::add_newScoreWasAddedToLeaderboardEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3754190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                            { "add_newScoreWasAddedToLeaderboardEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.remove_newScoreWasAddedToLeaderboardEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::System::Action_2<::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>*)>(
    &::GlobalNamespace::LocalLeaderboardsModel::remove_newScoreWasAddedToLeaderboardEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3754250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                            { "remove_newScoreWasAddedToLeaderboardEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::GlobalNamespace::IFileStorage*, ::GlobalNamespace::LocalLeaderboardsSettingsSO*)>(
    &::GlobalNamespace::LocalLeaderboardsModel::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3754310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsSettingsSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.LoadLeaderboardsDataAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*>* (
    ::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW)>(&::GlobalNamespace::LocalLeaderboardsModel::LoadLeaderboardsDataAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x37543cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "LoadLeaderboardsDataAsync", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.LoadLeaderboardsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* (
    ::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW)>(&::GlobalNamespace::LocalLeaderboardsModel::LoadLeaderboardsData)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x37544bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "LoadLeaderboardsData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.LoadLeaderboardsDataInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* (*)(::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData*)>(
        &::GlobalNamespace::LocalLeaderboardsModel::LoadLeaderboardsDataInternal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3754520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                                             { "LoadLeaderboardsDataInternal", {}, { ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.SaveLeaderboardsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*)>(
    &::GlobalNamespace::LocalLeaderboardsModel::SaveLeaderboardsData)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x37545a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
            { "SaveLeaderboardsData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.SaveLeaderboardsDataAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::LocalLeaderboardsModel::SaveLeaderboardsDataAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3754664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                                                                           { "SaveLeaderboardsDataAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.AppendLeaderboardScores
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>*,
                                                                ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>*, int32_t)>(
    &::GlobalNamespace::LocalLeaderboardsModel::AppendLeaderboardScores)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x3754724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                                { "AppendLeaderboardScores",
                                                  {},
                                                  { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.MigrateQuestLeaderboards
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*, int32_t)>(
    &::GlobalNamespace::LocalLeaderboardsModel::MigrateQuestLeaderboards)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x37548c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
            { "MigrateQuestLeaderboards", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.SaveAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LocalLeaderboardsModel::*)()>(&::GlobalNamespace::LocalLeaderboardsModel::SaveAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3754ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "SaveAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetLeaderboardsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* (
    ::GlobalNamespace::LocalLeaderboardsModel::*)(::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType)>(&::GlobalNamespace::LocalLeaderboardsModel::GetLeaderboardsData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3754d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                                             { "GetLeaderboardsData", {}, { ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetLeaderboardData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData* (
    ::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType)>(&::GlobalNamespace::LocalLeaderboardsModel::GetLeaderboardData)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3754d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                                { "GetLeaderboardData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetCurrentTimestamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::LocalLeaderboardsModel::*)()>(&::GlobalNamespace::LocalLeaderboardsModel::GetCurrentTimestamp)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3754e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "GetCurrentTimestamp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.UpdateDailyLeaderboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW)>(&::GlobalNamespace::LocalLeaderboardsModel::UpdateDailyLeaderboard)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x3754f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "UpdateDailyLeaderboard", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.AddScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType, ::StringW, int32_t,
                                                                                                           bool)>(&::GlobalNamespace::LocalLeaderboardsModel::AddScore)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x375515c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                                                                           { "AddScore",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.WillScoreGoIntoLeaderboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType, int32_t)>(
    &::GlobalNamespace::LocalLeaderboardsModel::WillScoreGoIntoLeaderboard)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3755498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
            { "WillScoreGoIntoLeaderboard", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetScores
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>* (
    ::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType)>(&::GlobalNamespace::LocalLeaderboardsModel::GetScores)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3755574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                                             { "GetScores", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetHighScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType)>(
    &::GlobalNamespace::LocalLeaderboardsModel::GetHighScore)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x375558c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                                             { "GetHighScore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetPositionInLeaderboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType, int32_t)>(
    &::GlobalNamespace::LocalLeaderboardsModel::GetPositionInLeaderboard)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x375563c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                         { "GetPositionInLeaderboard", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetLastScorePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType)>(
    &::GlobalNamespace::LocalLeaderboardsModel::GetLastScorePosition)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3755724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                                { "GetLastScorePosition", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.ClearLastScorePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)()>(&::GlobalNamespace::LocalLeaderboardsModel::ClearLastScorePosition)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x37557c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "ClearLastScorePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.AddScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::StringW, int32_t, bool)>(
    &::GlobalNamespace::LocalLeaderboardsModel::AddScore)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3755820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                                             { "AddScore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.WillScoreGoIntoLeaderboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, int32_t)>(
    &::GlobalNamespace::LocalLeaderboardsModel::WillScoreGoIntoLeaderboard)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x375587c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                                                                           { "WillScoreGoIntoLeaderboard", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.ClearLeaderboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW)>(&::GlobalNamespace::LocalLeaderboardsModel::ClearLeaderboard)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x37558cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "ClearLeaderboard", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.ClearAllLeaderboardsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LocalLeaderboardsModel::*)(bool)>(
    &::GlobalNamespace::LocalLeaderboardsModel::ClearAllLeaderboardsAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3755a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "ClearAllLeaderboardsAsync", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.LoadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LocalLeaderboardsModel::*)()>(&::GlobalNamespace::LocalLeaderboardsModel::LoadAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3755ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "LoadAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)()>(&::GlobalNamespace::LocalLeaderboardsModel::Load)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3755b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "Load", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.LoadInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)()>(&::GlobalNamespace::LocalLeaderboardsModel::LoadInternal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3755c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "LoadInternal", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>*&
GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get_newScoreWasAddedToLeaderboardEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newScoreWasAddedToLeaderboardEvent;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>* const&
GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get_newScoreWasAddedToLeaderboardEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newScoreWasAddedToLeaderboardEvent;
}
constexpr void
GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_set_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newScoreWasAddedToLeaderboardEvent = value;
}
constexpr ::GlobalNamespace::IFileStorage*& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr ::GlobalNamespace::IFileStorage* const& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fileStorage = value;
}
constexpr int32_t& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__maxNumberOfScoresInLeaderboard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxNumberOfScoresInLeaderboard;
}
constexpr int32_t const& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__maxNumberOfScoresInLeaderboard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxNumberOfScoresInLeaderboard;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_set__maxNumberOfScoresInLeaderboard(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxNumberOfScoresInLeaderboard = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType, int32_t>*&
GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__lastScorePositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastScorePositions;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType, int32_t>* const&
GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__lastScorePositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastScorePositions;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_set__lastScorePositions(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastScorePositions = value;
}
constexpr ::StringW& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__lastScoreLeaderboardId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastScoreLeaderboardId;
}
constexpr ::StringW const& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__lastScoreLeaderboardId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastScoreLeaderboardId;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_set__lastScoreLeaderboardId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastScoreLeaderboardId = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__leaderboardsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardsData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* const&
GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__leaderboardsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardsData;
}
constexpr void
GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_set__leaderboardsData(::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leaderboardsData = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__dailyLeaderboardsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dailyLeaderboardsData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* const&
GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__dailyLeaderboardsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dailyLeaderboardsData;
}
constexpr void
GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_set__dailyLeaderboardsData(::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dailyLeaderboardsData = value;
}
inline void GlobalNamespace::LocalLeaderboardsModel::add_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                          { "add_newScoreWasAddedToLeaderboardEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalLeaderboardsModel::remove_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                          { "remove_newScoreWasAddedToLeaderboardEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalLeaderboardsModel::_ctor(::GlobalNamespace::IFileStorage* fileStorage, ::GlobalNamespace::LocalLeaderboardsSettingsSO* localLeaderboardsSettingsSo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsSettingsSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileStorage, localLeaderboardsSettingsSo);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*>*
GlobalNamespace::LocalLeaderboardsModel::LoadLeaderboardsDataAsync(::StringW filename) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "LoadLeaderboardsDataAsync", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*>*>(
      this, ___internal_method, filename);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* GlobalNamespace::LocalLeaderboardsModel::LoadLeaderboardsData(::StringW filename) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "LoadLeaderboardsData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*>(this, ___internal_method, filename);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*
GlobalNamespace::LocalLeaderboardsModel::LoadLeaderboardsDataInternal(::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData* savedLeaderboardsData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                                           { "LoadLeaderboardsDataInternal", {}, { ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*>(nullptr, ___internal_method, savedLeaderboardsData);
}
inline ::System::Threading::Tasks::Task*
GlobalNamespace::LocalLeaderboardsModel::SaveLeaderboardsData(::StringW filename,
                                                              ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* leaderboardsData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
          { "SaveLeaderboardsData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, filename, leaderboardsData);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LocalLeaderboardsModel::SaveLeaderboardsDataAsync(::StringW filename, ::StringW json) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                                                                         { "SaveLeaderboardsDataAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, filename, json);
}
inline void GlobalNamespace::LocalLeaderboardsModel::AppendLeaderboardScores(::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>* main,
                                                                             ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>* tail,
                                                                             int32_t maxNumberOfScores) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                              { "AppendLeaderboardScores",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, main, tail, maxNumberOfScores);
}
inline void GlobalNamespace::LocalLeaderboardsModel::MigrateQuestLeaderboards(::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* leaderboardDataList,
                                                                              int32_t maxNumberOfScores) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
          { "MigrateQuestLeaderboards", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, leaderboardDataList, maxNumberOfScores);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LocalLeaderboardsModel::SaveAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "SaveAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*
GlobalNamespace::LocalLeaderboardsModel::GetLeaderboardsData(::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType leaderboardType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                                           { "GetLeaderboardsData", {}, { ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*>(this, ___internal_method, leaderboardType);
}
inline ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*
GlobalNamespace::LocalLeaderboardsModel::GetLeaderboardData(::StringW leaderboardId, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType leaderboardType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                              { "GetLeaderboardData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>(this, ___internal_method, leaderboardId, leaderboardType);
}
inline int64_t GlobalNamespace::LocalLeaderboardsModel::GetCurrentTimestamp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "GetCurrentTimestamp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardsModel::UpdateDailyLeaderboard(::StringW leaderboardId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "UpdateDailyLeaderboard", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leaderboardId);
}
inline void GlobalNamespace::LocalLeaderboardsModel::AddScore(::StringW leaderboardId, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType leaderboardType, ::StringW playerName, int32_t score,
                                                              bool fullCombo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                                                                         { "AddScore",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leaderboardId, leaderboardType, playerName, score, fullCombo);
}
inline bool GlobalNamespace::LocalLeaderboardsModel::WillScoreGoIntoLeaderboard(::StringW leaderboardId, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType leaderboardType, int32_t score) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                       { "WillScoreGoIntoLeaderboard", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, leaderboardId, leaderboardType, score);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>*
GlobalNamespace::LocalLeaderboardsModel::GetScores(::StringW leaderboardId, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType leaderboardType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                                           { "GetScores", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>*>(this, ___internal_method, leaderboardId, leaderboardType);
}
inline int32_t GlobalNamespace::LocalLeaderboardsModel::GetHighScore(::StringW leaderboardId, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType leaderboardType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                                           { "GetHighScore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, leaderboardId, leaderboardType);
}
inline int32_t GlobalNamespace::LocalLeaderboardsModel::GetPositionInLeaderboard(::StringW leaderboardId, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType leaderboardType, int32_t score) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                       { "GetPositionInLeaderboard", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, leaderboardId, leaderboardType, score);
}
inline int32_t GlobalNamespace::LocalLeaderboardsModel::GetLastScorePosition(::StringW leaderboardId, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType leaderboardType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                              { "GetLastScorePosition", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, leaderboardId, leaderboardType);
}
inline void GlobalNamespace::LocalLeaderboardsModel::ClearLastScorePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "ClearLastScorePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardsModel::AddScore(::StringW leaderboardId, ::StringW playerName, int32_t score, bool fullCombo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                                           { "AddScore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leaderboardId, playerName, score, fullCombo);
}
inline bool GlobalNamespace::LocalLeaderboardsModel::WillScoreGoIntoLeaderboard(::StringW leaderboardId, int32_t score) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(),
                                                                                         { "WillScoreGoIntoLeaderboard", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, leaderboardId, score);
}
inline void GlobalNamespace::LocalLeaderboardsModel::ClearLeaderboard(::StringW leaderboardId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "ClearLeaderboard", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leaderboardId);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LocalLeaderboardsModel::ClearAllLeaderboardsAsync(bool deleteLeaderboardFile) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "ClearAllLeaderboardsAsync", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, deleteLeaderboardFile);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LocalLeaderboardsModel::LoadAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "LoadAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardsModel::Load() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "Load", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardsModel::LoadInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsModel*>(), { "LoadInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalLeaderboardsModel* GlobalNamespace::LocalLeaderboardsModel::New_ctor(::GlobalNamespace::IFileStorage* fileStorage,
                                                                                                    ::GlobalNamespace::LocalLeaderboardsSettingsSO* localLeaderboardsSettingsSo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalLeaderboardsModel*>(fileStorage, localLeaderboardsSettingsSo));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardsModel::LocalLeaderboardsModel() {}
