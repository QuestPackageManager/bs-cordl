#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/KeyboardEventExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardEventExtensions_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyDownEvent_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardEventExtensions.ShouldSendNavigationMoveEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::KeyDownEvent*)>(&::UnityEngine::UIElements::KeyboardEventExtensions::ShouldSendNavigationMoveEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d9ab7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardEventExtensions*>(),
                                                                                           { "ShouldSendNavigationMoveEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyDownEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardEventExtensions.ShouldSendNavigationMoveEventRuntime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Event*)>(&::UnityEngine::UIElements::KeyboardEventExtensions::ShouldSendNavigationMoveEventRuntime)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6d9aef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardEventExtensions*>(),
                                                                                           { "ShouldSendNavigationMoveEventRuntime", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::KeyboardEventExtensions::ShouldSendNavigationMoveEvent(::UnityEngine::UIElements::KeyDownEvent* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardEventExtensions*>(),
                                                                                         { "ShouldSendNavigationMoveEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyDownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, e);
}
inline bool UnityEngine::UIElements::KeyboardEventExtensions::ShouldSendNavigationMoveEventRuntime(::UnityEngine::Event* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardEventExtensions*>(),
                                                                                         { "ShouldSendNavigationMoveEventRuntime", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, e);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::KeyboardEventExtensions::KeyboardEventExtensions() {}
