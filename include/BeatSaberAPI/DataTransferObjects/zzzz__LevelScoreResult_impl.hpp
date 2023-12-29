#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__LevelScoreResult_def.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__LevelScoreResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::__LevelScoreResult__GameplayModifiers(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::__LevelScoreResult__GameplayModifiers() {}
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::None{ static_cast<uint32_t>(
    0x8040200u) };
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::InstaFail{ static_cast<uint32_t>(
    0x10080402u) };
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::FailOnSaberClash{ static_cast<uint32_t>(
    0x20100804u) };
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::FastNotes{ static_cast<uint32_t>(
    0x40201008u) };
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::DisappearingArrows{
  static_cast<uint32_t>(0x80402010u)
};
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::NoBombs{ static_cast<uint32_t>(
    0x80804020u) };
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::SongSpeedFaster{ static_cast<uint32_t>(
    0x81808040u) };
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::SongSpeedSlower{ static_cast<uint32_t>(
    0x818080u) };
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::EnabledObstacleTypeFullHeightOnly{
  static_cast<uint32_t>(0x820081u)
};
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::EnabledObstacleTypeNoObstacles{
  static_cast<uint32_t>(0x840082u)
};
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::EnergyTypeBattery{ static_cast<uint32_t>(
    0x880084u) };
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::StrictAngles{ static_cast<uint32_t>(
    0x900088u) };
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::NoArrows{ static_cast<uint32_t>(
    0xa00090u) };
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::GhostNotes{ static_cast<uint32_t>(
    0xc000a0u) };
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::NoFailOn0Energy{ static_cast<uint32_t>(
    0x4000c0u) };
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::SongSpeedSuperFast{
  static_cast<uint32_t>(0x8000c0u)
};
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::ProMode{ static_cast<uint32_t>(0x1c0u) };
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::ZenMode{ static_cast<uint32_t>(0x2c0u) };
constexpr ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers::SmallCubes{ static_cast<uint32_t>(
    0x4c0u) };
//  Writing Method size for method: ::BeatSaberAPI::DataTransferObjects::LevelScoreResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaberAPI::DataTransferObjects::LevelScoreResult::*)()>(
    &::BeatSaberAPI::DataTransferObjects::LevelScoreResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e8ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::LevelScoreResult*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_leaderboardId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leaderboardId;
}
constexpr ::StringW const& BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_leaderboardId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leaderboardId;
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_leaderboardId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leaderboardId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_multipliedScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multipliedScore;
}
constexpr int32_t const& BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_multipliedScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multipliedScore;
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_multipliedScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___multipliedScore = value;
}
constexpr int32_t& BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_modifiedScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiedScore;
}
constexpr int32_t const& BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_modifiedScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiedScore;
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_modifiedScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifiedScore = value;
}
constexpr bool& BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_fullCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCombo;
}
constexpr bool const& BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_fullCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCombo;
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_fullCombo(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullCombo = value;
}
constexpr int32_t& BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_goodCutsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCutsCount;
}
constexpr int32_t const& BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_goodCutsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCutsCount;
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_goodCutsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___goodCutsCount = value;
}
constexpr int32_t& BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_badCutsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badCutsCount;
}
constexpr int32_t const& BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_badCutsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badCutsCount;
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_badCutsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___badCutsCount = value;
}
constexpr int32_t& BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_missedCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missedCount;
}
constexpr int32_t const& BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_missedCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missedCount;
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_missedCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___missedCount = value;
}
constexpr int32_t& BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_maxCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCombo;
}
constexpr int32_t const& BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_maxCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCombo;
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_maxCombo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCombo = value;
}
constexpr ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*>&
BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*> const&
BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_gameplayModifiers(
    ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameplayModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_deviceModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceModel;
}
constexpr ::StringW const& BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_deviceModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceModel;
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_deviceModel(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___deviceModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_extraDataBase64() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraDataBase64;
}
constexpr ::StringW const& BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_extraDataBase64() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraDataBase64;
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_extraDataBase64(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___extraDataBase64)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaberAPI::DataTransferObjects::LevelScoreResult* BeatSaberAPI::DataTransferObjects::LevelScoreResult::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaberAPI::DataTransferObjects::LevelScoreResult*>());
}
inline void BeatSaberAPI::DataTransferObjects::LevelScoreResult::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::LevelScoreResult*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaberAPI::DataTransferObjects::LevelScoreResult::LevelScoreResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
