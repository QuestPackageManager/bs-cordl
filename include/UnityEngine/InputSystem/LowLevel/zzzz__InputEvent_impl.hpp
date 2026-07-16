#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputEvent.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeInputEvent_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventBuffer_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEvent.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::InputEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputEvent::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a9e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEvent.set_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEvent::*)(::UnityEngine::InputSystem::Utilities::FourCC)>(
    &::UnityEngine::InputSystem::LowLevel::InputEvent::set_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a9e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(),
                                                                                           { "set_type", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEvent.get_sizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::InputEvent::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEvent::get_sizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a90c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "get_sizeInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEvent.set_sizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEvent::*)(uint32_t)>(&::UnityEngine::InputSystem::LowLevel::InputEvent::set_sizeInBytes)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x65a9e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "set_sizeInBytes", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEvent.get_eventId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputEvent::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEvent::get_eventId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65a9ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "get_eventId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEvent.set_eventId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEvent::*)(int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputEvent::set_eventId)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65a9edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "set_eventId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEvent.get_deviceId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputEvent::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEvent::get_deviceId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a9ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "get_deviceId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEvent.set_deviceId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEvent::*)(int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputEvent::set_deviceId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a9ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "set_deviceId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEvent.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::LowLevel::InputEvent::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEvent::get_time)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x65a9f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "get_time", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEvent.set_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEvent::*)(double_t)>(&::UnityEngine::InputSystem::LowLevel::InputEvent::set_time)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x65a9f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "set_time", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEvent.get_internalTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::LowLevel::InputEvent::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEvent::get_internalTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a9fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "get_internalTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEvent.set_internalTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEvent::*)(double_t)>(&::UnityEngine::InputSystem::LowLevel::InputEvent::set_internalTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a9fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "set_internalTime", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEvent::*)(::UnityEngine::InputSystem::Utilities::FourCC, int32_t, int32_t, double_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputEvent::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x65a98a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(),
                            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEvent.get_handled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::InputEvent::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEvent::get_handled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65a9fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "get_handled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEvent.set_handled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEvent::*)(bool)>(&::UnityEngine::InputSystem::LowLevel::InputEvent::set_handled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65a9fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "set_handled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEvent.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::LowLevel::InputEvent::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEvent::ToString)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x65a9ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEvent.GetNextInMemory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEvent* (*)(::UnityEngine::InputSystem::LowLevel::InputEvent*)>(
    &::UnityEngine::InputSystem::LowLevel::InputEvent::GetNextInMemory)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65aa234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(),
                                                                                           { "GetNextInMemory", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEvent.GetNextInMemoryChecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::LowLevel::InputEvent* (*)(::UnityEngine::InputSystem::LowLevel::InputEvent*, ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>)>(
        &::UnityEngine::InputSystem::LowLevel::InputEvent::GetNextInMemoryChecked)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x65aa250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(),
                            { "GetNextInMemoryChecked",
                              {},
                              { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEvent.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::LowLevel::InputEvent*, ::UnityEngine::InputSystem::LowLevel::InputEvent*)>(
    &::UnityEngine::InputSystem::LowLevel::InputEvent::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x65aa3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(),
                            { "Equals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngineInternal::Input::NativeInputEvent& UnityEngine::InputSystem::LowLevel::InputEvent::__cordl_internal_get_m_Event() {
  return this->___m_Event;
}
constexpr ::UnityEngineInternal::Input::NativeInputEvent const& UnityEngine::InputSystem::LowLevel::InputEvent::__cordl_internal_get_m_Event() const {
  return this->___m_Event;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputEvent::__cordl_internal_set_m_Event(::UnityEngineInternal::Input::NativeInputEvent value) {
  this->___m_Event = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputEvent::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputEvent::set_type(::UnityEngine::InputSystem::Utilities::FourCC value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "set_type", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputEvent::get_sizeInBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "get_sizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputEvent::set_sizeInBytes(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "set_sizeInBytes", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputEvent::get_eventId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "get_eventId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputEvent::set_eventId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "set_eventId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputEvent::get_deviceId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "get_deviceId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputEvent::set_deviceId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "set_deviceId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline double_t UnityEngine::InputSystem::LowLevel::InputEvent::get_time() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "get_time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputEvent::set_time(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "set_time", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline double_t UnityEngine::InputSystem::LowLevel::InputEvent::get_internalTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "get_internalTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputEvent::set_internalTime(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "set_internalTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::LowLevel::InputEvent::_ctor(::UnityEngine::InputSystem::Utilities::FourCC type, int32_t sizeInBytes, int32_t deviceId, double_t time) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(),
                          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, sizeInBytes, deviceId, time);
}
inline bool UnityEngine::InputSystem::LowLevel::InputEvent::get_handled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "get_handled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputEvent::set_handled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), { "set_handled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::LowLevel::InputEvent::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEvent* UnityEngine::InputSystem::LowLevel::InputEvent::GetNextInMemory(::UnityEngine::InputSystem::LowLevel::InputEvent* currentPtr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(),
                                                                                         { "GetNextInMemory", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEvent*>(nullptr, ___internal_method, currentPtr);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEvent*
UnityEngine::InputSystem::LowLevel::InputEvent::GetNextInMemoryChecked(::UnityEngine::InputSystem::LowLevel::InputEvent* currentPtr,
                                                                       ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(),
                          { "GetNextInMemoryChecked",
                            {},
                            { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEvent*>(nullptr, ___internal_method, currentPtr, buffer);
}
inline bool UnityEngine::InputSystem::LowLevel::InputEvent::Equals(::UnityEngine::InputSystem::LowLevel::InputEvent* first, ::UnityEngine::InputSystem::LowLevel::InputEvent* second) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEvent>(),
                          { "Equals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, first, second);
}
// Ctor Parameters [CppParam { name: "m_Event", ty: "::UnityEngineInternal::Input::NativeInputEvent", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent::InputEvent(::UnityEngineInternal::Input::NativeInputEvent m_Event) noexcept {
  this->m_Event = m_Event;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent::InputEvent() {}
