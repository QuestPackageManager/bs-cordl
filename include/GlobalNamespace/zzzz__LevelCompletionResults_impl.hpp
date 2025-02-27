#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelCompletionResults.hpp"
#include "GlobalNamespace/zzzz__RankModel_impl.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_impl.hpp"
#include "System/zzzz__IComparable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndStateType::LevelCompletionResults_LevelEndStateType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndStateType::LevelCompletionResults_LevelEndStateType() {}
constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndStateType GlobalNamespace::LevelCompletionResults_LevelEndStateType::Incomplete{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndStateType GlobalNamespace::LevelCompletionResults_LevelEndStateType::Cleared{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndStateType GlobalNamespace::LevelCompletionResults_LevelEndStateType::Failed{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndAction::LevelCompletionResults_LevelEndAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndAction::LevelCompletionResults_LevelEndAction() {}
constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndAction GlobalNamespace::LevelCompletionResults_LevelEndAction::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndAction GlobalNamespace::LevelCompletionResults_LevelEndAction::Quit{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndAction GlobalNamespace::LevelCompletionResults_LevelEndAction::Restart{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults.get_cumulativeScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LevelCompletionResults::*)()>(
    &::GlobalNamespace::LevelCompletionResults::get_cumulativeScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2724d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(),
                                                                               "get_cumulativeScore", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCompletionResults::*)()>(&::GlobalNamespace::LevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2724d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCompletionResults::*)(
    ::GlobalNamespace::GameplayModifiers*, int32_t, int32_t, ::GlobalNamespace::RankModel_Rank, bool, float_t, float_t, float_t, float_t, ::GlobalNamespace::LevelCompletionResults_LevelEndStateType,
    ::GlobalNamespace::LevelCompletionResults_LevelEndAction, float_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, float_t, float_t, int32_t, float_t, bool)>(
    &::GlobalNamespace::LevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2724d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 25>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RankModel_Rank>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults_LevelEndStateType>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults_LevelEndAction>::get(),
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
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LevelCompletionResults::*)(::System::Object*)>(
    &::GlobalNamespace::LevelCompletionResults::CompareTo)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2724ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCompletionResults::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::LevelCompletionResults::Serialize)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x2724fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults.LiteNetLib_Utils_INetImmutableSerializable_LevelCompletionResults__CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::LevelCompletionResults* (::GlobalNamespace::LevelCompletionResults::*)(::LiteNetLib::Utils::NetDataReader*)>(
        &::GlobalNamespace::LevelCompletionResults::LiteNetLib_Utils_INetImmutableSerializable_LevelCompletionResults__CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27252a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(),
                                                 "LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults.CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LevelCompletionResults* (*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::LevelCompletionResults::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x27252a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(), "CreateFromSerializedData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameplayModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_modifiedScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiedScore;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_modifiedScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiedScore;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_modifiedScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifiedScore = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_multipliedScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multipliedScore;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_multipliedScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multipliedScore;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_multipliedScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___multipliedScore = value;
}
constexpr ::GlobalNamespace::RankModel_Rank& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_rank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rank;
}
constexpr ::GlobalNamespace::RankModel_Rank const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_rank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rank;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_rank(::GlobalNamespace::RankModel_Rank value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rank = value;
}
constexpr bool& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_fullCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCombo;
}
constexpr bool const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_fullCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCombo;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_fullCombo(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullCombo = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_leftSaberMovementDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftSaberMovementDistance;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_leftSaberMovementDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftSaberMovementDistance;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_leftSaberMovementDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftSaberMovementDistance = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_rightSaberMovementDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightSaberMovementDistance;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_rightSaberMovementDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightSaberMovementDistance;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_rightSaberMovementDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rightSaberMovementDistance = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_leftHandMovementDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandMovementDistance;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_leftHandMovementDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandMovementDistance;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_leftHandMovementDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftHandMovementDistance = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_rightHandMovementDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandMovementDistance;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_rightHandMovementDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandMovementDistance;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_rightHandMovementDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rightHandMovementDistance = value;
}
constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndStateType& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_levelEndStateType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEndStateType;
}
constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndStateType const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_levelEndStateType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEndStateType;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_levelEndStateType(::GlobalNamespace::LevelCompletionResults_LevelEndStateType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelEndStateType = value;
}
constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndAction& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_levelEndAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEndAction;
}
constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndAction const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_levelEndAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEndAction;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_levelEndAction(::GlobalNamespace::LevelCompletionResults_LevelEndAction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelEndAction = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_energy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___energy;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_energy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___energy;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_energy(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___energy = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_goodCutsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCutsCount;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_goodCutsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCutsCount;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_goodCutsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___goodCutsCount = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_badCutsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badCutsCount;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_badCutsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badCutsCount;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_badCutsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___badCutsCount = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_missedCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missedCount;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_missedCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missedCount;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_missedCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___missedCount = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_notGoodCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notGoodCount;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_notGoodCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notGoodCount;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_notGoodCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___notGoodCount = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_okCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___okCount;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_okCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___okCount;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_okCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___okCount = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_maxCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCutScore;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_maxCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCutScore;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_maxCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCutScore = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_totalCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalCutScore;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_totalCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalCutScore;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_totalCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalCutScore = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_goodCutsCountForNotesWithFullScoreScoringType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCutsCountForNotesWithFullScoreScoringType;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_goodCutsCountForNotesWithFullScoreScoringType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCutsCountForNotesWithFullScoreScoringType;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_goodCutsCountForNotesWithFullScoreScoringType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___goodCutsCountForNotesWithFullScoreScoringType = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___averageCenterDistanceCutScoreForNotesWithFullScoreScoringType;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___averageCenterDistanceCutScoreForNotesWithFullScoreScoringType;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___averageCenterDistanceCutScoreForNotesWithFullScoreScoringType = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_averageCutScoreForNotesWithFullScoreScoringType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___averageCutScoreForNotesWithFullScoreScoringType;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_averageCutScoreForNotesWithFullScoreScoringType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___averageCutScoreForNotesWithFullScoreScoringType;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_averageCutScoreForNotesWithFullScoreScoringType(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___averageCutScoreForNotesWithFullScoreScoringType = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_maxCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCombo;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_maxCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCombo;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_maxCombo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCombo = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_endSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endSongTime;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_endSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endSongTime;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_endSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endSongTime = value;
}
constexpr bool& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_invalidated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invalidated;
}
constexpr bool const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_invalidated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invalidated;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_invalidated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___invalidated = value;
}
inline int32_t GlobalNamespace::LevelCompletionResults::get_cumulativeScore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(),
                                                                             "get_cumulativeScore", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCompletionResults::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCompletionResults::_ctor(::GlobalNamespace::GameplayModifiers* gameplayModifiers, int32_t modifiedScore, int32_t multipliedScore,
                                                           ::GlobalNamespace::RankModel_Rank rank, bool fullCombo, float_t leftSaberMovementDistance, float_t rightSaberMovementDistance,
                                                           float_t leftHandMovementDistance, float_t rightHandMovementDistance,
                                                           ::GlobalNamespace::LevelCompletionResults_LevelEndStateType levelEndStateType,
                                                           ::GlobalNamespace::LevelCompletionResults_LevelEndAction levelEndAction, float_t energy, int32_t goodCutsCount, int32_t badCutsCount,
                                                           int32_t missedCount, int32_t notGoodCount, int32_t okCount, int32_t maxCutScore, int32_t totalCutScore,
                                                           int32_t goodCutsCountForNotesWithFullScoreScoringType, float_t averageCenterDistanceCutScoreForNotesWithFullScoreScoringType,
                                                           float_t averageCutScoreForNotesWithFullScoreScoringType, int32_t maxCombo, float_t endSongTime, bool invalidated) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 25>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RankModel_Rank>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults_LevelEndStateType>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults_LevelEndAction>::get(),
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
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameplayModifiers, modifiedScore, multipliedScore, rank, fullCombo, leftSaberMovementDistance,
                                                          rightSaberMovementDistance, leftHandMovementDistance, rightHandMovementDistance, levelEndStateType, levelEndAction, energy, goodCutsCount,
                                                          badCutsCount, missedCount, notGoodCount, okCount, maxCutScore, totalCutScore, goodCutsCountForNotesWithFullScoreScoringType,
                                                          averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, averageCutScoreForNotesWithFullScoreScoringType, maxCombo, endSongTime,
                                                          invalidated);
}
inline int32_t GlobalNamespace::LevelCompletionResults::CompareTo(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline void GlobalNamespace::LevelCompletionResults::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline ::GlobalNamespace::LevelCompletionResults*
GlobalNamespace::LevelCompletionResults::LiteNetLib_Utils_INetImmutableSerializable_LevelCompletionResults__CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(),
                                               "LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults*, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::LevelCompletionResults::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(), "CreateFromSerializedData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults*, false>(nullptr, ___internal_method, reader);
}
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::LevelCompletionResults::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LevelCompletionResults*>());
}
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::LevelCompletionResults::New_ctor(
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, int32_t modifiedScore, int32_t multipliedScore, ::GlobalNamespace::RankModel_Rank rank, bool fullCombo, float_t leftSaberMovementDistance,
    float_t rightSaberMovementDistance, float_t leftHandMovementDistance, float_t rightHandMovementDistance, ::GlobalNamespace::LevelCompletionResults_LevelEndStateType levelEndStateType,
    ::GlobalNamespace::LevelCompletionResults_LevelEndAction levelEndAction, float_t energy, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCount, int32_t notGoodCount, int32_t okCount,
    int32_t maxCutScore, int32_t totalCutScore, int32_t goodCutsCountForNotesWithFullScoreScoringType, float_t averageCenterDistanceCutScoreForNotesWithFullScoreScoringType,
    float_t averageCutScoreForNotesWithFullScoreScoringType, int32_t maxCombo, float_t endSongTime, bool invalidated) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LevelCompletionResults*>(
      gameplayModifiers, modifiedScore, multipliedScore, rank, fullCombo, leftSaberMovementDistance, rightSaberMovementDistance, leftHandMovementDistance, rightHandMovementDistance, levelEndStateType,
      levelEndAction, energy, goodCutsCount, badCutsCount, missedCount, notGoodCount, okCount, maxCutScore, totalCutScore, goodCutsCountForNotesWithFullScoreScoringType,
      averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, averageCutScoreForNotesWithFullScoreScoringType, maxCombo, endSongTime, invalidated));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>"
constexpr GlobalNamespace::LevelCompletionResults::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>*
GlobalNamespace::LevelCompletionResults::i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__LevelCompletionResults__() noexcept {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
constexpr GlobalNamespace::LevelCompletionResults::operator ::System::IComparable*() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* GlobalNamespace::LevelCompletionResults::i___System__IComparable() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelCompletionResults::LevelCompletionResults() {}
