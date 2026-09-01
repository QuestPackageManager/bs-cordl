#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionObjectiveGameUIView.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveGameUIView_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveGameUIView.SetMissionObjectiveChecker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveGameUIView::*)(::GlobalNamespace::MissionObjectiveChecker*)>(
    &::GlobalNamespace::MissionObjectiveGameUIView::SetMissionObjectiveChecker)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5917f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveGameUIView*>(),
                                                                                           { "SetMissionObjectiveChecker", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjectiveChecker*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveGameUIView.HandleMissionObjectiveStatusDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveGameUIView::*)(::GlobalNamespace::MissionObjectiveChecker*)>(
    &::GlobalNamespace::MissionObjectiveGameUIView::HandleMissionObjectiveStatusDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5918384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveGameUIView*>(),
                                                             { "HandleMissionObjectiveStatusDidChange", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjectiveChecker*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveGameUIView.HandleMissionObjectiveCheckedValueDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveGameUIView::*)(::GlobalNamespace::MissionObjectiveChecker*)>(
    &::GlobalNamespace::MissionObjectiveGameUIView::HandleMissionObjectiveCheckedValueDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5918388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveGameUIView*>(),
                                                             { "HandleMissionObjectiveCheckedValueDidChange", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjectiveChecker*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveGameUIView.RefreshIcon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveGameUIView::*)()>(&::GlobalNamespace::MissionObjectiveGameUIView::RefreshIcon)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5918228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveGameUIView*>(), { "RefreshIcon", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveGameUIView.RefreshValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveGameUIView::*)()>(&::GlobalNamespace::MissionObjectiveGameUIView::RefreshValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x591832c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveGameUIView*>(), { "RefreshValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveGameUIView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveGameUIView::*)()>(&::GlobalNamespace::MissionObjectiveGameUIView::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x591838c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveGameUIView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__notFailedIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notFailedIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__notFailedIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notFailedIcon;
}
constexpr void GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_set__notFailedIcon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____notFailedIcon = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__failedIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__failedIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedIcon;
}
constexpr void GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_set__failedIcon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____failedIcon = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__notClearedIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notClearedIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__notClearedIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notClearedIcon;
}
constexpr void GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_set__notClearedIcon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____notClearedIcon = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__clearedIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__clearedIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedIcon;
}
constexpr void GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_set__clearedIcon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clearedIcon = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__resultIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultIcon;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__resultIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultIcon;
}
constexpr void GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_set__resultIcon(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resultIcon = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__finalClearIconColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalClearIconColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__finalClearIconColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalClearIconColor;
}
constexpr void GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_set__finalClearIconColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____finalClearIconColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__finalFailIconColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalFailIconColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__finalFailIconColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalFailIconColor;
}
constexpr void GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_set__finalFailIconColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____finalFailIconColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__nonFinalIconColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nonFinalIconColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__nonFinalIconColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nonFinalIconColor;
}
constexpr void GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_set__nonFinalIconColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nonFinalIconColor = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__clearedPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedPS;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__clearedPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedPS;
}
constexpr void GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_set__clearedPS(::UnityW<::UnityEngine::ParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clearedPS = value;
}
constexpr int32_t& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__numberOfParticles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfParticles;
}
constexpr int32_t const& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__numberOfParticles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfParticles;
}
constexpr void GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_set__numberOfParticles(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfParticles = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__nameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__nameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameText;
}
constexpr void GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_set__nameText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nameText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__valueText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__valueText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueText;
}
constexpr void GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_set__valueText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__conditionText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____conditionText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__conditionText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____conditionText;
}
constexpr void GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_set__conditionText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____conditionText = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveChecker>& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__missionObjectiveChecker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveChecker;
}
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveChecker> const& GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_get__missionObjectiveChecker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveChecker;
}
constexpr void GlobalNamespace::MissionObjectiveGameUIView::__cordl_internal_set__missionObjectiveChecker(::UnityW<::GlobalNamespace::MissionObjectiveChecker> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionObjectiveChecker = value;
}
inline void GlobalNamespace::MissionObjectiveGameUIView::SetMissionObjectiveChecker(::GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveGameUIView*>(),
                                                                                         { "SetMissionObjectiveChecker", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjectiveChecker*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionObjectiveChecker);
}
inline void GlobalNamespace::MissionObjectiveGameUIView::HandleMissionObjectiveStatusDidChange(::GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveGameUIView*>(),
                                                           { "HandleMissionObjectiveStatusDidChange", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjectiveChecker*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionObjectiveChecker);
}
inline void GlobalNamespace::MissionObjectiveGameUIView::HandleMissionObjectiveCheckedValueDidChange(::GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveGameUIView*>(),
                                                           { "HandleMissionObjectiveCheckedValueDidChange", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjectiveChecker*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionObjectiveChecker);
}
inline void GlobalNamespace::MissionObjectiveGameUIView::RefreshIcon() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveGameUIView*>(), { "RefreshIcon", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveGameUIView::RefreshValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveGameUIView*>(), { "RefreshValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveGameUIView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveGameUIView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjectiveGameUIView* GlobalNamespace::MissionObjectiveGameUIView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionObjectiveGameUIView*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectiveGameUIView::MissionObjectiveGameUIView() {}
