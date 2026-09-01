#pragma once
// IWYU pragma private; include "GlobalNamespace\LoadingControl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LoadingControl_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LoadingControl.add_didPressRefreshButtonEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LoadingControl::*)(::System::Action*)>(&::GlobalNamespace::LoadingControl::add_didPressRefreshButtonEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a03180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { "add_didPressRefreshButtonEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoadingControl.remove_didPressRefreshButtonEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LoadingControl::*)(::System::Action*)>(&::GlobalNamespace::LoadingControl::remove_didPressRefreshButtonEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a0322c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { "remove_didPressRefreshButtonEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoadingControl.get_isLoading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LoadingControl::*)()>(&::GlobalNamespace::LoadingControl::get_isLoading)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a032d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { "get_isLoading", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoadingControl.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LoadingControl::*)()>(&::GlobalNamespace::LoadingControl::Awake)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5a032f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoadingControl.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LoadingControl::*)()>(&::GlobalNamespace::LoadingControl::OnDestroy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a033b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoadingControl.ShowLoading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LoadingControl::*)(::StringW)>(&::GlobalNamespace::LoadingControl::ShowLoading)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a033d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { "ShowLoading", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoadingControl.ShowText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LoadingControl::*)(::StringW, bool)>(&::GlobalNamespace::LoadingControl::ShowText)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a0345c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { "ShowText", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoadingControl.ShowDownloadingProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LoadingControl::*)(::StringW, float_t)>(&::GlobalNamespace::LoadingControl::ShowDownloadingProgress)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a0350c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { "ShowDownloadingProgress", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoadingControl.Hide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LoadingControl::*)()>(&::GlobalNamespace::LoadingControl::Hide)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a035b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { "Hide", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoadingControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LoadingControl::*)()>(&::GlobalNamespace::LoadingControl::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a035dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoadingControl._Awake_b__14_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LoadingControl::*)()>(&::GlobalNamespace::LoadingControl::_Awake_b__14_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a035e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { "<Awake>b__14_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LoadingControl::__cordl_internal_get__loadingContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LoadingControl::__cordl_internal_get__loadingContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingContainer;
}
constexpr void GlobalNamespace::LoadingControl::__cordl_internal_set__loadingContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadingContainer = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LoadingControl::__cordl_internal_get__loadingText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LoadingControl::__cordl_internal_get__loadingText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingText;
}
constexpr void GlobalNamespace::LoadingControl::__cordl_internal_set__loadingText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadingText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LoadingControl::__cordl_internal_get__refreshText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LoadingControl::__cordl_internal_get__refreshText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshText;
}
constexpr void GlobalNamespace::LoadingControl::__cordl_internal_set__refreshText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____refreshText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::LoadingControl::__cordl_internal_get__refreshButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::LoadingControl::__cordl_internal_get__refreshButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshButton;
}
constexpr void GlobalNamespace::LoadingControl::__cordl_internal_set__refreshButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____refreshButton = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LoadingControl::__cordl_internal_get__refreshContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LoadingControl::__cordl_internal_get__refreshContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshContainer;
}
constexpr void GlobalNamespace::LoadingControl::__cordl_internal_set__refreshContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____refreshContainer = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LoadingControl::__cordl_internal_get__downloadingContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downloadingContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LoadingControl::__cordl_internal_get__downloadingContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downloadingContainer;
}
constexpr void GlobalNamespace::LoadingControl::__cordl_internal_set__downloadingContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____downloadingContainer = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LoadingControl::__cordl_internal_get__downloadingText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downloadingText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LoadingControl::__cordl_internal_get__downloadingText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downloadingText;
}
constexpr void GlobalNamespace::LoadingControl::__cordl_internal_set__downloadingText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____downloadingText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::LoadingControl::__cordl_internal_get__donwloadingProgressImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____donwloadingProgressImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::LoadingControl::__cordl_internal_get__donwloadingProgressImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____donwloadingProgressImage;
}
constexpr void GlobalNamespace::LoadingControl::__cordl_internal_set__donwloadingProgressImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____donwloadingProgressImage = value;
}
constexpr ::System::Action*& GlobalNamespace::LoadingControl::__cordl_internal_get_didPressRefreshButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressRefreshButtonEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LoadingControl::__cordl_internal_get_didPressRefreshButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressRefreshButtonEvent;
}
constexpr void GlobalNamespace::LoadingControl::__cordl_internal_set_didPressRefreshButtonEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didPressRefreshButtonEvent = value;
}
constexpr ::HMUI::ButtonBinder*& GlobalNamespace::LoadingControl::__cordl_internal_get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::HMUI::ButtonBinder* const& GlobalNamespace::LoadingControl::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void GlobalNamespace::LoadingControl::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonBinder = value;
}
inline void GlobalNamespace::LoadingControl::add_didPressRefreshButtonEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { "add_didPressRefreshButtonEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LoadingControl::remove_didPressRefreshButtonEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { "remove_didPressRefreshButtonEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LoadingControl::get_isLoading() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { "get_isLoading", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LoadingControl::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LoadingControl::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LoadingControl::ShowLoading(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { "ShowLoading", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::LoadingControl::ShowText(::StringW text, bool showRefreshButton) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { "ShowText", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, showRefreshButton);
}
inline void GlobalNamespace::LoadingControl::ShowDownloadingProgress(::StringW text, float_t downloadingProgress) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { "ShowDownloadingProgress", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, downloadingProgress);
}
inline void GlobalNamespace::LoadingControl::Hide() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { "Hide", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LoadingControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LoadingControl::_Awake_b__14_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LoadingControl*>(), { "<Awake>b__14_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LoadingControl* GlobalNamespace::LoadingControl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LoadingControl*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LoadingControl::LoadingControl() {}
