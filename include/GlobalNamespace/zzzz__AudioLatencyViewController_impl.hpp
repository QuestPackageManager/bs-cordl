#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__AudioLatencyViewController_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VisualMetronome_def.hpp"
#include "HMUI/zzzz__RangeValuesTextSlider_def.hpp"
#include "HMUI/zzzz__ToggleBinder_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioLatencyViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioLatencyViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::AudioLatencyViewController::DidActivate)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2534918;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLatencyViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioLatencyViewController::*)(bool, bool)>(
    &::GlobalNamespace::AudioLatencyViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2534c44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLatencyViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioLatencyViewController::*)()>(
    &::GlobalNamespace::AudioLatencyViewController::OnDestroy)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2534c6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLatencyViewController.SliderValueDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioLatencyViewController::*)(::HMUI::RangeValuesTextSlider*, float_t)>(
    &::GlobalNamespace::AudioLatencyViewController::SliderValueDidChange)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2534d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), "SliderValueDidChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::RangeValuesTextSlider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLatencyViewController.HandleOverrideAudioLatencyToggleValueChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioLatencyViewController::*)(bool)>(
    &::GlobalNamespace::AudioLatencyViewController::HandleOverrideAudioLatencyToggleValueChanged)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2534dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), "HandleOverrideAudioLatencyToggleValueChanged",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLatencyViewController.RefreshVisuals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioLatencyViewController::*)(bool)>(
    &::GlobalNamespace::AudioLatencyViewController::RefreshVisuals)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2534b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), "RefreshVisuals",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLatencyViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioLatencyViewController::*)()>(&::GlobalNamespace::AudioLatencyViewController::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2534e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FloatSO>& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__audioLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioLatency;
}
constexpr ::UnityW<::GlobalNamespace::FloatSO> const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__audioLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioLatency;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__audioLatency(::UnityW<::GlobalNamespace::FloatSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioLatency)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__overrideAudioLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideAudioLatency;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__overrideAudioLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideAudioLatency;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__overrideAudioLatency(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overrideAudioLatency)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::CanvasGroup>& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__setupCanvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setupCanvasGroup;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__setupCanvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setupCanvasGroup;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__setupCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____setupCanvasGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__overrideAudioLatencyToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideAudioLatencyToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__overrideAudioLatencyToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideAudioLatencyToggle;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__overrideAudioLatencyToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overrideAudioLatencyToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::RangeValuesTextSlider>& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__slider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slider;
}
constexpr ::UnityW<::HMUI::RangeValuesTextSlider> const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__slider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slider;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__slider(::UnityW<::HMUI::RangeValuesTextSlider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____slider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::VisualMetronome>& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__visualMetronome() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visualMetronome;
}
constexpr ::UnityW<::GlobalNamespace::VisualMetronome> const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__visualMetronome() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visualMetronome;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__visualMetronome(::UnityW<::GlobalNamespace::VisualMetronome> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____visualMetronome)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__disabledAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledAlpha;
}
constexpr float_t const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__disabledAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledAlpha;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__disabledAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disabledAlpha = value;
}
constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer>& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__songPreviewPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer> const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__songPreviewPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewPlayer;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__songPreviewPlayer(::UnityW<::GlobalNamespace::SongPreviewPlayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPreviewPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__mainSettingsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__mainSettingsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSettingsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ToggleBinder*& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__toggleBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__toggleBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____toggleBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::AudioLatencyViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::AudioLatencyViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::AudioLatencyViewController::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AudioLatencyViewController::SliderValueDidChange(::HMUI::RangeValuesTextSlider* slider, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), "SliderValueDidChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::RangeValuesTextSlider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, slider, value);
}
inline void GlobalNamespace::AudioLatencyViewController::HandleOverrideAudioLatencyToggleValueChanged(bool isOn) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), "HandleOverrideAudioLatencyToggleValueChanged",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isOn);
}
inline void GlobalNamespace::AudioLatencyViewController::RefreshVisuals(bool overrideAudioLatencyIsEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), "RefreshVisuals",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, overrideAudioLatencyIsEnabled);
}
inline ::GlobalNamespace::AudioLatencyViewController* GlobalNamespace::AudioLatencyViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AudioLatencyViewController*>());
}
inline void GlobalNamespace::AudioLatencyViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioLatencyViewController::AudioLatencyViewController() {}
