#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/StencilState.hpp"
#include "UnityEngine/Rendering/zzzz__StencilState_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__CompareFunction_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilOp_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.get_defaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::StencilState (*)()>(&::UnityEngine::Rendering::StencilState::get_defaultValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6b21200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_defaultValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::StencilState::*)(
    bool, uint8_t, uint8_t, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::StencilOp)>(
    &::UnityEngine::Rendering::StencilState::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b256d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::CompareFunction>(), ::i2c::type_of<::UnityEngine::Rendering::StencilOp>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::StencilOp>(), ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::StencilState::*)(
    bool, uint8_t, uint8_t, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::StencilOp,
    ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::StencilOp)>(
    &::UnityEngine::Rendering::StencilState::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6b25700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::UnityEngine::Rendering::CompareFunction>(),
                                ::i2c::type_of<::UnityEngine::Rendering::StencilOp>(), ::i2c::type_of<::UnityEngine::Rendering::StencilOp>(), ::i2c::type_of<::UnityEngine::Rendering::StencilOp>(),
                                ::i2c::type_of<::UnityEngine::Rendering::CompareFunction>(), ::i2c::type_of<::UnityEngine::Rendering::StencilOp>(),
                                ::i2c::type_of<::UnityEngine::Rendering::StencilOp>(), ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::StencilState::*)()>(&::UnityEngine::Rendering::StencilState::get_enabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6b25800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.set_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::StencilState::*)(bool)>(&::UnityEngine::Rendering::StencilState::set_enabled)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b25860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.get_readMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::UnityEngine::Rendering::StencilState::*)()>(&::UnityEngine::Rendering::StencilState::get_readMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b258c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_readMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.set_readMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::StencilState::*)(uint8_t)>(&::UnityEngine::Rendering::StencilState::set_readMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b258d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "set_readMask", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.get_writeMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::UnityEngine::Rendering::StencilState::*)()>(&::UnityEngine::Rendering::StencilState::get_writeMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b258d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_writeMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.set_writeMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::StencilState::*)(uint8_t)>(&::UnityEngine::Rendering::StencilState::set_writeMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b258e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "set_writeMask", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.SetCompareFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::StencilState::*)(::UnityEngine::Rendering::CompareFunction)>(
    &::UnityEngine::Rendering::StencilState::SetCompareFunction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b258e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "SetCompareFunction", {}, { ::i2c::type_of<::UnityEngine::Rendering::CompareFunction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.SetPassOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::StencilState::*)(::UnityEngine::Rendering::StencilOp)>(
    &::UnityEngine::Rendering::StencilState::SetPassOperation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b25904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "SetPassOperation", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.SetFailOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::StencilState::*)(::UnityEngine::Rendering::StencilOp)>(
    &::UnityEngine::Rendering::StencilState::SetFailOperation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b25920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "SetFailOperation", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.SetZFailOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::StencilState::*)(::UnityEngine::Rendering::StencilOp)>(
    &::UnityEngine::Rendering::StencilState::SetZFailOperation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b2593c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "SetZFailOperation", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.get_compareFunctionFront
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CompareFunction (::UnityEngine::Rendering::StencilState::*)()>(
    &::UnityEngine::Rendering::StencilState::get_compareFunctionFront)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_compareFunctionFront", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.set_compareFunctionFront
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::StencilState::*)(::UnityEngine::Rendering::CompareFunction)>(
    &::UnityEngine::Rendering::StencilState::set_compareFunctionFront)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b258f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(),
                                                                                           { "set_compareFunctionFront", {}, { ::i2c::type_of<::UnityEngine::Rendering::CompareFunction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.get_passOperationFront
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::StencilOp (::UnityEngine::Rendering::StencilState::*)()>(
    &::UnityEngine::Rendering::StencilState::get_passOperationFront)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_passOperationFront", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.set_passOperationFront
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::StencilState::*)(::UnityEngine::Rendering::StencilOp)>(
    &::UnityEngine::Rendering::StencilState::set_passOperationFront)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "set_passOperationFront", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.get_failOperationFront
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::StencilOp (::UnityEngine::Rendering::StencilState::*)()>(
    &::UnityEngine::Rendering::StencilState::get_failOperationFront)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_failOperationFront", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.set_failOperationFront
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::StencilState::*)(::UnityEngine::Rendering::StencilOp)>(
    &::UnityEngine::Rendering::StencilState::set_failOperationFront)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2592c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "set_failOperationFront", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.get_zFailOperationFront
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::StencilOp (::UnityEngine::Rendering::StencilState::*)()>(
    &::UnityEngine::Rendering::StencilState::get_zFailOperationFront)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_zFailOperationFront", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.set_zFailOperationFront
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::StencilState::*)(::UnityEngine::Rendering::StencilOp)>(
    &::UnityEngine::Rendering::StencilState::set_zFailOperationFront)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "set_zFailOperationFront", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.get_compareFunctionBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CompareFunction (::UnityEngine::Rendering::StencilState::*)()>(
    &::UnityEngine::Rendering::StencilState::get_compareFunctionBack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_compareFunctionBack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.set_compareFunctionBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::StencilState::*)(::UnityEngine::Rendering::CompareFunction)>(
    &::UnityEngine::Rendering::StencilState::set_compareFunctionBack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b258fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(),
                                                                                           { "set_compareFunctionBack", {}, { ::i2c::type_of<::UnityEngine::Rendering::CompareFunction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.get_passOperationBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::StencilOp (::UnityEngine::Rendering::StencilState::*)()>(
    &::UnityEngine::Rendering::StencilState::get_passOperationBack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_passOperationBack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.set_passOperationBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::StencilState::*)(::UnityEngine::Rendering::StencilOp)>(
    &::UnityEngine::Rendering::StencilState::set_passOperationBack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "set_passOperationBack", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.get_failOperationBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::StencilOp (::UnityEngine::Rendering::StencilState::*)()>(
    &::UnityEngine::Rendering::StencilState::get_failOperationBack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_failOperationBack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.set_failOperationBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::StencilState::*)(::UnityEngine::Rendering::StencilOp)>(
    &::UnityEngine::Rendering::StencilState::set_failOperationBack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "set_failOperationBack", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.get_zFailOperationBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::StencilOp (::UnityEngine::Rendering::StencilState::*)()>(
    &::UnityEngine::Rendering::StencilState::get_zFailOperationBack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_zFailOperationBack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.set_zFailOperationBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::StencilState::*)(::UnityEngine::Rendering::StencilOp)>(
    &::UnityEngine::Rendering::StencilState::set_zFailOperationBack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "set_zFailOperationBack", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::StencilState::*)(::UnityEngine::Rendering::StencilState)>(&::UnityEngine::Rendering::StencilState::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b213c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::StencilState::*)(::System::Object*)>(&::UnityEngine::Rendering::StencilState::Equals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b25998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { ::i2c::class_of<::UnityEngine::Rendering::StencilState>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::StencilState.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::StencilState::*)()>(&::UnityEngine::Rendering::StencilState::GetHashCode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b215f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { ::i2c::class_of<::UnityEngine::Rendering::StencilState>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::StencilState UnityEngine::Rendering::StencilState::get_defaultValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_defaultValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::StencilState>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::StencilState::_ctor(bool enabled, uint8_t readMask, uint8_t writeMask, ::UnityEngine::Rendering::CompareFunction compareFunction,
                                                        ::UnityEngine::Rendering::StencilOp passOperation, ::UnityEngine::Rendering::StencilOp failOperation,
                                                        ::UnityEngine::Rendering::StencilOp zFailOperation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::CompareFunction>(), ::i2c::type_of<::UnityEngine::Rendering::StencilOp>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::StencilOp>(), ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enabled, readMask, writeMask, compareFunction, passOperation, failOperation, zFailOperation);
}
inline void UnityEngine::Rendering::StencilState::_ctor(bool enabled, uint8_t readMask, uint8_t writeMask, ::UnityEngine::Rendering::CompareFunction compareFunctionFront,
                                                        ::UnityEngine::Rendering::StencilOp passOperationFront, ::UnityEngine::Rendering::StencilOp failOperationFront,
                                                        ::UnityEngine::Rendering::StencilOp zFailOperationFront, ::UnityEngine::Rendering::CompareFunction compareFunctionBack,
                                                        ::UnityEngine::Rendering::StencilOp passOperationBack, ::UnityEngine::Rendering::StencilOp failOperationBack,
                                                        ::UnityEngine::Rendering::StencilOp zFailOperationBack) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::UnityEngine::Rendering::CompareFunction>(),
                              ::i2c::type_of<::UnityEngine::Rendering::StencilOp>(), ::i2c::type_of<::UnityEngine::Rendering::StencilOp>(), ::i2c::type_of<::UnityEngine::Rendering::StencilOp>(),
                              ::i2c::type_of<::UnityEngine::Rendering::CompareFunction>(), ::i2c::type_of<::UnityEngine::Rendering::StencilOp>(), ::i2c::type_of<::UnityEngine::Rendering::StencilOp>(),
                              ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enabled, readMask, writeMask, compareFunctionFront, passOperationFront, failOperationFront, zFailOperationFront,
                                                   compareFunctionBack, passOperationBack, failOperationBack, zFailOperationBack);
}
inline bool UnityEngine::Rendering::StencilState::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::StencilState::set_enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint8_t UnityEngine::Rendering::StencilState::get_readMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_readMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::StencilState::set_readMask(uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "set_readMask", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint8_t UnityEngine::Rendering::StencilState::get_writeMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_writeMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::StencilState::set_writeMask(uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "set_writeMask", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::StencilState::SetCompareFunction(::UnityEngine::Rendering::CompareFunction value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "SetCompareFunction", {}, { ::i2c::type_of<::UnityEngine::Rendering::CompareFunction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::StencilState::SetPassOperation(::UnityEngine::Rendering::StencilOp value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "SetPassOperation", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::StencilState::SetFailOperation(::UnityEngine::Rendering::StencilOp value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "SetFailOperation", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::StencilState::SetZFailOperation(::UnityEngine::Rendering::StencilOp value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "SetZFailOperation", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::CompareFunction UnityEngine::Rendering::StencilState::get_compareFunctionFront() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_compareFunctionFront", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CompareFunction>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::StencilState::set_compareFunctionFront(::UnityEngine::Rendering::CompareFunction value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(),
                                                                                         { "set_compareFunctionFront", {}, { ::i2c::type_of<::UnityEngine::Rendering::CompareFunction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::StencilOp UnityEngine::Rendering::StencilState::get_passOperationFront() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_passOperationFront", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::StencilOp>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::StencilState::set_passOperationFront(::UnityEngine::Rendering::StencilOp value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "set_passOperationFront", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::StencilOp UnityEngine::Rendering::StencilState::get_failOperationFront() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_failOperationFront", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::StencilOp>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::StencilState::set_failOperationFront(::UnityEngine::Rendering::StencilOp value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "set_failOperationFront", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::StencilOp UnityEngine::Rendering::StencilState::get_zFailOperationFront() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_zFailOperationFront", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::StencilOp>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::StencilState::set_zFailOperationFront(::UnityEngine::Rendering::StencilOp value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "set_zFailOperationFront", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::CompareFunction UnityEngine::Rendering::StencilState::get_compareFunctionBack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_compareFunctionBack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CompareFunction>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::StencilState::set_compareFunctionBack(::UnityEngine::Rendering::CompareFunction value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "set_compareFunctionBack", {}, { ::i2c::type_of<::UnityEngine::Rendering::CompareFunction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::StencilOp UnityEngine::Rendering::StencilState::get_passOperationBack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_passOperationBack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::StencilOp>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::StencilState::set_passOperationBack(::UnityEngine::Rendering::StencilOp value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "set_passOperationBack", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::StencilOp UnityEngine::Rendering::StencilState::get_failOperationBack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_failOperationBack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::StencilOp>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::StencilState::set_failOperationBack(::UnityEngine::Rendering::StencilOp value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "set_failOperationBack", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::StencilOp UnityEngine::Rendering::StencilState::get_zFailOperationBack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "get_zFailOperationBack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::StencilOp>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::StencilState::set_zFailOperationBack(::UnityEngine::Rendering::StencilOp value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "set_zFailOperationBack", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::StencilState::Equals(::UnityEngine::Rendering::StencilState other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::StencilState>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilState>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::StencilState::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::StencilState>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::StencilState::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::StencilState>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::StencilState>"
constexpr UnityEngine::Rendering::StencilState::operator ::System::IEquatable_1<::UnityEngine::Rendering::StencilState>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::StencilState>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::StencilState>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::StencilState>* UnityEngine::Rendering::StencilState::i___System__IEquatable_1___UnityEngine__Rendering__StencilState_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::StencilState>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Enabled", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ReadMask", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "m_WriteMask", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Padding", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_CompareFunctionFront", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PassOperationFront", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_FailOperationFront", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ZFailOperationFront", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_CompareFunctionBack", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PassOperationBack", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_FailOperationBack", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ZFailOperationBack", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::StencilState::StencilState(uint8_t m_Enabled, uint8_t m_ReadMask, uint8_t m_WriteMask, uint8_t m_Padding, uint8_t m_CompareFunctionFront,
                                                               uint8_t m_PassOperationFront, uint8_t m_FailOperationFront, uint8_t m_ZFailOperationFront, uint8_t m_CompareFunctionBack,
                                                               uint8_t m_PassOperationBack, uint8_t m_FailOperationBack, uint8_t m_ZFailOperationBack) noexcept {
  this->m_Enabled = m_Enabled;
  this->m_ReadMask = m_ReadMask;
  this->m_WriteMask = m_WriteMask;
  this->m_Padding = m_Padding;
  this->m_CompareFunctionFront = m_CompareFunctionFront;
  this->m_PassOperationFront = m_PassOperationFront;
  this->m_FailOperationFront = m_FailOperationFront;
  this->m_ZFailOperationFront = m_ZFailOperationFront;
  this->m_CompareFunctionBack = m_CompareFunctionBack;
  this->m_PassOperationBack = m_PassOperationBack;
  this->m_FailOperationBack = m_FailOperationBack;
  this->m_ZFailOperationBack = m_ZFailOperationBack;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::StencilState::StencilState() {}
