#pragma once
// IWYU pragma private; include "BeatSaber\Haptics\HapticPresetSO.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "BeatSaber/Haptics/zzzz__HapticPresetSO_def.hpp"
#include "Oculus/Haptics/zzzz__HapticClip_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::BeatSaber::Haptics::HapticPresetSO.get_hasPS5HapticsClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Haptics::HapticPresetSO::*)()>(&::BeatSaber::Haptics::HapticPresetSO::get_hasPS5HapticsClip)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x32995e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::HapticPresetSO*>(), { "get_hasPS5HapticsClip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::HapticPresetSO.get_hasOculusHapticsClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Haptics::HapticPresetSO::*)()>(&::BeatSaber::Haptics::HapticPresetSO::get_hasOculusHapticsClip)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3298390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::HapticPresetSO*>(), { "get_hasOculusHapticsClip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::HapticPresetSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::HapticPresetSO::*)()>(&::BeatSaber::Haptics::HapticPresetSO::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x32996cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::HapticPresetSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr float_t const& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr void BeatSaber::Haptics::HapticPresetSO::__cordl_internal_set__duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duration = value;
}
constexpr float_t& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__strength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strength;
}
constexpr float_t const& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__strength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strength;
}
constexpr void BeatSaber::Haptics::HapticPresetSO::__cordl_internal_set__strength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____strength = value;
}
constexpr float_t& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__frequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frequency;
}
constexpr float_t const& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__frequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frequency;
}
constexpr void BeatSaber::Haptics::HapticPresetSO::__cordl_internal_set__frequency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____frequency = value;
}
constexpr bool& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__continuous() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continuous;
}
constexpr bool const& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__continuous() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continuous;
}
constexpr void BeatSaber::Haptics::HapticPresetSO::__cordl_internal_set__continuous(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____continuous = value;
}
constexpr bool& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__useAdvancedHapticsOnSupportedPlatforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useAdvancedHapticsOnSupportedPlatforms;
}
constexpr bool const& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__useAdvancedHapticsOnSupportedPlatforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useAdvancedHapticsOnSupportedPlatforms;
}
constexpr void BeatSaber::Haptics::HapticPresetSO::__cordl_internal_set__useAdvancedHapticsOnSupportedPlatforms(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useAdvancedHapticsOnSupportedPlatforms = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__ps5HapticsClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5HapticsClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__ps5HapticsClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5HapticsClip;
}
constexpr void BeatSaber::Haptics::HapticPresetSO::__cordl_internal_set__ps5HapticsClip(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ps5HapticsClip = value;
}
constexpr ::System::Nullable_1<bool>& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__hasPS5HapticsClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasPS5HapticsClip;
}
constexpr ::System::Nullable_1<bool> const& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__hasPS5HapticsClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasPS5HapticsClip;
}
constexpr void BeatSaber::Haptics::HapticPresetSO::__cordl_internal_set__hasPS5HapticsClip(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasPS5HapticsClip = value;
}
constexpr ::UnityW<::Oculus::Haptics::HapticClip>& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__oculusHapticsClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusHapticsClip;
}
constexpr ::UnityW<::Oculus::Haptics::HapticClip> const& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__oculusHapticsClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusHapticsClip;
}
constexpr void BeatSaber::Haptics::HapticPresetSO::__cordl_internal_set__oculusHapticsClip(::UnityW<::Oculus::Haptics::HapticClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____oculusHapticsClip = value;
}
constexpr uint32_t& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____priority;
}
constexpr uint32_t const& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____priority;
}
constexpr void BeatSaber::Haptics::HapticPresetSO::__cordl_internal_set__priority(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____priority = value;
}
constexpr bool& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__overrideForTouchController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideForTouchController;
}
constexpr bool const& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__overrideForTouchController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideForTouchController;
}
constexpr void BeatSaber::Haptics::HapticPresetSO::__cordl_internal_set__overrideForTouchController(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideForTouchController = value;
}
constexpr ::UnityW<::Oculus::Haptics::HapticClip>& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__touchControllerOverrideHapticsClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touchControllerOverrideHapticsClip;
}
constexpr ::UnityW<::Oculus::Haptics::HapticClip> const& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__touchControllerOverrideHapticsClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touchControllerOverrideHapticsClip;
}
constexpr void BeatSaber::Haptics::HapticPresetSO::__cordl_internal_set__touchControllerOverrideHapticsClip(::UnityW<::Oculus::Haptics::HapticClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____touchControllerOverrideHapticsClip = value;
}
constexpr ::System::Nullable_1<bool>& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__hasOculusHapticsClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasOculusHapticsClip;
}
constexpr ::System::Nullable_1<bool> const& BeatSaber::Haptics::HapticPresetSO::__cordl_internal_get__hasOculusHapticsClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasOculusHapticsClip;
}
constexpr void BeatSaber::Haptics::HapticPresetSO::__cordl_internal_set__hasOculusHapticsClip(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasOculusHapticsClip = value;
}
inline bool BeatSaber::Haptics::HapticPresetSO::get_hasPS5HapticsClip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::HapticPresetSO*>(), { "get_hasPS5HapticsClip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool BeatSaber::Haptics::HapticPresetSO::get_hasOculusHapticsClip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::HapticPresetSO*>(), { "get_hasOculusHapticsClip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void BeatSaber::Haptics::HapticPresetSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::HapticPresetSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Haptics::HapticPresetSO* BeatSaber::Haptics::HapticPresetSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Haptics::HapticPresetSO*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Haptics::HapticPresetSO::HapticPresetSO() {}
