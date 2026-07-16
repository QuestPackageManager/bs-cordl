#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/TouchControl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__TouchControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__DeltaControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__DoubleControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__IntegerControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__TouchPhaseControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__TouchPressControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.get_press
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPressControl* (::UnityEngine::InputSystem::Controls::TouchControl::*)()>(
    &::UnityEngine::InputSystem::Controls::TouchControl::get_press)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f716c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_press", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.set_press
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::TouchPressControl*)>(
    &::UnityEngine::InputSystem::Controls::TouchControl::set_press)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f7174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                           { "set_press", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::TouchPressControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.get_displayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (::UnityEngine::InputSystem::Controls::TouchControl::*)()>(
    &::UnityEngine::InputSystem::Controls::TouchControl::get_displayIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f717c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_displayIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.set_displayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::IntegerControl*)>(
    &::UnityEngine::InputSystem::Controls::TouchControl::set_displayIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f7184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                           { "set_displayIndex", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.get_touchId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (::UnityEngine::InputSystem::Controls::TouchControl::*)()>(
    &::UnityEngine::InputSystem::Controls::TouchControl::get_touchId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f718c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_touchId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.set_touchId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::IntegerControl*)>(
    &::UnityEngine::InputSystem::Controls::TouchControl::set_touchId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f7194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                           { "set_touchId", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (::UnityEngine::InputSystem::Controls::TouchControl::*)()>(
    &::UnityEngine::InputSystem::Controls::TouchControl::get_position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f719c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.set_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(
    &::UnityEngine::InputSystem::Controls::TouchControl::set_position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f71a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                           { "set_position", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.get_delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DeltaControl* (::UnityEngine::InputSystem::Controls::TouchControl::*)()>(
    &::UnityEngine::InputSystem::Controls::TouchControl::get_delta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f71ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_delta", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.set_delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::DeltaControl*)>(
    &::UnityEngine::InputSystem::Controls::TouchControl::set_delta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f71b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                           { "set_delta", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::DeltaControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.get_pressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::InputSystem::Controls::TouchControl::*)()>(
    &::UnityEngine::InputSystem::Controls::TouchControl::get_pressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f71bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_pressure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.set_pressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(
    &::UnityEngine::InputSystem::Controls::TouchControl::set_pressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f71c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                           { "set_pressure", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.get_radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (::UnityEngine::InputSystem::Controls::TouchControl::*)()>(
    &::UnityEngine::InputSystem::Controls::TouchControl::get_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f71cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_radius", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.set_radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(
    &::UnityEngine::InputSystem::Controls::TouchControl::set_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f71d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                           { "set_radius", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.get_phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPhaseControl* (::UnityEngine::InputSystem::Controls::TouchControl::*)()>(
    &::UnityEngine::InputSystem::Controls::TouchControl::get_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f71dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_phase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.set_phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::TouchPhaseControl*)>(
    &::UnityEngine::InputSystem::Controls::TouchControl::set_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f71e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                           { "set_phase", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.get_indirectTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::Controls::TouchControl::*)()>(
    &::UnityEngine::InputSystem::Controls::TouchControl::get_indirectTouch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f71ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_indirectTouch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.set_indirectTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::Controls::TouchControl::set_indirectTouch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f71f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                           { "set_indirectTouch", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.get_tap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::Controls::TouchControl::*)()>(
    &::UnityEngine::InputSystem::Controls::TouchControl::get_tap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f71fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_tap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.set_tap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::Controls::TouchControl::set_tap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f7204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                           { "set_tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.get_tapCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (::UnityEngine::InputSystem::Controls::TouchControl::*)()>(
    &::UnityEngine::InputSystem::Controls::TouchControl::get_tapCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f720c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_tapCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.set_tapCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::IntegerControl*)>(
    &::UnityEngine::InputSystem::Controls::TouchControl::set_tapCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f7214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                           { "set_tapCount", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.get_startTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DoubleControl* (::UnityEngine::InputSystem::Controls::TouchControl::*)()>(
    &::UnityEngine::InputSystem::Controls::TouchControl::get_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f721c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_startTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.set_startTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::DoubleControl*)>(
    &::UnityEngine::InputSystem::Controls::TouchControl::set_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f7224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                           { "set_startTime", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::DoubleControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.get_startPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (::UnityEngine::InputSystem::Controls::TouchControl::*)()>(
    &::UnityEngine::InputSystem::Controls::TouchControl::get_startPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f722c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_startPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.set_startPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(
    &::UnityEngine::InputSystem::Controls::TouchControl::set_startPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f7234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                           { "set_startPosition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.get_isInProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Controls::TouchControl::*)()>(&::UnityEngine::InputSystem::Controls::TouchControl::get_isInProgress)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64f723c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_isInProgress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchControl::*)()>(&::UnityEngine::InputSystem::Controls::TouchControl::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64f72a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchControl::*)()>(&::UnityEngine::InputSystem::Controls::TouchControl::FinishSetup)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x64f7348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.ReadUnprocessedValueFromState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::TouchState (::UnityEngine::InputSystem::Controls::TouchControl::*)(void*)>(
    &::UnityEngine::InputSystem::Controls::TouchControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64f769c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchControl.WriteValueIntoState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::LowLevel::TouchState, void*)>(
    &::UnityEngine::InputSystem::Controls::TouchControl::WriteValueIntoState)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x64f7720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), 18 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::TouchPressControl*& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__press_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____press_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::TouchPressControl* const& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__press_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____press_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_set__press_k__BackingField(::UnityEngine::InputSystem::Controls::TouchPressControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____press_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__displayIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayIndex_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__displayIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayIndex_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_set__displayIndex_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____displayIndex_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__touchId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touchId_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__touchId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touchId_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_set__touchId_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____touchId_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__position_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__position_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_set__position_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____position_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::DeltaControl*& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__delta_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delta_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::DeltaControl* const& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__delta_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delta_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_set__delta_k__BackingField(::UnityEngine::InputSystem::Controls::DeltaControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delta_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__pressure_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressure_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__pressure_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressure_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_set__pressure_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressure_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__radius_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__radius_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_set__radius_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____radius_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::TouchPhaseControl*& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__phase_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____phase_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::TouchPhaseControl* const& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__phase_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____phase_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_set__phase_k__BackingField(::UnityEngine::InputSystem::Controls::TouchPhaseControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____phase_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__indirectTouch_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indirectTouch_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__indirectTouch_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indirectTouch_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_set__indirectTouch_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____indirectTouch_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__tap_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tap_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__tap_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tap_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_set__tap_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tap_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__tapCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tapCount_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__tapCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tapCount_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_set__tapCount_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tapCount_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::DoubleControl*& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__startTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTime_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::DoubleControl* const& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__startTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTime_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_set__startTime_k__BackingField(::UnityEngine::InputSystem::Controls::DoubleControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startTime_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__startPosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPosition_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_get__startPosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPosition_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::TouchControl::__cordl_internal_set__startPosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startPosition_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* UnityEngine::InputSystem::Controls::TouchControl::get_press() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_press", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPressControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::TouchControl::set_press(::UnityEngine::InputSystem::Controls::TouchPressControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                         { "set_press", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::TouchPressControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl* UnityEngine::InputSystem::Controls::TouchControl::get_displayIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_displayIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::TouchControl::set_displayIndex(::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                         { "set_displayIndex", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl* UnityEngine::InputSystem::Controls::TouchControl::get_touchId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_touchId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::TouchControl::set_touchId(::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                         { "set_touchId", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* UnityEngine::InputSystem::Controls::TouchControl::get_position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::TouchControl::set_position(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                         { "set_position", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::DeltaControl* UnityEngine::InputSystem::Controls::TouchControl::get_delta() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_delta", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DeltaControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::TouchControl::set_delta(::UnityEngine::InputSystem::Controls::DeltaControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                         { "set_delta", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::DeltaControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::Controls::TouchControl::get_pressure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_pressure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::TouchControl::set_pressure(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                         { "set_pressure", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* UnityEngine::InputSystem::Controls::TouchControl::get_radius() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_radius", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::TouchControl::set_radius(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                         { "set_radius", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* UnityEngine::InputSystem::Controls::TouchControl::get_phase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_phase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::TouchControl::set_phase(::UnityEngine::InputSystem::Controls::TouchPhaseControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                         { "set_phase", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::Controls::TouchControl::get_indirectTouch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_indirectTouch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::TouchControl::set_indirectTouch(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                         { "set_indirectTouch", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::Controls::TouchControl::get_tap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_tap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::TouchControl::set_tap(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                         { "set_tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl* UnityEngine::InputSystem::Controls::TouchControl::get_tapCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_tapCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::TouchControl::set_tapCount(::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                         { "set_tapCount", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::DoubleControl* UnityEngine::InputSystem::Controls::TouchControl::get_startTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_startTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DoubleControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::TouchControl::set_startTime(::UnityEngine::InputSystem::Controls::DoubleControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                         { "set_startTime", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::DoubleControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* UnityEngine::InputSystem::Controls::TouchControl::get_startPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_startPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::TouchControl::set_startPosition(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(),
                                                                                         { "set_startPosition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Controls::TouchControl::get_isInProgress() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { "get_isInProgress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::TouchControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::TouchControl::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::TouchState UnityEngine::InputSystem::Controls::TouchControl::ReadUnprocessedValueFromState(void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::TouchState>(this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::Controls::TouchControl::WriteValueIntoState(::UnityEngine::InputSystem::LowLevel::TouchState value, void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, statePtr);
}
inline ::UnityEngine::InputSystem::Controls::TouchControl* UnityEngine::InputSystem::Controls::TouchControl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Controls::TouchControl*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::TouchControl::TouchControl() {}
