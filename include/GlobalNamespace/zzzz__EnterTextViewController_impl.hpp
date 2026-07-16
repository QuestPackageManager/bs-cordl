#pragma once
// IWYU pragma private; include "GlobalNamespace/EnterTextViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__EnterTextViewController_def.hpp"
#include "GlobalNamespace/zzzz__VRTextEntryController_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnterTextViewController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnterTextViewController::*)(::System::Action_2<::UnityW<::GlobalNamespace::EnterTextViewController>, ::StringW>*)>(
    &::GlobalNamespace::EnterTextViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a12b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterTextViewController*>(),
                                                { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::EnterTextViewController>, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnterTextViewController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnterTextViewController::*)(::System::Action_2<::UnityW<::GlobalNamespace::EnterTextViewController>, ::StringW>*)>(
    &::GlobalNamespace::EnterTextViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a12be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterTextViewController*>(),
                                                { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::EnterTextViewController>, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnterTextViewController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnterTextViewController::*)(::StringW)>(&::GlobalNamespace::EnterTextViewController::Init)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a12ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterTextViewController*>(), { "Init", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnterTextViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnterTextViewController::*)(bool, bool, bool)>(&::GlobalNamespace::EnterTextViewController::DidActivate)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a12cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterTextViewController*>(), { ::i2c::class_of<::GlobalNamespace::EnterTextViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnterTextViewController.OkButtonPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnterTextViewController::*)()>(&::GlobalNamespace::EnterTextViewController::OkButtonPressed)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a12db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterTextViewController*>(), { "OkButtonPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnterTextViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnterTextViewController::*)()>(&::GlobalNamespace::EnterTextViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a12e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterTextViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRTextEntryController>& GlobalNamespace::EnterTextViewController::__cordl_internal_get__textEntryController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textEntryController;
}
constexpr ::UnityW<::GlobalNamespace::VRTextEntryController> const& GlobalNamespace::EnterTextViewController::__cordl_internal_get__textEntryController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textEntryController;
}
constexpr void GlobalNamespace::EnterTextViewController::__cordl_internal_set__textEntryController(::UnityW<::GlobalNamespace::VRTextEntryController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textEntryController = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::EnterTextViewController::__cordl_internal_get__titleText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____titleText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::EnterTextViewController::__cordl_internal_get__titleText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____titleText;
}
constexpr void GlobalNamespace::EnterTextViewController::__cordl_internal_set__titleText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____titleText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::EnterTextViewController::__cordl_internal_get__okButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____okButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::EnterTextViewController::__cordl_internal_get__okButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____okButton;
}
constexpr void GlobalNamespace::EnterTextViewController::__cordl_internal_set__okButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____okButton = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::EnterTextViewController>, ::StringW>*& GlobalNamespace::EnterTextViewController::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::EnterTextViewController>, ::StringW>* const& GlobalNamespace::EnterTextViewController::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::EnterTextViewController::__cordl_internal_set_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::EnterTextViewController>, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
inline void GlobalNamespace::EnterTextViewController::add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::EnterTextViewController>, ::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterTextViewController*>(),
                                                           { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::EnterTextViewController>, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EnterTextViewController::remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::EnterTextViewController>, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterTextViewController*>(),
                                              { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::EnterTextViewController>, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EnterTextViewController::Init(::StringW titleText) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterTextViewController*>(), { "Init", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, titleText);
}
inline void GlobalNamespace::EnterTextViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EnterTextViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::EnterTextViewController::OkButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterTextViewController*>(), { "OkButtonPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnterTextViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterTextViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnterTextViewController* GlobalNamespace::EnterTextViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnterTextViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnterTextViewController::EnterTextViewController() {}
