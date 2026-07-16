#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputEventStream.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventBuffer_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventStream_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventBuffer_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventStream.get_isOpen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::InputEventStream::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventStream::get_isOpen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65abc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(), { "get_isOpen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventStream.get_remainingEventCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputEventStream::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputEventStream::get_remainingEventCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65abc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(), { "get_remainingEventCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventStream.get_numEventsRetainedInBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputEventStream::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputEventStream::get_numEventsRetainedInBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65abc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(), { "get_numEventsRetainedInBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventStream.get_currentEventPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEvent* (::UnityEngine::InputSystem::LowLevel::InputEventStream::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputEventStream::get_currentEventPtr)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x65abc40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(), { "get_currentEventPtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventStream.get_numBytesRetainedInBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::InputEventStream::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputEventStream::get_numBytesRetainedInBuffer)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x65abc74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(), { "get_numBytesRetainedInBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEventStream::*)(::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>, int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputEventStream::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x65abcc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventStream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEventStream::*)(::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>)>(
    &::UnityEngine::InputSystem::LowLevel::InputEventStream::Close)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x65abd44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(),
                                                                                           { "Close", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventStream.CleanUpAfterException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEventStream::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputEventStream::CleanUpAfterException)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x65abe64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(), { "CleanUpAfterException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEventStream::*)(::UnityEngine::InputSystem::LowLevel::InputEvent*)>(
    &::UnityEngine::InputSystem::LowLevel::InputEventStream::Write)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x65abed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(),
                                                                                           { "Write", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventStream.Advance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEvent* (::UnityEngine::InputSystem::LowLevel::InputEventStream::*)(bool)>(
    &::UnityEngine::InputSystem::LowLevel::InputEventStream::Advance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x65ac0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(), { "Advance", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventStream.Peek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEvent* (::UnityEngine::InputSystem::LowLevel::InputEventStream::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputEventStream::Peek)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x65ac168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(), { "Peek", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputSystem::LowLevel::InputEventStream::get_isOpen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(), { "get_isOpen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputEventStream::get_remainingEventCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(), { "get_remainingEventCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputEventStream::get_numEventsRetainedInBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(), { "get_numEventsRetainedInBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEvent* UnityEngine::InputSystem::LowLevel::InputEventStream::get_currentEventPtr() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(), { "get_currentEventPtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEvent*>(*this, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputEventStream::get_numBytesRetainedInBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(), { "get_numBytesRetainedInBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputEventStream::_ctor(::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer, int32_t maxAppendedEvents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventBuffer, maxAppendedEvents);
}
inline void UnityEngine::InputSystem::LowLevel::InputEventStream::Close(::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(),
                                                                                         { "Close", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventBuffer);
}
inline void UnityEngine::InputSystem::LowLevel::InputEventStream::CleanUpAfterException() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(), { "CleanUpAfterException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputEventStream::Write(::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(),
                                                                                         { "Write", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventPtr);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEvent* UnityEngine::InputSystem::LowLevel::InputEventStream::Advance(bool leaveEventInBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(), { "Advance", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEvent*>(*this, ___internal_method, leaveEventInBuffer);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEvent* UnityEngine::InputSystem::LowLevel::InputEventStream::Peek() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventStream>(), { "Peek", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEvent*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_NativeBuffer", ty: "::UnityEngine::InputSystem::LowLevel::InputEventBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_CurrentNativeEventReadPtr", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentNativeEventWritePtr", ty:
// "::UnityEngine::InputSystem::LowLevel::InputEvent*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RemainingNativeEventCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_MaxAppendedEvents", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AppendBuffer", ty: "::UnityEngine::InputSystem::LowLevel::InputEventBuffer",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentAppendEventReadPtr", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_CurrentAppendEventWritePtr", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RemainingAppendEventCount", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NumEventsRetainedInBuffer", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IsOpen", ty: "bool", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventStream::InputEventStream(::UnityEngine::InputSystem::LowLevel::InputEventBuffer m_NativeBuffer,
                                                                                   ::UnityEngine::InputSystem::LowLevel::InputEvent* m_CurrentNativeEventReadPtr,
                                                                                   ::UnityEngine::InputSystem::LowLevel::InputEvent* m_CurrentNativeEventWritePtr, int32_t m_RemainingNativeEventCount,
                                                                                   int32_t m_MaxAppendedEvents, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer m_AppendBuffer,
                                                                                   ::UnityEngine::InputSystem::LowLevel::InputEvent* m_CurrentAppendEventReadPtr,
                                                                                   ::UnityEngine::InputSystem::LowLevel::InputEvent* m_CurrentAppendEventWritePtr, int32_t m_RemainingAppendEventCount,
                                                                                   int32_t m_NumEventsRetainedInBuffer, bool m_IsOpen) noexcept {
  this->m_NativeBuffer = m_NativeBuffer;
  this->m_CurrentNativeEventReadPtr = m_CurrentNativeEventReadPtr;
  this->m_CurrentNativeEventWritePtr = m_CurrentNativeEventWritePtr;
  this->m_RemainingNativeEventCount = m_RemainingNativeEventCount;
  this->m_MaxAppendedEvents = m_MaxAppendedEvents;
  this->m_AppendBuffer = m_AppendBuffer;
  this->m_CurrentAppendEventReadPtr = m_CurrentAppendEventReadPtr;
  this->m_CurrentAppendEventWritePtr = m_CurrentAppendEventWritePtr;
  this->m_RemainingAppendEventCount = m_RemainingAppendEventCount;
  this->m_NumEventsRetainedInBuffer = m_NumEventsRetainedInBuffer;
  this->m_IsOpen = m_IsOpen;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventStream::InputEventStream() {}
