#pragma once
// IWYU pragma private; include "GlobalNamespace\SettingsNavigationController.hpp"
#include "HMUI/zzzz__NavigationController_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsNavigationController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsNavigationController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SettingsNavigationController_FinishAction::SettingsNavigationController_FinishAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsNavigationController_FinishAction::SettingsNavigationController_FinishAction() {}
constexpr ::GlobalNamespace::SettingsNavigationController_FinishAction GlobalNamespace::SettingsNavigationController_FinishAction::Ok{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::SettingsNavigationController_FinishAction GlobalNamespace::SettingsNavigationController_FinishAction::Cancel{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::SettingsNavigationController_FinishAction GlobalNamespace::SettingsNavigationController_FinishAction::Apply{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::SettingsNavigationController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsNavigationController::*)(::System::Action_1<::GlobalNamespace::SettingsNavigationController_FinishAction>*)>(
    &::GlobalNamespace::SettingsNavigationController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a224f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsNavigationController*>(),
                                                             { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::SettingsNavigationController_FinishAction>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsNavigationController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsNavigationController::*)(::System::Action_1<::GlobalNamespace::SettingsNavigationController_FinishAction>*)>(
    &::GlobalNamespace::SettingsNavigationController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a225b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsNavigationController*>(),
                                                { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::SettingsNavigationController_FinishAction>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsNavigationController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsNavigationController::*)(bool, bool, bool)>(&::GlobalNamespace::SettingsNavigationController::DidActivate)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5a22670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsNavigationController*>(), { ::i2c::class_of<::GlobalNamespace::SettingsNavigationController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsNavigationController.HandleFinishButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsNavigationController::*)(::GlobalNamespace::SettingsNavigationController_FinishAction)>(
    &::GlobalNamespace::SettingsNavigationController::HandleFinishButton)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a22830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsNavigationController*>(),
                                                             { "HandleFinishButton", {}, { ::i2c::type_of<::GlobalNamespace::SettingsNavigationController_FinishAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsNavigationController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsNavigationController::*)()>(&::GlobalNamespace::SettingsNavigationController::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a2284c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsNavigationController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsNavigationController._DidActivate_b__7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsNavigationController::*)()>(&::GlobalNamespace::SettingsNavigationController::_DidActivate_b__7_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a22858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsNavigationController*>(), { "<DidActivate>b__7_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsNavigationController._DidActivate_b__7_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsNavigationController::*)()>(&::GlobalNamespace::SettingsNavigationController::_DidActivate_b__7_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a22878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsNavigationController*>(), { "<DidActivate>b__7_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsNavigationController._DidActivate_b__7_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsNavigationController::*)()>(&::GlobalNamespace::SettingsNavigationController::_DidActivate_b__7_2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a22898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsNavigationController*>(), { "<DidActivate>b__7_2", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::SettingsNavigationController::__cordl_internal_get__okButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____okButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::SettingsNavigationController::__cordl_internal_get__okButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____okButton;
}
constexpr void GlobalNamespace::SettingsNavigationController::__cordl_internal_set__okButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____okButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::SettingsNavigationController::__cordl_internal_get__applyButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::SettingsNavigationController::__cordl_internal_get__applyButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyButton;
}
constexpr void GlobalNamespace::SettingsNavigationController::__cordl_internal_set__applyButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____applyButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::SettingsNavigationController::__cordl_internal_get__cancelButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::SettingsNavigationController::__cordl_internal_get__cancelButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelButton;
}
constexpr void GlobalNamespace::SettingsNavigationController::__cordl_internal_set__cancelButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancelButton = value;
}
constexpr ::System::Action_1<::GlobalNamespace::SettingsNavigationController_FinishAction>*& GlobalNamespace::SettingsNavigationController::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::SettingsNavigationController_FinishAction>* const& GlobalNamespace::SettingsNavigationController::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::SettingsNavigationController::__cordl_internal_set_didFinishEvent(::System::Action_1<::GlobalNamespace::SettingsNavigationController_FinishAction>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
inline void GlobalNamespace::SettingsNavigationController::add_didFinishEvent(::System::Action_1<::GlobalNamespace::SettingsNavigationController_FinishAction>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsNavigationController*>(),
                                                           { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::SettingsNavigationController_FinishAction>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsNavigationController::remove_didFinishEvent(::System::Action_1<::GlobalNamespace::SettingsNavigationController_FinishAction>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsNavigationController*>(),
                                                           { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::SettingsNavigationController_FinishAction>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsNavigationController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SettingsNavigationController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::SettingsNavigationController::HandleFinishButton(::GlobalNamespace::SettingsNavigationController_FinishAction finishAction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsNavigationController*>(),
                                                           { "HandleFinishButton", {}, { ::i2c::type_of<::GlobalNamespace::SettingsNavigationController_FinishAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finishAction);
}
inline void GlobalNamespace::SettingsNavigationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsNavigationController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsNavigationController::_DidActivate_b__7_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsNavigationController*>(), { "<DidActivate>b__7_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsNavigationController::_DidActivate_b__7_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsNavigationController*>(), { "<DidActivate>b__7_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsNavigationController::_DidActivate_b__7_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsNavigationController*>(), { "<DidActivate>b__7_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SettingsNavigationController* GlobalNamespace::SettingsNavigationController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SettingsNavigationController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsNavigationController::SettingsNavigationController() {}
