#pragma once
// IWYU pragma private; include "GlobalNamespace\OptionsViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__OptionsViewController_def.hpp"
#include "GlobalNamespace/zzzz__OptionsViewController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OptionsViewController_OptionsButton::OptionsViewController_OptionsButton(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OptionsViewController_OptionsButton::OptionsViewController_OptionsButton() {}
constexpr ::GlobalNamespace::OptionsViewController_OptionsButton GlobalNamespace::OptionsViewController_OptionsButton::EditAvatar{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OptionsViewController_OptionsButton GlobalNamespace::OptionsViewController_OptionsButton::PlayerOptions{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OptionsViewController_OptionsButton GlobalNamespace::OptionsViewController_OptionsButton::Settings{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OptionsViewController::*)(::System::Action_1<::GlobalNamespace::OptionsViewController_OptionsButton>*)>(
    &::GlobalNamespace::OptionsViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59657d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OptionsViewController*>(),
                                                             { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::OptionsViewController_OptionsButton>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OptionsViewController::*)(::System::Action_1<::GlobalNamespace::OptionsViewController_OptionsButton>*)>(
    &::GlobalNamespace::OptionsViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5965894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OptionsViewController*>(),
                                                             { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::OptionsViewController_OptionsButton>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OptionsViewController::*)(bool, bool, bool)>(&::GlobalNamespace::OptionsViewController::DidActivate)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5965954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OptionsViewController*>(), { ::i2c::class_of<::GlobalNamespace::OptionsViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OptionsViewController::*)()>(&::GlobalNamespace::OptionsViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5965b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OptionsViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController._DidActivate_b__7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OptionsViewController::*)()>(&::GlobalNamespace::OptionsViewController::_DidActivate_b__7_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5965b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OptionsViewController*>(), { "<DidActivate>b__7_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController._DidActivate_b__7_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OptionsViewController::*)()>(&::GlobalNamespace::OptionsViewController::_DidActivate_b__7_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5965b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OptionsViewController*>(), { "<DidActivate>b__7_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController._DidActivate_b__7_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OptionsViewController::*)()>(&::GlobalNamespace::OptionsViewController::_DidActivate_b__7_2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5965b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OptionsViewController*>(), { "<DidActivate>b__7_2", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::OptionsViewController::__cordl_internal_get__editAvatarButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editAvatarButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::OptionsViewController::__cordl_internal_get__editAvatarButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editAvatarButton;
}
constexpr void GlobalNamespace::OptionsViewController::__cordl_internal_set__editAvatarButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editAvatarButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::OptionsViewController::__cordl_internal_get__playerOptionsButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerOptionsButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::OptionsViewController::__cordl_internal_get__playerOptionsButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerOptionsButton;
}
constexpr void GlobalNamespace::OptionsViewController::__cordl_internal_set__playerOptionsButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerOptionsButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::OptionsViewController::__cordl_internal_get__settingsButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::OptionsViewController::__cordl_internal_get__settingsButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsButton;
}
constexpr void GlobalNamespace::OptionsViewController::__cordl_internal_set__settingsButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsButton = value;
}
constexpr ::System::Action_1<::GlobalNamespace::OptionsViewController_OptionsButton>*& GlobalNamespace::OptionsViewController::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::OptionsViewController_OptionsButton>* const& GlobalNamespace::OptionsViewController::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::OptionsViewController::__cordl_internal_set_didFinishEvent(::System::Action_1<::GlobalNamespace::OptionsViewController_OptionsButton>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
inline void GlobalNamespace::OptionsViewController::add_didFinishEvent(::System::Action_1<::GlobalNamespace::OptionsViewController_OptionsButton>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OptionsViewController*>(),
                                                           { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::OptionsViewController_OptionsButton>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OptionsViewController::remove_didFinishEvent(::System::Action_1<::GlobalNamespace::OptionsViewController_OptionsButton>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OptionsViewController*>(),
                                                           { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::OptionsViewController_OptionsButton>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OptionsViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OptionsViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::OptionsViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OptionsViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OptionsViewController::_DidActivate_b__7_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OptionsViewController*>(), { "<DidActivate>b__7_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OptionsViewController::_DidActivate_b__7_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OptionsViewController*>(), { "<DidActivate>b__7_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OptionsViewController::_DidActivate_b__7_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OptionsViewController*>(), { "<DidActivate>b__7_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OptionsViewController* GlobalNamespace::OptionsViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OptionsViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OptionsViewController::OptionsViewController() {}
