#pragma once
// IWYU pragma private; include "System/Threading/ManualResetEventSlim.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ManualResetEventSlim_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.get_WaitHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::WaitHandle* (::System::Threading::ManualResetEventSlim::*)()>(&::System::Threading::ManualResetEventSlim::get_WaitHandle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ca7d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "get_WaitHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.get_IsSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ManualResetEventSlim::*)()>(&::System::Threading::ManualResetEventSlim::get_IsSet)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ca7f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "get_IsSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.set_IsSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ManualResetEventSlim::*)(bool)>(&::System::Threading::ManualResetEventSlim::set_IsSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ca7fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "set_IsSet", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.get_SpinCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Threading::ManualResetEventSlim::*)()>(&::System::Threading::ManualResetEventSlim::get_SpinCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ca80cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "get_SpinCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.set_SpinCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ManualResetEventSlim::*)(int32_t)>(&::System::Threading::ManualResetEventSlim::set_SpinCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ca8138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "set_SpinCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.get_Waiters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Threading::ManualResetEventSlim::*)()>(&::System::Threading::ManualResetEventSlim::get_Waiters)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ca8150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "get_Waiters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.set_Waiters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ManualResetEventSlim::*)(int32_t)>(&::System::Threading::ManualResetEventSlim::set_Waiters)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ca81b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "set_Waiters", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ManualResetEventSlim::*)(bool)>(&::System::Threading::ManualResetEventSlim::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ca8238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ManualResetEventSlim::*)(bool, int32_t)>(&::System::Threading::ManualResetEventSlim::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5ca835c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ManualResetEventSlim::*)(bool, int32_t)>(&::System::Threading::ManualResetEventSlim::Initialize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ca82ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "Initialize", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.EnsureLockObjectCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ManualResetEventSlim::*)()>(&::System::Threading::ManualResetEventSlim::EnsureLockObjectCreated)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ca844c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "EnsureLockObjectCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.LazyInitializeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ManualResetEventSlim::*)()>(&::System::Threading::ManualResetEventSlim::LazyInitializeEvent)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5ca7de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "LazyInitializeEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ManualResetEventSlim::*)()>(&::System::Threading::ManualResetEventSlim::Set)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca8530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "Set", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ManualResetEventSlim::*)(bool)>(&::System::Threading::ManualResetEventSlim::Set)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5ca8538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "Set", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ManualResetEventSlim::*)()>(&::System::Threading::ManualResetEventSlim::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ca8730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.Wait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ManualResetEventSlim::*)(int32_t, ::System::Threading::CancellationToken)>(
    &::System::Threading::ManualResetEventSlim::Wait)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x5ca87c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(),
                                                                                           { "Wait", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ManualResetEventSlim::*)()>(&::System::Threading::ManualResetEventSlim::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ca8df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ManualResetEventSlim::*)(bool)>(&::System::Threading::ManualResetEventSlim::Dispose)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5ca8e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { ::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.ThrowIfDisposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ManualResetEventSlim::*)()>(&::System::Threading::ManualResetEventSlim::ThrowIfDisposed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ca7d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "ThrowIfDisposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.CancellationTokenCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::ManualResetEventSlim::CancellationTokenCallback)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5ca8f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "CancellationTokenCallback", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.UpdateStateAtomically
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ManualResetEventSlim::*)(int32_t, int32_t)>(&::System::Threading::ManualResetEventSlim::UpdateStateAtomically)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ca7ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "UpdateStateAtomically", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.ExtractStatePortionAndShiftRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t)>(&::System::Threading::ManualResetEventSlim::ExtractStatePortionAndShiftRight)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ca812c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(),
                                                             { "ExtractStatePortionAndShiftRight", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ManualResetEventSlim.ExtractStatePortion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::System::Threading::ManualResetEventSlim::ExtractStatePortion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca7fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "ExtractStatePortion", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Threading::ManualResetEventSlim::__cordl_internal_get_m_lock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_lock;
}
constexpr ::System::Object* const& System::Threading::ManualResetEventSlim::__cordl_internal_get_m_lock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_lock;
}
constexpr void System::Threading::ManualResetEventSlim::__cordl_internal_set_m_lock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_lock = value;
}
constexpr ::System::Threading::ManualResetEvent*& System::Threading::ManualResetEventSlim::__cordl_internal_get_m_eventObj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_eventObj;
}
constexpr ::System::Threading::ManualResetEvent* const& System::Threading::ManualResetEventSlim::__cordl_internal_get_m_eventObj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_eventObj;
}
constexpr void System::Threading::ManualResetEventSlim::__cordl_internal_set_m_eventObj(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_eventObj = value;
}
constexpr int32_t& System::Threading::ManualResetEventSlim::__cordl_internal_get_m_combinedState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_combinedState;
}
constexpr int32_t const& System::Threading::ManualResetEventSlim::__cordl_internal_get_m_combinedState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_combinedState;
}
constexpr void System::Threading::ManualResetEventSlim::__cordl_internal_set_m_combinedState(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_combinedState = value;
}
inline void System::Threading::ManualResetEventSlim::setStaticF_s_cancellationTokenCallback(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "s_cancellationTokenCallback", ::System::Threading::ManualResetEventSlim*>(
      std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Threading::ManualResetEventSlim::getStaticF_s_cancellationTokenCallback() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "s_cancellationTokenCallback", ::System::Threading::ManualResetEventSlim*>();
}
inline ::System::Threading::WaitHandle* System::Threading::ManualResetEventSlim::get_WaitHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "get_WaitHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*>(this, ___internal_method);
}
inline bool System::Threading::ManualResetEventSlim::get_IsSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "get_IsSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Threading::ManualResetEventSlim::set_IsSet(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "set_IsSet", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Threading::ManualResetEventSlim::get_SpinCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "get_SpinCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Threading::ManualResetEventSlim::set_SpinCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "set_SpinCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Threading::ManualResetEventSlim::get_Waiters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "get_Waiters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Threading::ManualResetEventSlim::set_Waiters(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "set_Waiters", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Threading::ManualResetEventSlim::_ctor(bool initialState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialState);
}
inline void System::Threading::ManualResetEventSlim::_ctor(bool initialState, int32_t spinCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialState, spinCount);
}
inline void System::Threading::ManualResetEventSlim::Initialize(bool initialState, int32_t spinCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "Initialize", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialState, spinCount);
}
inline void System::Threading::ManualResetEventSlim::EnsureLockObjectCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "EnsureLockObjectCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Threading::ManualResetEventSlim::LazyInitializeEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "LazyInitializeEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Threading::ManualResetEventSlim::Set() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "Set", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::ManualResetEventSlim::Set(bool duringCancellation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "Set", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duringCancellation);
}
inline void System::Threading::ManualResetEventSlim::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Threading::ManualResetEventSlim::Wait(int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(),
                                                                                         { "Wait", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, millisecondsTimeout, cancellationToken);
}
inline void System::Threading::ManualResetEventSlim::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::ManualResetEventSlim::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Threading::ManualResetEventSlim::ThrowIfDisposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "ThrowIfDisposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::ManualResetEventSlim::CancellationTokenCallback(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "CancellationTokenCallback", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void System::Threading::ManualResetEventSlim::UpdateStateAtomically(int32_t newBits, int32_t updateBitsMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "UpdateStateAtomically", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newBits, updateBitsMask);
}
inline int32_t System::Threading::ManualResetEventSlim::ExtractStatePortionAndShiftRight(int32_t state, int32_t mask, int32_t rightBitShiftCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(),
                                                           { "ExtractStatePortionAndShiftRight", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, state, mask, rightBitShiftCount);
}
inline int32_t System::Threading::ManualResetEventSlim::ExtractStatePortion(int32_t state, int32_t mask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEventSlim*>(), { "ExtractStatePortion", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, state, mask);
}
inline ::System::Threading::ManualResetEventSlim* System::Threading::ManualResetEventSlim::New_ctor(bool initialState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ManualResetEventSlim*>(initialState));
}
inline ::System::Threading::ManualResetEventSlim* System::Threading::ManualResetEventSlim::New_ctor(bool initialState, int32_t spinCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ManualResetEventSlim*>(initialState, spinCount));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Threading::ManualResetEventSlim::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Threading::ManualResetEventSlim::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Threading::ManualResetEventSlim::ManualResetEventSlim() {}
