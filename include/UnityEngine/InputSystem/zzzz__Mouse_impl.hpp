#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Mouse.hpp"
#include "UnityEngine/InputSystem/zzzz__Pointer_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Mouse_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__DeltaControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__IntegerControl_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateCallbackReceiver_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.get_scroll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DeltaControl* (::UnityEngine::InputSystem::Mouse::*)()>(&::UnityEngine::InputSystem::Mouse::get_scroll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65241c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "get_scroll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.set_scroll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Mouse::*)(::UnityEngine::InputSystem::Controls::DeltaControl*)>(
    &::UnityEngine::InputSystem::Mouse::set_scroll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65241cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "set_scroll", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::DeltaControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.get_leftButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::Mouse::*)()>(
    &::UnityEngine::InputSystem::Mouse::get_leftButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65241d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "get_leftButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.set_leftButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Mouse::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::Mouse::set_leftButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65241dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "set_leftButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.get_middleButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::Mouse::*)()>(
    &::UnityEngine::InputSystem::Mouse::get_middleButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65241e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "get_middleButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.set_middleButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Mouse::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::Mouse::set_middleButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65241ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(),
                                                                                           { "set_middleButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.get_rightButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::Mouse::*)()>(
    &::UnityEngine::InputSystem::Mouse::get_rightButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65241f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "get_rightButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.set_rightButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Mouse::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::Mouse::set_rightButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65241fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(),
                                                                                           { "set_rightButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.get_backButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::Mouse::*)()>(
    &::UnityEngine::InputSystem::Mouse::get_backButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6524204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "get_backButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.set_backButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Mouse::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::Mouse::set_backButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x652420c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "set_backButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.get_forwardButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::Mouse::*)()>(
    &::UnityEngine::InputSystem::Mouse::get_forwardButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6524214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "get_forwardButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.set_forwardButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Mouse::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::Mouse::set_forwardButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x652421c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(),
                                                                                           { "set_forwardButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.get_clickCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (::UnityEngine::InputSystem::Mouse::*)()>(
    &::UnityEngine::InputSystem::Mouse::get_clickCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6524224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "get_clickCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.set_clickCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Mouse::*)(::UnityEngine::InputSystem::Controls::IntegerControl*)>(
    &::UnityEngine::InputSystem::Mouse::set_clickCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x652422c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(),
                                                                                           { "set_clickCount", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Mouse* (*)()>(&::UnityEngine::InputSystem::Mouse::get_current)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6524234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.set_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::Mouse*)>(&::UnityEngine::InputSystem::Mouse::set_current)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6524280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Mouse*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.MakeCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Mouse::*)()>(&::UnityEngine::InputSystem::Mouse::MakeCurrent)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x65242d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.OnAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Mouse::*)()>(&::UnityEngine::InputSystem::Mouse::OnAdded)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x65243a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.OnRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Mouse::*)()>(&::UnityEngine::InputSystem::Mouse::OnRemoved)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6524408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.WarpCursorPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Mouse::*)(::UnityEngine::Vector2)>(&::UnityEngine::InputSystem::Mouse::WarpCursorPosition)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x652452c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "WarpCursorPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Mouse::*)()>(&::UnityEngine::InputSystem::Mouse::FinishSetup)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x65245dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.OnNextUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Mouse::*)()>(&::UnityEngine::InputSystem::Mouse::OnNextUpdate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6524964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "OnNextUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.OnStateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Mouse::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::Mouse::OnStateEvent)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6524a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "OnStateEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Mouse::*)()>(
    &::UnityEngine::InputSystem::Mouse::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6524b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse.UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Mouse::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::Mouse::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6524b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(),
                            { "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Mouse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Mouse::*)()>(&::UnityEngine::InputSystem::Mouse::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6524b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::DeltaControl*& UnityEngine::InputSystem::Mouse::__cordl_internal_get__scroll_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scroll_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::DeltaControl* const& UnityEngine::InputSystem::Mouse::__cordl_internal_get__scroll_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scroll_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Mouse::__cordl_internal_set__scroll_k__BackingField(::UnityEngine::InputSystem::Controls::DeltaControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scroll_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::Mouse::__cordl_internal_get__leftButton_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::Mouse::__cordl_internal_get__leftButton_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftButton_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Mouse::__cordl_internal_set__leftButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::Mouse::__cordl_internal_get__middleButton_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____middleButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::Mouse::__cordl_internal_get__middleButton_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____middleButton_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Mouse::__cordl_internal_set__middleButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____middleButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::Mouse::__cordl_internal_get__rightButton_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::Mouse::__cordl_internal_get__rightButton_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightButton_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Mouse::__cordl_internal_set__rightButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::Mouse::__cordl_internal_get__backButton_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::Mouse::__cordl_internal_get__backButton_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backButton_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Mouse::__cordl_internal_set__backButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____backButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::Mouse::__cordl_internal_get__forwardButton_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forwardButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::Mouse::__cordl_internal_get__forwardButton_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forwardButton_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Mouse::__cordl_internal_set__forwardButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____forwardButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& UnityEngine::InputSystem::Mouse::__cordl_internal_get__clickCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clickCount_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const& UnityEngine::InputSystem::Mouse::__cordl_internal_get__clickCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clickCount_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Mouse::__cordl_internal_set__clickCount_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clickCount_k__BackingField = value;
}
inline void UnityEngine::InputSystem::Mouse::setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Mouse* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Mouse*, "<current>k__BackingField", ::UnityEngine::InputSystem::Mouse*>(std::forward<::UnityEngine::InputSystem::Mouse*>(value));
}
inline ::UnityEngine::InputSystem::Mouse* UnityEngine::InputSystem::Mouse::getStaticF__current_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Mouse*, "<current>k__BackingField", ::UnityEngine::InputSystem::Mouse*>();
}
inline void UnityEngine::InputSystem::Mouse::setStaticF_s_PlatformMouseDevice(::UnityEngine::InputSystem::Mouse* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Mouse*, "s_PlatformMouseDevice", ::UnityEngine::InputSystem::Mouse*>(std::forward<::UnityEngine::InputSystem::Mouse*>(value));
}
inline ::UnityEngine::InputSystem::Mouse* UnityEngine::InputSystem::Mouse::getStaticF_s_PlatformMouseDevice() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Mouse*, "s_PlatformMouseDevice", ::UnityEngine::InputSystem::Mouse*>();
}
inline ::UnityEngine::InputSystem::Controls::DeltaControl* UnityEngine::InputSystem::Mouse::get_scroll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "get_scroll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DeltaControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Mouse::set_scroll(::UnityEngine::InputSystem::Controls::DeltaControl* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "set_scroll", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::DeltaControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::Mouse::get_leftButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "get_leftButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Mouse::set_leftButton(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "set_leftButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::Mouse::get_middleButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "get_middleButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Mouse::set_middleButton(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "set_middleButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::Mouse::get_rightButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "get_rightButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Mouse::set_rightButton(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "set_rightButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::Mouse::get_backButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "get_backButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Mouse::set_backButton(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "set_backButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::Mouse::get_forwardButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "get_forwardButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Mouse::set_forwardButton(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(),
                                                                                         { "set_forwardButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl* UnityEngine::InputSystem::Mouse::get_clickCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "get_clickCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Mouse::set_clickCount(::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "set_clickCount", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Mouse* UnityEngine::InputSystem::Mouse::get_current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Mouse*>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Mouse::set_current(::UnityEngine::InputSystem::Mouse* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Mouse*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Mouse::MakeCurrent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Mouse::OnAdded() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Mouse::OnRemoved() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Mouse::WarpCursorPosition(::UnityEngine::Vector2 position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "WarpCursorPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void UnityEngine::InputSystem::Mouse::FinishSetup() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Mouse::OnNextUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "OnNextUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Mouse::OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "OnStateEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventPtr);
}
inline void UnityEngine::InputSystem::Mouse::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Mouse::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(),
                          { "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventPtr);
}
inline void UnityEngine::InputSystem::Mouse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Mouse*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Mouse* UnityEngine::InputSystem::Mouse::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Mouse*>());
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
constexpr UnityEngine::InputSystem::Mouse::operator ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver* UnityEngine::InputSystem::Mouse::i___UnityEngine__InputSystem__LowLevel__IInputStateCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Mouse::Mouse() {}
