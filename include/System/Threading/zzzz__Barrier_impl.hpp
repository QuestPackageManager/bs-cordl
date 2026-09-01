#pragma once
// IWYU pragma private; include "System\Threading\Barrier.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__Barrier_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__ManualResetEventSlim_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Barrier.get_CurrentPhaseNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Threading::Barrier::*)()>(&::System::Threading::Barrier::get_CurrentPhaseNumber)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x637b300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "get_CurrentPhaseNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Barrier.set_CurrentPhaseNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Barrier::*)(int64_t)>(&::System::Threading::Barrier::set_CurrentPhaseNumber)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x637b30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "set_CurrentPhaseNumber", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Barrier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Barrier::*)(int32_t)>(&::System::Threading::Barrier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x637b318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Barrier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Barrier::*)(int32_t, ::System::Action_1<::System::Threading::Barrier*>*)>(&::System::Threading::Barrier::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x637b320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::System::Threading::Barrier*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Barrier.GetCurrentTotal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Barrier::*)(int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<bool>)>(
    &::System::Threading::Barrier::GetCurrentTotal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x637b498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(),
                            { "GetCurrentTotal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Barrier.SetCurrentTotal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Barrier::*)(int32_t, int32_t, int32_t, bool)>(&::System::Threading::Barrier::SetCurrentTotal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x637b4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(),
                                                             { "SetCurrentTotal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Barrier.SignalAndWait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Barrier::*)()>(&::System::Threading::Barrier::SignalAndWait)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x637b4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "SignalAndWait", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Barrier.SignalAndWait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Barrier::*)(::System::Threading::CancellationToken)>(&::System::Threading::Barrier::SignalAndWait)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x637b500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "SignalAndWait", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Barrier.SignalAndWait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Barrier::*)(int32_t, ::System::Threading::CancellationToken)>(&::System::Threading::Barrier::SignalAndWait)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x637b50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "SignalAndWait", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Barrier.FinishPhase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Barrier::*)(bool)>(&::System::Threading::Barrier::FinishPhase)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x637ba48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "FinishPhase", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Barrier.InvokePostPhaseAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Barrier::InvokePostPhaseAction)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x637bf94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "InvokePostPhaseAction", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Barrier.SetResetEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Barrier::*)(bool)>(&::System::Threading::Barrier::SetResetEvents)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x637bf30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "SetResetEvents", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Barrier.WaitCurrentPhase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Barrier::*)(::System::Threading::ManualResetEventSlim*, int64_t)>(&::System::Threading::Barrier::WaitCurrentPhase)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x637be78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(),
                                                             { "WaitCurrentPhase", {}, { ::i2c::type_of<::System::Threading::ManualResetEventSlim*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Barrier.DiscontinuousWait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Barrier::*)(::System::Threading::ManualResetEventSlim*, int32_t, ::System::Threading::CancellationToken, int64_t)>(
    &::System::Threading::Barrier::DiscontinuousWait)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x637bd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "DiscontinuousWait",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::System::Threading::ManualResetEventSlim*>(), ::i2c::type_of<int32_t>(),
                                                                                                      ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Barrier.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Barrier::*)()>(&::System::Threading::Barrier::Dispose)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x637c02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Barrier.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Barrier::*)(bool)>(&::System::Threading::Barrier::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x637c110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { ::i2c::class_of<::System::Threading::Barrier*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Barrier.ThrowIfDisposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Barrier::*)()>(&::System::Threading::Barrier::ThrowIfDisposed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x637b9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "ThrowIfDisposed", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Threading::Barrier::__cordl_internal_get_m_currentTotalCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentTotalCount;
}
constexpr int32_t const& System::Threading::Barrier::__cordl_internal_get_m_currentTotalCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentTotalCount;
}
constexpr void System::Threading::Barrier::__cordl_internal_set_m_currentTotalCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_currentTotalCount = value;
}
constexpr int64_t& System::Threading::Barrier::__cordl_internal_get_m_currentPhase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentPhase;
}
constexpr int64_t const& System::Threading::Barrier::__cordl_internal_get_m_currentPhase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentPhase;
}
constexpr void System::Threading::Barrier::__cordl_internal_set_m_currentPhase(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_currentPhase = value;
}
constexpr bool& System::Threading::Barrier::__cordl_internal_get_m_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr bool const& System::Threading::Barrier::__cordl_internal_get_m_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr void System::Threading::Barrier::__cordl_internal_set_m_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_disposed = value;
}
constexpr ::System::Threading::ManualResetEventSlim*& System::Threading::Barrier::__cordl_internal_get_m_oddEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_oddEvent;
}
constexpr ::System::Threading::ManualResetEventSlim* const& System::Threading::Barrier::__cordl_internal_get_m_oddEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_oddEvent;
}
constexpr void System::Threading::Barrier::__cordl_internal_set_m_oddEvent(::System::Threading::ManualResetEventSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_oddEvent = value;
}
constexpr ::System::Threading::ManualResetEventSlim*& System::Threading::Barrier::__cordl_internal_get_m_evenEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_evenEvent;
}
constexpr ::System::Threading::ManualResetEventSlim* const& System::Threading::Barrier::__cordl_internal_get_m_evenEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_evenEvent;
}
constexpr void System::Threading::Barrier::__cordl_internal_set_m_evenEvent(::System::Threading::ManualResetEventSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_evenEvent = value;
}
constexpr ::System::Threading::ExecutionContext*& System::Threading::Barrier::__cordl_internal_get_m_ownerThreadContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ownerThreadContext;
}
constexpr ::System::Threading::ExecutionContext* const& System::Threading::Barrier::__cordl_internal_get_m_ownerThreadContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ownerThreadContext;
}
constexpr void System::Threading::Barrier::__cordl_internal_set_m_ownerThreadContext(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ownerThreadContext = value;
}
constexpr ::System::Action_1<::System::Threading::Barrier*>*& System::Threading::Barrier::__cordl_internal_get_m_postPhaseAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_postPhaseAction;
}
constexpr ::System::Action_1<::System::Threading::Barrier*>* const& System::Threading::Barrier::__cordl_internal_get_m_postPhaseAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_postPhaseAction;
}
constexpr void System::Threading::Barrier::__cordl_internal_set_m_postPhaseAction(::System::Action_1<::System::Threading::Barrier*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_postPhaseAction = value;
}
constexpr ::System::Exception*& System::Threading::Barrier::__cordl_internal_get_m_exception() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_exception;
}
constexpr ::System::Exception* const& System::Threading::Barrier::__cordl_internal_get_m_exception() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_exception;
}
constexpr void System::Threading::Barrier::__cordl_internal_set_m_exception(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_exception = value;
}
constexpr int32_t& System::Threading::Barrier::__cordl_internal_get_m_actionCallerID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_actionCallerID;
}
constexpr int32_t const& System::Threading::Barrier::__cordl_internal_get_m_actionCallerID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_actionCallerID;
}
constexpr void System::Threading::Barrier::__cordl_internal_set_m_actionCallerID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_actionCallerID = value;
}
inline void System::Threading::Barrier::setStaticF_s_invokePostPhaseAction(::System::Threading::ContextCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "s_invokePostPhaseAction", ::System::Threading::Barrier*>(std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Threading::Barrier::getStaticF_s_invokePostPhaseAction() {
  return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "s_invokePostPhaseAction", ::System::Threading::Barrier*>();
}
inline int64_t System::Threading::Barrier::get_CurrentPhaseNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "get_CurrentPhaseNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Threading::Barrier::set_CurrentPhaseNumber(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "set_CurrentPhaseNumber", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Threading::Barrier::_ctor(int32_t participantCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, participantCount);
}
inline void System::Threading::Barrier::_ctor(int32_t participantCount, ::System::Action_1<::System::Threading::Barrier*>* postPhaseAction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::System::Threading::Barrier*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, participantCount, postPhaseAction);
}
inline void System::Threading::Barrier::GetCurrentTotal(int32_t currentTotal, ::by_ref<int32_t> current, ::by_ref<int32_t> total, ::by_ref<bool> sense) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(),
                          { "GetCurrentTotal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTotal, current, total, sense);
}
inline bool System::Threading::Barrier::SetCurrentTotal(int32_t currentTotal, int32_t current, int32_t total, bool sense) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(),
                                                           { "SetCurrentTotal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, currentTotal, current, total, sense);
}
inline void System::Threading::Barrier::SignalAndWait() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "SignalAndWait", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Barrier::SignalAndWait(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "SignalAndWait", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cancellationToken);
}
inline bool System::Threading::Barrier::SignalAndWait(int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "SignalAndWait", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, millisecondsTimeout, cancellationToken);
}
inline void System::Threading::Barrier::FinishPhase(bool observedSense) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "FinishPhase", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, observedSense);
}
inline void System::Threading::Barrier::InvokePostPhaseAction(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "InvokePostPhaseAction", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void System::Threading::Barrier::SetResetEvents(bool observedSense) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "SetResetEvents", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, observedSense);
}
inline void System::Threading::Barrier::WaitCurrentPhase(::System::Threading::ManualResetEventSlim* currentPhaseEvent, int64_t observedPhase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "WaitCurrentPhase", {}, { ::i2c::type_of<::System::Threading::ManualResetEventSlim*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentPhaseEvent, observedPhase);
}
inline bool System::Threading::Barrier::DiscontinuousWait(::System::Threading::ManualResetEventSlim* currentPhaseEvent, int32_t totalTimeout, ::System::Threading::CancellationToken token,
                                                          int64_t observedPhase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "DiscontinuousWait",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::System::Threading::ManualResetEventSlim*>(), ::i2c::type_of<int32_t>(),
                                                                                                    ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, currentPhaseEvent, totalTimeout, token, observedPhase);
}
inline void System::Threading::Barrier::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Barrier::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Barrier*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Threading::Barrier::ThrowIfDisposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Barrier*>(), { "ThrowIfDisposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Barrier* System::Threading::Barrier::New_ctor(int32_t participantCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Barrier*>(participantCount));
}
inline ::System::Threading::Barrier* System::Threading::Barrier::New_ctor(int32_t participantCount, ::System::Action_1<::System::Threading::Barrier*>* postPhaseAction) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Barrier*>(participantCount, postPhaseAction));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Threading::Barrier::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Threading::Barrier::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Threading::Barrier::Barrier() {}
