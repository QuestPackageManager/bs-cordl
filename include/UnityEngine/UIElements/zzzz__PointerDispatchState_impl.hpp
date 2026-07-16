#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerDispatchState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDispatchState_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDispatchState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDispatchState::*)()>(&::UnityEngine::UIElements::PointerDispatchState::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6db9110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDispatchState.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDispatchState::*)()>(&::UnityEngine::UIElements::PointerDispatchState::Reset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6db91ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDispatchState.GetCapturingElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IEventHandler* (::UnityEngine::UIElements::PointerDispatchState::*)(int32_t)>(
    &::UnityEngine::UIElements::PointerDispatchState::GetCapturingElement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6db17a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(), { "GetCapturingElement", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDispatchState.HasPointerCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PointerDispatchState::*)(::UnityEngine::UIElements::IEventHandler*, int32_t)>(
    &::UnityEngine::UIElements::PointerDispatchState::HasPointerCapture)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6db8140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(),
                                                             { "HasPointerCapture", {}, { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDispatchState.CapturePointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDispatchState::*)(::UnityEngine::UIElements::IEventHandler*, int32_t)>(
    &::UnityEngine::UIElements::PointerDispatchState::CapturePointer)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6db8178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(),
                                                             { "CapturePointer", {}, { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDispatchState.ReleasePointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDispatchState::*)(int32_t)>(&::UnityEngine::UIElements::PointerDispatchState::ReleasePointer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6db84cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(), { "ReleasePointer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDispatchState.ReleasePointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDispatchState::*)(::UnityEngine::UIElements::IEventHandler*, int32_t)>(
    &::UnityEngine::UIElements::PointerDispatchState::ReleasePointer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6db82e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(),
                                                             { "ReleasePointer", {}, { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDispatchState.ProcessPointerCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDispatchState::*)(int32_t)>(&::UnityEngine::UIElements::PointerDispatchState::ProcessPointerCapture)> {
  constexpr static std::size_t size = 0x7b4;
  constexpr static std::size_t addrs = 0x6db895c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(), { "ProcessPointerCapture", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDispatchState.ActivateCompatibilityMouseEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDispatchState::*)(int32_t)>(
    &::UnityEngine::UIElements::PointerDispatchState::ActivateCompatibilityMouseEvents)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6db85d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(), { "ActivateCompatibilityMouseEvents", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDispatchState.PreventCompatibilityMouseEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDispatchState::*)(int32_t)>(
    &::UnityEngine::UIElements::PointerDispatchState::PreventCompatibilityMouseEvents)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6db86d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(), { "PreventCompatibilityMouseEvents", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDispatchState.ShouldSendCompatibilityMouseEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PointerDispatchState::*)(::UnityEngine::UIElements::IPointerEvent*)>(
    &::UnityEngine::UIElements::PointerDispatchState::ShouldSendCompatibilityMouseEvents)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6db881c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(),
                                                             { "ShouldSendCompatibilityMouseEvents", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPointerEvent*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::UIElements::IEventHandler*>& UnityEngine::UIElements::PointerDispatchState::__cordl_internal_get_m_PendingPointerCapture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PendingPointerCapture;
}
constexpr ::ArrayW<::UnityEngine::UIElements::IEventHandler*> const& UnityEngine::UIElements::PointerDispatchState::__cordl_internal_get_m_PendingPointerCapture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PendingPointerCapture;
}
constexpr void UnityEngine::UIElements::PointerDispatchState::__cordl_internal_set_m_PendingPointerCapture(::ArrayW<::UnityEngine::UIElements::IEventHandler*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PendingPointerCapture = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::IEventHandler*>& UnityEngine::UIElements::PointerDispatchState::__cordl_internal_get_m_PointerCapture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerCapture;
}
constexpr ::ArrayW<::UnityEngine::UIElements::IEventHandler*> const& UnityEngine::UIElements::PointerDispatchState::__cordl_internal_get_m_PointerCapture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerCapture;
}
constexpr void UnityEngine::UIElements::PointerDispatchState::__cordl_internal_set_m_PointerCapture(::ArrayW<::UnityEngine::UIElements::IEventHandler*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointerCapture = value;
}
constexpr ::ArrayW<bool>& UnityEngine::UIElements::PointerDispatchState::__cordl_internal_get_m_ShouldSendCompatibilityMouseEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldSendCompatibilityMouseEvents;
}
constexpr ::ArrayW<bool> const& UnityEngine::UIElements::PointerDispatchState::__cordl_internal_get_m_ShouldSendCompatibilityMouseEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldSendCompatibilityMouseEvents;
}
constexpr void UnityEngine::UIElements::PointerDispatchState::__cordl_internal_set_m_ShouldSendCompatibilityMouseEvents(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShouldSendCompatibilityMouseEvents = value;
}
inline void UnityEngine::UIElements::PointerDispatchState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PointerDispatchState::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IEventHandler* UnityEngine::UIElements::PointerDispatchState::GetCapturingElement(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(), { "GetCapturingElement", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IEventHandler*>(this, ___internal_method, pointerId);
}
inline bool UnityEngine::UIElements::PointerDispatchState::HasPointerCapture(::UnityEngine::UIElements::IEventHandler* handler, int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(),
                                                           { "HasPointerCapture", {}, { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handler, pointerId);
}
inline void UnityEngine::UIElements::PointerDispatchState::CapturePointer(::UnityEngine::UIElements::IEventHandler* handler, int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(),
                                                           { "CapturePointer", {}, { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler, pointerId);
}
inline void UnityEngine::UIElements::PointerDispatchState::ReleasePointer(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(), { "ReleasePointer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerId);
}
inline void UnityEngine::UIElements::PointerDispatchState::ReleasePointer(::UnityEngine::UIElements::IEventHandler* handler, int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(),
                                                           { "ReleasePointer", {}, { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler, pointerId);
}
inline void UnityEngine::UIElements::PointerDispatchState::ProcessPointerCapture(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(), { "ProcessPointerCapture", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerId);
}
inline void UnityEngine::UIElements::PointerDispatchState::ActivateCompatibilityMouseEvents(int32_t pointerId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(), { "ActivateCompatibilityMouseEvents", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerId);
}
inline void UnityEngine::UIElements::PointerDispatchState::PreventCompatibilityMouseEvents(int32_t pointerId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(), { "PreventCompatibilityMouseEvents", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerId);
}
inline bool UnityEngine::UIElements::PointerDispatchState::ShouldSendCompatibilityMouseEvents(::UnityEngine::UIElements::IPointerEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDispatchState*>(),
                                                           { "ShouldSendCompatibilityMouseEvents", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPointerEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, evt);
}
inline ::UnityEngine::UIElements::PointerDispatchState* UnityEngine::UIElements::PointerDispatchState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PointerDispatchState*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerDispatchState::PointerDispatchState() {}
