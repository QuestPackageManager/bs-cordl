#pragma once
// IWYU pragma private; include "GlobalNamespace/CrashInfoViewController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CrashInfoViewController_def.hpp"
#include "GlobalNamespace/zzzz__CrashManagerSO_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrashInfoViewController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrashInfoViewController::*)()>(&::GlobalNamespace::CrashInfoViewController::Start)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a118e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrashInfoViewController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrashInfoViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrashInfoViewController::*)()>(&::GlobalNamespace::CrashInfoViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a11964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrashInfoViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CrashManagerSO>& GlobalNamespace::CrashInfoViewController::__cordl_internal_get__crashManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crashManager;
}
constexpr ::UnityW<::GlobalNamespace::CrashManagerSO> const& GlobalNamespace::CrashInfoViewController::__cordl_internal_get__crashManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crashManager;
}
constexpr void GlobalNamespace::CrashInfoViewController::__cordl_internal_set__crashManager(::UnityW<::GlobalNamespace::CrashManagerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____crashManager = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::CrashInfoViewController::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::CrashInfoViewController::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::CrashInfoViewController::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
inline void GlobalNamespace::CrashInfoViewController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrashInfoViewController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrashInfoViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrashInfoViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrashInfoViewController* GlobalNamespace::CrashInfoViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrashInfoViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrashInfoViewController::CrashInfoViewController() {}
