#pragma once
// IWYU pragma private; include "GlobalNamespace\BasicLevelParamsPanel.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BasicLevelParamsPanel_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BasicLevelParamsPanel.set_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicLevelParamsPanel::*)(float_t)>(&::GlobalNamespace::BasicLevelParamsPanel::set_duration)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x596ac30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicLevelParamsPanel*>(), { "set_duration", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicLevelParamsPanel.set_bpm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicLevelParamsPanel::*)(float_t)>(&::GlobalNamespace::BasicLevelParamsPanel::set_bpm)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x596ac64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicLevelParamsPanel*>(), { "set_bpm", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicLevelParamsPanel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicLevelParamsPanel::*)()>(&::GlobalNamespace::BasicLevelParamsPanel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x596aca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicLevelParamsPanel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::BasicLevelParamsPanel::__cordl_internal_get__durationText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____durationText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::BasicLevelParamsPanel::__cordl_internal_get__durationText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____durationText;
}
constexpr void GlobalNamespace::BasicLevelParamsPanel::__cordl_internal_set__durationText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____durationText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::BasicLevelParamsPanel::__cordl_internal_get__bpmText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::BasicLevelParamsPanel::__cordl_internal_get__bpmText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmText;
}
constexpr void GlobalNamespace::BasicLevelParamsPanel::__cordl_internal_set__bpmText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bpmText = value;
}
inline void GlobalNamespace::BasicLevelParamsPanel::set_duration(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicLevelParamsPanel*>(), { "set_duration", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BasicLevelParamsPanel::set_bpm(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicLevelParamsPanel*>(), { "set_bpm", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BasicLevelParamsPanel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicLevelParamsPanel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BasicLevelParamsPanel* GlobalNamespace::BasicLevelParamsPanel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BasicLevelParamsPanel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BasicLevelParamsPanel::BasicLevelParamsPanel() {}
