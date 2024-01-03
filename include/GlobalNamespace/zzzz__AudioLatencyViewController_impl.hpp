#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__AudioLatencyViewController_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
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
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x22ac5e4;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x22ac8f4;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x22ac91c;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x22aca00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), "SliderValueDidChange", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::RangeValuesTextSlider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLatencyViewController.HandleOverrideAudioLatencyToggleValueChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioLatencyViewController::*)(bool)>(
    &::GlobalNamespace::AudioLatencyViewController::HandleOverrideAudioLatencyToggleValueChanged)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22aca74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), "HandleOverrideAudioLatencyToggleValueChanged",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLatencyViewController.RefreshVisuals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioLatencyViewController::*)(bool)>(
    &::GlobalNamespace::AudioLatencyViewController::RefreshVisuals)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x22ac808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), "RefreshVisuals",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLatencyViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioLatencyViewController::*)()>(&::GlobalNamespace::AudioLatencyViewController::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22acadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FloatSO*& GlobalNamespace::AudioLatencyViewController::__get__audioLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioLatency;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& GlobalNamespace::AudioLatencyViewController::__get__audioLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioLatency;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__set__audioLatency(::GlobalNamespace::FloatSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioLatency)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::AudioLatencyViewController::__get__overrideAudioLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideAudioLatency;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::AudioLatencyViewController::__get__overrideAudioLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideAudioLatency;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__set__overrideAudioLatency(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overrideAudioLatency)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::CanvasGroup*& GlobalNamespace::AudioLatencyViewController::__get__setupCanvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setupCanvasGroup;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& GlobalNamespace::AudioLatencyViewController::__get__setupCanvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setupCanvasGroup;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__set__setupCanvasGroup(::UnityEngine::CanvasGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____setupCanvasGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Toggle*& GlobalNamespace::AudioLatencyViewController::__get__overrideAudioLatencyToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideAudioLatencyToggle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& GlobalNamespace::AudioLatencyViewController::__get__overrideAudioLatencyToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideAudioLatencyToggle;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__set__overrideAudioLatencyToggle(::UnityEngine::UI::Toggle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overrideAudioLatencyToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::RangeValuesTextSlider*& GlobalNamespace::AudioLatencyViewController::__get__slider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slider;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::RangeValuesTextSlider*> const& GlobalNamespace::AudioLatencyViewController::__get__slider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slider;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__set__slider(::HMUI::RangeValuesTextSlider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____slider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::VisualMetronome*& GlobalNamespace::AudioLatencyViewController::__get__visualMetronome() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visualMetronome;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VisualMetronome*> const& GlobalNamespace::AudioLatencyViewController::__get__visualMetronome() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visualMetronome;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__set__visualMetronome(::GlobalNamespace::VisualMetronome* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____visualMetronome)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::AudioLatencyViewController::__get__disabledAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledAlpha;
}
constexpr float_t const& GlobalNamespace::AudioLatencyViewController::__get__disabledAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledAlpha;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__set__disabledAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disabledAlpha = value;
}
constexpr ::GlobalNamespace::SongPreviewPlayer*& GlobalNamespace::AudioLatencyViewController::__get__songPreviewPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewPlayer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPreviewPlayer*> const& GlobalNamespace::AudioLatencyViewController::__get__songPreviewPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewPlayer;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__set__songPreviewPlayer(::GlobalNamespace::SongPreviewPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPreviewPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ToggleBinder*& GlobalNamespace::AudioLatencyViewController::__get__toggleBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& GlobalNamespace::AudioLatencyViewController::__get__toggleBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__set__toggleBinder(::HMUI::ToggleBinder* value) {
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
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), "SliderValueDidChange", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::RangeValuesTextSlider*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, slider, value);
}
inline void GlobalNamespace::AudioLatencyViewController::HandleOverrideAudioLatencyToggleValueChanged(bool isOn) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), "HandleOverrideAudioLatencyToggleValueChanged",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isOn);
}
inline void GlobalNamespace::AudioLatencyViewController::RefreshVisuals(bool overrideAudioLatencyIsEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), "RefreshVisuals",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, overrideAudioLatencyIsEnabled);
}
inline ::GlobalNamespace::AudioLatencyViewController* GlobalNamespace::AudioLatencyViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AudioLatencyViewController*>());
}
inline void GlobalNamespace::AudioLatencyViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioLatencyViewController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioLatencyViewController::AudioLatencyViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
