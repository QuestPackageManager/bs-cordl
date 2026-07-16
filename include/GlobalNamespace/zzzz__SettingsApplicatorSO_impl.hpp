#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsApplicatorSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticFeedbackManager_def.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "BeatSaber/Settings/zzzz__WindowSettings_def.hpp"
#include "GlobalNamespace/zzzz__AudioManager_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassGraphicsSettingsPresetsSO_def.hpp"
#include "GlobalNamespace/zzzz__IXRSystemState_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectGraphicsSettingsPresetsSO_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererGraphicsSettingsPresets_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__SceneType_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SettingsApplicatorSO.add_roomTransformOffsetDidUpdateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsApplicatorSO::*)(::System::Action*)>(
    &::GlobalNamespace::SettingsApplicatorSO::add_roomTransformOffsetDidUpdateEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5900118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsApplicatorSO*>(), { "add_roomTransformOffsetDidUpdateEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsApplicatorSO.remove_roomTransformOffsetDidUpdateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsApplicatorSO::*)(::System::Action*)>(
    &::GlobalNamespace::SettingsApplicatorSO::remove_roomTransformOffsetDidUpdateEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59001c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsApplicatorSO*>(), { "remove_roomTransformOffsetDidUpdateEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsApplicatorSO.ApplyGameSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsApplicatorSO::*)(::by_ref<::BeatSaber::Settings::Settings>)>(
    &::GlobalNamespace::SettingsApplicatorSO::ApplyGameSettings)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5900008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsApplicatorSO*>(), { "ApplyGameSettings", {}, { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsApplicatorSO.ApplyGraphicSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsApplicatorSO::*)(::by_ref<::BeatSaber::Settings::Settings>, ::GlobalNamespace::SceneType)>(
    &::GlobalNamespace::SettingsApplicatorSO::ApplyGraphicSettings)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x58ffbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsApplicatorSO*>(), { ::i2c::class_of<::GlobalNamespace::SettingsApplicatorSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsApplicatorSO.ApplyWindowSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsApplicatorSO::*)(::by_ref<::BeatSaber::Settings::WindowSettings>)>(
    &::GlobalNamespace::SettingsApplicatorSO::ApplyWindowSettings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x590028c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsApplicatorSO*>(), { ::i2c::class_of<::GlobalNamespace::SettingsApplicatorSO*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsApplicatorSO.NotifyRoomTransformOffsetWasUpdated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsApplicatorSO::*)()>(&::GlobalNamespace::SettingsApplicatorSO::NotifyRoomTransformOffsetWasUpdated)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5900270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsApplicatorSO*>(), { "NotifyRoomTransformOffsetWasUpdated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsApplicatorSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsApplicatorSO::*)()>(&::GlobalNamespace::SettingsApplicatorSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58fff94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsApplicatorSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets>& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__mirrorRendererGraphicsSettingsPresets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRendererGraphicsSettingsPresets;
}
constexpr ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__mirrorRendererGraphicsSettingsPresets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRendererGraphicsSettingsPresets;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set__mirrorRendererGraphicsSettingsPresets(::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirrorRendererGraphicsSettingsPresets = value;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO>& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__mainEffectGraphicsSettingsPresets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectGraphicsSettingsPresets;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__mainEffectGraphicsSettingsPresets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectGraphicsSettingsPresets;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set__mainEffectGraphicsSettingsPresets(::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainEffectGraphicsSettingsPresets = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO>& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__bloomPrePassGraphicsSettingsPresets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassGraphicsSettingsPresets;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__bloomPrePassGraphicsSettingsPresets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassGraphicsSettingsPresets;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set__bloomPrePassGraphicsSettingsPresets(::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomPrePassGraphicsSettingsPresets = value;
}
constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO>& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__mirrorRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRenderer;
}
constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO> const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__mirrorRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRenderer;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set__mirrorRenderer(::UnityW<::GlobalNamespace::MirrorRendererSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirrorRenderer = value;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO>& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__mainEffectContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectContainer;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO> const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__mainEffectContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectContainer;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set__mainEffectContainer(::UnityW<::GlobalNamespace::MainEffectContainerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainEffectContainer = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO>& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__bloomPrePassEffectContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassEffectContainer;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__bloomPrePassEffectContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassEffectContainer;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set__bloomPrePassEffectContainer(::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomPrePassEffectContainer = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager>& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__hapticFeedbackManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__hapticFeedbackManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set__hapticFeedbackManager(::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticFeedbackManager = value;
}
constexpr ::GlobalNamespace::AudioManager*& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr ::GlobalNamespace::AudioManager* const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set__audioManager(::GlobalNamespace::AudioManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioManager = value;
}
constexpr ::GlobalNamespace::IXRSystemState*& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__xrSystemState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xrSystemState;
}
constexpr ::GlobalNamespace::IXRSystemState* const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__xrSystemState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xrSystemState;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set__xrSystemState(::GlobalNamespace::IXRSystemState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xrSystemState = value;
}
constexpr ::System::Action*& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get_roomTransformOffsetDidUpdateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomTransformOffsetDidUpdateEvent;
}
constexpr ::System::Action* const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get_roomTransformOffsetDidUpdateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomTransformOffsetDidUpdateEvent;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set_roomTransformOffsetDidUpdateEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___roomTransformOffsetDidUpdateEvent = value;
}
inline void GlobalNamespace::SettingsApplicatorSO::add_roomTransformOffsetDidUpdateEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsApplicatorSO*>(), { "add_roomTransformOffsetDidUpdateEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsApplicatorSO::remove_roomTransformOffsetDidUpdateEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsApplicatorSO*>(), { "remove_roomTransformOffsetDidUpdateEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsApplicatorSO::ApplyGameSettings(::by_ref<::BeatSaber::Settings::Settings> settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsApplicatorSO*>(), { "ApplyGameSettings", {}, { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GlobalNamespace::SettingsApplicatorSO::ApplyGraphicSettings(::by_ref<::BeatSaber::Settings::Settings> settings, ::GlobalNamespace::SceneType sceneType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SettingsApplicatorSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings, sceneType);
}
inline void GlobalNamespace::SettingsApplicatorSO::ApplyWindowSettings(::by_ref<::BeatSaber::Settings::WindowSettings> settings) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SettingsApplicatorSO*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GlobalNamespace::SettingsApplicatorSO::NotifyRoomTransformOffsetWasUpdated() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsApplicatorSO*>(), { "NotifyRoomTransformOffsetWasUpdated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsApplicatorSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsApplicatorSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SettingsApplicatorSO* GlobalNamespace::SettingsApplicatorSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SettingsApplicatorSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsApplicatorSO::SettingsApplicatorSO() {}
