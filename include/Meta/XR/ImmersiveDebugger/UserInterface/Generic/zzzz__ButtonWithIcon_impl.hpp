#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\UserInterface\Generic\ButtonWithIcon.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Button_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ButtonWithIcon_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Background_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Icon_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ImageStyle_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon.get_BackgroundStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> (
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::get_BackgroundStyle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a59974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(), { "get_BackgroundStyle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon.set_BackgroundStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::set_BackgroundStyle)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5a5997c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(),
                                                             { "set_BackgroundStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon.set_IconStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::set_IconStyle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a59ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(),
                                                             { "set_IconStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon.set_Icon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::*)(::UnityEngine::Texture2D*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::set_Icon)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a59ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(),
                                                                                           { "set_Icon", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::Setup)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5a59afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon.OnHoverChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::OnHoverChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a59cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon.RefreshStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::RefreshStyle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a59a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(), { "RefreshStyle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon.UpdateBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::UpdateBackground)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5a59cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon.UpdateIcon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::UpdateIcon)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5a59e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon.OnTransparencyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::OnTransparencyChanged)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5a5a018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a5a0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Icon>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::__cordl_internal_get__icon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____icon;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Icon> const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::__cordl_internal_get__icon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____icon;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::__cordl_internal_set__icon(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Icon> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____icon = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::__cordl_internal_get__background() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____background;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::__cordl_internal_get__background() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____background;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::__cordl_internal_set__background(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____background = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::__cordl_internal_get__backgroundStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundStyle;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::__cordl_internal_get__backgroundStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundStyle;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::__cordl_internal_set__backgroundStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____backgroundStyle = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::__cordl_internal_get__iconStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iconStyle;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::__cordl_internal_get__iconStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iconStyle;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::__cordl_internal_set__iconStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____iconStyle = value;
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::get_BackgroundStyle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(), { "get_BackgroundStyle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::set_BackgroundStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(),
                                                           { "set_BackgroundStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::set_IconStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(),
                                                           { "set_IconStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::set_Icon(::UnityEngine::Texture2D* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(),
                                                                                         { "set_Icon", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::OnHoverChanged() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::RefreshStyle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(), { "RefreshStyle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::UpdateBackground() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::UpdateIcon() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::OnTransparencyChanged() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon* Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon::ButtonWithIcon() {}
