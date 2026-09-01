#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\FastKeyboard.hpp"
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
  constexpr static std::size_t size = 0x28d8;
  constexpr static std::size_t addrs = 0x6525238;

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
  constexpr static std::size_t addrs = 0x6527b10;

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
  constexpr static std::size_t addrs = 0x6527cdc;

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
  constexpr static std::size_t addrs = 0x6527ec4;

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
  constexpr static std::size_t addrs = 0x65280a0;

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
  constexpr static std::size_t addrs = 0x6528288;

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
  constexpr static std::size_t addrs = 0x6528464;

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
  constexpr static std::size_t addrs = 0x6528640;

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
  constexpr static std::size_t addrs = 0x652881c;

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
  constexpr static std::size_t addrs = 0x65289f8;

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
  constexpr static std::size_t addrs = 0x6528bd4;

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
  constexpr static std::size_t addrs = 0x6528db0;

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
  constexpr static std::size_t addrs = 0x6528f8c;

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
  constexpr static std::size_t addrs = 0x6529168;

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
  constexpr static std::size_t addrs = 0x6529344;

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
  constexpr static std::size_t addrs = 0x6529520;

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
  constexpr static std::size_t addrs = 0x65296fc;

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
  constexpr static std::size_t addrs = 0x65298d8;

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
  constexpr static std::size_t addrs = 0x6529ab4;

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
  constexpr static std::size_t addrs = 0x6529c90;

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
  constexpr static std::size_t addrs = 0x6529e6c;

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
  constexpr static std::size_t addrs = 0x652a048;

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
  constexpr static std::size_t addrs = 0x652a224;

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
  constexpr static std::size_t addrs = 0x652a400;

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
  constexpr static std::size_t addrs = 0x652a5dc;

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
  constexpr static std::size_t addrs = 0x652a7b8;

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
  constexpr static std::size_t addrs = 0x652a994;

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
  constexpr static std::size_t addrs = 0x652ab70;

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
  constexpr static std::size_t addrs = 0x652ad4c;

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
  constexpr static std::size_t addrs = 0x652af28;

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
  constexpr static std::size_t addrs = 0x652b104;

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
  constexpr static std::size_t addrs = 0x652b2e0;

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
  constexpr static std::size_t addrs = 0x652b4bc;

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
  constexpr static std::size_t addrs = 0x652b698;

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
  constexpr static std::size_t addrs = 0x652b874;

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
  constexpr static std::size_t addrs = 0x652ba50;

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
  constexpr static std::size_t addrs = 0x652bc2c;

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
  constexpr static std::size_t addrs = 0x652be08;

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
  constexpr static std::size_t addrs = 0x652bfe4;

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
  constexpr static std::size_t addrs = 0x652c1c0;

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
  constexpr static std::size_t addrs = 0x652c39c;

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
  constexpr static std::size_t addrs = 0x652c578;

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
  constexpr static std::size_t addrs = 0x652c754;

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
  constexpr static std::size_t addrs = 0x652c930;

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
  constexpr static std::size_t addrs = 0x652cb0c;

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
  constexpr static std::size_t addrs = 0x652cce8;

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
  constexpr static std::size_t addrs = 0x652cec4;

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
  constexpr static std::size_t addrs = 0x652d0a0;

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
  constexpr static std::size_t addrs = 0x652d264;

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
  constexpr static std::size_t addrs = 0x652d428;

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
  constexpr static std::size_t addrs = 0x652d5ec;

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
  constexpr static std::size_t addrs = 0x652d7b0;

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
  constexpr static std::size_t addrs = 0x652d974;

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
  constexpr static std::size_t addrs = 0x652db38;

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
  constexpr static std::size_t addrs = 0x652dcfc;

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
  constexpr static std::size_t addrs = 0x652dec0;

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
  constexpr static std::size_t addrs = 0x652e084;

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
  constexpr static std::size_t addrs = 0x652e248;

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
  constexpr static std::size_t addrs = 0x652e430;

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
  constexpr static std::size_t addrs = 0x652e618;

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
  constexpr static std::size_t addrs = 0x652e80c;

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
  constexpr static std::size_t addrs = 0x652e9f4;

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
  constexpr static std::size_t addrs = 0x652ebdc;

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
  constexpr static std::size_t addrs = 0x652edd0;

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
  constexpr static std::size_t addrs = 0x652efb8;

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
  constexpr static std::size_t addrs = 0x652f1a0;

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
  constexpr static std::size_t addrs = 0x652f394;

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
  constexpr static std::size_t addrs = 0x652f57c;

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
  constexpr static std::size_t addrs = 0x652f764;

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
  constexpr static std::size_t addrs = 0x652f94c;

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
  constexpr static std::size_t addrs = 0x652fb28;

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
  constexpr static std::size_t addrs = 0x652fd04;

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
  constexpr static std::size_t addrs = 0x652fee0;

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
  constexpr static std::size_t addrs = 0x65300bc;

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
  constexpr static std::size_t addrs = 0x6530298;

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
  constexpr static std::size_t addrs = 0x6530474;

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
  constexpr static std::size_t addrs = 0x6530650;

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
  constexpr static std::size_t addrs = 0x653082c;

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
  constexpr static std::size_t addrs = 0x6530a08;

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
  constexpr static std::size_t addrs = 0x6530be4;

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
  constexpr static std::size_t addrs = 0x6530dc0;

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
  constexpr static std::size_t addrs = 0x6530f9c;

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
  constexpr static std::size_t addrs = 0x6531178;

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
  constexpr static std::size_t addrs = 0x6531354;

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
  constexpr static std::size_t addrs = 0x6531530;

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
  constexpr static std::size_t addrs = 0x653170c;

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
  constexpr static std::size_t addrs = 0x65318e8;

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
  constexpr static std::size_t addrs = 0x6531ac4;

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
  constexpr static std::size_t addrs = 0x6531ca0;

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
  constexpr static std::size_t addrs = 0x6531e7c;

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
  constexpr static std::size_t addrs = 0x6532058;

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
  constexpr static std::size_t addrs = 0x6532234;

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
  constexpr static std::size_t addrs = 0x6532410;

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
  constexpr static std::size_t addrs = 0x65325ec;

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
  constexpr static std::size_t addrs = 0x65327c8;

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
  constexpr static std::size_t addrs = 0x65329a4;

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
  constexpr static std::size_t addrs = 0x6532b80;

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
  constexpr static std::size_t addrs = 0x6532d5c;

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
  constexpr static std::size_t addrs = 0x6532f38;

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
  constexpr static std::size_t addrs = 0x6533114;

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
  constexpr static std::size_t addrs = 0x65332f0;

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
  constexpr static std::size_t addrs = 0x65334cc;

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
  constexpr static std::size_t addrs = 0x65336a8;

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
  constexpr static std::size_t addrs = 0x6533884;

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
  constexpr static std::size_t addrs = 0x6533a60;

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
  constexpr static std::size_t addrs = 0x6533c3c;

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
  constexpr static std::size_t addrs = 0x6533e18;

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
  constexpr static std::size_t addrs = 0x6533ff4;

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
  constexpr static std::size_t addrs = 0x65341d0;

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
  constexpr static std::size_t addrs = 0x65343ac;

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
  constexpr static std::size_t addrs = 0x6534588;

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
  constexpr static std::size_t addrs = 0x653474c;

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
  constexpr static std::size_t addrs = 0x6534910;

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
  constexpr static std::size_t addrs = 0x6534ad4;

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
  constexpr static std::size_t addrs = 0x6534c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardOEM5", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastKeyboard.Initialize_ctrlKeyboardIMESelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastKeyboard::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardIMESelected)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6534e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
            { "Initialize_ctrlKeyboardIMESelected", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
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
inline ::UnityEngine::InputSystem::Controls::ButtonControl*
UnityEngine::InputSystem::FastKeyboard::Initialize_ctrlKeyboardIMESelected(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::FastKeyboard*>(),
          { "Initialize_ctrlKeyboardIMESelected", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::FastKeyboard* UnityEngine::InputSystem::FastKeyboard::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::FastKeyboard*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::FastKeyboard::FastKeyboard() {}
