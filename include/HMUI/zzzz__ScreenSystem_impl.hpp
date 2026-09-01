#pragma once
// IWYU pragma private; include "HMUI\ScreenSystem.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ScreenSystem_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "HMUI/zzzz__Screen_def.hpp"
#include "HMUI/zzzz__TitleViewController_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::HMUI::ScreenSystem.get_titleViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::TitleViewController> (::HMUI::ScreenSystem::*)()>(&::HMUI::ScreenSystem::get_titleViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f62b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "get_titleViewController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenSystem.get_mainScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::Screen> (::HMUI::ScreenSystem::*)()>(&::HMUI::ScreenSystem::get_mainScreen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f62bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "get_mainScreen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenSystem.get_leftScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::Screen> (::HMUI::ScreenSystem::*)()>(&::HMUI::ScreenSystem::get_leftScreen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f62c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "get_leftScreen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenSystem.get_rightScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::Screen> (::HMUI::ScreenSystem::*)()>(&::HMUI::ScreenSystem::get_rightScreen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f62cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "get_rightScreen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenSystem.get_bottomScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::Screen> (::HMUI::ScreenSystem::*)()>(&::HMUI::ScreenSystem::get_bottomScreen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f62d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "get_bottomScreen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenSystem.get_topScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::Screen> (::HMUI::ScreenSystem::*)()>(&::HMUI::ScreenSystem::get_topScreen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f62dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "get_topScreen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenSystem.add_backButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScreenSystem::*)(::System::Action*)>(&::HMUI::ScreenSystem::add_backButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32f3498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "add_backButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenSystem.remove_backButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScreenSystem::*)(::System::Action*)>(&::HMUI::ScreenSystem::remove_backButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32f3544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "remove_backButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenSystem.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScreenSystem::*)()>(&::HMUI::ScreenSystem::Awake)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x32f62e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenSystem.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScreenSystem::*)()>(&::HMUI::ScreenSystem::OnDestroy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32f63ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenSystem.SetBackButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScreenSystem::*)(bool, bool)>(&::HMUI::ScreenSystem::SetBackButton)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x32f1cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "SetBackButton", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScreenSystem::*)()>(&::HMUI::ScreenSystem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f63c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenSystem._Awake_b__24_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScreenSystem::*)()>(&::HMUI::ScreenSystem::_Awake_b__24_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32f63c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "<Awake>b__24_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::Screen>& HMUI::ScreenSystem::__cordl_internal_get__mainScreen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainScreen;
}
constexpr ::UnityW<::HMUI::Screen> const& HMUI::ScreenSystem::__cordl_internal_get__mainScreen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainScreen;
}
constexpr void HMUI::ScreenSystem::__cordl_internal_set__mainScreen(::UnityW<::HMUI::Screen> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainScreen = value;
}
constexpr ::UnityW<::HMUI::Screen>& HMUI::ScreenSystem::__cordl_internal_get__leftScreen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftScreen;
}
constexpr ::UnityW<::HMUI::Screen> const& HMUI::ScreenSystem::__cordl_internal_get__leftScreen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftScreen;
}
constexpr void HMUI::ScreenSystem::__cordl_internal_set__leftScreen(::UnityW<::HMUI::Screen> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftScreen = value;
}
constexpr ::UnityW<::HMUI::Screen>& HMUI::ScreenSystem::__cordl_internal_get__rightScreen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightScreen;
}
constexpr ::UnityW<::HMUI::Screen> const& HMUI::ScreenSystem::__cordl_internal_get__rightScreen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightScreen;
}
constexpr void HMUI::ScreenSystem::__cordl_internal_set__rightScreen(::UnityW<::HMUI::Screen> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightScreen = value;
}
constexpr ::UnityW<::HMUI::Screen>& HMUI::ScreenSystem::__cordl_internal_get__bottomScreen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bottomScreen;
}
constexpr ::UnityW<::HMUI::Screen> const& HMUI::ScreenSystem::__cordl_internal_get__bottomScreen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bottomScreen;
}
constexpr void HMUI::ScreenSystem::__cordl_internal_set__bottomScreen(::UnityW<::HMUI::Screen> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bottomScreen = value;
}
constexpr ::UnityW<::HMUI::Screen>& HMUI::ScreenSystem::__cordl_internal_get__topScreen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topScreen;
}
constexpr ::UnityW<::HMUI::Screen> const& HMUI::ScreenSystem::__cordl_internal_get__topScreen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topScreen;
}
constexpr void HMUI::ScreenSystem::__cordl_internal_set__topScreen(::UnityW<::HMUI::Screen> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____topScreen = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& HMUI::ScreenSystem::__cordl_internal_get__backButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& HMUI::ScreenSystem::__cordl_internal_get__backButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backButton;
}
constexpr void HMUI::ScreenSystem::__cordl_internal_set__backButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____backButton = value;
}
constexpr ::UnityW<::HMUI::TitleViewController>& HMUI::ScreenSystem::__cordl_internal_get__titleViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____titleViewController;
}
constexpr ::UnityW<::HMUI::TitleViewController> const& HMUI::ScreenSystem::__cordl_internal_get__titleViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____titleViewController;
}
constexpr void HMUI::ScreenSystem::__cordl_internal_set__titleViewController(::UnityW<::HMUI::TitleViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____titleViewController = value;
}
constexpr ::System::Action*& HMUI::ScreenSystem::__cordl_internal_get_backButtonWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backButtonWasPressedEvent;
}
constexpr ::System::Action* const& HMUI::ScreenSystem::__cordl_internal_get_backButtonWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backButtonWasPressedEvent;
}
constexpr void HMUI::ScreenSystem::__cordl_internal_set_backButtonWasPressedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___backButtonWasPressedEvent = value;
}
constexpr bool& HMUI::ScreenSystem::__cordl_internal_get__backButtonIsVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backButtonIsVisible;
}
constexpr bool const& HMUI::ScreenSystem::__cordl_internal_get__backButtonIsVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backButtonIsVisible;
}
constexpr void HMUI::ScreenSystem::__cordl_internal_set__backButtonIsVisible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____backButtonIsVisible = value;
}
constexpr ::HMUI::ButtonBinder*& HMUI::ScreenSystem::__cordl_internal_get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::HMUI::ButtonBinder* const& HMUI::ScreenSystem::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void HMUI::ScreenSystem::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonBinder = value;
}
inline ::UnityW<::HMUI::TitleViewController> HMUI::ScreenSystem::get_titleViewController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "get_titleViewController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TitleViewController>>(this, ___internal_method);
}
inline ::UnityW<::HMUI::Screen> HMUI::ScreenSystem::get_mainScreen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "get_mainScreen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::Screen>>(this, ___internal_method);
}
inline ::UnityW<::HMUI::Screen> HMUI::ScreenSystem::get_leftScreen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "get_leftScreen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::Screen>>(this, ___internal_method);
}
inline ::UnityW<::HMUI::Screen> HMUI::ScreenSystem::get_rightScreen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "get_rightScreen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::Screen>>(this, ___internal_method);
}
inline ::UnityW<::HMUI::Screen> HMUI::ScreenSystem::get_bottomScreen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "get_bottomScreen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::Screen>>(this, ___internal_method);
}
inline ::UnityW<::HMUI::Screen> HMUI::ScreenSystem::get_topScreen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "get_topScreen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::Screen>>(this, ___internal_method);
}
inline void HMUI::ScreenSystem::add_backButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "add_backButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::ScreenSystem::remove_backButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "remove_backButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::ScreenSystem::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ScreenSystem::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ScreenSystem::SetBackButton(bool visible, bool animated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "SetBackButton", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visible, animated);
}
inline void HMUI::ScreenSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ScreenSystem::_Awake_b__24_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenSystem*>(), { "<Awake>b__24_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::ScreenSystem* HMUI::ScreenSystem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ScreenSystem*>());
}
// Ctor Parameters []
constexpr ::HMUI::ScreenSystem::ScreenSystem() {}
