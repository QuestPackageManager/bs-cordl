#pragma once
// IWYU pragma private; include "GlobalNamespace\HealthWarningDisplayViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__HealthWarningDisplayViewController_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HealthWarningDisplayViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningDisplayViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::HealthWarningDisplayViewController::DidActivate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a1a270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningDisplayViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::HealthWarningDisplayViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningDisplayViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningDisplayViewController::*)()>(&::GlobalNamespace::HealthWarningDisplayViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1a2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningDisplayViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::HealthWarningDisplayViewController::__cordl_internal_get__healthAndSafetyTextMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthAndSafetyTextMesh;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::HealthWarningDisplayViewController::__cordl_internal_get__healthAndSafetyTextMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthAndSafetyTextMesh;
}
constexpr void GlobalNamespace::HealthWarningDisplayViewController::__cordl_internal_set__healthAndSafetyTextMesh(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____healthAndSafetyTextMesh = value;
}
constexpr ::StringW& GlobalNamespace::HealthWarningDisplayViewController::__cordl_internal_get__healthAndSafetyFullLocalizationKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthAndSafetyFullLocalizationKey;
}
constexpr ::StringW const& GlobalNamespace::HealthWarningDisplayViewController::__cordl_internal_get__healthAndSafetyFullLocalizationKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthAndSafetyFullLocalizationKey;
}
constexpr void GlobalNamespace::HealthWarningDisplayViewController::__cordl_internal_set__healthAndSafetyFullLocalizationKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____healthAndSafetyFullLocalizationKey = value;
}
constexpr bool& GlobalNamespace::HealthWarningDisplayViewController::__cordl_internal_get__showShortHealthAndSafety() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showShortHealthAndSafety;
}
constexpr bool const& GlobalNamespace::HealthWarningDisplayViewController::__cordl_internal_get__showShortHealthAndSafety() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showShortHealthAndSafety;
}
constexpr void GlobalNamespace::HealthWarningDisplayViewController::__cordl_internal_set__showShortHealthAndSafety(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showShortHealthAndSafety = value;
}
inline void GlobalNamespace::HealthWarningDisplayViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::HealthWarningDisplayViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::HealthWarningDisplayViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningDisplayViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HealthWarningDisplayViewController* GlobalNamespace::HealthWarningDisplayViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HealthWarningDisplayViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningDisplayViewController::HealthWarningDisplayViewController() {}
