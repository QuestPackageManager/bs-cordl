#pragma once
// IWYU pragma private; include "System\Threading\Monitor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__Monitor_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Monitor.Enter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Monitor::Enter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cad964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "Enter", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.Enter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::by_ref<bool>)>(&::System::Threading::Monitor::Enter)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5caa6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "Enter", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.ThrowLockTakenException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Threading::Monitor::ThrowLockTakenException)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5cb1c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "ThrowLockTakenException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.Exit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Monitor::Exit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cad968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "Exit", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.TryEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::by_ref<bool>)>(&::System::Threading::Monitor::TryEnter)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cb1c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "TryEnter", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.Wait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, int32_t, bool)>(&::System::Threading::Monitor::Wait)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cb1d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "Wait", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.Wait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, int32_t)>(&::System::Threading::Monitor::Wait)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cab018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "Wait", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.Pulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Monitor::Pulse)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5caea10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "Pulse", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.PulseAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Monitor::PulseAll)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5caa904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "PulseAll", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.Monitor_test_synchronised
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::System::Threading::Monitor::Monitor_test_synchronised)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb1f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "Monitor_test_synchronised", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.Monitor_pulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Monitor::Monitor_pulse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb1f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "Monitor_pulse", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.ObjPulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Monitor::ObjPulse)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5cb1e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "ObjPulse", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.Monitor_pulse_all
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Monitor::Monitor_pulse_all)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb1f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "Monitor_pulse_all", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.ObjPulseAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Monitor::ObjPulseAll)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5cb1eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "ObjPulseAll", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.Monitor_wait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, int32_t)>(&::System::Threading::Monitor::Monitor_wait)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb1f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "Monitor_wait", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.ObjWait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool, int32_t, ::System::Object*)>(&::System::Threading::Monitor::ObjWait)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5cb1da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "ObjWait", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.try_enter_with_atomic_var
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, int32_t, ::by_ref<bool>)>(&::System::Threading::Monitor::try_enter_with_atomic_var)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb1f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(),
                                                { "try_enter_with_atomic_var", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.ReliableEnterTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, int32_t, ::by_ref<bool>)>(&::System::Threading::Monitor::ReliableEnterTimeout)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5cb1cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(),
                                                             { "ReliableEnterTimeout", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.ReliableEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::by_ref<bool>)>(&::System::Threading::Monitor::ReliableEnter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cb1c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "ReliableEnter", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
inline void System::Threading::Monitor::Enter(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "Enter", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void System::Threading::Monitor::Enter(::System::Object* obj, ::by_ref<bool> lockTaken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "Enter", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, lockTaken);
}
inline void System::Threading::Monitor::ThrowLockTakenException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "ThrowLockTakenException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Threading::Monitor::Exit(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "Exit", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void System::Threading::Monitor::TryEnter(::System::Object* obj, ::by_ref<bool> lockTaken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "TryEnter", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, lockTaken);
}
inline bool System::Threading::Monitor::Wait(::System::Object* obj, int32_t millisecondsTimeout, bool exitContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "Wait", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, millisecondsTimeout, exitContext);
}
inline bool System::Threading::Monitor::Wait(::System::Object* obj, int32_t millisecondsTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "Wait", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, millisecondsTimeout);
}
inline void System::Threading::Monitor::Pulse(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "Pulse", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void System::Threading::Monitor::PulseAll(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "PulseAll", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline bool System::Threading::Monitor::Monitor_test_synchronised(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "Monitor_test_synchronised", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline void System::Threading::Monitor::Monitor_pulse(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "Monitor_pulse", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void System::Threading::Monitor::ObjPulse(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "ObjPulse", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void System::Threading::Monitor::Monitor_pulse_all(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "Monitor_pulse_all", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void System::Threading::Monitor::ObjPulseAll(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "ObjPulseAll", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline bool System::Threading::Monitor::Monitor_wait(::System::Object* obj, int32_t ms) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "Monitor_wait", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, ms);
}
inline bool System::Threading::Monitor::ObjWait(bool exitContext, int32_t millisecondsTimeout, ::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "ObjWait", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, exitContext, millisecondsTimeout, obj);
}
inline void System::Threading::Monitor::try_enter_with_atomic_var(::System::Object* obj, int32_t millisecondsTimeout, ::by_ref<bool> lockTaken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(),
                                                           { "try_enter_with_atomic_var", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, millisecondsTimeout, lockTaken);
}
inline void System::Threading::Monitor::ReliableEnterTimeout(::System::Object* obj, int32_t timeout, ::by_ref<bool> lockTaken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(),
                                                           { "ReliableEnterTimeout", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, timeout, lockTaken);
}
inline void System::Threading::Monitor::ReliableEnter(::System::Object* obj, ::by_ref<bool> lockTaken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Monitor*>(), { "ReliableEnter", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, lockTaken);
}
// Ctor Parameters []
constexpr ::System::Threading::Monitor::Monitor() {}
