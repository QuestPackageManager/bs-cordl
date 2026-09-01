#pragma once
// IWYU pragma private; include "GlobalNamespace\NoteCutHapticEffect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutHapticEffect_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticFeedbackManager_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutHapticEffect_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NoteCutHapticEffect_Type::NoteCutHapticEffect_Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutHapticEffect_Type::NoteCutHapticEffect_Type() {}
constexpr ::GlobalNamespace::NoteCutHapticEffect_Type GlobalNamespace::NoteCutHapticEffect_Type::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::NoteCutHapticEffect_Type GlobalNamespace::NoteCutHapticEffect_Type::ChainHead{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::NoteCutHapticEffect_Type GlobalNamespace::NoteCutHapticEffect_Type::ChainLink{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::NoteCutHapticEffect_Type GlobalNamespace::NoteCutHapticEffect_Type::Bomb{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::NoteCutHapticEffect_Type GlobalNamespace::NoteCutHapticEffect_Type::BadCut{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::NoteCutHapticEffect_Type GlobalNamespace::NoteCutHapticEffect_Type::ArcHead{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::NoteCutHapticEffect_Type GlobalNamespace::NoteCutHapticEffect_Type::ArcTail{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::NoteCutHapticEffect_Type GlobalNamespace::NoteCutHapticEffect_Type::ArcHeadAndTail{ static_cast<int32_t>(0x7) };
//  Writing Method size for method: ::GlobalNamespace::NoteCutHapticEffect.HitNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutHapticEffect::*)(::GlobalNamespace::SaberType, ::GlobalNamespace::NoteCutHapticEffect_Type)>(
    &::GlobalNamespace::NoteCutHapticEffect::HitNote)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5985bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutHapticEffect*>(),
                                                             { "HitNote", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>(), ::i2c::type_of<::GlobalNamespace::NoteCutHapticEffect_Type>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutHapticEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutHapticEffect::*)()>(&::GlobalNamespace::NoteCutHapticEffect::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5985c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutHapticEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO>& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__normalPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalPreset;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO> const& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__normalPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__cordl_internal_set__normalPreset(::UnityW<::BeatSaber::Haptics::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalPreset = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO>& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__chainHeadPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chainHeadPreset;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO> const& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__chainHeadPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chainHeadPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__cordl_internal_set__chainHeadPreset(::UnityW<::BeatSaber::Haptics::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____chainHeadPreset = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO>& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__chainLinkPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chainLinkPreset;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO> const& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__chainLinkPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chainLinkPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__cordl_internal_set__chainLinkPreset(::UnityW<::BeatSaber::Haptics::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____chainLinkPreset = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO>& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__bombPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombPreset;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO> const& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__bombPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__cordl_internal_set__bombPreset(::UnityW<::BeatSaber::Haptics::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bombPreset = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO>& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__badCutPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badCutPreset;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO> const& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__badCutPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badCutPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__cordl_internal_set__badCutPreset(::UnityW<::BeatSaber::Haptics::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____badCutPreset = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO>& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__arcHeadPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcHeadPreset;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO> const& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__arcHeadPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcHeadPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__cordl_internal_set__arcHeadPreset(::UnityW<::BeatSaber::Haptics::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arcHeadPreset = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO>& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__arcTailPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcTailPreset;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO> const& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__arcTailPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcTailPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__cordl_internal_set__arcTailPreset(::UnityW<::BeatSaber::Haptics::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arcTailPreset = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO>& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__arcHeadAndTailPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcHeadAndTailPreset;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO> const& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__arcHeadAndTailPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcHeadAndTailPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__cordl_internal_set__arcHeadAndTailPreset(::UnityW<::BeatSaber::Haptics::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arcHeadAndTailPreset = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager>& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__hapticFeedbackManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> const& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__hapticFeedbackManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__cordl_internal_set__hapticFeedbackManager(::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticFeedbackManager = value;
}
inline void GlobalNamespace::NoteCutHapticEffect::HitNote(::GlobalNamespace::SaberType saberType, ::GlobalNamespace::NoteCutHapticEffect_Type type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutHapticEffect*>(),
                                                           { "HitNote", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>(), ::i2c::type_of<::GlobalNamespace::NoteCutHapticEffect_Type>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saberType, type);
}
inline void GlobalNamespace::NoteCutHapticEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutHapticEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteCutHapticEffect* GlobalNamespace::NoteCutHapticEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteCutHapticEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutHapticEffect::NoteCutHapticEffect() {}
