#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\PointerCaptureHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureHelper_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDispatchState_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureHelper.GetStateFor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PointerDispatchState* (*)(::UnityEngine::UIElements::IEventHandler*)>(
    &::UnityEngine::UIElements::PointerCaptureHelper::GetStateFor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6dbb5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureHelper*>(), { "GetStateFor", {}, { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureHelper.HasPointerCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::IEventHandler*, int32_t)>(&::UnityEngine::UIElements::PointerCaptureHelper::HasPointerCapture)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6db6710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureHelper*>(),
                                                             { "HasPointerCapture", {}, { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureHelper.CapturePointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::IEventHandler*, int32_t)>(&::UnityEngine::UIElements::PointerCaptureHelper::CapturePointer)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6db6814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureHelper*>(),
                                                             { "CapturePointer", {}, { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureHelper.ReleasePointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::IEventHandler*, int32_t)>(&::UnityEngine::UIElements::PointerCaptureHelper::ReleasePointer)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6dbb834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureHelper*>(),
                                                             { "ReleasePointer", {}, { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureHelper.GetCapturingElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IEventHandler* (*)(::UnityEngine::UIElements::IPanel*, int32_t)>(
    &::UnityEngine::UIElements::PointerCaptureHelper::GetCapturingElement)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6dbb8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureHelper*>(),
                                                             { "GetCapturingElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureHelper.ReleasePointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::IPanel*, int32_t)>(&::UnityEngine::UIElements::PointerCaptureHelper::ReleasePointer)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6dbb980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureHelper*>(),
                                                             { "ReleasePointer", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureHelper.ActivateCompatibilityMouseEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::IPanel*, int32_t)>(&::UnityEngine::UIElements::PointerCaptureHelper::ActivateCompatibilityMouseEvents)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6dbba84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureHelper*>(),
                                                             { "ActivateCompatibilityMouseEvents", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureHelper.PreventCompatibilityMouseEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::IPanel*, int32_t)>(&::UnityEngine::UIElements::PointerCaptureHelper::PreventCompatibilityMouseEvents)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6dbbb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureHelper*>(),
                                                             { "PreventCompatibilityMouseEvents", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureHelper.ShouldSendCompatibilityMouseEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::IPanel*, ::UnityEngine::UIElements::IPointerEvent*)>(
    &::UnityEngine::UIElements::PointerCaptureHelper::ShouldSendCompatibilityMouseEvents)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6dbbc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureHelper*>(),
                            { "ShouldSendCompatibilityMouseEvents", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(), ::i2c::type_of<::UnityEngine::UIElements::IPointerEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureHelper.ProcessPointerCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::IPanel*, int32_t)>(&::UnityEngine::UIElements::PointerCaptureHelper::ProcessPointerCapture)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6db684c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureHelper*>(),
                                                             { "ProcessPointerCapture", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::PointerDispatchState* UnityEngine::UIElements::PointerCaptureHelper::GetStateFor(::UnityEngine::UIElements::IEventHandler* handler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureHelper*>(), { "GetStateFor", {}, { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PointerDispatchState*>(nullptr, ___internal_method, handler);
}
inline bool UnityEngine::UIElements::PointerCaptureHelper::HasPointerCapture(::UnityEngine::UIElements::IEventHandler* handler, int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureHelper*>(),
                                                           { "HasPointerCapture", {}, { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handler, pointerId);
}
inline void UnityEngine::UIElements::PointerCaptureHelper::CapturePointer(::UnityEngine::UIElements::IEventHandler* handler, int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureHelper*>(),
                                                           { "CapturePointer", {}, { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, pointerId);
}
inline void UnityEngine::UIElements::PointerCaptureHelper::ReleasePointer(::UnityEngine::UIElements::IEventHandler* handler, int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureHelper*>(),
                                                           { "ReleasePointer", {}, { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, pointerId);
}
inline ::UnityEngine::UIElements::IEventHandler* UnityEngine::UIElements::PointerCaptureHelper::GetCapturingElement(::UnityEngine::UIElements::IPanel* panel, int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureHelper*>(),
                                                           { "GetCapturingElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IEventHandler*>(nullptr, ___internal_method, panel, pointerId);
}
inline void UnityEngine::UIElements::PointerCaptureHelper::ReleasePointer(::UnityEngine::UIElements::IPanel* panel, int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureHelper*>(),
                                                           { "ReleasePointer", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, panel, pointerId);
}
inline void UnityEngine::UIElements::PointerCaptureHelper::ActivateCompatibilityMouseEvents(::UnityEngine::UIElements::IPanel* panel, int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureHelper*>(),
                                                           { "ActivateCompatibilityMouseEvents", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, panel, pointerId);
}
inline void UnityEngine::UIElements::PointerCaptureHelper::PreventCompatibilityMouseEvents(::UnityEngine::UIElements::IPanel* panel, int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureHelper*>(),
                                                           { "PreventCompatibilityMouseEvents", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, panel, pointerId);
}
inline bool UnityEngine::UIElements::PointerCaptureHelper::ShouldSendCompatibilityMouseEvents(::UnityEngine::UIElements::IPanel* panel, ::UnityEngine::UIElements::IPointerEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureHelper*>(),
                          { "ShouldSendCompatibilityMouseEvents", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(), ::i2c::type_of<::UnityEngine::UIElements::IPointerEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, panel, evt);
}
inline void UnityEngine::UIElements::PointerCaptureHelper::ProcessPointerCapture(::UnityEngine::UIElements::IPanel* panel, int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureHelper*>(),
                                                           { "ProcessPointerCapture", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, panel, pointerId);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerCaptureHelper::PointerCaptureHelper() {}
