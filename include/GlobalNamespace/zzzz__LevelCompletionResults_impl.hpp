#pragma once
#include "GlobalNamespace/zzzz__LevelCompletionResults_impl.hpp"
#include "GlobalNamespace/zzzz__RankModel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType::__LevelCompletionResults__LevelEndStateType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType::__LevelCompletionResults__LevelEndStateType() {}
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType GlobalNamespace::__LevelCompletionResults__LevelEndStateType::Incomplete{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType GlobalNamespace::__LevelCompletionResults__LevelEndStateType::Cleared{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType GlobalNamespace::__LevelCompletionResults__LevelEndStateType::Failed{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndAction::__LevelCompletionResults__LevelEndAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndAction::__LevelCompletionResults__LevelEndAction() {}
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndAction GlobalNamespace::__LevelCompletionResults__LevelEndAction::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndAction GlobalNamespace::__LevelCompletionResults__LevelEndAction::Quit{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndAction GlobalNamespace::__LevelCompletionResults__LevelEndAction::Restart{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCompletionResults::*)()>(&::GlobalNamespace::LevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12a2c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCompletionResults::*)(
    ::GlobalNamespace::GameplayModifiers*, int32_t, int32_t, ::GlobalNamespace::__RankModel__Rank, bool, float_t, float_t, float_t, float_t,
    ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType, ::GlobalNamespace::__LevelCompletionResults__LevelEndAction, float_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t,
    int32_t, float_t, float_t, int32_t, float_t)>(&::GlobalNamespace::LevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x12a2c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RankModel__Rank>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCompletionResults__LevelEndStateType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCompletionResults__LevelEndAction>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LevelCompletionResults::*)(::System::Object*)>(
    &::GlobalNamespace::LevelCompletionResults::CompareTo)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x12a2db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(), "CompareTo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCompletionResults::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::LevelCompletionResults::Serialize)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x12a2ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults.LiteNetLib_Utils_INetImmutableSerializable_LevelCompletionResults__CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::LevelCompletionResults* (::GlobalNamespace::LevelCompletionResults::*)(::LiteNetLib::Utils::NetDataReader*)>(
        &::GlobalNamespace::LevelCompletionResults::LiteNetLib_Utils_INetImmutableSerializable_LevelCompletionResults__CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12a30b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(),
                                                 "LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults.CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LevelCompletionResults* (*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::LevelCompletionResults::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x12a30c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(), "CreateFromSerializedData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>"
constexpr GlobalNamespace::LevelCompletionResults::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
constexpr GlobalNamespace::LevelCompletionResults::operator ::System::IComparable*() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::LevelCompletionResults::__get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& GlobalNamespace::LevelCompletionResults::__get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameplayModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_modifiedScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiedScore;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_modifiedScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiedScore;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_modifiedScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifiedScore = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_multipliedScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multipliedScore;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_multipliedScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multipliedScore;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_multipliedScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___multipliedScore = value;
}
constexpr ::GlobalNamespace::__RankModel__Rank& GlobalNamespace::LevelCompletionResults::__get_rank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rank;
}
constexpr ::GlobalNamespace::__RankModel__Rank const& GlobalNamespace::LevelCompletionResults::__get_rank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rank;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_rank(::GlobalNamespace::__RankModel__Rank value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rank = value;
}
constexpr bool& GlobalNamespace::LevelCompletionResults::__get_fullCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCombo;
}
constexpr bool const& GlobalNamespace::LevelCompletionResults::__get_fullCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCombo;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_fullCombo(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullCombo = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__get_leftSaberMovementDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftSaberMovementDistance;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__get_leftSaberMovementDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftSaberMovementDistance;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_leftSaberMovementDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftSaberMovementDistance = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__get_rightSaberMovementDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightSaberMovementDistance;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__get_rightSaberMovementDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightSaberMovementDistance;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_rightSaberMovementDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rightSaberMovementDistance = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__get_leftHandMovementDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandMovementDistance;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__get_leftHandMovementDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandMovementDistance;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_leftHandMovementDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftHandMovementDistance = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__get_rightHandMovementDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandMovementDistance;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__get_rightHandMovementDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandMovementDistance;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_rightHandMovementDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rightHandMovementDistance = value;
}
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType& GlobalNamespace::LevelCompletionResults::__get_levelEndStateType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEndStateType;
}
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType const& GlobalNamespace::LevelCompletionResults::__get_levelEndStateType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEndStateType;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_levelEndStateType(::GlobalNamespace::__LevelCompletionResults__LevelEndStateType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelEndStateType = value;
}
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndAction& GlobalNamespace::LevelCompletionResults::__get_levelEndAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEndAction;
}
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndAction const& GlobalNamespace::LevelCompletionResults::__get_levelEndAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEndAction;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_levelEndAction(::GlobalNamespace::__LevelCompletionResults__LevelEndAction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelEndAction = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__get_energy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___energy;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__get_energy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___energy;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_energy(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___energy = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_goodCutsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCutsCount;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_goodCutsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCutsCount;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_goodCutsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___goodCutsCount = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_badCutsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badCutsCount;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_badCutsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badCutsCount;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_badCutsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___badCutsCount = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_missedCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missedCount;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_missedCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missedCount;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_missedCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___missedCount = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_notGoodCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notGoodCount;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_notGoodCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notGoodCount;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_notGoodCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___notGoodCount = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_okCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___okCount;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_okCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___okCount;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_okCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___okCount = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_maxCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCutScore;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_maxCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCutScore;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_maxCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCutScore = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_totalCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalCutScore;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_totalCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalCutScore;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_totalCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalCutScore = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_goodCutsCountForNotesWithFullScoreScoringType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCutsCountForNotesWithFullScoreScoringType;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_goodCutsCountForNotesWithFullScoreScoringType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCutsCountForNotesWithFullScoreScoringType;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_goodCutsCountForNotesWithFullScoreScoringType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___goodCutsCountForNotesWithFullScoreScoringType = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___averageCenterDistanceCutScoreForNotesWithFullScoreScoringType;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___averageCenterDistanceCutScoreForNotesWithFullScoreScoringType;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___averageCenterDistanceCutScoreForNotesWithFullScoreScoringType = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__get_averageCutScoreForNotesWithFullScoreScoringType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___averageCutScoreForNotesWithFullScoreScoringType;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__get_averageCutScoreForNotesWithFullScoreScoringType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___averageCutScoreForNotesWithFullScoreScoringType;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_averageCutScoreForNotesWithFullScoreScoringType(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___averageCutScoreForNotesWithFullScoreScoringType = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_maxCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCombo;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_maxCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCombo;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_maxCombo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCombo = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__get_endSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endSongTime;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__get_endSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endSongTime;
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_endSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endSongTime = value;
}
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::LevelCompletionResults::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LevelCompletionResults*>());
}
inline void GlobalNamespace::LevelCompletionResults::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::LevelCompletionResults::New_ctor(
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, int32_t modifiedScore, int32_t multipliedScore, ::GlobalNamespace::__RankModel__Rank rank, bool fullCombo,
    float_t leftSaberMovementDistance, float_t rightSaberMovementDistance, float_t leftHandMovementDistance, float_t rightHandMovementDistance,
    ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType levelEndStateType, ::GlobalNamespace::__LevelCompletionResults__LevelEndAction levelEndAction, float_t energy, int32_t goodCutsCount,
    int32_t badCutsCount, int32_t missedCount, int32_t notGoodCount, int32_t okCount, int32_t maxCutScore, int32_t totalCutScore, int32_t goodCutsCountForNotesWithFullScoreScoringType,
    float_t averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, float_t averageCutScoreForNotesWithFullScoreScoringType, int32_t maxCombo, float_t endSongTime) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LevelCompletionResults*>(
      gameplayModifiers, modifiedScore, multipliedScore, rank, fullCombo, leftSaberMovementDistance, rightSaberMovementDistance, leftHandMovementDistance, rightHandMovementDistance, levelEndStateType,
      levelEndAction, energy, goodCutsCount, badCutsCount, missedCount, notGoodCount, okCount, maxCutScore, totalCutScore, goodCutsCountForNotesWithFullScoreScoringType,
      averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, averageCutScoreForNotesWithFullScoreScoringType, maxCombo, endSongTime));
}
inline void GlobalNamespace::LevelCompletionResults::_ctor(::GlobalNamespace::GameplayModifiers* gameplayModifiers, int32_t modifiedScore, int32_t multipliedScore,
                                                           ::GlobalNamespace::__RankModel__Rank rank, bool fullCombo, float_t leftSaberMovementDistance, float_t rightSaberMovementDistance,
                                                           float_t leftHandMovementDistance, float_t rightHandMovementDistance,
                                                           ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType levelEndStateType,
                                                           ::GlobalNamespace::__LevelCompletionResults__LevelEndAction levelEndAction, float_t energy, int32_t goodCutsCount, int32_t badCutsCount,
                                                           int32_t missedCount, int32_t notGoodCount, int32_t okCount, int32_t maxCutScore, int32_t totalCutScore,
                                                           int32_t goodCutsCountForNotesWithFullScoreScoringType, float_t averageCenterDistanceCutScoreForNotesWithFullScoreScoringType,
                                                           float_t averageCutScoreForNotesWithFullScoreScoringType, int32_t maxCombo, float_t endSongTime) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RankModel__Rank>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCompletionResults__LevelEndStateType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCompletionResults__LevelEndAction>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameplayModifiers, modifiedScore, multipliedScore, rank, fullCombo, leftSaberMovementDistance,
                                                          rightSaberMovementDistance, leftHandMovementDistance, rightHandMovementDistance, levelEndStateType, levelEndAction, energy, goodCutsCount,
                                                          badCutsCount, missedCount, notGoodCount, okCount, maxCutScore, totalCutScore, goodCutsCountForNotesWithFullScoreScoringType,
                                                          averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, averageCutScoreForNotesWithFullScoreScoringType, maxCombo, endSongTime);
}
inline int32_t GlobalNamespace::LevelCompletionResults::CompareTo(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(), "CompareTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline void GlobalNamespace::LevelCompletionResults::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline ::GlobalNamespace::LevelCompletionResults*
GlobalNamespace::LevelCompletionResults::LiteNetLib_Utils_INetImmutableSerializable_LevelCompletionResults__CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(),
                                               "LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults*, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::LevelCompletionResults::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(), "CreateFromSerializedData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults*, false>(nullptr, ___internal_method, reader);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelCompletionResults::LevelCompletionResults() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
