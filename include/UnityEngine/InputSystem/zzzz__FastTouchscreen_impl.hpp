#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/FastTouchscreen.hpp"
#include "UnityEngine/InputSystem/zzzz__Touchscreen_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__FastTouchscreen_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__DeltaControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__DoubleControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__IntegerControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__TouchControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__TouchPhaseControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__TouchPressControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::FastTouchscreen::*)()>(&::UnityEngine::InputSystem::FastTouchscreen::_ctor)> {
  constexpr static std::size_t size = 0x2fd0;
  constexpr static std::size_t addrs = 0x6999acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouch)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x699ca9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouch",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenposition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenposition)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x699cc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreenposition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreendelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DeltaControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreendelta)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x699ce40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreendelta", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenpressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenpressure)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x699d004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreenpressure", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenradius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenradius)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x699d1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreenradius", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenpress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPressControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenpress)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x699d3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreenpress", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreendisplayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreendisplayIndex)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x699d578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreendisplayIndex",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x699d728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreentouch0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x699d8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreentouch1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x699daa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreentouch2", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x699dc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreentouch3", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x699de18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreentouch4", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x699dfd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreentouch5", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x699e190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreentouch6", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x699e34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreentouch7", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x699e508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreentouch8", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x699e6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreentouch9", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchtouchId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchtouchId)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x699e880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchtouchId",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchposition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchposition)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x699ea84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchposition",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchdelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DeltaControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchdelta)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x699ec90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchdelta",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchpressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchpressure)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x699ee78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchpressure",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchradius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchradius)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x699f058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchradius",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchphase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPhaseControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchphase)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x699f244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchphase",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchpress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPressControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchpress)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x699f430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchpress",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchtapCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchtapCount)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x699f630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchtapCount",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchdisplayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchdisplayIndex)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x699f810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchdisplayIndex",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchindirectTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchindirectTouch)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x699f9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchindirectTouch",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchtap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchtap)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x699fbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchtap",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchstartTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DoubleControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchstartTime)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x699fe04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchstartTime",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchstartPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchstartPosition)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x699fff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchstartPosition",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchpositionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchpositionx)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69a01e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchpositionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchpositiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchpositiony)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69a03e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchpositiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchdeltaup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchdeltaup)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69a05e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchdeltaup",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchdeltadown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchdeltadown)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69a07ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchdeltadown",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchdeltaleft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchdeltaleft)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69a09f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchdeltaleft",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchdeltaright
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchdeltaright)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69a0c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchdeltaright",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchdeltax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchdeltax)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a0e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchdeltax",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchdeltay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchdeltay)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a0fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchdeltay",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchradiusx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchradiusx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a11c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchradiusx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchradiusy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchradiusy)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a13a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchradiusy",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchstartPositionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchstartPositionx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a1588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchstartPositionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenprimaryTouchstartPositiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchstartPositiony)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a1768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreenprimaryTouchstartPositiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenpositionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenpositionx)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69a1948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreenpositionx", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenpositiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenpositiony)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69a1b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreenpositiony", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreendeltaup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreendeltaup)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69a1d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreendeltaup", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreendeltadown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreendeltadown)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69a1f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreendeltadown", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreendeltaleft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreendeltaleft)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69a2158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreendeltaleft", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreendeltaright
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreendeltaright)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69a2364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreendeltaright", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreendeltax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreendeltax)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a2568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreendeltax", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreendeltay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreendeltay)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a2748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreendeltay", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenradiusx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenradiusx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a2928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreenradiusx", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreenradiusy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenradiusy)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a2b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreenradiusy", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0touchId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0touchId)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69a2ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0touchId",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0position)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69a2eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0position",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DeltaControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0delta)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x69a30f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0delta",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0pressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0pressure)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a32e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0pressure",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0radius)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69a34c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0radius",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPhaseControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0phase)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69a36ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0phase",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0press
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPressControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0press)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69a3898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0press",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0tapCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0tapCount)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a3a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0tapCount",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0displayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0displayIndex)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a3c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0displayIndex",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0indirectTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0indirectTouch)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69a3e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0indirectTouch",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0tap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0tap)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69a405c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreentouch0tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0startTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DoubleControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0startTime)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69a4260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0startTime",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0startPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0startPosition)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x69a444c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0startPosition",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0positionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0positionx)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69a4644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0positionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0positiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0positiony)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69a4844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0positiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0deltaup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0deltaup)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69a4a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0deltaup",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0deltadown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0deltadown)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69a4c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0deltadown",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0deltaleft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0deltaleft)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69a4e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0deltaleft",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0deltaright
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0deltaright)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69a5060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0deltaright",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0deltax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0deltax)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a5264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0deltax",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0deltay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0deltay)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a5444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0deltay",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0radiusx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0radiusx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a5624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0radiusx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0radiusy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0radiusy)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a5804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0radiusy",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0startPositionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0startPositionx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a59e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0startPositionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch0startPositiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0startPositiony)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a5bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch0startPositiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1touchId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1touchId)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69a5da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1touchId",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1position)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69a5fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1position",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DeltaControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1delta)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x69a61b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1delta",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1pressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1pressure)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a639c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1pressure",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1radius)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69a657c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1radius",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPhaseControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1phase)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69a6768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1phase",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1press
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPressControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1press)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69a6954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1press",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1tapCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1tapCount)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a6b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1tapCount",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1displayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1displayIndex)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a6d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1displayIndex",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1indirectTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1indirectTouch)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69a6f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1indirectTouch",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1tap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1tap)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69a7118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreentouch1tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1startTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DoubleControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1startTime)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69a731c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1startTime",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1startPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1startPosition)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x69a7508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1startPosition",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1positionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1positionx)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69a7700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1positionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1positiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1positiony)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69a7900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1positiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1deltaup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1deltaup)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69a7b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1deltaup",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1deltadown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1deltadown)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69a7d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1deltadown",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1deltaleft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1deltaleft)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69a7f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1deltaleft",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1deltaright
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1deltaright)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69a811c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1deltaright",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1deltax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1deltax)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a8320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1deltax",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1deltay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1deltay)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a8500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1deltay",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1radiusx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1radiusx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a86e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1radiusx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1radiusy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1radiusy)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a88c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1radiusy",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1startPositionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1startPositionx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a8aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1startPositionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch1startPositiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1startPositiony)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a8c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch1startPositiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2touchId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2touchId)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69a8e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2touchId",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2position)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69a9064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2position",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DeltaControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2delta)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x69a9270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2delta",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2pressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2pressure)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a9458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2pressure",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2radius)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69a9638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2radius",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPhaseControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2phase)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69a9824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2phase",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2press
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPressControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2press)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69a9a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2press",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2tapCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2tapCount)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a9c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2tapCount",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2displayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2displayIndex)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69a9df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2displayIndex",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2indirectTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2indirectTouch)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69a9fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2indirectTouch",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2tap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2tap)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69aa1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreentouch2tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2startTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DoubleControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2startTime)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69aa3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2startTime",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2startPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2startPosition)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x69aa5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2startPosition",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2positionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2positionx)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69aa7bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2positionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2positiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2positiony)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69aa9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2positiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2deltaup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2deltaup)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69aabbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2deltaup",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2deltadown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2deltadown)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69aadc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2deltadown",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2deltaleft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2deltaleft)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69aafcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2deltaleft",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2deltaright
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2deltaright)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69ab1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2deltaright",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2deltax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2deltax)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69ab3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2deltax",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2deltay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2deltay)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69ab5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2deltay",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2radiusx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2radiusx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69ab79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2radiusx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2radiusy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2radiusy)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69ab97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2radiusy",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2startPositionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2startPositionx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69abb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2startPositionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch2startPositiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2startPositiony)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69abd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch2startPositiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3touchId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3touchId)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69abf1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3touchId",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3position)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69ac120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3position",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DeltaControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3delta)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x69ac32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3delta",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3pressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3pressure)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69ac514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3pressure",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3radius)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69ac6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3radius",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPhaseControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3phase)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69ac8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3phase",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3press
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPressControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3press)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69acacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3press",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3tapCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3tapCount)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69acccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3tapCount",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3displayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3displayIndex)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69aceac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3displayIndex",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3indirectTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3indirectTouch)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69ad08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3indirectTouch",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3tap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3tap)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69ad290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreentouch3tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3startTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DoubleControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3startTime)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69ad494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3startTime",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3startPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3startPosition)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x69ad680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3startPosition",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3positionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3positionx)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69ad878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3positionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3positiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3positiony)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69ada78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3positiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3deltaup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3deltaup)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69adc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3deltaup",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3deltadown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3deltadown)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69ade7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3deltadown",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3deltaleft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3deltaleft)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69ae088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3deltaleft",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3deltaright
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3deltaright)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69ae294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3deltaright",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3deltax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3deltax)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69ae498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3deltax",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3deltay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3deltay)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69ae678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3deltay",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3radiusx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3radiusx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69ae858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3radiusx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3radiusy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3radiusy)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69aea38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3radiusy",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3startPositionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3startPositionx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69aec18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3startPositionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch3startPositiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3startPositiony)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69aedf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch3startPositiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4touchId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4touchId)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69aefd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4touchId",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4position)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69af1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4position",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DeltaControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4delta)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x69af3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4delta",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4pressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4pressure)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69af5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4pressure",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4radius)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69af7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4radius",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPhaseControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4phase)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69af99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4phase",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4press
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPressControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4press)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69afb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4press",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4tapCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4tapCount)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69afd88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4tapCount",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4displayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4displayIndex)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69aff68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4displayIndex",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4indirectTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4indirectTouch)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69b0148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4indirectTouch",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4tap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4tap)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69b034c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreentouch4tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4startTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DoubleControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4startTime)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69b0550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4startTime",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4startPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4startPosition)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x69b073c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4startPosition",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4positionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4positionx)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69b0934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4positionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4positiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4positiony)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69b0b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4positiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4deltaup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4deltaup)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69b0d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4deltaup",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4deltadown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4deltadown)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69b0f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4deltadown",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4deltaleft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4deltaleft)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69b1144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4deltaleft",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4deltaright
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4deltaright)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69b1350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4deltaright",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4deltax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4deltax)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b1554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4deltax",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4deltay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4deltay)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b1734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4deltay",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4radiusx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4radiusx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b1914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4radiusx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4radiusy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4radiusy)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b1af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4radiusy",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4startPositionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4startPositionx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b1cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4startPositionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch4startPositiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4startPositiony)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b1eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch4startPositiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5touchId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5touchId)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69b2094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5touchId",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5position)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69b2298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5position",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DeltaControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5delta)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x69b24a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5delta",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5pressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5pressure)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b268c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5pressure",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5radius)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69b286c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5radius",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPhaseControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5phase)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69b2a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5phase",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5press
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPressControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5press)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69b2c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5press",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5tapCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5tapCount)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b2e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5tapCount",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5displayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5displayIndex)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b3024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5displayIndex",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5indirectTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5indirectTouch)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69b3204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5indirectTouch",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5tap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5tap)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69b3408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreentouch5tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5startTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DoubleControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5startTime)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69b360c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5startTime",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5startPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5startPosition)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x69b37f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5startPosition",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5positionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5positionx)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69b39f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5positionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5positiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5positiony)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69b3bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5positiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5deltaup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5deltaup)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69b3df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5deltaup",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5deltadown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5deltadown)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69b3ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5deltadown",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5deltaleft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5deltaleft)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69b4200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5deltaleft",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5deltaright
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5deltaright)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69b440c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5deltaright",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5deltax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5deltax)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b4610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5deltax",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5deltay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5deltay)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b47f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5deltay",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5radiusx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5radiusx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b49d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5radiusx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5radiusy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5radiusy)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b4bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5radiusy",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5startPositionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5startPositionx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b4d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5startPositionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch5startPositiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5startPositiony)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b4f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch5startPositiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6touchId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6touchId)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69b5150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6touchId",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6position)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69b5354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6position",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DeltaControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6delta)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x69b5560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6delta",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6pressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6pressure)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b5748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6pressure",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6radius)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69b5928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6radius",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPhaseControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6phase)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69b5b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6phase",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6press
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPressControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6press)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69b5d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6press",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6tapCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6tapCount)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b5f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6tapCount",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6displayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6displayIndex)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b60e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6displayIndex",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6indirectTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6indirectTouch)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69b62c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6indirectTouch",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6tap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6tap)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69b64c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreentouch6tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6startTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DoubleControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6startTime)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69b66c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6startTime",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6startPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6startPosition)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x69b68b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6startPosition",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6positionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6positionx)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69b6aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6positionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6positiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6positiony)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69b6cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6positiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6deltaup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6deltaup)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69b6eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6deltaup",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6deltadown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6deltadown)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69b70b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6deltadown",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6deltaleft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6deltaleft)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69b72bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6deltaleft",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6deltaright
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6deltaright)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69b74c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6deltaright",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6deltax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6deltax)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b76cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6deltax",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6deltay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6deltay)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b78ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6deltay",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6radiusx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6radiusx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b7a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6radiusx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6radiusy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6radiusy)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b7c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6radiusy",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6startPositionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6startPositionx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b7e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6startPositionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch6startPositiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6startPositiony)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b802c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch6startPositiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7touchId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7touchId)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69b820c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7touchId",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7position)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69b8410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7position",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DeltaControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7delta)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x69b861c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7delta",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7pressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7pressure)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b8804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7pressure",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7radius)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69b89e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7radius",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPhaseControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7phase)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69b8bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7phase",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7press
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPressControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7press)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69b8dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7press",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7tapCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7tapCount)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b8fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7tapCount",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7displayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7displayIndex)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69b919c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7displayIndex",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7indirectTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7indirectTouch)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69b937c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7indirectTouch",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7tap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7tap)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69b9580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreentouch7tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7startTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DoubleControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7startTime)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69b9784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7startTime",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7startPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7startPosition)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x69b9970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7startPosition",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7positionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7positionx)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69b9b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7positionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7positiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7positiony)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69b9d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7positiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7deltaup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7deltaup)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69b9f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7deltaup",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7deltadown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7deltadown)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69ba16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7deltadown",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7deltaleft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7deltaleft)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69ba378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7deltaleft",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7deltaright
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7deltaright)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69ba584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7deltaright",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7deltax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7deltax)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69ba788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7deltax",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7deltay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7deltay)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69ba968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7deltay",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7radiusx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7radiusx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69bab48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7radiusx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7radiusy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7radiusy)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69bad28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7radiusy",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7startPositionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7startPositionx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69baf08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7startPositionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch7startPositiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7startPositiony)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69bb0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch7startPositiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8touchId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8touchId)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69bb2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8touchId",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8position)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69bb4cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8position",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DeltaControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8delta)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x69bb6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8delta",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8pressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8pressure)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69bb8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8pressure",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8radius)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69bbaa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8radius",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPhaseControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8phase)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69bbc8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8phase",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8press
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPressControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8press)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69bbe78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8press",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8tapCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8tapCount)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69bc078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8tapCount",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8displayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8displayIndex)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69bc258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8displayIndex",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8indirectTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8indirectTouch)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69bc438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8indirectTouch",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8tap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8tap)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69bc63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreentouch8tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8startTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DoubleControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8startTime)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69bc840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8startTime",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8startPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8startPosition)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x69bca2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8startPosition",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8positionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8positionx)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69bcc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8positionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8positiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8positiony)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69bce24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8positiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8deltaup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8deltaup)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69bd024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8deltaup",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8deltadown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8deltadown)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69bd228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8deltadown",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8deltaleft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8deltaleft)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69bd434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8deltaleft",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8deltaright
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8deltaright)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69bd640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8deltaright",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8deltax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8deltax)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69bd844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8deltax",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8deltay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8deltay)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69bda24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8deltay",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8radiusx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8radiusx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69bdc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8radiusx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8radiusy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8radiusy)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69bdde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8radiusy",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8startPositionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8startPositionx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69bdfc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8startPositionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch8startPositiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8startPositiony)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69be1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch8startPositiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9touchId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9touchId)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69be384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9touchId",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9position)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69be588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9position",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DeltaControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9delta)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x69be794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9delta",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9pressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9pressure)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69be97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9pressure",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9radius)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69beb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9radius",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPhaseControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9phase)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69bed48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9phase",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9press
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchPressControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9press)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69bef34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9press",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9tapCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9tapCount)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69bf134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9tapCount",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9displayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9displayIndex)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69bf314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9displayIndex",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9indirectTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9indirectTouch)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69bf4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9indirectTouch",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9tap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9tap)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69bf6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
            { "Initialize_ctrlTouchscreentouch9tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9startTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DoubleControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9startTime)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69bf8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9startTime",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9startPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9startPosition)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x69bfae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9startPosition",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9positionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9positionx)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69bfce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9positionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9positiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9positiony)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x69bfee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9positiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9deltaup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9deltaup)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69c00e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9deltaup",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9deltadown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9deltadown)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69c02e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9deltadown",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9deltaleft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9deltaleft)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69c04f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9deltaleft",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9deltaright
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9deltaright)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x69c06fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9deltaright",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9deltax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9deltax)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69c0900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9deltax",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9deltay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9deltay)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69c0ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9deltay",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9radiusx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9radiusx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69c0cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9radiusx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9radiusy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9radiusy)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69c0ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9radiusy",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9startPositionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9startPositionx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69c1080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9startPositionx",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastTouchscreen.Initialize_ctrlTouchscreentouch9startPositiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastTouchscreen::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9startPositiony)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69c1260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                                { "Initialize_ctrlTouchscreentouch9startPositiony",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::FastTouchscreen::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::TouchControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouch(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreenprimaryTouch", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchControl*>(this, ___internal_method, kTouchLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenposition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreenposition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DeltaControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreendelta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreendelta", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DeltaControl*>(this, ___internal_method, kDeltaLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenpressure(::UnityEngine::InputSystem::Utilities::InternedString kAnalogLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreenpressure", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAnalogLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenradius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreenradius", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPressControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenpress(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreenpress", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPressControl*>(this, ___internal_method, kTouchPressLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreendisplayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreendisplayIndex", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchControl*>(this, ___internal_method, kTouchLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchControl*>(this, ___internal_method, kTouchLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch2", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchControl*>(this, ___internal_method, kTouchLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch3", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchControl*>(this, ___internal_method, kTouchLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch4", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchControl*>(this, ___internal_method, kTouchLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch5", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchControl*>(this, ___internal_method, kTouchLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch6", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchControl*>(this, ___internal_method, kTouchLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch7", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchControl*>(this, ___internal_method, kTouchLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch8", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchControl*>(this, ___internal_method, kTouchLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch9", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchControl*>(this, ___internal_method, kTouchLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchtouchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchtouchId",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchposition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchposition",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DeltaControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchdelta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                       ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchdelta",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DeltaControl*>(this, ___internal_method, kDeltaLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchpressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchpressure",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchradius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                        ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchradius",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchphase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                       ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchphase",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>(this, ___internal_method, kTouchPhaseLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPressControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchpress(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                       ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchpress",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPressControl*>(this, ___internal_method, kTouchPressLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchtapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchtapCount",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchdisplayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchdisplayIndex",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchindirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                               ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchindirectTouch",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchtap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchtap",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DoubleControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchstartTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchstartTime",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DoubleControl*>(this, ___internal_method, kDoubleLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchstartPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                               ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchstartPosition",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchpositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchpositionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchpositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchpositiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchdeltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchdeltaup",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchdeltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchdeltadown",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchdeltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchdeltaleft",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchdeltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchdeltaright",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchdeltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                        ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchdeltax",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchdeltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                        ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchdeltay",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchradiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchradiusx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchradiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchradiusy",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchstartPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchstartPositionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenprimaryTouchstartPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreenprimaryTouchstartPositiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenpositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreenpositionx", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenpositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreenpositiony", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreendeltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreendeltaup", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreendeltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreendeltadown", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreendeltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreendeltaleft", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreendeltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreendeltaright", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreendeltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                                      ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreendeltax", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreendeltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                                      ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreendeltay", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenradiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreenradiusx", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreenradiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreenradiusy", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch0touchId",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch0position",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DeltaControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch0delta", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DeltaControl*>(this, ___internal_method, kDeltaLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch0pressure",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch0radius", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch0phase", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>(this, ___internal_method, kTouchPhaseLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPressControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch0press", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPressControl*>(this, ___internal_method, kTouchPressLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch0tapCount",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0displayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                        ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch0displayIndex",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch0indirectTouch",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch0tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DoubleControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch0startTime",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DoubleControl*>(this, ___internal_method, kDoubleLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch0startPosition",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch0positionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch0positiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch0deltaup",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch0deltadown",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch0deltaleft",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch0deltaright",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch0deltax", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch0deltay", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch0radiusx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch0radiusy",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch0startPositionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch0startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch0startPositiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch1touchId",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch1position",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DeltaControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch1delta", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DeltaControl*>(this, ___internal_method, kDeltaLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch1pressure",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch1radius", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch1phase", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>(this, ___internal_method, kTouchPhaseLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPressControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch1press", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPressControl*>(this, ___internal_method, kTouchPressLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch1tapCount",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1displayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                        ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch1displayIndex",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch1indirectTouch",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch1tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DoubleControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch1startTime",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DoubleControl*>(this, ___internal_method, kDoubleLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch1startPosition",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch1positionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch1positiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch1deltaup",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch1deltadown",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch1deltaleft",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch1deltaright",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch1deltax", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch1deltay", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch1radiusx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch1radiusy",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch1startPositionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch1startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch1startPositiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch2touchId",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch2position",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DeltaControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch2delta", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DeltaControl*>(this, ___internal_method, kDeltaLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch2pressure",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch2radius", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch2phase", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>(this, ___internal_method, kTouchPhaseLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPressControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch2press", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPressControl*>(this, ___internal_method, kTouchPressLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch2tapCount",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2displayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                        ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch2displayIndex",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch2indirectTouch",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch2tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DoubleControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch2startTime",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DoubleControl*>(this, ___internal_method, kDoubleLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch2startPosition",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch2positionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch2positiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch2deltaup",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch2deltadown",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch2deltaleft",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch2deltaright",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch2deltax", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch2deltay", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch2radiusx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch2radiusy",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch2startPositionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch2startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch2startPositiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch3touchId",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch3position",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DeltaControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch3delta", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DeltaControl*>(this, ___internal_method, kDeltaLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch3pressure",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch3radius", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch3phase", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>(this, ___internal_method, kTouchPhaseLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPressControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch3press", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPressControl*>(this, ___internal_method, kTouchPressLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch3tapCount",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3displayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                        ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch3displayIndex",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch3indirectTouch",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch3tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DoubleControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch3startTime",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DoubleControl*>(this, ___internal_method, kDoubleLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch3startPosition",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch3positionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch3positiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch3deltaup",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch3deltadown",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch3deltaleft",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch3deltaright",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch3deltax", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch3deltay", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch3radiusx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch3radiusy",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch3startPositionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch3startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch3startPositiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch4touchId",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch4position",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DeltaControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch4delta", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DeltaControl*>(this, ___internal_method, kDeltaLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch4pressure",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch4radius", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch4phase", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>(this, ___internal_method, kTouchPhaseLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPressControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch4press", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPressControl*>(this, ___internal_method, kTouchPressLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch4tapCount",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4displayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                        ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch4displayIndex",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch4indirectTouch",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch4tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DoubleControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch4startTime",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DoubleControl*>(this, ___internal_method, kDoubleLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch4startPosition",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch4positionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch4positiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch4deltaup",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch4deltadown",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch4deltaleft",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch4deltaright",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch4deltax", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch4deltay", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch4radiusx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch4radiusy",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch4startPositionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch4startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch4startPositiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch5touchId",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch5position",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DeltaControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch5delta", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DeltaControl*>(this, ___internal_method, kDeltaLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch5pressure",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch5radius", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch5phase", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>(this, ___internal_method, kTouchPhaseLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPressControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch5press", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPressControl*>(this, ___internal_method, kTouchPressLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch5tapCount",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5displayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                        ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch5displayIndex",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch5indirectTouch",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch5tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DoubleControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch5startTime",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DoubleControl*>(this, ___internal_method, kDoubleLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch5startPosition",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch5positionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch5positiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch5deltaup",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch5deltadown",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch5deltaleft",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch5deltaright",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch5deltax", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch5deltay", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch5radiusx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch5radiusy",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch5startPositionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch5startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch5startPositiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch6touchId",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch6position",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DeltaControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch6delta", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DeltaControl*>(this, ___internal_method, kDeltaLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch6pressure",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch6radius", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch6phase", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>(this, ___internal_method, kTouchPhaseLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPressControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch6press", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPressControl*>(this, ___internal_method, kTouchPressLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch6tapCount",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6displayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                        ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch6displayIndex",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch6indirectTouch",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch6tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DoubleControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch6startTime",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DoubleControl*>(this, ___internal_method, kDoubleLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch6startPosition",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch6positionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch6positiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch6deltaup",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch6deltadown",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch6deltaleft",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch6deltaright",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch6deltax", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch6deltay", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch6radiusx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch6radiusy",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch6startPositionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch6startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch6startPositiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch7touchId",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch7position",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DeltaControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch7delta", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DeltaControl*>(this, ___internal_method, kDeltaLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch7pressure",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch7radius", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch7phase", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>(this, ___internal_method, kTouchPhaseLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPressControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch7press", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPressControl*>(this, ___internal_method, kTouchPressLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch7tapCount",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7displayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                        ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch7displayIndex",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch7indirectTouch",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch7tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DoubleControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch7startTime",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DoubleControl*>(this, ___internal_method, kDoubleLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch7startPosition",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch7positionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch7positiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch7deltaup",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch7deltadown",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch7deltaleft",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch7deltaright",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch7deltax", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch7deltay", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch7radiusx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch7radiusy",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch7startPositionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch7startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch7startPositiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch8touchId",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch8position",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DeltaControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch8delta", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DeltaControl*>(this, ___internal_method, kDeltaLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch8pressure",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch8radius", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch8phase", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>(this, ___internal_method, kTouchPhaseLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPressControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch8press", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPressControl*>(this, ___internal_method, kTouchPressLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch8tapCount",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8displayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                        ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch8displayIndex",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch8indirectTouch",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch8tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DoubleControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch8startTime",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DoubleControl*>(this, ___internal_method, kDoubleLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch8startPosition",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch8positionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch8positiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch8deltaup",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch8deltadown",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch8deltaleft",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch8deltaright",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch8deltax", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch8deltay", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch8radiusx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch8radiusy",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch8startPositionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch8startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch8startPositiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch9touchId",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch9position",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DeltaControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch9delta", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DeltaControl*>(this, ___internal_method, kDeltaLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch9pressure",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch9radius", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch9phase", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>(this, ___internal_method, kTouchPhaseLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::TouchPressControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch9press", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchPressControl*>(this, ___internal_method, kTouchPressLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch9tapCount",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9displayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                        ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch9displayIndex",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch9indirectTouch",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch9tap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DoubleControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch9startTime",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DoubleControl*>(this, ___internal_method, kDoubleLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch9startPosition",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch9positionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch9positiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch9deltaup",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch9deltadown",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch9deltaleft",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch9deltaright",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch9deltax", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
          { "Initialize_ctrlTouchscreentouch9deltay", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch9radiusx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch9radiusy",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch9startPositionx",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl*
UnityEngine::InputSystem::FastTouchscreen::Initialize_ctrlTouchscreentouch9startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastTouchscreen*>(),
                                              { "Initialize_ctrlTouchscreentouch9startPositiony",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::FastTouchscreen* UnityEngine::InputSystem::FastTouchscreen::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::FastTouchscreen*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::FastTouchscreen::FastTouchscreen() {}
