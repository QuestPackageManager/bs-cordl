#pragma once
// IWYU pragma private; include "Internal/Runtime/Augments/RuntimeThread.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Internal/Runtime/Augments/zzzz__RuntimeThread_def.hpp"
#include "System/Threading/zzzz__ParameterizedThreadStart_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Internal::Runtime::Augments::RuntimeThread._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Internal::Runtime::Augments::RuntimeThread::*)(::System::Threading::Thread*)>(
    &::Internal::Runtime::Augments::RuntimeThread::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3c6f4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::RuntimeThread*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Thread*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::RuntimeThread.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Internal::Runtime::Augments::RuntimeThread* (*)(::System::Threading::ParameterizedThreadStart*, int32_t)>(
    &::Internal::Runtime::Augments::RuntimeThread::Create)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3c6f518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::RuntimeThread*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ParameterizedThreadStart*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::RuntimeThread.set_IsBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Internal::Runtime::Augments::RuntimeThread::*)(bool)>(
    &::Internal::Runtime::Augments::RuntimeThread::set_IsBackground)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3c6f5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::RuntimeThread*>::get(), "set_IsBackground",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::RuntimeThread.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Internal::Runtime::Augments::RuntimeThread::*)(::System::Object*)>(
    &::Internal::Runtime::Augments::RuntimeThread::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3c6f5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::RuntimeThread*>::get(), "Start", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::RuntimeThread.Sleep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Internal::Runtime::Augments::RuntimeThread::Sleep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c6f5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::RuntimeThread*>::get(), "Sleep", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::RuntimeThread.Yield
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Internal::Runtime::Augments::RuntimeThread::Yield)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c6f5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::RuntimeThread*>::get(), "Yield",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::RuntimeThread.SpinWait
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::Internal::Runtime::Augments::RuntimeThread::SpinWait)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3c6f5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::RuntimeThread*>::get(), "SpinWait", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::RuntimeThread.GetCurrentProcessorId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Internal::Runtime::Augments::RuntimeThread::GetCurrentProcessorId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c6f614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::RuntimeThread*>::get(),
                                                                               "GetCurrentProcessorId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___thread)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Internal::Runtime::Augments::RuntimeThread::setStaticF_OptimalMaxSpinWaitsPerSpinIteration(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "OptimalMaxSpinWaitsPerSpinIteration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::RuntimeThread*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Internal::Runtime::Augments::RuntimeThread::getStaticF_OptimalMaxSpinWaitsPerSpinIteration() {
  return ::cordl_internals::getStaticField<int32_t, "OptimalMaxSpinWaitsPerSpinIteration",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::RuntimeThread*>::get>();
}
inline void Internal::Runtime::Augments::RuntimeThread::_ctor(::System::Threading::Thread* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::RuntimeThread*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Thread*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline ::Internal::Runtime::Augments::RuntimeThread* Internal::Runtime::Augments::RuntimeThread::Create(::System::Threading::ParameterizedThreadStart* start, int32_t maxStackSize) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::RuntimeThread*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ParameterizedThreadStart*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Internal::Runtime::Augments::RuntimeThread*, false>(nullptr, ___internal_method, start, maxStackSize);
}
inline void Internal::Runtime::Augments::RuntimeThread::set_IsBackground(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::RuntimeThread*>::get(), "set_IsBackground",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Internal::Runtime::Augments::RuntimeThread::Start(::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::RuntimeThread*>::get(), "Start", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void Internal::Runtime::Augments::RuntimeThread::Sleep(int32_t millisecondsTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::RuntimeThread*>::get(), "Sleep",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, millisecondsTimeout);
}
inline bool Internal::Runtime::Augments::RuntimeThread::Yield() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::RuntimeThread*>::get(), "Yield",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Internal::Runtime::Augments::RuntimeThread::SpinWait(int32_t iterations) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::RuntimeThread*>::get(), "SpinWait",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, iterations);
}
inline int32_t Internal::Runtime::Augments::RuntimeThread::GetCurrentProcessorId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::RuntimeThread*>::get(),
                                                                             "GetCurrentProcessorId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline ::Internal::Runtime::Augments::RuntimeThread* Internal::Runtime::Augments::RuntimeThread::New_ctor(::System::Threading::Thread* t) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Internal::Runtime::Augments::RuntimeThread*>(t));
}
// Ctor Parameters []
constexpr ::Internal::Runtime::Augments::RuntimeThread::RuntimeThread() {}
