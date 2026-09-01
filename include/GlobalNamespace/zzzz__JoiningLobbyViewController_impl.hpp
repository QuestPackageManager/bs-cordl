#pragma once
// IWYU pragma private; include "GlobalNamespace\JoiningLobbyViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__JoiningLobbyViewController_def.hpp"
#include "GlobalNamespace/zzzz__LoadingControl_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JoiningLobbyViewController.add_didCancelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoiningLobbyViewController::*)(::System::Action*)>(
    &::GlobalNamespace::JoiningLobbyViewController::add_didCancelEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a1b3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoiningLobbyViewController*>(), { "add_didCancelEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoiningLobbyViewController.remove_didCancelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoiningLobbyViewController::*)(::System::Action*)>(
    &::GlobalNamespace::JoiningLobbyViewController::remove_didCancelEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a1b4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoiningLobbyViewController*>(), { "remove_didCancelEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoiningLobbyViewController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoiningLobbyViewController::*)(::StringW)>(&::GlobalNamespace::JoiningLobbyViewController::Init)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a1b554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoiningLobbyViewController*>(), { "Init", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoiningLobbyViewController.HideLoading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoiningLobbyViewController::*)()>(&::GlobalNamespace::JoiningLobbyViewController::HideLoading)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5a1b588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoiningLobbyViewController*>(), { "HideLoading", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoiningLobbyViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoiningLobbyViewController::*)(bool, bool, bool)>(&::GlobalNamespace::JoiningLobbyViewController::DidActivate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5a1b5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoiningLobbyViewController*>(), { ::i2c::class_of<::GlobalNamespace::JoiningLobbyViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoiningLobbyViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoiningLobbyViewController::*)()>(&::GlobalNamespace::JoiningLobbyViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1b6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoiningLobbyViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoiningLobbyViewController._DidActivate_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoiningLobbyViewController::*)()>(&::GlobalNamespace::JoiningLobbyViewController::_DidActivate_b__8_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a1b6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoiningLobbyViewController*>(), { "<DidActivate>b__8_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::JoiningLobbyViewController::__cordl_internal_get__cancelJoiningButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelJoiningButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::JoiningLobbyViewController::__cordl_internal_get__cancelJoiningButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelJoiningButton;
}
constexpr void GlobalNamespace::JoiningLobbyViewController::__cordl_internal_set__cancelJoiningButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancelJoiningButton = value;
}
constexpr ::UnityW<::GlobalNamespace::LoadingControl>& GlobalNamespace::JoiningLobbyViewController::__cordl_internal_get__loadingControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingControl;
}
constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& GlobalNamespace::JoiningLobbyViewController::__cordl_internal_get__loadingControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingControl;
}
constexpr void GlobalNamespace::JoiningLobbyViewController::__cordl_internal_set__loadingControl(::UnityW<::GlobalNamespace::LoadingControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadingControl = value;
}
constexpr ::StringW& GlobalNamespace::JoiningLobbyViewController::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::StringW const& GlobalNamespace::JoiningLobbyViewController::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::JoiningLobbyViewController::__cordl_internal_set__text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr ::System::Action*& GlobalNamespace::JoiningLobbyViewController::__cordl_internal_get_didCancelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didCancelEvent;
}
constexpr ::System::Action* const& GlobalNamespace::JoiningLobbyViewController::__cordl_internal_get_didCancelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didCancelEvent;
}
constexpr void GlobalNamespace::JoiningLobbyViewController::__cordl_internal_set_didCancelEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didCancelEvent = value;
}
inline void GlobalNamespace::JoiningLobbyViewController::add_didCancelEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoiningLobbyViewController*>(), { "add_didCancelEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::JoiningLobbyViewController::remove_didCancelEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoiningLobbyViewController*>(), { "remove_didCancelEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::JoiningLobbyViewController::Init(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoiningLobbyViewController*>(), { "Init", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::JoiningLobbyViewController::HideLoading() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoiningLobbyViewController*>(), { "HideLoading", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::JoiningLobbyViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::JoiningLobbyViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::JoiningLobbyViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoiningLobbyViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::JoiningLobbyViewController::_DidActivate_b__8_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoiningLobbyViewController*>(), { "<DidActivate>b__8_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::JoiningLobbyViewController* GlobalNamespace::JoiningLobbyViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::JoiningLobbyViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JoiningLobbyViewController::JoiningLobbyViewController() {}
