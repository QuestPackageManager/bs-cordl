#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/AndroidMouseInteractionProfile.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/Interactions/zzzz__AndroidMouseInteractionProfile_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Interactions/zzzz__AndroidMouseInteractionProfile_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteractionState.get_format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteractionState::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteractionState::get_format)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e4d4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteractionState>(), { "get_format", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteractionState::get_format() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteractionState>(), { "get_format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteractionState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*
UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteractionState::i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "click", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "secondaryClick", ty: "bool", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "tertiaryClick", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scroll", ty: "::UnityEngine::Vector2", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteractionState::AndroidMouseInteractionProfile_AndroidMouseInteractionState(
    bool click, bool secondaryClick, bool tertiaryClick, ::UnityEngine::Vector2 scroll) noexcept {
  this->click = click;
  this->secondaryClick = secondaryClick;
  this->tertiaryClick = tertiaryClick;
  this->scroll = scroll;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteractionState::AndroidMouseInteractionProfile_AndroidMouseInteractionState() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction.get_click
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::get_click)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4d4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(), { "get_click", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction.set_click
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::set_click)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4d4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(),
                                                             { "set_click", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction.get_secondaryClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::get_secondaryClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4d4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(), { "get_secondaryClick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction.set_secondaryClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::set_secondaryClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4d4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(),
                                                             { "set_secondaryClick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction.get_tertiaryClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::get_tertiaryClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4d4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(), { "get_tertiaryClick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction.set_tertiaryClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::set_tertiaryClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4d4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(),
                                                             { "set_tertiaryClick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction.get_scroll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::get_scroll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4d504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(), { "get_scroll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction.set_scroll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::*)(
    ::UnityEngine::InputSystem::Controls::Vector2Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::set_scroll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4d50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(),
                                                             { "set_scroll", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::FinishSetup)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6e4d514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e4d620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::__cordl_internal_get__click_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____click_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::__cordl_internal_get__click_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____click_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::__cordl_internal_set__click_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____click_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::__cordl_internal_get__secondaryClick_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondaryClick_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::__cordl_internal_get__secondaryClick_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondaryClick_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::__cordl_internal_set__secondaryClick_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____secondaryClick_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::__cordl_internal_get__tertiaryClick_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tertiaryClick_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::__cordl_internal_get__tertiaryClick_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tertiaryClick_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::__cordl_internal_set__tertiaryClick_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tertiaryClick_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*&
UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::__cordl_internal_get__scroll_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scroll_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const&
UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::__cordl_internal_get__scroll_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scroll_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::__cordl_internal_set__scroll_k__BackingField(
    ::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scroll_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::get_click() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(), { "get_click", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::set_click(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(),
                                                           { "set_click", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::get_secondaryClick() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(), { "get_secondaryClick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::set_secondaryClick(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(),
                                                           { "set_secondaryClick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::get_tertiaryClick() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(), { "get_tertiaryClick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::set_tertiaryClick(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(),
                                                           { "set_tertiaryClick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::get_scroll() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(), { "get_scroll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::set_scroll(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(),
                                                           { "set_scroll", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*
UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction::AndroidMouseInteractionProfile_AndroidMouseInteraction() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile.OnInstanceCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::OnInstanceCreate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e4c8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile.RegisterDeviceLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::RegisterDeviceLayout)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6e4c928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile.UnregisterDeviceLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::UnregisterDeviceLayout)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e4ca70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile.GetDeviceLayoutName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::GetDeviceLayoutName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e4cae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile.GetInteractionProfileType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType (::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::GetInteractionProfileType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4cb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile.RegisterActionMapsWithRuntime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::RegisterActionMapsWithRuntime)> {
  constexpr static std::size_t size = 0x940;
  constexpr static std::size_t addrs = 0x6e4cb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e4d46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::OnInstanceCreate(uint64_t instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::RegisterDeviceLayout() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::UnregisterDeviceLayout() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::GetDeviceLayoutName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType
UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::GetInteractionProfileType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::RegisterActionMapsWithRuntime() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile* UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile::AndroidMouseInteractionProfile() {}
