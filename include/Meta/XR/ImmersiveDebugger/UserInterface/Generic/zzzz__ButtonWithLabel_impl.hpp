#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\UserInterface\Generic\ButtonWithLabel.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Button_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ButtonWithLabel_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Background_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ImageStyle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Label_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__LayoutStyle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__TextStyle_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel.get_Background
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> (
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::get_Background)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5a0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(), { "get_Background", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel.set_BackgroundStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::set_BackgroundStyle)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5a5a0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(),
                                                             { "set_BackgroundStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel.set_TextStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::set_TextStyle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a5a18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(),
                                                             { "set_TextStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel.set_LabelLayoutStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::set_LabelLayoutStyle)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a5a220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(),
                                                             { "set_LabelLayoutStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel.get_Label
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::get_Label)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a5a238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(), { "get_Label", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel.set_Label
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::*)(::StringW)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::set_Label)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a5a284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(), { "set_Label", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::Setup)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5a5a2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel.OnHoverChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::OnHoverChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a5a414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel.RefreshStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::RefreshStyle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a5a180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(), { "RefreshStyle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel.OnTransparencyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::OnTransparencyChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a5a434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel.UpdateBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::UpdateBackground)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5a5a4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a5a63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::__cordl_internal_get__label() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____label;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::__cordl_internal_get__label() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____label;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::__cordl_internal_set__label(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____label = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::__cordl_internal_get__background() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____background;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::__cordl_internal_get__background() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____background;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::__cordl_internal_set__background(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____background = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::__cordl_internal_get__backgroundStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundStyle;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::__cordl_internal_get__backgroundStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundStyle;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::__cordl_internal_set__backgroundStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____backgroundStyle = value;
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::get_Background() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(), { "get_Background", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::set_BackgroundStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(),
                                                           { "set_BackgroundStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::set_TextStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(),
                                                           { "set_TextStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::set_LabelLayoutStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(),
                                                           { "set_LabelLayoutStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::get_Label() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(), { "get_Label", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::set_Label(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(), { "set_Label", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::OnHoverChanged() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::RefreshStyle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(), { "RefreshStyle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::OnTransparencyChanged() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::UpdateBackground() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel* Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel::ButtonWithLabel() {}
