#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\FastMouse.hpp"
#include "UnityEngine/InputSystem/zzzz__Mouse_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__FastMouse_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__DeltaControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__IntegerControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IEventMerger_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateCallbackReceiver_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::FastMouse::*)()>(&::UnityEngine::InputSystem::FastMouse::_ctor)> {
  constexpr static std::size_t size = 0xa1c;
  constexpr static std::size_t addrs = 0x655c98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMouseposition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseposition)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x655d3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMouseposition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousedelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DeltaControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedelta)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x655d588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousedelta", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousescroll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DeltaControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescroll)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x655d748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousescroll", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousepress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousepress)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x655d900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousepress", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMouseleftButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseleftButton)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x655dad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMouseleftButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMouserightButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouserightButton)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x655dcfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMouserightButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousemiddleButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousemiddleButton)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x655df24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousemiddleButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMouseforwardButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseforwardButton)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x655e140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMouseforwardButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousebackButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousebackButton)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x655e320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousebackButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousepressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousepressure)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x655e500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousepressure", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMouseradius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseradius)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x655e6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMouseradius", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousepointerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousepointerId)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x655e8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousepointerId", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousedisplayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedisplayIndex)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x655ea3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousedisplayIndex", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMouseclickCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseclickCount)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x655ebec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMouseclickCount", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousepositionx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousepositionx)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x655eda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousepositionx", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousepositiony
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousepositiony)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x655efa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousepositiony", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousedeltaup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltaup)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x655f1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousedeltaup", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousedeltadown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltadown)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x655f3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousedeltadown", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousedeltaleft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltaleft)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x655f5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousedeltaleft", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousedeltaright
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltaright)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x655f7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousedeltaright", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousedeltax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltax)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x655f9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousedeltax", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousedeltay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltay)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x655fba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousedeltay", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousescrollup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrollup)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x655fd88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousescrollup", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousescrolldown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrolldown)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x655ff8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousescrolldown", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousescrollleft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrollleft)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x6560198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousescrollleft", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousescrollright
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrollright)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x65603a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousescrollright", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousescrollx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrollx)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x65605a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousescrollx", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousescrolly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrolly)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6560794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMousescrolly", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMouseradiusx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseradiusx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6560998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMouseradiusx", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMouseradiusy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseradiusy)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6560b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
            { "Initialize_ctrlMouseradiusy", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.OnNextUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::FastMouse::*)()>(&::UnityEngine::InputSystem::FastMouse::OnNextUpdate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6560d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(), { "OnNextUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.OnStateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::FastMouse::OnStateEvent)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6560eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
                                                                                           { "OnStateEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::FastMouse::*)()>(
    &::UnityEngine::InputSystem::FastMouse::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6561068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(), { "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::FastMouse::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x656106c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
                            { "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.MergeForward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::FastMouse::MergeForward)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6561070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
                            { "MergeForward", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
        &::UnityEngine::InputSystem::FastMouse::UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x656110c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
                                                { "UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::FastMouse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseposition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                                               ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMouseposition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DeltaControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedelta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
                       { "Initialize_ctrlMousedelta", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DeltaControl*>(this, ___internal_method, kDeltaLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DeltaControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescroll(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMousescroll", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DeltaControl*>(this, ___internal_method, kDeltaLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousepress(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
                       { "Initialize_ctrlMousepress", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseleftButton(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMouseleftButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouserightButton(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMouserightButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousemiddleButton(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMousemiddleButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseforwardButton(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMouseforwardButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousebackButton(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMousebackButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousepressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMousepressure", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseradius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                                             ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMouseradius", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousepointerId(::UnityEngine::InputSystem::Utilities::InternedString kDigitalLayout,
                                                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMousepointerId", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kDigitalLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedisplayIndex(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMousedisplayIndex", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseclickCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMouseclickCount", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousepositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                             ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMousepositionx", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousepositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                             ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMousepositiony", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMousedeltaup", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                             ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMousedeltadown", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                             ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMousedeltaleft", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                              ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMousedeltaright", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMousedeltax", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMousedeltay", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrollup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMousescrollup", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrolldown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                              ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMousescrolldown", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrollleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                              ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMousescrollleft", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrollright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                               ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMousescrollright", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrollx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMousescrollx", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrolly(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMousescrolly", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseradiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMouseradiusx", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseradiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
          { "Initialize_ctrlMouseradiusy", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method, kAxisLayout, parent);
}
inline void UnityEngine::InputSystem::FastMouse::OnNextUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(), { "OnNextUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::FastMouse::OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(), { "OnStateEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventPtr);
}
inline void UnityEngine::InputSystem::FastMouse::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(), { "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::FastMouse::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
                          { "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventPtr);
}
inline bool UnityEngine::InputSystem::FastMouse::MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
                          { "MergeForward", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, currentEventPtr, nextEventPtr);
}
inline bool UnityEngine::InputSystem::FastMouse::UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr,
                                                                                                            ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastMouse*>(),
                                              { "UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, currentEventPtr, nextEventPtr);
}
inline ::UnityEngine::InputSystem::FastMouse* UnityEngine::InputSystem::FastMouse::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::FastMouse*>());
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
constexpr UnityEngine::InputSystem::FastMouse::operator ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver* UnityEngine::InputSystem::FastMouse::i___UnityEngine__InputSystem__LowLevel__IInputStateCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IEventMerger"
constexpr UnityEngine::InputSystem::FastMouse::operator ::UnityEngine::InputSystem::LowLevel::IEventMerger*() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IEventMerger*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IEventMerger"
constexpr ::UnityEngine::InputSystem::LowLevel::IEventMerger* UnityEngine::InputSystem::FastMouse::i___UnityEngine__InputSystem__LowLevel__IEventMerger() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IEventMerger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::FastMouse::FastMouse() {}
