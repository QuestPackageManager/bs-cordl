#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Experimental\EventDebuggerLogCall.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__EventDebuggerLogCall_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Experimental::EventDebuggerLogCall._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Experimental::EventDebuggerLogCall::*)(::System::Delegate*, ::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::Experimental::EventDebuggerLogCall::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d1eaec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::EventDebuggerLogCall>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Experimental::EventDebuggerLogCall.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Experimental::EventDebuggerLogCall::*)()>(
    &::UnityEngine::UIElements::Experimental::EventDebuggerLogCall::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d1eaf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::EventDebuggerLogCall>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Experimental::EventDebuggerLogCall::_ctor(::System::Delegate* callback, ::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::EventDebuggerLogCall>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callback, evt);
}
inline void UnityEngine::UIElements::Experimental::EventDebuggerLogCall::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::EventDebuggerLogCall>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::Experimental::EventDebuggerLogCall::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::Experimental::EventDebuggerLogCall::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Experimental::EventDebuggerLogCall::EventDebuggerLogCall() {}
