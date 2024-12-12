#pragma once
// IWYU pragma private; include "GlobalNamespace/SongProgressUIController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SongProgressUIController_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__SongController_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Slider_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongProgressUIController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongProgressUIController::*)()>(&::GlobalNamespace::SongProgressUIController::Start)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x3ba655c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongProgressUIController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongProgressUIController::*)()>(&::GlobalNamespace::SongProgressUIController::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3ba67e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongProgressUIController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongProgressUIController::*)()>(&::GlobalNamespace::SongProgressUIController::Update)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3ba68b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongProgressUIController.UpdateSongProgressUIElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongProgressUIController::*)(int32_t, int32_t)>(
    &::GlobalNamespace::SongProgressUIController::UpdateSongProgressUIElements)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x3ba69a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(), "UpdateSongProgressUIElements", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongProgressUIController.HandleSongDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongProgressUIController::*)()>(
    &::GlobalNamespace::SongProgressUIController::HandleSongDidFinish)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3ba6bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(),
                                                                               "HandleSongDidFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongProgressUIController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongProgressUIController::*)()>(&::GlobalNamespace::SongProgressUIController::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3ba6c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Slider>& GlobalNamespace::SongProgressUIController::__cordl_internal_get__slider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slider;
}
constexpr ::UnityW<::UnityEngine::UI::Slider> const& GlobalNamespace::SongProgressUIController::__cordl_internal_get__slider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slider;
}
constexpr void GlobalNamespace::SongProgressUIController::__cordl_internal_set__slider(::UnityW<::UnityEngine::UI::Slider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____slider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::SongProgressUIController::__cordl_internal_get__progressImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::SongProgressUIController::__cordl_internal_get__progressImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressImage;
}
constexpr void GlobalNamespace::SongProgressUIController::__cordl_internal_set__progressImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____progressImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SongProgressUIController::__cordl_internal_get__durationMinutesText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____durationMinutesText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SongProgressUIController::__cordl_internal_get__durationMinutesText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____durationMinutesText;
}
constexpr void GlobalNamespace::SongProgressUIController::__cordl_internal_set__durationMinutesText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____durationMinutesText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SongProgressUIController::__cordl_internal_get__durationSecondsText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____durationSecondsText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SongProgressUIController::__cordl_internal_get__durationSecondsText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____durationSecondsText;
}
constexpr void GlobalNamespace::SongProgressUIController::__cordl_internal_set__durationSecondsText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____durationSecondsText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SongProgressUIController::__cordl_internal_get__progressMinutesText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressMinutesText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SongProgressUIController::__cordl_internal_get__progressMinutesText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressMinutesText;
}
constexpr void GlobalNamespace::SongProgressUIController::__cordl_internal_set__progressMinutesText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____progressMinutesText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SongProgressUIController::__cordl_internal_get__progressSecondsText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressSecondsText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SongProgressUIController::__cordl_internal_get__progressSecondsText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressSecondsText;
}
constexpr void GlobalNamespace::SongProgressUIController::__cordl_internal_set__progressSecondsText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____progressSecondsText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::SongProgressUIController::__cordl_internal_get__durationRectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____durationRectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::SongProgressUIController::__cordl_internal_get__durationRectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____durationRectTransform;
}
constexpr void GlobalNamespace::SongProgressUIController::__cordl_internal_set__durationRectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____durationRectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::SongProgressUIController::__cordl_internal_get__durationTextOffsetShort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____durationTextOffsetShort;
}
constexpr float_t const& GlobalNamespace::SongProgressUIController::__cordl_internal_get__durationTextOffsetShort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____durationTextOffsetShort;
}
constexpr void GlobalNamespace::SongProgressUIController::__cordl_internal_set__durationTextOffsetShort(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____durationTextOffsetShort = value;
}
constexpr float_t& GlobalNamespace::SongProgressUIController::__cordl_internal_get__durationTextOffsetLong() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____durationTextOffsetLong;
}
constexpr float_t const& GlobalNamespace::SongProgressUIController::__cordl_internal_get__durationTextOffsetLong() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____durationTextOffsetLong;
}
constexpr void GlobalNamespace::SongProgressUIController::__cordl_internal_set__durationTextOffsetLong(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____durationTextOffsetLong = value;
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::SongProgressUIController::__cordl_internal_get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::GlobalNamespace::IAudioTimeSource* const& GlobalNamespace::SongProgressUIController::__cordl_internal_get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::SongProgressUIController::__cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SongController>& GlobalNamespace::SongProgressUIController::__cordl_internal_get__songController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songController;
}
constexpr ::UnityW<::GlobalNamespace::SongController> const& GlobalNamespace::SongProgressUIController::__cordl_internal_get__songController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songController;
}
constexpr void GlobalNamespace::SongProgressUIController::__cordl_internal_set__songController(::UnityW<::GlobalNamespace::SongController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::SongProgressUIController::__cordl_internal_get__prevMinutes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevMinutes;
}
constexpr int32_t const& GlobalNamespace::SongProgressUIController::__cordl_internal_get__prevMinutes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevMinutes;
}
constexpr void GlobalNamespace::SongProgressUIController::__cordl_internal_set__prevMinutes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevMinutes = value;
}
constexpr int32_t& GlobalNamespace::SongProgressUIController::__cordl_internal_get__prevSeconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevSeconds;
}
constexpr int32_t const& GlobalNamespace::SongProgressUIController::__cordl_internal_get__prevSeconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevSeconds;
}
constexpr void GlobalNamespace::SongProgressUIController::__cordl_internal_set__prevSeconds(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevSeconds = value;
}
constexpr ::System::Text::StringBuilder*& GlobalNamespace::SongProgressUIController::__cordl_internal_get__stringBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringBuilder;
}
constexpr ::System::Text::StringBuilder* const& GlobalNamespace::SongProgressUIController::__cordl_internal_get__stringBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringBuilder;
}
constexpr void GlobalNamespace::SongProgressUIController::__cordl_internal_set__stringBuilder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stringBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::SongProgressUIController::__cordl_internal_get__progressImageRectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressImageRectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::SongProgressUIController::__cordl_internal_get__progressImageRectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressImageRectTransform;
}
constexpr void GlobalNamespace::SongProgressUIController::__cordl_internal_set__progressImageRectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____progressImageRectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::SongProgressUIController::__cordl_internal_get__songLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songLength;
}
constexpr float_t const& GlobalNamespace::SongProgressUIController::__cordl_internal_get__songLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songLength;
}
constexpr void GlobalNamespace::SongProgressUIController::__cordl_internal_set__songLength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songLength = value;
}
constexpr ::StringW& GlobalNamespace::SongProgressUIController::__cordl_internal_get__progressMinutesFormatString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressMinutesFormatString;
}
constexpr ::StringW const& GlobalNamespace::SongProgressUIController::__cordl_internal_get__progressMinutesFormatString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressMinutesFormatString;
}
constexpr void GlobalNamespace::SongProgressUIController::__cordl_internal_set__progressMinutesFormatString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____progressMinutesFormatString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::SongProgressUIController::__cordl_internal_get__songDidFinish() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songDidFinish;
}
constexpr bool const& GlobalNamespace::SongProgressUIController::__cordl_internal_get__songDidFinish() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songDidFinish;
}
constexpr void GlobalNamespace::SongProgressUIController::__cordl_internal_set__songDidFinish(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songDidFinish = value;
}
inline void GlobalNamespace::SongProgressUIController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongProgressUIController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongProgressUIController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongProgressUIController::UpdateSongProgressUIElements(int32_t minutes, int32_t seconds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(), "UpdateSongProgressUIElements", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, minutes, seconds);
}
inline void GlobalNamespace::SongProgressUIController::HandleSongDidFinish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(),
                                                                             "HandleSongDidFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongProgressUIController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SongProgressUIController* GlobalNamespace::SongProgressUIController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SongProgressUIController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongProgressUIController::SongProgressUIController() {}
