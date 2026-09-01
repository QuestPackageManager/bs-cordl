#pragma once
// IWYU pragma private; include "GlobalNamespace\FloorAdjustViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__FloorAdjustViewController_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloorAdjustViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloorAdjustViewController::*)(bool, bool, bool)>(&::GlobalNamespace::FloorAdjustViewController::DidActivate)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5a19db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloorAdjustViewController*>(), { ::i2c::class_of<::GlobalNamespace::FloorAdjustViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloorAdjustViewController.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloorAdjustViewController::*)()>(&::GlobalNamespace::FloorAdjustViewController::Update)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5a19ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloorAdjustViewController*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloorAdjustViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloorAdjustViewController::*)()>(&::GlobalNamespace::FloorAdjustViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1a0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloorAdjustViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloorAdjustViewController._DidActivate_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloorAdjustViewController::*)()>(&::GlobalNamespace::FloorAdjustViewController::_DidActivate_b__10_0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a1a0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloorAdjustViewController*>(), { "<DidActivate>b__10_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloorAdjustViewController._DidActivate_b__10_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloorAdjustViewController::*)()>(&::GlobalNamespace::FloorAdjustViewController::_DidActivate_b__10_1)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a1a1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloorAdjustViewController*>(), { "<DidActivate>b__10_1", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__yIncButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yIncButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__yIncButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yIncButton;
}
constexpr void GlobalNamespace::FloorAdjustViewController::__cordl_internal_set__yIncButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____yIncButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__yDecButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yDecButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__yDecButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yDecButton;
}
constexpr void GlobalNamespace::FloorAdjustViewController::__cordl_internal_set__yDecButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____yDecButton = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__playerHeightText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__playerHeightText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightText;
}
constexpr void GlobalNamespace::FloorAdjustViewController::__cordl_internal_set__playerHeightText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerHeightText = value;
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::GlobalNamespace::IVRPlatformHelper* const& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::FloorAdjustViewController::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vrPlatformHelper = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::FloorAdjustViewController::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__settingsApplicator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsApplicator;
}
constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__settingsApplicator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsApplicator;
}
constexpr void GlobalNamespace::FloorAdjustViewController::__cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsApplicator = value;
}
constexpr float_t& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__playerHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeight;
}
constexpr float_t const& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__playerHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeight;
}
constexpr void GlobalNamespace::FloorAdjustViewController::__cordl_internal_set__playerHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerHeight = value;
}
inline void GlobalNamespace::FloorAdjustViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FloorAdjustViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::FloorAdjustViewController::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloorAdjustViewController*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FloorAdjustViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloorAdjustViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FloorAdjustViewController::_DidActivate_b__10_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloorAdjustViewController*>(), { "<DidActivate>b__10_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FloorAdjustViewController::_DidActivate_b__10_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloorAdjustViewController*>(), { "<DidActivate>b__10_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FloorAdjustViewController* GlobalNamespace::FloorAdjustViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FloorAdjustViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloorAdjustViewController::FloorAdjustViewController() {}
