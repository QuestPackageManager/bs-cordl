#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionStageLockView.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionStageLockView_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionStageLockView.UpdateLocalPositionY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionStageLockView::*)(float_t, bool, float_t)>(&::GlobalNamespace::MissionStageLockView::UpdateLocalPositionY)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x593da20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStageLockView*>(),
                                                             { "UpdateLocalPositionY", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStageLockView.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionStageLockView::*)()>(&::GlobalNamespace::MissionStageLockView::Update)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x593daa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStageLockView*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStageLockView.UpdateStageLockText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionStageLockView::*)(::StringW)>(&::GlobalNamespace::MissionStageLockView::UpdateStageLockText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x593dba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStageLockView*>(), { "UpdateStageLockText", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStageLockView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionStageLockView::*)()>(&::GlobalNamespace::MissionStageLockView::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x593dbc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStageLockView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::MissionStageLockView::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::MissionStageLockView::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::MissionStageLockView::__cordl_internal_set__text(::UnityW<::TMPro::TMP_Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::MissionStageLockView::__cordl_internal_get__rectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::MissionStageLockView::__cordl_internal_get__rectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectTransform;
}
constexpr void GlobalNamespace::MissionStageLockView::__cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rectTransform = value;
}
constexpr float_t& GlobalNamespace::MissionStageLockView::__cordl_internal_get__dstPosY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dstPosY;
}
constexpr float_t const& GlobalNamespace::MissionStageLockView::__cordl_internal_get__dstPosY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dstPosY;
}
constexpr void GlobalNamespace::MissionStageLockView::__cordl_internal_set__dstPosY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dstPosY = value;
}
constexpr float_t& GlobalNamespace::MissionStageLockView::__cordl_internal_get__animationDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationDuration;
}
constexpr float_t const& GlobalNamespace::MissionStageLockView::__cordl_internal_get__animationDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationDuration;
}
constexpr void GlobalNamespace::MissionStageLockView::__cordl_internal_set__animationDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animationDuration = value;
}
constexpr float_t& GlobalNamespace::MissionStageLockView::__cordl_internal_get__startAnimationTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startAnimationTime;
}
constexpr float_t const& GlobalNamespace::MissionStageLockView::__cordl_internal_get__startAnimationTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startAnimationTime;
}
constexpr void GlobalNamespace::MissionStageLockView::__cordl_internal_set__startAnimationTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startAnimationTime = value;
}
inline void GlobalNamespace::MissionStageLockView::UpdateLocalPositionY(float_t dstPosY, bool animated, float_t animationDuration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStageLockView*>(),
                                                           { "UpdateLocalPositionY", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dstPosY, animated, animationDuration);
}
inline void GlobalNamespace::MissionStageLockView::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStageLockView*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionStageLockView::UpdateStageLockText(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStageLockView*>(), { "UpdateStageLockText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::MissionStageLockView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStageLockView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionStageLockView* GlobalNamespace::MissionStageLockView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionStageLockView*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionStageLockView::MissionStageLockView() {}
