#pragma once
// IWYU pragma private; include "GlobalNamespace\HowToPlayViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__HowToPlayViewController_def.hpp"
#include "GlobalNamespace/zzzz__HowToPlayViewController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::HowToPlayViewController_HowToPlayOptions::HowToPlayViewController_HowToPlayOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HowToPlayViewController_HowToPlayOptions::HowToPlayViewController_HowToPlayOptions() {}
constexpr ::GlobalNamespace::HowToPlayViewController_HowToPlayOptions GlobalNamespace::HowToPlayViewController_HowToPlayOptions::HowToPlay{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::HowToPlayViewController_HowToPlayOptions GlobalNamespace::HowToPlayViewController_HowToPlayOptions::Credits{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::HowToPlayViewController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HowToPlayViewController::*)(::System::Action_1<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions>*)>(
    &::GlobalNamespace::HowToPlayViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a1a6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HowToPlayViewController*>(),
                                                             { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HowToPlayViewController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HowToPlayViewController::*)(::System::Action_1<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions>*)>(
    &::GlobalNamespace::HowToPlayViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a1a78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HowToPlayViewController*>(),
                                                             { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HowToPlayViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HowToPlayViewController::*)(bool, bool, bool)>(&::GlobalNamespace::HowToPlayViewController::DidActivate)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5a1a84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::HowToPlayViewController*>(), { ::i2c::class_of<::GlobalNamespace::HowToPlayViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HowToPlayViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HowToPlayViewController::*)()>(&::GlobalNamespace::HowToPlayViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1a98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HowToPlayViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HowToPlayViewController._DidActivate_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HowToPlayViewController::*)()>(&::GlobalNamespace::HowToPlayViewController::_DidActivate_b__6_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a1a990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HowToPlayViewController*>(), { "<DidActivate>b__6_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HowToPlayViewController._DidActivate_b__6_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HowToPlayViewController::*)()>(&::GlobalNamespace::HowToPlayViewController::_DidActivate_b__6_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a1a9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HowToPlayViewController*>(), { "<DidActivate>b__6_1", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::HowToPlayViewController::__cordl_internal_get__tutorialButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::HowToPlayViewController::__cordl_internal_get__tutorialButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialButton;
}
constexpr void GlobalNamespace::HowToPlayViewController::__cordl_internal_set__tutorialButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tutorialButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::HowToPlayViewController::__cordl_internal_get__creditsButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creditsButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::HowToPlayViewController::__cordl_internal_get__creditsButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creditsButton;
}
constexpr void GlobalNamespace::HowToPlayViewController::__cordl_internal_set__creditsButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____creditsButton = value;
}
constexpr ::System::Action_1<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions>*& GlobalNamespace::HowToPlayViewController::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions>* const& GlobalNamespace::HowToPlayViewController::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::HowToPlayViewController::__cordl_internal_set_didFinishEvent(::System::Action_1<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
inline void GlobalNamespace::HowToPlayViewController::add_didFinishEvent(::System::Action_1<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HowToPlayViewController*>(),
                                                           { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HowToPlayViewController::remove_didFinishEvent(::System::Action_1<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HowToPlayViewController*>(),
                                                           { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HowToPlayViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::HowToPlayViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::HowToPlayViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HowToPlayViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HowToPlayViewController::_DidActivate_b__6_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HowToPlayViewController*>(), { "<DidActivate>b__6_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HowToPlayViewController::_DidActivate_b__6_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HowToPlayViewController*>(), { "<DidActivate>b__6_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HowToPlayViewController* GlobalNamespace::HowToPlayViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HowToPlayViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HowToPlayViewController::HowToPlayViewController() {}
