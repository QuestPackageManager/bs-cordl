#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/VirtualMouseInput.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__VirtualMouseInput_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__VirtualMouseInput_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Mouse_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode::VirtualMouseInput_CursorMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode::VirtualMouseInput_CursorMode() {}
constexpr ::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode::SoftwareCursor{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode::HardwareCursorIfAvailable{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_cursorTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6595bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_cursorTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_cursorTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(::UnityEngine::RectTransform*)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6595bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "set_cursorTransform", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_cursorSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&::UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6595c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_cursorSpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_cursorSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(float_t)>(&::UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6595c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "set_cursorSpeed", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_cursorMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6595c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_cursorMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_cursorMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorMode)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6595c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                                                             { "set_cursorMode", {}, { ::i2c::type_of<::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_cursorGraphic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Graphic> (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorGraphic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6595f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_cursorGraphic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_cursorGraphic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(::UnityEngine::UI::Graphic*)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorGraphic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6595f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "set_cursorGraphic", {}, { ::i2c::type_of<::UnityEngine::UI::Graphic*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_scrollSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&::UnityEngine::InputSystem::UI::VirtualMouseInput::get_scrollSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6595fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_scrollSpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_scrollSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(float_t)>(&::UnityEngine::InputSystem::UI::VirtualMouseInput::set_scrollSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6595fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "set_scrollSpeed", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_virtualMouse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Mouse* (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_virtualMouse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6595fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_virtualMouse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_stickAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_stickAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6595fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_stickAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_stickAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_stickAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6596000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                                                                                           { "set_stickAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_leftButtonAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_leftButtonAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6596198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_leftButtonAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_leftButtonAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_leftButtonAction)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x65961ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                                                                                           { "set_leftButtonAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_rightButtonAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_rightButtonAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65962a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_rightButtonAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_rightButtonAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_rightButtonAction)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x65962bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                                                                                           { "set_rightButtonAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_middleButtonAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_middleButtonAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6596348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_middleButtonAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_middleButtonAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_middleButtonAction)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x659635c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                                                                                           { "set_middleButtonAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_forwardButtonAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_forwardButtonAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65963e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_forwardButtonAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_forwardButtonAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_forwardButtonAction)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x65963fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                                                                                           { "set_forwardButtonAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_backButtonAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_backButtonAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6596488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_backButtonAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_backButtonAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_backButtonAction)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x659649c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                                                                                           { "set_backButtonAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_scrollWheelAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_scrollWheelAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6596528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_scrollWheelAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_scrollWheelAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_scrollWheelAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x659653c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                                                                                           { "set_scrollWheelAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&::UnityEngine::InputSystem::UI::VirtualMouseInput::OnEnable)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x659656c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&::UnityEngine::InputSystem::UI::VirtualMouseInput::OnDisable)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x65969f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.TryFindCanvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&::UnityEngine::InputSystem::UI::VirtualMouseInput::TryFindCanvas)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6595f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "TryFindCanvas", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.TryEnableHardwareCursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&::UnityEngine::InputSystem::UI::VirtualMouseInput::TryEnableHardwareCursor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x6595d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "TryEnableHardwareCursor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.UpdateMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&::UnityEngine::InputSystem::UI::VirtualMouseInput::UpdateMotion)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x6596c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "UpdateMotion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.OnButtonActionTriggered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::OnButtonActionTriggered)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6596fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                                                             { "OnButtonActionTriggered", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.SetActionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionProperty, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*, bool)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::SetActionCallback)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6596238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                                                             { "SetActionCallback",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>(),
                                                                 ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.SetAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::InputSystem::InputActionProperty>, ::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::SetAction)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6596030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                            { "SetAction", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionProperty>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.OnAfterInputUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&::UnityEngine::InputSystem::UI::VirtualMouseInput::OnAfterInputUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65971d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "OnAfterInputUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&::UnityEngine::InputSystem::UI::VirtualMouseInput::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65971d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_CursorMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorMode;
}
constexpr ::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode const& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_CursorMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorMode;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_set_m_CursorMode(::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CursorMode = value;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic>& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_CursorGraphic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorGraphic;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic> const& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_CursorGraphic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorGraphic;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_set_m_CursorGraphic(::UnityW<::UnityEngine::UI::Graphic> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CursorGraphic = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_CursorTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_CursorTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorTransform;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_set_m_CursorTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CursorTransform = value;
}
constexpr float_t& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_CursorSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorSpeed;
}
constexpr float_t const& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_CursorSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorSpeed;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_set_m_CursorSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CursorSpeed = value;
}
constexpr float_t& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_ScrollSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollSpeed;
}
constexpr float_t const& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_ScrollSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollSpeed;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_set_m_ScrollSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrollSpeed = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_StickAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StickAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_StickAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StickAction;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_set_m_StickAction(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StickAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_LeftButtonAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftButtonAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_LeftButtonAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftButtonAction;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_set_m_LeftButtonAction(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LeftButtonAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_MiddleButtonAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MiddleButtonAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_MiddleButtonAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MiddleButtonAction;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_set_m_MiddleButtonAction(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MiddleButtonAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_RightButtonAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightButtonAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_RightButtonAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightButtonAction;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_set_m_RightButtonAction(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RightButtonAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_ForwardButtonAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForwardButtonAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_ForwardButtonAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForwardButtonAction;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_set_m_ForwardButtonAction(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ForwardButtonAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_BackButtonAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BackButtonAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_BackButtonAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BackButtonAction;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_set_m_BackButtonAction(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BackButtonAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_ScrollWheelAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollWheelAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_ScrollWheelAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollWheelAction;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_set_m_ScrollWheelAction(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrollWheelAction = value;
}
constexpr ::UnityW<::UnityEngine::Canvas>& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_Canvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Canvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_Canvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Canvas;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Canvas = value;
}
constexpr ::UnityEngine::InputSystem::Mouse*& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_VirtualMouse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VirtualMouse;
}
constexpr ::UnityEngine::InputSystem::Mouse* const& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_VirtualMouse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VirtualMouse;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_set_m_VirtualMouse(::UnityEngine::InputSystem::Mouse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VirtualMouse = value;
}
constexpr ::UnityEngine::InputSystem::Mouse*& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_SystemMouse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SystemMouse;
}
constexpr ::UnityEngine::InputSystem::Mouse* const& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_SystemMouse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SystemMouse;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_set_m_SystemMouse(::UnityEngine::InputSystem::Mouse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SystemMouse = value;
}
constexpr ::System::Action*& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_AfterInputUpdateDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AfterInputUpdateDelegate;
}
constexpr ::System::Action* const& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_AfterInputUpdateDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AfterInputUpdateDelegate;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_set_m_AfterInputUpdateDelegate(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AfterInputUpdateDelegate = value;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_ButtonActionTriggeredDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ButtonActionTriggeredDelegate;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const&
UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_ButtonActionTriggeredDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ButtonActionTriggeredDelegate;
}
constexpr void
UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_set_m_ButtonActionTriggeredDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ButtonActionTriggeredDelegate = value;
}
constexpr double_t& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_LastTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastTime;
}
constexpr double_t const& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_LastTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastTime;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_set_m_LastTime(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastTime = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_LastStickValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastStickValue;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_get_m_LastStickValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastStickValue;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__cordl_internal_set_m_LastStickValue(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastStickValue = value;
}
inline ::UnityW<::UnityEngine::RectTransform> UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_cursorTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorTransform(::UnityEngine::RectTransform* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "set_cursorTransform", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorSpeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_cursorSpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "set_cursorSpeed", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_cursorMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorMode(::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                                                           { "set_cursorMode", {}, { ::i2c::type_of<::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Graphic> UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorGraphic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_cursorGraphic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Graphic>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorGraphic(::UnityEngine::UI::Graphic* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "set_cursorGraphic", {}, { ::i2c::type_of<::UnityEngine::UI::Graphic*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::VirtualMouseInput::get_scrollSpeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_scrollSpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_scrollSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "set_scrollSpeed", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Mouse* UnityEngine::InputSystem::UI::VirtualMouseInput::get_virtualMouse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_virtualMouse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Mouse*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_stickAction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_stickAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_stickAction(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                                                                                         { "set_stickAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_leftButtonAction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_leftButtonAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_leftButtonAction(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                                                                                         { "set_leftButtonAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_rightButtonAction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_rightButtonAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_rightButtonAction(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                                                                                         { "set_rightButtonAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_middleButtonAction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_middleButtonAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_middleButtonAction(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                                                                                         { "set_middleButtonAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_forwardButtonAction() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_forwardButtonAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_forwardButtonAction(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                                                                                         { "set_forwardButtonAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_backButtonAction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_backButtonAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_backButtonAction(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                                                                                         { "set_backButtonAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_scrollWheelAction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "get_scrollWheelAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_scrollWheelAction(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                                                                                         { "set_scrollWheelAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::TryFindCanvas() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "TryFindCanvas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::TryEnableHardwareCursor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "TryEnableHardwareCursor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::UpdateMotion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "UpdateMotion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::OnButtonActionTriggered(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                                                           { "OnButtonActionTriggered", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::SetActionCallback(::UnityEngine::InputSystem::InputActionProperty field,
                                                                               ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* callback, bool install) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                                                           { "SetActionCallback",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>(),
                                                               ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, field, callback, install);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::SetAction(::by_ref<::UnityEngine::InputSystem::InputActionProperty> field, ::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(),
                          { "SetAction", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionProperty>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, field, value);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::OnAfterInputUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { "OnAfterInputUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::VirtualMouseInput*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::UI::VirtualMouseInput* UnityEngine::InputSystem::UI::VirtualMouseInput::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::UI::VirtualMouseInput*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::VirtualMouseInput::VirtualMouseInput() {}
