#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Experimental/EventDebuggerLogExecuteDefaultAction.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__EventDebuggerLogExecuteDefaultAction_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Experimental::EventDebuggerLogExecuteDefaultAction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Experimental::EventDebuggerLogExecuteDefaultAction::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::Experimental::EventDebuggerLogExecuteDefaultAction::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d1b574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::EventDebuggerLogExecuteDefaultAction>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Experimental::EventDebuggerLogExecuteDefaultAction.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Experimental::EventDebuggerLogExecuteDefaultAction::*)()>(
    &::UnityEngine::UIElements::Experimental::EventDebuggerLogExecuteDefaultAction::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d1b578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::EventDebuggerLogExecuteDefaultAction>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Experimental::EventDebuggerLogExecuteDefaultAction::_ctor(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::EventDebuggerLogExecuteDefaultAction>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Experimental::EventDebuggerLogExecuteDefaultAction::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::EventDebuggerLogExecuteDefaultAction>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::Experimental::EventDebuggerLogExecuteDefaultAction::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::Experimental::EventDebuggerLogExecuteDefaultAction::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Experimental::EventDebuggerLogExecuteDefaultAction::EventDebuggerLogExecuteDefaultAction() {}
