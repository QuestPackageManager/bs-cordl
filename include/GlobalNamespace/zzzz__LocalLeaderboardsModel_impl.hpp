#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType::__LocalLeaderboardsModel__LeaderboardType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType::__LocalLeaderboardsModel__LeaderboardType() {}
constexpr ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType::AllTime{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType::Daily{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel__ScoreData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalLeaderboardsModel__ScoreData::*)()>(
    &::GlobalNamespace::__LocalLeaderboardsModel__ScoreData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d8d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__get__score() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____score;
}
constexpr int32_t const& GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__get__score() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____score;
}
constexpr void GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__set__score(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____score = value;
}
constexpr ::StringW& GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__get__playerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerName;
}
constexpr ::StringW const& GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__get__playerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerName;
}
constexpr void GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__set__playerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__get__fullCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullCombo;
}
constexpr bool const& GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__get__fullCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullCombo;
}
constexpr void GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__set__fullCombo(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullCombo = value;
}
constexpr int64_t& GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__get__timestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timestamp;
}
constexpr int64_t const& GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__get__timestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timestamp;
}
constexpr void GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__set__timestamp(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timestamp = value;
}
inline ::GlobalNamespace::__LocalLeaderboardsModel__ScoreData* GlobalNamespace::__LocalLeaderboardsModel__ScoreData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>());
}
inline void GlobalNamespace::__LocalLeaderboardsModel__ScoreData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__LocalLeaderboardsModel__ScoreData() {}
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::*)()>(
    &::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d8d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::__get__leaderboardId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardId;
}
constexpr ::StringW const& GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::__get__leaderboardId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardId;
}
constexpr void GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::__set__leaderboardId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leaderboardId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*& GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::__get__scores() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scores;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*> const&
GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::__get__scores() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scores;
}
constexpr void GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::__set__scores(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scores)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData* GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>());
}
inline void GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::__LocalLeaderboardsModel__LeaderboardData() {}
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData::*)()>(
    &::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d8234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*&
GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData::__get__leaderboardsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardsData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*> const&
GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData::__get__leaderboardsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardsData;
}
constexpr void GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData::__set__leaderboardsData(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leaderboardsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData* GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData*>());
}
inline void GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData::__LocalLeaderboardsModel__SavedLeaderboardsData() {}
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalLeaderboardsModel____c::*)()>(
    &::GlobalNamespace::__LocalLeaderboardsModel____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d9654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel____c._AppendLeaderboardScores_b__16_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::GlobalNamespace::__LocalLeaderboardsModel____c::*)(::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*, ::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*)>(
        &::GlobalNamespace::__LocalLeaderboardsModel____c::_AppendLeaderboardScores_b__16_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x21d965c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get(), "<AppendLeaderboardScores>b__16_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel____c._MigrateQuestLeaderboards_b__17_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__LocalLeaderboardsModel____c::*)(
    ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*)>(&::GlobalNamespace::__LocalLeaderboardsModel____c::_MigrateQuestLeaderboards_b__17_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21d9680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get(), "<MigrateQuestLeaderboards>b__17_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel____c._MigrateQuestLeaderboards_b__17_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__LocalLeaderboardsModel____c::*)(
    ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*)>(&::GlobalNamespace::__LocalLeaderboardsModel____c::_MigrateQuestLeaderboards_b__17_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21d96d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get(), "<MigrateQuestLeaderboards>b__17_1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__LocalLeaderboardsModel____c::setStaticF___9(::GlobalNamespace::__LocalLeaderboardsModel____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__LocalLeaderboardsModel____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get>(
      std::forward<::GlobalNamespace::__LocalLeaderboardsModel____c*>(value));
}
inline ::GlobalNamespace::__LocalLeaderboardsModel____c* GlobalNamespace::__LocalLeaderboardsModel____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__LocalLeaderboardsModel____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get>();
}
inline void GlobalNamespace::__LocalLeaderboardsModel____c::setStaticF___9__16_0(::System::Comparison_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*, "<>9__16_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get>(
      std::forward<::System::Comparison_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* GlobalNamespace::__LocalLeaderboardsModel____c::getStaticF___9__16_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*, "<>9__16_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get>();
}
inline void GlobalNamespace::__LocalLeaderboardsModel____c::setStaticF___9__17_0(::System::Func_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*, bool>*, "<>9__17_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*, bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*, bool>* GlobalNamespace::__LocalLeaderboardsModel____c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*, bool>*, "<>9__17_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get>();
}
inline void GlobalNamespace::__LocalLeaderboardsModel____c::setStaticF___9__17_1(::System::Predicate_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*, "<>9__17_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get>(
      std::forward<::System::Predicate_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>(value));
}
inline ::System::Predicate_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* GlobalNamespace::__LocalLeaderboardsModel____c::getStaticF___9__17_1() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*, "<>9__17_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get>();
}
inline ::GlobalNamespace::__LocalLeaderboardsModel____c* GlobalNamespace::__LocalLeaderboardsModel____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LocalLeaderboardsModel____c*>());
}
inline void GlobalNamespace::__LocalLeaderboardsModel____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__LocalLeaderboardsModel____c::_AppendLeaderboardScores_b__16_0(::GlobalNamespace::__LocalLeaderboardsModel__ScoreData* a,
                                                                                                ::GlobalNamespace::__LocalLeaderboardsModel__ScoreData* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get(), "<AppendLeaderboardScores>b__16_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
inline bool GlobalNamespace::__LocalLeaderboardsModel____c::_MigrateQuestLeaderboards_b__17_0(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData* leaderboardData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get(), "<MigrateQuestLeaderboards>b__17_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, leaderboardData);
}
inline bool GlobalNamespace::__LocalLeaderboardsModel____c::_MigrateQuestLeaderboards_b__17_1(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData* leaderboardData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get(), "<MigrateQuestLeaderboards>b__17_1", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, leaderboardData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalLeaderboardsModel____c::__LocalLeaderboardsModel____c() {}
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.add_newScoreWasAddedToLeaderboardEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(
    ::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*)>(&::GlobalNamespace::LocalLeaderboardsModel::add_newScoreWasAddedToLeaderboardEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21d7d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "add_newScoreWasAddedToLeaderboardEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.remove_newScoreWasAddedToLeaderboardEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(
    ::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*)>(&::GlobalNamespace::LocalLeaderboardsModel::remove_newScoreWasAddedToLeaderboardEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21d7e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "remove_newScoreWasAddedToLeaderboardEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.LoadLeaderboardsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(
    ::GlobalNamespace::ISaveData*, ::StringW, ByRef<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>)>(
    &::GlobalNamespace::LocalLeaderboardsModel::LoadLeaderboardsData)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x21d7ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "LoadLeaderboardsData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.SaveLeaderboardsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(
    ::GlobalNamespace::ISaveData*, ::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*)>(
    &::GlobalNamespace::LocalLeaderboardsModel::SaveLeaderboardsData)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x21d80fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "SaveLeaderboardsData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.AppendLeaderboardScores
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*,
                                                                                           ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*, int32_t)>(
    &::GlobalNamespace::LocalLeaderboardsModel::AppendLeaderboardScores)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x21d823c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "AppendLeaderboardScores", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.MigrateQuestLeaderboards
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*,
                                                                                           int32_t)>(&::GlobalNamespace::LocalLeaderboardsModel::MigrateQuestLeaderboards)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x21d83b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "MigrateQuestLeaderboards", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.Save
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::GlobalNamespace::ISaveData*)>(
    &::GlobalNamespace::LocalLeaderboardsModel::Save)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21d8710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "Save", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetLeaderboardsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* (
    ::GlobalNamespace::LocalLeaderboardsModel::*)(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType)>(&::GlobalNamespace::LocalLeaderboardsModel::GetLeaderboardsData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21d878c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "GetLeaderboardsData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetLeaderboardData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData* (
    ::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType)>(&::GlobalNamespace::LocalLeaderboardsModel::GetLeaderboardData)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x21d87b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "GetLeaderboardData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetCurrentTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::LocalLeaderboardsModel::*)()>(
    &::GlobalNamespace::LocalLeaderboardsModel::GetCurrentTimestamp)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x21d8888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                                                                               "GetCurrentTimestamp", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.UpdateDailyLeaderboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW)>(
    &::GlobalNamespace::LocalLeaderboardsModel::UpdateDailyLeaderboard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x21d8954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "UpdateDailyLeaderboard",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.AddScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(
    ::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, ::StringW, int32_t, bool)>(&::GlobalNamespace::LocalLeaderboardsModel::AddScore)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x21d8a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "AddScore", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.WillScoreGoIntoLeaderboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LocalLeaderboardsModel::*)(
    ::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, int32_t)>(&::GlobalNamespace::LocalLeaderboardsModel::WillScoreGoIntoLeaderboard)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x21d8d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "WillScoreGoIntoLeaderboard", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetScores
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* (
    ::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType)>(&::GlobalNamespace::LocalLeaderboardsModel::GetScores)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21d8e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "GetScores", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetHighScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LocalLeaderboardsModel::*)(
    ::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType)>(&::GlobalNamespace::LocalLeaderboardsModel::GetHighScore)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21d8e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "GetHighScore", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetPositionInLeaderboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LocalLeaderboardsModel::*)(
    ::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, int32_t)>(&::GlobalNamespace::LocalLeaderboardsModel::GetPositionInLeaderboard)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x21d8eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "GetPositionInLeaderboard", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetLastScorePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LocalLeaderboardsModel::*)(
    ::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType)>(&::GlobalNamespace::LocalLeaderboardsModel::GetLastScorePosition)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x21d8fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "GetLastScorePosition", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.ClearLastScorePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)()>(
    &::GlobalNamespace::LocalLeaderboardsModel::ClearLastScorePosition)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21d9058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                                                                               "ClearLastScorePosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.AddScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::StringW, int32_t, bool)>(
    &::GlobalNamespace::LocalLeaderboardsModel::AddScore)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x21d90b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "AddScore", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.WillScoreGoIntoLeaderboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, int32_t)>(
    &::GlobalNamespace::LocalLeaderboardsModel::WillScoreGoIntoLeaderboard)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21d910c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "WillScoreGoIntoLeaderboard", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.ClearLeaderboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW)>(
    &::GlobalNamespace::LocalLeaderboardsModel::ClearLeaderboard)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x21d915c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "ClearLeaderboard",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.ClearAllLeaderboards
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::GlobalNamespace::ISaveData*, bool)>(
    &::GlobalNamespace::LocalLeaderboardsModel::ClearAllLeaderboards)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x21d928c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "ClearAllLeaderboards", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::GlobalNamespace::ISaveData*)>(
    &::GlobalNamespace::LocalLeaderboardsModel::Load)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x21d9470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "Load", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)()>(&::GlobalNamespace::LocalLeaderboardsModel::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x21d956c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LocalLeaderboardsModel::__get__maxNumberOfScoresInLeaderboard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxNumberOfScoresInLeaderboard;
}
constexpr int32_t const& GlobalNamespace::LocalLeaderboardsModel::__get__maxNumberOfScoresInLeaderboard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxNumberOfScoresInLeaderboard;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel::__set__maxNumberOfScoresInLeaderboard(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxNumberOfScoresInLeaderboard = value;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*& GlobalNamespace::LocalLeaderboardsModel::__get_newScoreWasAddedToLeaderboardEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newScoreWasAddedToLeaderboardEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*> const&
GlobalNamespace::LocalLeaderboardsModel::__get_newScoreWasAddedToLeaderboardEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newScoreWasAddedToLeaderboardEvent;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel::__set_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newScoreWasAddedToLeaderboardEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, int32_t>*& GlobalNamespace::LocalLeaderboardsModel::__get__lastScorePositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastScorePositions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, int32_t>*> const&
GlobalNamespace::LocalLeaderboardsModel::__get__lastScorePositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastScorePositions;
}
constexpr void
GlobalNamespace::LocalLeaderboardsModel::__set__lastScorePositions(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastScorePositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::LocalLeaderboardsModel::__get__lastScoreLeaderboardId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastScoreLeaderboardId;
}
constexpr ::StringW const& GlobalNamespace::LocalLeaderboardsModel::__get__lastScoreLeaderboardId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastScoreLeaderboardId;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel::__set__lastScoreLeaderboardId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastScoreLeaderboardId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*& GlobalNamespace::LocalLeaderboardsModel::__get__leaderboardsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardsData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*> const&
GlobalNamespace::LocalLeaderboardsModel::__get__leaderboardsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardsData;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel::__set__leaderboardsData(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leaderboardsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*& GlobalNamespace::LocalLeaderboardsModel::__get__dailyLeaderboardsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dailyLeaderboardsData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*> const&
GlobalNamespace::LocalLeaderboardsModel::__get__dailyLeaderboardsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dailyLeaderboardsData;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel::__set__dailyLeaderboardsData(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dailyLeaderboardsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LocalLeaderboardsModel::add_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "add_newScoreWasAddedToLeaderboardEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalLeaderboardsModel::remove_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "remove_newScoreWasAddedToLeaderboardEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::LocalLeaderboardsModel::LoadLeaderboardsData(::GlobalNamespace::ISaveData* saveData, ::StringW filename,
                                                              ByRef<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*> leaderboardsData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "LoadLeaderboardsData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saveData, filename, leaderboardsData);
}
inline void GlobalNamespace::LocalLeaderboardsModel::SaveLeaderboardsData(::GlobalNamespace::ISaveData* saveData, ::StringW filename,
                                                                          ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* leaderboardsData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "SaveLeaderboardsData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saveData, filename, leaderboardsData);
}
inline void GlobalNamespace::LocalLeaderboardsModel::AppendLeaderboardScores(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* main,
                                                                             ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* tail,
                                                                             int32_t maxNumberOfScores) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "AppendLeaderboardScores", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, main, tail, maxNumberOfScores);
}
inline void
GlobalNamespace::LocalLeaderboardsModel::MigrateQuestLeaderboards(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* leaderboardDataList,
                                                                  int32_t maxNumberOfScores) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "MigrateQuestLeaderboards", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, leaderboardDataList, maxNumberOfScores);
}
inline void GlobalNamespace::LocalLeaderboardsModel::Save(::GlobalNamespace::ISaveData* saveData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "Save", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saveData);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*
GlobalNamespace::LocalLeaderboardsModel::GetLeaderboardsData(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "GetLeaderboardsData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*, false>(this, ___internal_method, leaderboardType);
}
inline ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*
GlobalNamespace::LocalLeaderboardsModel::GetLeaderboardData(::StringW leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "GetLeaderboardData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*, false>(this, ___internal_method, leaderboardId, leaderboardType);
}
inline int64_t GlobalNamespace::LocalLeaderboardsModel::GetCurrentTimestamp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                                                                             "GetCurrentTimestamp", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardsModel::UpdateDailyLeaderboard(::StringW leaderboardId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "UpdateDailyLeaderboard",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, leaderboardId);
}
inline void GlobalNamespace::LocalLeaderboardsModel::AddScore(::StringW leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType, ::StringW playerName,
                                                              int32_t score, bool fullCombo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "AddScore", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, leaderboardId, leaderboardType, playerName, score, fullCombo);
}
inline bool GlobalNamespace::LocalLeaderboardsModel::WillScoreGoIntoLeaderboard(::StringW leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType, int32_t score) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "WillScoreGoIntoLeaderboard", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, leaderboardId, leaderboardType, score);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*
GlobalNamespace::LocalLeaderboardsModel::GetScores(::StringW leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "GetScores", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*, false>(this, ___internal_method, leaderboardId,
                                                                                                                                                      leaderboardType);
}
inline int32_t GlobalNamespace::LocalLeaderboardsModel::GetHighScore(::StringW leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "GetHighScore", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, leaderboardId, leaderboardType);
}
inline int32_t GlobalNamespace::LocalLeaderboardsModel::GetPositionInLeaderboard(::StringW leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType, int32_t score) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "GetPositionInLeaderboard", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, leaderboardId, leaderboardType, score);
}
inline int32_t GlobalNamespace::LocalLeaderboardsModel::GetLastScorePosition(::StringW leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "GetLastScorePosition", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, leaderboardId, leaderboardType);
}
inline void GlobalNamespace::LocalLeaderboardsModel::ClearLastScorePosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                                                                             "ClearLastScorePosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardsModel::AddScore(::StringW leaderboardId, ::StringW playerName, int32_t score, bool fullCombo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "AddScore", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, leaderboardId, playerName, score, fullCombo);
}
inline bool GlobalNamespace::LocalLeaderboardsModel::WillScoreGoIntoLeaderboard(::StringW leaderboardId, int32_t score) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "WillScoreGoIntoLeaderboard", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, leaderboardId, score);
}
inline void GlobalNamespace::LocalLeaderboardsModel::ClearLeaderboard(::StringW leaderboardId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "ClearLeaderboard",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, leaderboardId);
}
inline void GlobalNamespace::LocalLeaderboardsModel::ClearAllLeaderboards(::GlobalNamespace::ISaveData* saveData, bool deleteLeaderboardFile) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "ClearAllLeaderboards", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saveData, deleteLeaderboardFile);
}
inline void GlobalNamespace::LocalLeaderboardsModel::Load(::GlobalNamespace::ISaveData* saveData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), "Load", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saveData);
}
inline ::GlobalNamespace::LocalLeaderboardsModel* GlobalNamespace::LocalLeaderboardsModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LocalLeaderboardsModel*>());
}
inline void GlobalNamespace::LocalLeaderboardsModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardsModel::LocalLeaderboardsModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
