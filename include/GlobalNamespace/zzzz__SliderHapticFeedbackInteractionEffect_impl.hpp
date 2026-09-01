#pragma once
// IWYU pragma private; include "GlobalNamespace\SliderHapticFeedbackInteractionEffect.hpp"
#include "GlobalNamespace/zzzz__SaberType_impl.hpp"
#include "GlobalNamespace/zzzz__SliderInteractionEffect_impl.hpp"
#include "GlobalNamespace/zzzz__SliderHapticFeedbackInteractionEffect_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticFeedbackManager_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderHapticFeedbackInteractionEffect.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)()>(&::GlobalNamespace::SliderHapticFeedbackInteractionEffect::Start)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x597a50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderHapticFeedbackInteractionEffect.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)()>(&::GlobalNamespace::SliderHapticFeedbackInteractionEffect::Update)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x597a65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderHapticFeedbackInteractionEffect.StartEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)(float_t)>(
    &::GlobalNamespace::SliderHapticFeedbackInteractionEffect::StartEffect)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x597a77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderHapticFeedbackInteractionEffect.EndEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)()>(&::GlobalNamespace::SliderHapticFeedbackInteractionEffect::EndEffect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x597a7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderHapticFeedbackInteractionEffect.Vibrate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)()>(&::GlobalNamespace::SliderHapticFeedbackInteractionEffect::Vibrate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x597a74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>(), { "Vibrate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderHapticFeedbackInteractionEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)()>(&::GlobalNamespace::SliderHapticFeedbackInteractionEffect::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597a7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO>& GlobalNamespace::SliderHapticFeedbackInteractionEffect::__cordl_internal_get__hapticPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticPreset;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO> const& GlobalNamespace::SliderHapticFeedbackInteractionEffect::__cordl_internal_get__hapticPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticPreset;
}
constexpr void GlobalNamespace::SliderHapticFeedbackInteractionEffect::__cordl_internal_set__hapticPreset(::UnityW<::BeatSaber::Haptics::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticPreset = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager>& GlobalNamespace::SliderHapticFeedbackInteractionEffect::__cordl_internal_get__hapticFeedbackManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> const& GlobalNamespace::SliderHapticFeedbackInteractionEffect::__cordl_internal_get__hapticFeedbackManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr void GlobalNamespace::SliderHapticFeedbackInteractionEffect::__cordl_internal_set__hapticFeedbackManager(::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticFeedbackManager = value;
}
constexpr ::GlobalNamespace::IGamePause*& GlobalNamespace::SliderHapticFeedbackInteractionEffect::__cordl_internal_get__gamePause() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gamePause;
}
constexpr ::GlobalNamespace::IGamePause* const& GlobalNamespace::SliderHapticFeedbackInteractionEffect::__cordl_internal_get__gamePause() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gamePause;
}
constexpr void GlobalNamespace::SliderHapticFeedbackInteractionEffect::__cordl_internal_set__gamePause(::GlobalNamespace::IGamePause* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gamePause = value;
}
constexpr ::GlobalNamespace::SaberType& GlobalNamespace::SliderHapticFeedbackInteractionEffect::__cordl_internal_get__saberType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberType;
}
constexpr ::GlobalNamespace::SaberType const& GlobalNamespace::SliderHapticFeedbackInteractionEffect::__cordl_internal_get__saberType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberType;
}
constexpr void GlobalNamespace::SliderHapticFeedbackInteractionEffect::__cordl_internal_set__saberType(::GlobalNamespace::SaberType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberType = value;
}
inline void GlobalNamespace::SliderHapticFeedbackInteractionEffect::Start() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderHapticFeedbackInteractionEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderHapticFeedbackInteractionEffect::StartEffect(float_t saberInteractionParam) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saberInteractionParam);
}
inline void GlobalNamespace::SliderHapticFeedbackInteractionEffect::EndEffect() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderHapticFeedbackInteractionEffect::Vibrate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>(), { "Vibrate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderHapticFeedbackInteractionEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderHapticFeedbackInteractionEffect* GlobalNamespace::SliderHapticFeedbackInteractionEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderHapticFeedbackInteractionEffect::SliderHapticFeedbackInteractionEffect() {}
