#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\UserInterface\Generic\Label.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Label_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__TextStyle_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label.get_Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Text> (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::get_Text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5c96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label*>(), { "get_Text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label.set_Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::*)(::UnityEngine::UI::Text*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::set_Text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5c974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label*>(), { "set_Text", {}, { ::i2c::type_of<::UnityEngine::UI::Text*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label.get_Content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::get_Content)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a5a264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label*>(), { "get_Content", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label.set_Content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::*)(::StringW)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::set_Content)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a5a2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label*>(), { "set_Content", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::Setup)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5a5c97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label.get_TextStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle> (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::get_TextStyle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5ca64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label*>(), { "get_TextStyle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label.set_TextStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::set_TextStyle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5a5a1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label*>(),
                                                             { "set_TextStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a5ca6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::__cordl_internal_get__Text_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Text_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::__cordl_internal_get__Text_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Text_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::__cordl_internal_set__Text_k__BackingField(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Text_k__BackingField = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::__cordl_internal_get__textStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textStyle;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle> const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::__cordl_internal_get__textStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textStyle;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::__cordl_internal_set__textStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textStyle = value;
}
inline ::UnityW<::UnityEngine::UI::Text> Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::get_Text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label*>(), { "get_Text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Text>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::set_Text(::UnityEngine::UI::Text* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label*>(), { "set_Text", {}, { ::i2c::type_of<::UnityEngine::UI::Text*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::get_Content() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label*>(), { "get_Content", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::set_Content(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label*>(), { "set_Content", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle> Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::get_TextStyle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label*>(), { "get_TextStyle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::set_TextStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label*>(),
                                                           { "set_TextStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label* Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label::Label() {}
