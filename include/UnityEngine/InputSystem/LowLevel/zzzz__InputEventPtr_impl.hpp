#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\LowLevel\InputEventPtr.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)(::UnityEngine::InputSystem::LowLevel::InputEvent*)>(
    &::UnityEngine::InputSystem::LowLevel::InputEventPtr::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b0c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.get_valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventPtr::get_valid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65a6ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_valid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.get_handled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventPtr::get_handled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65b0c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_handled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.set_handled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)(bool)>(&::UnityEngine::InputSystem::LowLevel::InputEventPtr::set_handled)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x65aabb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "set_handled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventPtr::get_id)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65b0c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.set_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)(int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputEventPtr::set_id)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x65b0c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "set_id", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputEventPtr::get_type)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65a6ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.get_sizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventPtr::get_sizeInBytes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65b0cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_sizeInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.get_deviceId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventPtr::get_deviceId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65b0cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_deviceId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.set_deviceId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)(int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputEventPtr::set_deviceId)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65b0d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "set_deviceId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventPtr::get_time)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x65ab5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_time", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.set_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)(double_t)>(&::UnityEngine::InputSystem::LowLevel::InputEventPtr::set_time)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x65b0d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "set_time", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.get_internalTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventPtr::get_internalTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65b0e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_internalTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.set_internalTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)(double_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputEventPtr::set_internalTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65b0e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "set_internalTime", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.get_data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEvent* (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputEventPtr::get_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b0e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_data", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.get_stateFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputEventPtr::get_stateFormat)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x65b0e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_stateFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.get_stateSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputEventPtr::get_stateSizeInBytes)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x65b0fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_stateSizeInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.get_stateOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventPtr::get_stateOffset)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x65b1248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_stateOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.Next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventPtr (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputEventPtr::Next)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x65b1334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "Next", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventPtr::ToString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x65b0f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.ToPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEvent* (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputEventPtr::ToPointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b1360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "ToPointer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::LowLevel::InputEventPtr::Equals)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65b1368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::LowLevel::InputEventPtr::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x65b1380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventPtr::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b1410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::LowLevel::InputEventPtr::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65b1418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                            { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::LowLevel::InputEventPtr::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65b1424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                         { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.op_Implicit___UnityEngine__InputSystem__LowLevel__InputEventPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventPtr (*)(::UnityEngine::InputSystem::LowLevel::InputEvent*)>(
    &::UnityEngine::InputSystem::LowLevel::InputEventPtr::op_Implicit___UnityEngine__InputSystem__LowLevel__InputEventPtr)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65afd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.From
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventPtr (*)(::UnityEngine::InputSystem::LowLevel::InputEvent*)>(
    &::UnityEngine::InputSystem::LowLevel::InputEventPtr::From)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65b1430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                                                                                           { "From", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.op_Implicit___UnityEngine__InputSystem__LowLevel__InputEvent_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEvent* (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::LowLevel::InputEventPtr::op_Implicit___UnityEngine__InputSystem__LowLevel__InputEvent_)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65b0728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventPtr.FromInputEventPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEvent* (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::LowLevel::InputEventPtr::FromInputEventPtr)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65b1434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                                                                                           { "FromInputEventPtr", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::LowLevel::InputEventPtr::_ctor(::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventPtr);
}
inline bool UnityEngine::InputSystem::LowLevel::InputEventPtr::get_valid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::LowLevel::InputEventPtr::get_handled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_handled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputEventPtr::set_handled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "set_handled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputEventPtr::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputEventPtr::set_id(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "set_id", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputEventPtr::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputEventPtr::get_sizeInBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_sizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputEventPtr::get_deviceId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_deviceId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputEventPtr::set_deviceId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "set_deviceId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline double_t UnityEngine::InputSystem::LowLevel::InputEventPtr::get_time() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputEventPtr::set_time(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "set_time", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline double_t UnityEngine::InputSystem::LowLevel::InputEventPtr::get_internalTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_internalTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputEventPtr::set_internalTime(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "set_internalTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEvent* UnityEngine::InputSystem::LowLevel::InputEventPtr::get_data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEvent*>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputEventPtr::get_stateFormat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_stateFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputEventPtr::get_stateSizeInBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_stateSizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputEventPtr::get_stateOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "get_stateOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
template <typename TOtherEvent> inline bool UnityEngine::InputSystem::LowLevel::InputEventPtr::IsA() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "IsA", { ::i2c::class_of<TOtherEvent>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TOtherEvent>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::LowLevel::InputEventPtr::Next() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "Next", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::LowLevel::InputEventPtr::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEvent* UnityEngine::InputSystem::LowLevel::InputEventPtr::ToPointer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), { "ToPointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEvent*>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::LowLevel::InputEventPtr::Equals(::UnityEngine::InputSystem::LowLevel::InputEventPtr other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::LowLevel::InputEventPtr::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputEventPtr::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::LowLevel::InputEventPtr::op_Equality(::UnityEngine::InputSystem::LowLevel::InputEventPtr left, ::UnityEngine::InputSystem::LowLevel::InputEventPtr right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                          { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::InputSystem::LowLevel::InputEventPtr::op_Inequality(::UnityEngine::InputSystem::LowLevel::InputEventPtr left, ::UnityEngine::InputSystem::LowLevel::InputEventPtr right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr
UnityEngine::InputSystem::LowLevel::InputEventPtr::op_Implicit___UnityEngine__InputSystem__LowLevel__InputEventPtr(::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(nullptr, ___internal_method, eventPtr);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::LowLevel::InputEventPtr::From(::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                                                                                         { "From", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(nullptr, ___internal_method, eventPtr);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEvent*
UnityEngine::InputSystem::LowLevel::InputEventPtr::op_Implicit___UnityEngine__InputSystem__LowLevel__InputEvent_(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEvent*>(nullptr, ___internal_method, eventPtr);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEvent* UnityEngine::InputSystem::LowLevel::InputEventPtr::FromInputEventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                                                                                         { "FromInputEventPtr", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEvent*>(nullptr, ___internal_method, eventPtr);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr UnityEngine::InputSystem::LowLevel::InputEventPtr::operator ::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*
UnityEngine::InputSystem::LowLevel::InputEventPtr::i___System__IEquatable_1___UnityEngine__InputSystem__LowLevel__InputEventPtr_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_EventPtr", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr::InputEventPtr(::UnityEngine::InputSystem::LowLevel::InputEvent* m_EventPtr) noexcept {
  this->m_EventPtr = m_EventPtr;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr::InputEventPtr() {}
