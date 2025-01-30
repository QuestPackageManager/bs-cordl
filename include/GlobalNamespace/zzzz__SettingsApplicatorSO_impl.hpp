#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsApplicatorSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_def.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "BeatSaber/Settings/zzzz__WindowSettings_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassGraphicsSettingsPresetsSO_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectGraphicsSettingsPresetsSO_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererGraphicsSettingsPresets_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__SceneType_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SettingsApplicatorSO.add_roomTransformOffsetDidUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsApplicatorSO::*)(::System::Action*)>(
    &::GlobalNamespace::SettingsApplicatorSO::add_roomTransformOffsetDidUpdateEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b31788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), "add_roomTransformOffsetDidUpdateEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsApplicatorSO.remove_roomTransformOffsetDidUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsApplicatorSO::*)(::System::Action*)>(
    &::GlobalNamespace::SettingsApplicatorSO::remove_roomTransformOffsetDidUpdateEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b31824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), "remove_roomTransformOffsetDidUpdateEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsApplicatorSO.ApplyGameSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsApplicatorSO::*)(::ByRef<::BeatSaber::Settings::Settings>)>(
    &::GlobalNamespace::SettingsApplicatorSO::ApplyGameSettings)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3b31684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), "ApplyGameSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::Settings::Settings>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsApplicatorSO.ApplyGraphicSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsApplicatorSO::*)(
    ::ByRef<::BeatSaber::Settings::Settings>, ::GlobalNamespace::SceneType)>(&::GlobalNamespace::SettingsApplicatorSO::ApplyGraphicSettings)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x3b31414;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsApplicatorSO.ApplyWindowSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsApplicatorSO::*)(::ByRef<::BeatSaber::Settings::WindowSettings>)>(
    &::GlobalNamespace::SettingsApplicatorSO::ApplyWindowSettings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3b318dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsApplicatorSO.NotifyRoomTransformOffsetWasUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsApplicatorSO::*)()>(
    &::GlobalNamespace::SettingsApplicatorSO::NotifyRoomTransformOffsetWasUpdated)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3b318c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), "NotifyRoomTransformOffsetWasUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsApplicatorSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsApplicatorSO::*)()>(&::GlobalNamespace::SettingsApplicatorSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b31610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirrorRendererGraphicsSettingsPresets)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainEffectGraphicsSettingsPresets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrePassGraphicsSettingsPresets)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirrorRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainEffectContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrePassEffectContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__hapticFeedbackManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__hapticFeedbackManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set__hapticFeedbackManager(::UnityW<::GlobalNamespace::HapticFeedbackManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hapticFeedbackManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::GlobalNamespace::IVRPlatformHelper* const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPlatformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomTransformOffsetDidUpdateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SettingsApplicatorSO::add_roomTransformOffsetDidUpdateEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), "add_roomTransformOffsetDidUpdateEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsApplicatorSO::remove_roomTransformOffsetDidUpdateEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), "remove_roomTransformOffsetDidUpdateEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsApplicatorSO::ApplyGameSettings(::ByRef<::BeatSaber::Settings::Settings> settings) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), "ApplyGameSettings", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::Settings::Settings>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline void GlobalNamespace::SettingsApplicatorSO::ApplyGraphicSettings(::ByRef<::BeatSaber::Settings::Settings> settings, ::GlobalNamespace::SceneType sceneType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings, sceneType);
}
inline void GlobalNamespace::SettingsApplicatorSO::ApplyWindowSettings(::ByRef<::BeatSaber::Settings::WindowSettings> settings) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline void GlobalNamespace::SettingsApplicatorSO::NotifyRoomTransformOffsetWasUpdated() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), "NotifyRoomTransformOffsetWasUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsApplicatorSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SettingsApplicatorSO* GlobalNamespace::SettingsApplicatorSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SettingsApplicatorSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsApplicatorSO::SettingsApplicatorSO() {}
