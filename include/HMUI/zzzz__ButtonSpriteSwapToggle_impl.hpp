#pragma once
// IWYU pragma private; include "HMUI\ButtonSpriteSwapToggle.hpp"
#include "HMUI/zzzz__ButtonSpriteSwap_impl.hpp"
#include "HMUI/zzzz__ButtonSpriteSwapToggle_def.hpp"
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapToggle.get_isToggled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ButtonSpriteSwapToggle::*)()>(&::HMUI::ButtonSpriteSwapToggle::get_isToggled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5881cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwapToggle*>(), { "get_isToggled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapToggle.set_isToggled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonSpriteSwapToggle::*)(bool)>(&::HMUI::ButtonSpriteSwapToggle::set_isToggled)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5881ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwapToggle*>(), { "set_isToggled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapToggle.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonSpriteSwapToggle::*)()>(&::HMUI::ButtonSpriteSwapToggle::OnEnable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5881d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwapToggle*>(), { ::i2c::class_of<::HMUI::ButtonSpriteSwapToggle*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapToggle.HandleButtonSelectionStateDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonSpriteSwapToggle::*)(::HMUI::NoTransitionsButton_SelectionState)>(
    &::HMUI::ButtonSpriteSwapToggle::HandleButtonSelectionStateDidChange)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5881d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwapToggle*>(), { ::i2c::class_of<::HMUI::ButtonSpriteSwapToggle*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapToggle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonSpriteSwapToggle::*)()>(&::HMUI::ButtonSpriteSwapToggle::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5881e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwapToggle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& HMUI::ButtonSpriteSwapToggle::__cordl_internal_get__resetToggleOnEnable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resetToggleOnEnable;
}
constexpr bool const& HMUI::ButtonSpriteSwapToggle::__cordl_internal_get__resetToggleOnEnable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resetToggleOnEnable;
}
constexpr void HMUI::ButtonSpriteSwapToggle::__cordl_internal_set__resetToggleOnEnable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resetToggleOnEnable = value;
}
constexpr bool& HMUI::ButtonSpriteSwapToggle::__cordl_internal_get__ignoreHighlight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreHighlight;
}
constexpr bool const& HMUI::ButtonSpriteSwapToggle::__cordl_internal_get__ignoreHighlight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreHighlight;
}
constexpr void HMUI::ButtonSpriteSwapToggle::__cordl_internal_set__ignoreHighlight(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ignoreHighlight = value;
}
constexpr bool& HMUI::ButtonSpriteSwapToggle::__cordl_internal_get__isToggled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isToggled;
}
constexpr bool const& HMUI::ButtonSpriteSwapToggle::__cordl_internal_get__isToggled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isToggled;
}
constexpr void HMUI::ButtonSpriteSwapToggle::__cordl_internal_set__isToggled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isToggled = value;
}
inline bool HMUI::ButtonSpriteSwapToggle::get_isToggled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwapToggle*>(), { "get_isToggled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::ButtonSpriteSwapToggle::set_isToggled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwapToggle*>(), { "set_isToggled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::ButtonSpriteSwapToggle::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ButtonSpriteSwapToggle*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ButtonSpriteSwapToggle::HandleButtonSelectionStateDidChange(::HMUI::NoTransitionsButton_SelectionState state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ButtonSpriteSwapToggle*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void HMUI::ButtonSpriteSwapToggle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwapToggle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::ButtonSpriteSwapToggle* HMUI::ButtonSpriteSwapToggle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ButtonSpriteSwapToggle*>());
}
// Ctor Parameters []
constexpr ::HMUI::ButtonSpriteSwapToggle::ButtonSpriteSwapToggle() {}
