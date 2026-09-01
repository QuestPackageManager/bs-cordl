#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\MouseCaptureController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MouseCaptureController_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MouseCaptureController.HasMouseCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::IEventHandler*)>(&::UnityEngine::UIElements::MouseCaptureController::HasMouseCapture)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6db4f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseCaptureController*>(),
                                                                                           { "HasMouseCapture", {}, { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MouseCaptureController.CaptureMouse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::IEventHandler*)>(&::UnityEngine::UIElements::MouseCaptureController::CaptureMouse)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6db6748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseCaptureController*>(),
                                                                                           { "CaptureMouse", {}, { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::MouseCaptureController::HasMouseCapture(::UnityEngine::UIElements::IEventHandler* handler) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseCaptureController*>(),
                                                                                         { "HasMouseCapture", {}, { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handler);
}
inline void UnityEngine::UIElements::MouseCaptureController::CaptureMouse(::UnityEngine::UIElements::IEventHandler* handler) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseCaptureController*>(),
                                                                                         { "CaptureMouse", {}, { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MouseCaptureController::MouseCaptureController() {}
