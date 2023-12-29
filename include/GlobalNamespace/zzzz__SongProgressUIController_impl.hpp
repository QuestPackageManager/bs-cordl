#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SongProgressUIController_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "UnityEngine/UI/zzzz__Slider_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongProgressUIController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongProgressUIController::*)()>(&::GlobalNamespace::SongProgressUIController::Start)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x20e1450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongProgressUIController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongProgressUIController::*)()>(&::GlobalNamespace::SongProgressUIController::Update)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x20e15f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongProgressUIController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongProgressUIController::*)()>(&::GlobalNamespace::SongProgressUIController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x20e18dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::Slider*& GlobalNamespace::SongProgressUIController::__get__slider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slider;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Slider*> const& GlobalNamespace::SongProgressUIController::__get__slider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slider;
}
constexpr void GlobalNamespace::SongProgressUIController::__set__slider(::UnityEngine::UI::Slider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____slider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Image*& GlobalNamespace::SongProgressUIController::__get__progressImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressImage;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& GlobalNamespace::SongProgressUIController::__get__progressImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressImage;
}
constexpr void GlobalNamespace::SongProgressUIController::__set__progressImage(::UnityEngine::UI::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____progressImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::SongProgressUIController::__get__durationMinutesText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____durationMinutesText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::SongProgressUIController::__get__durationMinutesText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____durationMinutesText;
}
constexpr void GlobalNamespace::SongProgressUIController::__set__durationMinutesText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____durationMinutesText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::SongProgressUIController::__get__durationSecondsText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____durationSecondsText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::SongProgressUIController::__get__durationSecondsText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____durationSecondsText;
}
constexpr void GlobalNamespace::SongProgressUIController::__set__durationSecondsText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____durationSecondsText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::SongProgressUIController::__get__progressMinutesText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressMinutesText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::SongProgressUIController::__get__progressMinutesText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressMinutesText;
}
constexpr void GlobalNamespace::SongProgressUIController::__set__progressMinutesText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____progressMinutesText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::SongProgressUIController::__get__progressSecondsText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressSecondsText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::SongProgressUIController::__get__progressSecondsText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressSecondsText;
}
constexpr void GlobalNamespace::SongProgressUIController::__set__progressSecondsText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____progressSecondsText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::SongProgressUIController::__get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& GlobalNamespace::SongProgressUIController::__get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::SongProgressUIController::__set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::SongProgressUIController::__get__prevMinutes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevMinutes;
}
constexpr int32_t const& GlobalNamespace::SongProgressUIController::__get__prevMinutes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevMinutes;
}
constexpr void GlobalNamespace::SongProgressUIController::__set__prevMinutes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevMinutes = value;
}
constexpr int32_t& GlobalNamespace::SongProgressUIController::__get__prevSeconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevSeconds;
}
constexpr int32_t const& GlobalNamespace::SongProgressUIController::__get__prevSeconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevSeconds;
}
constexpr void GlobalNamespace::SongProgressUIController::__set__prevSeconds(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevSeconds = value;
}
constexpr ::System::Text::StringBuilder*& GlobalNamespace::SongProgressUIController::__get__stringBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringBuilder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& GlobalNamespace::SongProgressUIController::__get__stringBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringBuilder;
}
constexpr void GlobalNamespace::SongProgressUIController::__set__stringBuilder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stringBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RectTransform*& GlobalNamespace::SongProgressUIController::__get__progressImageRectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressImageRectTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& GlobalNamespace::SongProgressUIController::__get__progressImageRectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressImageRectTransform;
}
constexpr void GlobalNamespace::SongProgressUIController::__set__progressImageRectTransform(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____progressImageRectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SongProgressUIController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongProgressUIController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SongProgressUIController* GlobalNamespace::SongProgressUIController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SongProgressUIController*>());
}
inline void GlobalNamespace::SongProgressUIController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongProgressUIController::SongProgressUIController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
