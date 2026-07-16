#pragma once
// IWYU pragma private; include "GlobalNamespace/SoloModeSelectionViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__SoloModeSelectionViewController_def.hpp"
#include "GlobalNamespace/zzzz__SoloModeSelectionViewController_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SoloModeSelectionViewController_MenuType::SoloModeSelectionViewController_MenuType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SoloModeSelectionViewController_MenuType::SoloModeSelectionViewController_MenuType() {}
constexpr ::GlobalNamespace::SoloModeSelectionViewController_MenuType GlobalNamespace::SoloModeSelectionViewController_MenuType::FreePlayMode{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::SoloModeSelectionViewController_MenuType GlobalNamespace::SoloModeSelectionViewController_MenuType::NoArrowsMode{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::SoloModeSelectionViewController_MenuType GlobalNamespace::SoloModeSelectionViewController_MenuType::OneSaberMode{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::SoloModeSelectionViewController_MenuType GlobalNamespace::SoloModeSelectionViewController_MenuType::Back{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::SoloModeSelectionViewController_MenuType>*)>(
    &::GlobalNamespace::SoloModeSelectionViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a1c9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SoloModeSelectionViewController*>(),
                            { "add_didFinishEvent",
                              {},
                              { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::SoloModeSelectionViewController_MenuType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::SoloModeSelectionViewController_MenuType>*)>(
    &::GlobalNamespace::SoloModeSelectionViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a1ca6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SoloModeSelectionViewController*>(),
                            { "remove_didFinishEvent",
                              {},
                              { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::SoloModeSelectionViewController_MenuType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::SoloModeSelectionViewController::DidActivate)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5a1cb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SoloModeSelectionViewController*>(), { ::i2c::class_of<::GlobalNamespace::SoloModeSelectionViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController.HandleMenuButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)(::GlobalNamespace::SoloModeSelectionViewController_MenuType)>(
    &::GlobalNamespace::SoloModeSelectionViewController::HandleMenuButton)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a1cd6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SoloModeSelectionViewController*>(),
                                                             { "HandleMenuButton", {}, { ::i2c::type_of<::GlobalNamespace::SoloModeSelectionViewController_MenuType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)()>(&::GlobalNamespace::SoloModeSelectionViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1cd94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SoloModeSelectionViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController._DidActivate_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)()>(&::GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a1cd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SoloModeSelectionViewController*>(), { "<DidActivate>b__8_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController._DidActivate_b__8_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)()>(&::GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a1cdbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SoloModeSelectionViewController*>(), { "<DidActivate>b__8_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController._DidActivate_b__8_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)()>(&::GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a1cde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SoloModeSelectionViewController*>(), { "<DidActivate>b__8_2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController._DidActivate_b__8_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)()>(&::GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_3)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a1ce04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SoloModeSelectionViewController*>(), { "<DidActivate>b__8_3", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::SoloModeSelectionViewController::__cordl_internal_get__freePlayModeButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freePlayModeButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::SoloModeSelectionViewController::__cordl_internal_get__freePlayModeButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freePlayModeButton;
}
constexpr void GlobalNamespace::SoloModeSelectionViewController::__cordl_internal_set__freePlayModeButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____freePlayModeButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::SoloModeSelectionViewController::__cordl_internal_get__oneSaberModeButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oneSaberModeButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::SoloModeSelectionViewController::__cordl_internal_get__oneSaberModeButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oneSaberModeButton;
}
constexpr void GlobalNamespace::SoloModeSelectionViewController::__cordl_internal_set__oneSaberModeButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____oneSaberModeButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::SoloModeSelectionViewController::__cordl_internal_get__noArrowsModeButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noArrowsModeButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::SoloModeSelectionViewController::__cordl_internal_get__noArrowsModeButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noArrowsModeButton;
}
constexpr void GlobalNamespace::SoloModeSelectionViewController::__cordl_internal_set__noArrowsModeButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noArrowsModeButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::SoloModeSelectionViewController::__cordl_internal_get__dismissButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dismissButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::SoloModeSelectionViewController::__cordl_internal_get__dismissButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dismissButton;
}
constexpr void GlobalNamespace::SoloModeSelectionViewController::__cordl_internal_set__dismissButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dismissButton = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::SoloModeSelectionViewController_MenuType>*&
GlobalNamespace::SoloModeSelectionViewController::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::SoloModeSelectionViewController_MenuType>* const&
GlobalNamespace::SoloModeSelectionViewController::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::SoloModeSelectionViewController::__cordl_internal_set_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::SoloModeSelectionViewController_MenuType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
inline void GlobalNamespace::SoloModeSelectionViewController::add_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::SoloModeSelectionViewController_MenuType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SoloModeSelectionViewController*>(),
                          { "add_didFinishEvent",
                            {},
                            { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::SoloModeSelectionViewController_MenuType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SoloModeSelectionViewController::remove_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::SoloModeSelectionViewController_MenuType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SoloModeSelectionViewController*>(),
                          { "remove_didFinishEvent",
                            {},
                            { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::SoloModeSelectionViewController_MenuType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SoloModeSelectionViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SoloModeSelectionViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::SoloModeSelectionViewController::HandleMenuButton(::GlobalNamespace::SoloModeSelectionViewController_MenuType subMenuType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SoloModeSelectionViewController*>(),
                                                           { "HandleMenuButton", {}, { ::i2c::type_of<::GlobalNamespace::SoloModeSelectionViewController_MenuType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subMenuType);
}
inline void GlobalNamespace::SoloModeSelectionViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SoloModeSelectionViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SoloModeSelectionViewController*>(), { "<DidActivate>b__8_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SoloModeSelectionViewController*>(), { "<DidActivate>b__8_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SoloModeSelectionViewController*>(), { "<DidActivate>b__8_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SoloModeSelectionViewController*>(), { "<DidActivate>b__8_3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SoloModeSelectionViewController* GlobalNamespace::SoloModeSelectionViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SoloModeSelectionViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SoloModeSelectionViewController::SoloModeSelectionViewController() {}
