#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\UserInterface\ConsoleLine.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__InteractableController_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__ConsoleLine_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Background_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Flex_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ImageStyle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Label_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__LogEntry_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine.get_Entry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* (::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::get_Entry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4c9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(), { "get_Entry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine.set_Entry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::*)(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::set_Entry)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5a4c9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(),
                                                                                           { "set_Entry", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine.get_Label
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::get_Label)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a4ccd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(), { "get_Label", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine.set_Label
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::*)(::StringW)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::set_Label)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a4ca6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(), { "set_Label", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine.set_BackgroundStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::set_BackgroundStyle)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a4cd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(),
                                                             { "set_BackgroundStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine.set_PillStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::set_PillStyle)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a4ca98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(),
                                                             { "set_PillStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::Setup)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x5a4cda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine.OnTransparencyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::OnTransparencyChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a4d2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine.RefreshLogCounter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::RefreshLogCounter)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5a4cb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(), { "RefreshLogCounter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine.ShowCounter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::ShowCounter)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5a4d340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(), { "ShowCounter", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine.OnPointerClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::OnPointerClick)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a4d3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine.OnHoverChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::OnHoverChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a4d440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5a4d4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_get__label() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____label;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_get__label() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____label;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_set__label(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____label = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_get__flex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flex;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_get__flex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flex;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_set__flex(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flex = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_get__background() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____background;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const& Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_get__background() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____background;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_set__background(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____background = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_get__pill() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pill;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const& Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_get__pill() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pill;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_set__pill(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pill = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*& Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_get__entry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entry;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* const& Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_get__entry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entry;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_set__entry(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____entry = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>*& Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_get_OnClick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnClick;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* const&
Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_get_OnClick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnClick;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_set_OnClick(::UnityEngine::Events::UnityEvent_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnClick = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_get__counterLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____counterLabel;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_get__counterLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____counterLabel;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_set__counterLabel(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____counterLabel = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_get__counterBackground() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____counterBackground;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const& Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_get__counterBackground() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____counterBackground;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_set__counterBackground(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____counterBackground = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_get__backgroundImageStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundImageStyle;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const&
Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_get__backgroundImageStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundImageStyle;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::__cordl_internal_set__backgroundImageStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____backgroundImageStyle = value;
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::get_Entry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(), { "get_Entry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::set_Entry(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(),
                                                                                         { "set_Entry", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::get_Label() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(), { "get_Label", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::set_Label(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(), { "set_Label", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::set_BackgroundStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(),
                                                           { "set_BackgroundStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::set_PillStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(),
                                                           { "set_PillStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::OnTransparencyChanged() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::RefreshLogCounter() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(), { "RefreshLogCounter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::ShowCounter(bool show) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(), { "ShowCounter", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, show);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::OnPointerClick() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::OnHoverChanged() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine* Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine::ConsoleLine() {}
