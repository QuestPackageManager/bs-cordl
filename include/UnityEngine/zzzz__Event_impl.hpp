#pragma once
// IWYU pragma private; include "UnityEngine/Event.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__EventType_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__PenStatus_def.hpp"
#include "UnityEngine/zzzz__PointerType_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Event_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Event*)>(&::UnityEngine::Event_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6f9dfc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event_BindingsMarshaller*>(), { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Event_BindingsMarshaller::ConvertToNative(::UnityEngine::Event* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event_BindingsMarshaller*>(), { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, e);
}
// Ctor Parameters []
constexpr ::UnityEngine::Event_BindingsMarshaller::Event_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::Event.get_rawType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventType (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_rawType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f9c130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_rawType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_mousePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_mousePosition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6f9c1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_mousePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.set_mousePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Event::*)(::UnityEngine::Vector2)>(&::UnityEngine::Event::set_mousePosition)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6f9c260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "set_mousePosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_delta)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6f9c300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_delta", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.set_delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Event::*)(::UnityEngine::Vector2)>(&::UnityEngine::Event::set_delta)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6f9c3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "set_delta", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_pointerType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PointerType (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_pointerType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f9c444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_pointerType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_button
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_button)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f9c4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_button", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_modifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventModifiers (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_modifiers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f9c55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_modifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_pressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_pressure)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f9c5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_pressure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_twist
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_twist)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f9c674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_twist", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_tilt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_tilt)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6f9c700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_tilt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_penStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PenStatus (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_penStatus)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f9c7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_penStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_clickCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_clickCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f9c830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_clickCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_character
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_character)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f9c8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_character", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_Internal_keyCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::KeyCode (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_Internal_keyCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f9c948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_Internal_keyCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_keyCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::KeyCode (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_keyCode)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6f9c9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_keyCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_displayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_displayIndex)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f9cacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_displayIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.set_displayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Event::*)(int32_t)>(&::UnityEngine::Event::set_displayIndex)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6f9cb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "set_displayIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventType (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_type)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f9cbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.set_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Event::*)(::UnityEngine::EventType)>(&::UnityEngine::Event::set_type)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6f9cc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "set_type", {}, { ::i2c::type_of<::UnityEngine::EventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_commandName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_commandName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6f9cd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_commandName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.set_commandName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Event::*)(::StringW)>(&::UnityEngine::Event::set_commandName)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6f9ce60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "set_commandName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.Internal_Use
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Event::*)()>(&::UnityEngine::Event::Internal_Use)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f9cff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "Internal_Use", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.Internal_Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::Event::Internal_Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f9d084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "Internal_Create", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.Internal_Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Event::Internal_Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f9d0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "Internal_Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.CopyFromPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Event::*)(::System::IntPtr)>(&::UnityEngine::Event::CopyFromPtr)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6f9d0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "CopyFromPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.PopEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Event*)>(&::UnityEngine::Event::PopEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f9d198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "PopEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.GetEventAtIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Event*)>(&::UnityEngine::Event::GetEventAtIndex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6f9d264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "GetEventAtIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Event*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.GetEventCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Event::GetEventCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f9d348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "GetEventCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.Internal_SetNativeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Event::Internal_SetNativeEvent)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f9d370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "Internal_SetNativeEvent", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.Internal_MakeMasterEventCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Event::Internal_MakeMasterEventCurrent)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6f9d3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "Internal_MakeMasterEventCurrent", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.GetDoubleClickTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Event::GetDoubleClickTime)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f9d4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "GetDoubleClickTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Event::*)()>(&::UnityEngine::Event::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f9d504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Event::*)(int32_t)>(&::UnityEngine::Event::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6f9d494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Event::*)()>(&::UnityEngine::Event::Finalize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f9d548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { ::i2c::class_of<::UnityEngine::Event*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Event::*)(::UnityEngine::Event*)>(&::UnityEngine::Event::CopyFrom)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6f9d5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "CopyFrom", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_shift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_shift)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6f9d5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_shift", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_control
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_control)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6f9d600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_control", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_alt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_alt)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6f9d614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_alt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_command
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_command)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6f9d628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_command", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_capsLock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_capsLock)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6f9d63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_capsLock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_numeric
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_numeric)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6f9d650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_numeric", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_functionKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_functionKey)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6f9d664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_functionKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Event* (*)()>(&::UnityEngine::Event::get_current)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6f9d678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.set_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Event*)>(&::UnityEngine::Event::set_current)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f9d6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "set_current", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_isKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_isKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6f9d754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_isKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_isMouse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_isMouse)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f9ca78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_isMouse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_isScrollWheel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_isScrollWheel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6f9cab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_isScrollWheel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_isDirectManipulationDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Event::*)()>(&::UnityEngine::Event::get_isDirectManipulationDevice)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6f9d770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_isDirectManipulationDevice", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Event::*)()>(&::UnityEngine::Event::GetHashCode)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6f9d7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { ::i2c::class_of<::UnityEngine::Event*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Event::*)(::System::Object*)>(&::UnityEngine::Event::Equals)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6f9d870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { ::i2c::class_of<::UnityEngine::Event*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Event::*)()>(&::UnityEngine::Event::ToString)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x6f9da0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { ::i2c::class_of<::UnityEngine::Event*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.Use
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Event::*)()>(&::UnityEngine::Event::Use)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6f9deac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "Use", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_rawType_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventType (*)(::System::IntPtr)>(&::UnityEngine::Event::get_rawType_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f9c180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_rawType_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_mousePosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Event::get_mousePosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f9c21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(),
                                                             { "get_mousePosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.set_mousePosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Event::set_mousePosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f9c2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(),
                                                             { "set_mousePosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_delta_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Event::get_delta_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f9c360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_delta_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.set_delta_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Event::set_delta_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f9c400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "set_delta_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_pointerType_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PointerType (*)(::System::IntPtr)>(&::UnityEngine::Event::get_pointerType_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f9c494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_pointerType_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_button_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Event::get_button_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f9c520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_button_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_modifiers_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventModifiers (*)(::System::IntPtr)>(&::UnityEngine::Event::get_modifiers_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f9c5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_modifiers_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_pressure_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Event::get_pressure_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f9c638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_pressure_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_twist_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Event::get_twist_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f9c6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_twist_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_tilt_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Event::get_tilt_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f9c760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_tilt_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_penStatus_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PenStatus (*)(::System::IntPtr)>(&::UnityEngine::Event::get_penStatus_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f9c7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_penStatus_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_clickCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Event::get_clickCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f9c880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_clickCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_character_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::IntPtr)>(&::UnityEngine::Event::get_character_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f9c90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_character_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_Internal_keyCode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::KeyCode (*)(::System::IntPtr)>(&::UnityEngine::Event::get_Internal_keyCode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f9c998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_Internal_keyCode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_displayIndex_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Event::get_displayIndex_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f9cb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_displayIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.set_displayIndex_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Event::set_displayIndex_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f9cbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "set_displayIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_type_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventType (*)(::System::IntPtr)>(&::UnityEngine::Event::get_type_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f9cc44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_type_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.set_type_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::EventType)>(&::UnityEngine::Event::set_type_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f9ccd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "set_type_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::EventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.get_commandName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Event::get_commandName_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f9ce1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(),
                                                { "get_commandName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.set_commandName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Event::set_commandName_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f9cfb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(),
                                                { "set_commandName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.Internal_Use_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Event::Internal_Use_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f9d048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "Internal_Use_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.CopyFromPtr_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Event::CopyFromPtr_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f9d154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "CopyFromPtr_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.PopEvent_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Event::PopEvent_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f9d228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "PopEvent_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Event.GetEventAtIndex_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::IntPtr)>(&::UnityEngine::Event::GetEventAtIndex_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f9d304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "GetEventAtIndex_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Event::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::Event::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::Event::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
inline void UnityEngine::Event::setStaticF_s_AllowOutsideOnGUI(bool value) {
  ::cordl_internals::setStaticField<bool, "s_AllowOutsideOnGUI", ::UnityEngine::Event*>(std::forward<bool>(value));
}
inline bool UnityEngine::Event::getStaticF_s_AllowOutsideOnGUI() {
  return ::cordl_internals::getStaticField<bool, "s_AllowOutsideOnGUI", ::UnityEngine::Event*>();
}
inline void UnityEngine::Event::setStaticF_s_Current(::UnityEngine::Event* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Event*, "s_Current", ::UnityEngine::Event*>(std::forward<::UnityEngine::Event*>(value));
}
inline ::UnityEngine::Event* UnityEngine::Event::getStaticF_s_Current() {
  return ::cordl_internals::getStaticField<::UnityEngine::Event*, "s_Current", ::UnityEngine::Event*>();
}
inline void UnityEngine::Event::setStaticF_s_MasterEvent(::UnityEngine::Event* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Event*, "s_MasterEvent", ::UnityEngine::Event*>(std::forward<::UnityEngine::Event*>(value));
}
inline ::UnityEngine::Event* UnityEngine::Event::getStaticF_s_MasterEvent() {
  return ::cordl_internals::getStaticField<::UnityEngine::Event*, "s_MasterEvent", ::UnityEngine::Event*>();
}
inline ::UnityEngine::EventType UnityEngine::Event::get_rawType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_rawType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventType>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Event::get_mousePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_mousePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::Event::set_mousePosition(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "set_mousePosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Event::get_delta() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_delta", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::Event::set_delta(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "set_delta", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::PointerType UnityEngine::Event::get_pointerType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_pointerType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PointerType>(this, ___internal_method);
}
inline int32_t UnityEngine::Event::get_button() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_button", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::EventModifiers UnityEngine::Event::get_modifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_modifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventModifiers>(this, ___internal_method);
}
inline float_t UnityEngine::Event::get_pressure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_pressure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Event::get_twist() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_twist", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Event::get_tilt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_tilt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::PenStatus UnityEngine::Event::get_penStatus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_penStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PenStatus>(this, ___internal_method);
}
inline int32_t UnityEngine::Event::get_clickCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_clickCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline char16_t UnityEngine::Event::get_character() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_character", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline ::UnityEngine::KeyCode UnityEngine::Event::get_Internal_keyCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_Internal_keyCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::KeyCode>(this, ___internal_method);
}
inline ::UnityEngine::KeyCode UnityEngine::Event::get_keyCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_keyCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::KeyCode>(this, ___internal_method);
}
inline int32_t UnityEngine::Event::get_displayIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_displayIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Event::set_displayIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "set_displayIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::EventType UnityEngine::Event::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventType>(this, ___internal_method);
}
inline void UnityEngine::Event::set_type(::UnityEngine::EventType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "set_type", {}, { ::i2c::type_of<::UnityEngine::EventType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Event::get_commandName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_commandName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Event::set_commandName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "set_commandName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Event::Internal_Use() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "Internal_Use", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Event::Internal_Create(int32_t displayIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "Internal_Create", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, displayIndex);
}
inline void UnityEngine::Event::Internal_Destroy(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "Internal_Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
inline void UnityEngine::Event::CopyFromPtr(::System::IntPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "CopyFromPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr);
}
inline bool UnityEngine::Event::PopEvent(/* [NotNull] */ ::UnityEngine::Event* outEvent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "PopEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, outEvent);
}
inline void UnityEngine::Event::GetEventAtIndex(int32_t index, /* [NotNull] */ ::UnityEngine::Event* outEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "GetEventAtIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index, outEvent);
}
inline int32_t UnityEngine::Event::GetEventCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "GetEventCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Event::Internal_SetNativeEvent(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "Internal_SetNativeEvent", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
inline void UnityEngine::Event::Internal_MakeMasterEventCurrent(int32_t displayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "Internal_MakeMasterEventCurrent", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, displayIndex);
}
inline int32_t UnityEngine::Event::GetDoubleClickTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "GetDoubleClickTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Event::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Event::_ctor(int32_t displayIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayIndex);
}
inline void UnityEngine::Event::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Event*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Event::CopyFrom(::UnityEngine::Event* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "CopyFrom", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline bool UnityEngine::Event::get_shift() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_shift", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Event::get_control() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_control", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Event::get_alt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_alt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Event::get_command() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_command", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Event::get_capsLock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_capsLock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Event::get_numeric() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_numeric", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Event::get_functionKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_functionKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Event* UnityEngine::Event::get_current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Event*>(nullptr, ___internal_method);
}
inline void UnityEngine::Event::set_current(::UnityEngine::Event* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "set_current", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Event::get_isKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_isKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Event::get_isMouse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_isMouse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Event::get_isScrollWheel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_isScrollWheel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Event::get_isDirectManipulationDevice() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_isDirectManipulationDevice", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::Event::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Event*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Event::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Event*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::StringW UnityEngine::Event::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Event*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Event::Use() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "Use", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::EventType UnityEngine::Event::get_rawType_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_rawType_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventType>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Event::get_mousePosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_mousePosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Event::set_mousePosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "set_mousePosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Event::get_delta_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_delta_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Event::set_delta_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "set_delta_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::PointerType UnityEngine::Event::get_pointerType_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_pointerType_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PointerType>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Event::get_button_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_button_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::EventModifiers UnityEngine::Event::get_modifiers_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_modifiers_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventModifiers>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::Event::get_pressure_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_pressure_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::Event::get_twist_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_twist_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Event::get_tilt_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_tilt_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline ::UnityEngine::PenStatus UnityEngine::Event::get_penStatus_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_penStatus_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PenStatus>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Event::get_clickCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_clickCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline char16_t UnityEngine::Event::get_character_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_character_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::KeyCode UnityEngine::Event::get_Internal_keyCode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_Internal_keyCode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::KeyCode>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Event::get_displayIndex_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_displayIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Event::set_displayIndex_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "set_displayIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::EventType UnityEngine::Event::get_type_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "get_type_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventType>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Event::set_type_Injected(::System::IntPtr _unity_self, ::UnityEngine::EventType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "set_type_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::EventType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Event::get_commandName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(),
                                              { "get_commandName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Event::set_commandName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(),
                                              { "set_commandName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Event::Internal_Use_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "Internal_Use_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Event::CopyFromPtr_Injected(::System::IntPtr _unity_self, ::System::IntPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "CopyFromPtr_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ptr);
}
inline bool UnityEngine::Event::PopEvent_Injected(::System::IntPtr outEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "PopEvent_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, outEvent);
}
inline void UnityEngine::Event::GetEventAtIndex_Injected(int32_t index, ::System::IntPtr outEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Event*>(), { "GetEventAtIndex_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index, outEvent);
}
inline ::UnityEngine::Event* UnityEngine::Event::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Event*>());
}
inline ::UnityEngine::Event* UnityEngine::Event::New_ctor(int32_t displayIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Event*>(displayIndex));
}
// Ctor Parameters []
constexpr ::UnityEngine::Event::Event() {}
