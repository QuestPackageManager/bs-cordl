#pragma once
// IWYU pragma private; include "GlobalNamespace\StartupErrorViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__StartupErrorViewController_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StartupErrorViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartupErrorViewController::*)(bool, bool, bool)>(&::GlobalNamespace::StartupErrorViewController::DidActivate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a23340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartupErrorViewController*>(), { ::i2c::class_of<::GlobalNamespace::StartupErrorViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StartupErrorViewController.SetMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartupErrorViewController::*)(::StringW)>(&::GlobalNamespace::StartupErrorViewController::SetMessage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a233f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartupErrorViewController*>(), { "SetMessage", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StartupErrorViewController.HandleQuitButtonPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartupErrorViewController::*)()>(&::GlobalNamespace::StartupErrorViewController::HandleQuitButtonPressed)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5a23418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartupErrorViewController*>(), { "HandleQuitButtonPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StartupErrorViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartupErrorViewController::*)()>(&::GlobalNamespace::StartupErrorViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a2346c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartupErrorViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::StartupErrorViewController::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::StartupErrorViewController::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::StartupErrorViewController::__cordl_internal_set__text(::UnityW<::TMPro::TMP_Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::StartupErrorViewController::__cordl_internal_get__quitButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quitButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::StartupErrorViewController::__cordl_internal_get__quitButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quitButton;
}
constexpr void GlobalNamespace::StartupErrorViewController::__cordl_internal_set__quitButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____quitButton = value;
}
inline void GlobalNamespace::StartupErrorViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::StartupErrorViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::StartupErrorViewController::SetMessage(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartupErrorViewController*>(), { "SetMessage", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::StartupErrorViewController::HandleQuitButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartupErrorViewController*>(), { "HandleQuitButtonPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StartupErrorViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartupErrorViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StartupErrorViewController* GlobalNamespace::StartupErrorViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StartupErrorViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StartupErrorViewController::StartupErrorViewController() {}
