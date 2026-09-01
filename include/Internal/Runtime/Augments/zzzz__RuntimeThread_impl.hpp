#pragma once
// IWYU pragma private; include "Internal\Runtime\Augments\RuntimeThread.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Internal/Runtime/Augments/zzzz__RuntimeThread_def.hpp"
#include "System/Threading/zzzz__ParameterizedThreadStart_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Internal::Runtime::Augments::RuntimeThread._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Internal::Runtime::Augments::RuntimeThread::*)(::System::Threading::Thread*)>(&::Internal::Runtime::Augments::RuntimeThread::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac7980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::RuntimeThread*>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::Thread*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::RuntimeThread.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Internal::Runtime::Augments::RuntimeThread* (*)(::System::Threading::ParameterizedThreadStart*, int32_t)>(
    &::Internal::Runtime::Augments::RuntimeThread::Create)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ac7988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::RuntimeThread*>(),
                                                             { "Create", {}, { ::i2c::type_of<::System::Threading::ParameterizedThreadStart*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::RuntimeThread.set_IsBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Internal::Runtime::Augments::RuntimeThread::*)(bool)>(&::Internal::Runtime::Augments::RuntimeThread::set_IsBackground)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ac7a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::RuntimeThread*>(), { "set_IsBackground", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::RuntimeThread.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Internal::Runtime::Augments::RuntimeThread::*)(::System::Object*)>(&::Internal::Runtime::Augments::RuntimeThread::Start)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ac7a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::RuntimeThread*>(), { "Start", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::RuntimeThread.Sleep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Internal::Runtime::Augments::RuntimeThread::Sleep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac7a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::RuntimeThread*>(), { "Sleep", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::RuntimeThread.Yield
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Internal::Runtime::Augments::RuntimeThread::Yield)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ac7a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::RuntimeThread*>(), { "Yield", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::RuntimeThread.SpinWait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Internal::Runtime::Augments::RuntimeThread::SpinWait)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac7a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::RuntimeThread*>(), { "SpinWait", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::RuntimeThread.GetCurrentProcessorId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Internal::Runtime::Augments::RuntimeThread::GetCurrentProcessorId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac7a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::RuntimeThread*>(), { "GetCurrentProcessorId", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Thread*& Internal::Runtime::Augments::RuntimeThread::__cordl_internal_get_thread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thread;
}
constexpr ::System::Threading::Thread* const& Internal::Runtime::Augments::RuntimeThread::__cordl_internal_get_thread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thread;
}
constexpr void Internal::Runtime::Augments::RuntimeThread::__cordl_internal_set_thread(::System::Threading::Thread* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___thread = value;
}
inline void Internal::Runtime::Augments::RuntimeThread::setStaticF_OptimalMaxSpinWaitsPerSpinIteration(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "OptimalMaxSpinWaitsPerSpinIteration", ::Internal::Runtime::Augments::RuntimeThread*>(std::forward<int32_t>(value));
}
inline int32_t Internal::Runtime::Augments::RuntimeThread::getStaticF_OptimalMaxSpinWaitsPerSpinIteration() {
  return ::cordl_internals::getStaticField<int32_t, "OptimalMaxSpinWaitsPerSpinIteration", ::Internal::Runtime::Augments::RuntimeThread*>();
}
inline void Internal::Runtime::Augments::RuntimeThread::_ctor(::System::Threading::Thread* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::RuntimeThread*>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::Thread*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::Internal::Runtime::Augments::RuntimeThread* Internal::Runtime::Augments::RuntimeThread::Create(::System::Threading::ParameterizedThreadStart* start, int32_t maxStackSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::RuntimeThread*>(),
                                                           { "Create", {}, { ::i2c::type_of<::System::Threading::ParameterizedThreadStart*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Internal::Runtime::Augments::RuntimeThread*>(nullptr, ___internal_method, start, maxStackSize);
}
inline void Internal::Runtime::Augments::RuntimeThread::set_IsBackground(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::RuntimeThread*>(), { "set_IsBackground", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Internal::Runtime::Augments::RuntimeThread::Start(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::RuntimeThread*>(), { "Start", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Internal::Runtime::Augments::RuntimeThread::Sleep(int32_t millisecondsTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::RuntimeThread*>(), { "Sleep", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, millisecondsTimeout);
}
inline bool Internal::Runtime::Augments::RuntimeThread::Yield() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::RuntimeThread*>(), { "Yield", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Internal::Runtime::Augments::RuntimeThread::SpinWait(int32_t iterations) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::RuntimeThread*>(), { "SpinWait", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, iterations);
}
inline int32_t Internal::Runtime::Augments::RuntimeThread::GetCurrentProcessorId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::RuntimeThread*>(), { "GetCurrentProcessorId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::Internal::Runtime::Augments::RuntimeThread* Internal::Runtime::Augments::RuntimeThread::New_ctor(::System::Threading::Thread* t) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Internal::Runtime::Augments::RuntimeThread*>(t));
}
// Ctor Parameters []
constexpr ::Internal::Runtime::Augments::RuntimeThread::RuntimeThread() {}
