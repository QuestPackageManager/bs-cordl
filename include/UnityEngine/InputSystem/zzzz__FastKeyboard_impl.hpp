#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/FastKeyboard.hpp"
#include "UnityEngine/InputSystem/zzzz__Keyboard_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__FastKeyboard_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AnyKeyControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__DiscreteButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__KeyControl_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::FastKeyboard::*)()>(&::UnityEngine::InputSystem::FastKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x2d3c;
  constexpr static std::size_t addrs = 0x694ae64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardanyKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AnyKeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardanyKey)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x694dba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardanyKey", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardescape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardescape)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x694dd6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardescape", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardspace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardspace)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x694df54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardspace", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardenter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardenter)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x694e130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardenter", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardtab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardtab)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x694e318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardtab", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardbackquote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardbackquote)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x694e4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardbackquote", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardquote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardquote)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x694e6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardquote", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardsemicolon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardsemicolon)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x694e8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardsemicolon", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardcomma
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardcomma)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x694ea88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardcomma", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardperiod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardperiod)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x694ec64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardperiod", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardslash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardslash)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x694ee40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardslash", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardbackslash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardbackslash)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x694f01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardbackslash", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardleftBracket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardleftBracket)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x694f1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardleftBracket", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardrightBracket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardrightBracket)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x694f3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardrightBracket", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardminus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardminus)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x694f5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardminus", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardequals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardequals)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x694f78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardequals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardupArrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardupArrow)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x694f968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardupArrow", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboarddownArrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboarddownArrow)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x694fb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboarddownArrow", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardleftArrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardleftArrow)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x694fd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardleftArrow", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardrightArrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardrightArrow)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x694fefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardrightArrow", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboarda
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboarda)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x69500d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboarda", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardb
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardb)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x69502b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardb", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardc)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6950490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardc", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardd)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695066c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardd", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboarde
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboarde)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6950848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboarde", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6950a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardg
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardg)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6950c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardg", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardh)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6950ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardh", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardi
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardi)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6950fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardi", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardj
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardj)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6951194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardj", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardk)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6951370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardk", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardl)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695154c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardl", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardm)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6951728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardm", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardn)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6951904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardn", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardo)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6951ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardo", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardp)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6951cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardp", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardq
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardq)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6951e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardq", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardr)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6952074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardr", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboards
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboards)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6952250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboards", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardt)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695242c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardt", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardu)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6952608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardu", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardv)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x69527e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardv", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardw)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x69529c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardw", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardx)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6952b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardx", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardy)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6952d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardy", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardz)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6952f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardz", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboard1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboard1)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6953130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboard1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboard2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboard2)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x69532f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboard2", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboard3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboard3)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x69534b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboard3", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboard4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboard4)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x695367c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboard4", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboard5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboard5)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6953840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboard5", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboard6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboard6)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6953a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboard6", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboard7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboard7)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6953bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboard7", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboard8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboard8)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6953d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboard8", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboard9
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboard9)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6953f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboard9", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboard0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboard0)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6954114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboard0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardleftShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardleftShift)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x69542d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardleftShift", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardrightShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardrightShift)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x69544c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardrightShift", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardshift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DiscreteButtonControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardshift)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x69546a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardshift", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardleftAlt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardleftAlt)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x695489c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardleftAlt", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardrightAlt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardrightAlt)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6954a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardrightAlt", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardalt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DiscreteButtonControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardalt)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6954c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardalt", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardleftCtrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardleftCtrl)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6954e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardleftCtrl", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardrightCtrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardrightCtrl)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6955048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardrightCtrl", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardctrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::DiscreteButtonControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardctrl)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6955230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardctrl", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardleftMeta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardleftMeta)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6955424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardleftMeta", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardrightMeta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardrightMeta)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x695560c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardrightMeta", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardcontextMenu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardcontextMenu)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x69557f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardcontextMenu", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardbackspace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardbackspace)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x69559dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardbackspace", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardpageDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardpageDown)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6955bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardpageDown", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardpageUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardpageUp)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6955d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardpageUp", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardhome
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardhome)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6955f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardhome", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardend)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695614c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardend", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardinsert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardinsert)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6956328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardinsert", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboarddelete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboarddelete)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6956504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboarddelete", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardcapsLock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardcapsLock)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x69566e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardcapsLock", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardnumLock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumLock)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x69568bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardnumLock", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardprintScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardprintScreen)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6956a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardprintScreen", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardscrollLock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardscrollLock)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6956c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardscrollLock", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardpause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardpause)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6956e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardpause", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardnumpadEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpadEnter)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695702c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardnumpadEnter", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardnumpadDivide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpadDivide)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6957208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardnumpadDivide", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardnumpadMultiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpadMultiply)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x69573e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                                                { "Initialize_ctrlKeyboardnumpadMultiply",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardnumpadPlus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpadPlus)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x69575c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardnumpadPlus", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardnumpadMinus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpadMinus)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695779c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardnumpadMinus", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardnumpadPeriod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpadPeriod)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6957978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardnumpadPeriod", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardnumpadEquals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpadEquals)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6957b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardnumpadEquals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardnumpad1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpad1)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6957d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardnumpad1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardnumpad2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpad2)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6957f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardnumpad2", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardnumpad3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpad3)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x69580e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardnumpad3", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardnumpad4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpad4)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x69582c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardnumpad4", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardnumpad5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpad5)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x69584a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardnumpad5", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardnumpad6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpad6)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695867c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardnumpad6", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardnumpad7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpad7)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6958858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardnumpad7", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardnumpad8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpad8)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6958a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardnumpad8", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardnumpad9
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpad9)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6958c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardnumpad9", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardnumpad0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpad0)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6958dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardnumpad0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf1)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6958fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf2)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x69591a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf2", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf3)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6959380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf3", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf4)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695955c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf4", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf5)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6959738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf5", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf6)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6959914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf6", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf7)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6959af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf7", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf8)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6959ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf8", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf9
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf9)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6959ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf9", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf10
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf10)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695a084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf10", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf11
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf11)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695a260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf11", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf12
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf12)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695a43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf12", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardOEM1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardOEM1)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x695a618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardOEM1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardOEM2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardOEM2)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x695a7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardOEM2", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardOEM3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardOEM3)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x695a9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardOEM3", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardOEM4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardOEM4)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x695ab64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardOEM4", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardOEM5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardOEM5)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x695ad28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardOEM5", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf13
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf13)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695aeec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf13", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf14
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf14)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695b0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf14", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf15
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf15)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695b2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf15", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf16)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695b480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf16", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf17
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf17)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695b65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf17", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf18
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf18)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695b838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf18", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf19
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf19)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695ba14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf19", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf20
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf20)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695bbf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf20", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf21
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf21)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695bdcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf21", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf22
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf22)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695bfa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf22", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf23
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf23)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695c184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf23", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardf24
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf24)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695c360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardf24", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardmediaPlayPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardmediaPlayPause)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695c53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                                                { "Initialize_ctrlKeyboardmediaPlayPause",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardmediaRewind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardmediaRewind)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695c718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardmediaRewind", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardmediaForward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardmediaForward)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x695c8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardmediaForward", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardIMESelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardIMESelected)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x695cad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardIMESelected", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardIMESelectedObsoleteKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardIMESelectedObsoleteKey)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x695cc8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                                                { "Initialize_ctrlKeyboardIMESelectedObsoleteKey",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::FastKeyboard::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::AnyKeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardanyKey(::UnityEngine::InputSystem::Utilities::InternedString kAnyKeyLayout,
                                                                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardanyKey", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AnyKeyControl*>(this, ___internal_method, kAnyKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardescape(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                               ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardescape", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardspace(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                              ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardspace", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardenter(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                              ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardenter", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardtab(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardtab", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardbackquote(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardbackquote", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardquote(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                              ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardquote", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardsemicolon(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardsemicolon", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardcomma(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                              ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardcomma", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardperiod(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                               ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardperiod", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardslash(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                              ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardslash", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardbackslash(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardbackslash", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardleftBracket(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardleftBracket", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardrightBracket(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardrightBracket", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardminus(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                              ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardminus", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardequals(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                               ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardequals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardupArrow(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardupArrow", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboarddownArrow(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboarddownArrow", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardleftArrow(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardleftArrow", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardrightArrow(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardrightArrow", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboarda(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboarda", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardb(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardb", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardc(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardc", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardd(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardd", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboarde(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboarde", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardf", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardg(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardg", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardh(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardh", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardi(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardi", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardj(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardj", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardk(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardk", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardl(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardl", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardm(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardm", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardn(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardn", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardo(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardo", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardp(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardp", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardq(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardq", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardr(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardr", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboards(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboards", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardt(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardt", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardu(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardu", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardv(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardv", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardw(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardw", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardx(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardx", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardy(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardy", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardz(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardz", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboard1(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboard1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboard2(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboard2", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboard3(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboard3", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboard4(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboard4", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboard5(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboard5", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboard6(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboard6", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboard7(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboard7", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboard8(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboard8", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboard9(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboard9", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboard0(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboard0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardleftShift(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardleftShift", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardrightShift(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardrightShift", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DiscreteButtonControl*
UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardshift(::UnityEngine::InputSystem::Utilities::InternedString kDiscreteButtonLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardshift", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>(this, ___internal_method, kDiscreteButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardleftAlt(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardleftAlt", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardrightAlt(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardrightAlt", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DiscreteButtonControl*
UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardalt(::UnityEngine::InputSystem::Utilities::InternedString kDiscreteButtonLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardalt", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>(this, ___internal_method, kDiscreteButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardleftCtrl(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardleftCtrl", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardrightCtrl(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardrightCtrl", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DiscreteButtonControl*
UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardctrl(::UnityEngine::InputSystem::Utilities::InternedString kDiscreteButtonLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardctrl", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>(this, ___internal_method, kDiscreteButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardleftMeta(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardleftMeta", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardrightMeta(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardrightMeta", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardcontextMenu(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardcontextMenu", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardbackspace(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardbackspace", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardpageDown(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardpageDown", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardpageUp(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                               ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardpageUp", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardhome(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                             ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardhome", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardend(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardend", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardinsert(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                               ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardinsert", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboarddelete(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                               ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboarddelete", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardcapsLock(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardcapsLock", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumLock(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardnumLock", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardprintScreen(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardprintScreen", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardscrollLock(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardscrollLock", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardpause(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                              ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardpause", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpadEnter(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardnumpadEnter", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpadDivide(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardnumpadDivide", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpadMultiply(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                       ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardnumpadMultiply", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpadPlus(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardnumpadPlus", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpadMinus(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardnumpadMinus", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpadPeriod(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardnumpadPeriod", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpadEquals(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardnumpadEquals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpad1(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardnumpad1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpad2(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardnumpad2", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpad3(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardnumpad3", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpad4(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardnumpad4", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpad5(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardnumpad5", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpad6(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardnumpad6", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpad7(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardnumpad7", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpad8(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardnumpad8", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpad9(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardnumpad9", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardnumpad0(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardnumpad0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf1(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardf1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf2(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardf2", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf3(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardf3", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf4(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardf4", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf5(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardf5", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf6(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardf6", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf7(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardf7", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf8(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardf8", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf9(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                       { "Initialize_ctrlKeyboardf9", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf10(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardf10", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf11(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardf11", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf12(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardf12", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardOEM1(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                             ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardOEM1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardOEM2(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                             ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardOEM2", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardOEM3(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                             ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardOEM3", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardOEM4(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                             ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardOEM4", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardOEM5(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                             ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardOEM5", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf13(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardf13", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf14(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardf14", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf15(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardf15", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf16(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardf16", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf17(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardf17", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf18(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardf18", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf19(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardf19", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf20(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardf20", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf21(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardf21", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf22(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardf22", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf23(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardf23", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardf24(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardf24", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardmediaPlayPause(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                       ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardmediaPlayPause", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardmediaRewind(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                    ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardmediaRewind", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardmediaForward(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                                                     ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardmediaForward", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardIMESelected(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardIMESelected", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl*
UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardIMESelectedObsoleteKey(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
                                              { "Initialize_ctrlKeyboardIMESelectedObsoleteKey",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*>(this, ___internal_method, kKeyLayout, parent);
}
inline ::UnityEngine::InputSystem::FastKeyboard* UnityEngine::InputSystem::FastKeyboard::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::FastKeyboard*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::FastKeyboard::FastKeyboard() {}
