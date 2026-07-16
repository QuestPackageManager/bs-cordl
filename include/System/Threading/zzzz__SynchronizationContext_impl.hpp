#pragma once
// IWYU pragma private; include "System/Threading/SynchronizationContext.hpp"
#include "System/Threading/zzzz__SynchronizationContextProperties_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::SynchronizationContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::SynchronizationContext::*)()>(&::System::Threading::SynchronizationContext::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cafcfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SynchronizationContext.IsWaitNotificationRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::SynchronizationContext::*)()>(&::System::Threading::SynchronizationContext::IsWaitNotificationRequired)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cafd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(), { "IsWaitNotificationRequired", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SynchronizationContext.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::SynchronizationContext::*)(::System::Threading::SendOrPostCallback*, ::System::Object*)>(
    &::System::Threading::SynchronizationContext::Send)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cafd0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(), { ::i2c::class_of<::System::Threading::SynchronizationContext*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SynchronizationContext.Post
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::SynchronizationContext::*)(::System::Threading::SendOrPostCallback*, ::System::Object*)>(
    &::System::Threading::SynchronizationContext::Post)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5cafd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(), { ::i2c::class_of<::System::Threading::SynchronizationContext*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SynchronizationContext.OperationStarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::SynchronizationContext::*)()>(&::System::Threading::SynchronizationContext::OperationStarted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cafdc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(), { ::i2c::class_of<::System::Threading::SynchronizationContext*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SynchronizationContext.OperationCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::SynchronizationContext::*)()>(&::System::Threading::SynchronizationContext::OperationCompleted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cafdc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(), { ::i2c::class_of<::System::Threading::SynchronizationContext*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SynchronizationContext.Wait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Threading::SynchronizationContext::*)(::ArrayW<::System::IntPtr>, bool, int32_t)>(
    &::System::Threading::SynchronizationContext::Wait)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5cafdc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(), { ::i2c::class_of<::System::Threading::SynchronizationContext*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SynchronizationContext.WaitHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::System::IntPtr>, bool, int32_t)>(&::System::Threading::SynchronizationContext::WaitHelper)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5cafe28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(),
                                                             { "WaitHelper", {}, { ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SynchronizationContext.SetSynchronizationContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::SynchronizationContext*)>(&::System::Threading::SynchronizationContext::SetSynchronizationContext)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5cafeb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(),
                                                                                           { "SetSynchronizationContext", {}, { ::i2c::type_of<::System::Threading::SynchronizationContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SynchronizationContext.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SynchronizationContext* (*)()>(&::System::Threading::SynchronizationContext::get_Current)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ca757c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SynchronizationContext.get_CurrentNoFlow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SynchronizationContext* (*)()>(&::System::Threading::SynchronizationContext::get_CurrentNoFlow)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5caff34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(), { "get_CurrentNoFlow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SynchronizationContext.GetThreadLocalContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SynchronizationContext* (*)()>(&::System::Threading::SynchronizationContext::GetThreadLocalContext)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5cafee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(), { "GetThreadLocalContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SynchronizationContext.CreateCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SynchronizationContext* (::System::Threading::SynchronizationContext::*)()>(
    &::System::Threading::SynchronizationContext::CreateCopy)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cb000c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(), { ::i2c::class_of<::System::Threading::SynchronizationContext*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SynchronizationContext.get_CurrentExplicit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SynchronizationContext* (*)()>(&::System::Threading::SynchronizationContext::get_CurrentExplicit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb0050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(), { "get_CurrentExplicit", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::SynchronizationContextProperties& System::Threading::SynchronizationContext::__cordl_internal_get__props() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____props;
}
constexpr ::System::Threading::SynchronizationContextProperties const& System::Threading::SynchronizationContext::__cordl_internal_get__props() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____props;
}
constexpr void System::Threading::SynchronizationContext::__cordl_internal_set__props(::System::Threading::SynchronizationContextProperties value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____props = value;
}
inline void System::Threading::SynchronizationContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Threading::SynchronizationContext::IsWaitNotificationRequired() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(), { "IsWaitNotificationRequired", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Threading::SynchronizationContext::Send(::System::Threading::SendOrPostCallback* d, ::System::Object* state) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::SynchronizationContext*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d, state);
}
inline void System::Threading::SynchronizationContext::Post(::System::Threading::SendOrPostCallback* d, ::System::Object* state) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::SynchronizationContext*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d, state);
}
inline void System::Threading::SynchronizationContext::OperationStarted() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::SynchronizationContext*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::SynchronizationContext::OperationCompleted() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::SynchronizationContext*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Threading::SynchronizationContext::Wait(::ArrayW<::System::IntPtr> waitHandles, bool waitAll, int32_t millisecondsTimeout) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::SynchronizationContext*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, waitHandles, waitAll, millisecondsTimeout);
}
inline int32_t System::Threading::SynchronizationContext::WaitHelper(::ArrayW<::System::IntPtr> waitHandles, bool waitAll, int32_t millisecondsTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(),
                                                           { "WaitHelper", {}, { ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, waitHandles, waitAll, millisecondsTimeout);
}
inline void System::Threading::SynchronizationContext::SetSynchronizationContext(::System::Threading::SynchronizationContext* syncContext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(),
                                                                                         { "SetSynchronizationContext", {}, { ::i2c::type_of<::System::Threading::SynchronizationContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, syncContext);
}
inline ::System::Threading::SynchronizationContext* System::Threading::SynchronizationContext::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*>(nullptr, ___internal_method);
}
inline ::System::Threading::SynchronizationContext* System::Threading::SynchronizationContext::get_CurrentNoFlow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(), { "get_CurrentNoFlow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*>(nullptr, ___internal_method);
}
inline ::System::Threading::SynchronizationContext* System::Threading::SynchronizationContext::GetThreadLocalContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(), { "GetThreadLocalContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*>(nullptr, ___internal_method);
}
inline ::System::Threading::SynchronizationContext* System::Threading::SynchronizationContext::CreateCopy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::SynchronizationContext*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*>(this, ___internal_method);
}
inline ::System::Threading::SynchronizationContext* System::Threading::SynchronizationContext::get_CurrentExplicit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SynchronizationContext*>(), { "get_CurrentExplicit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*>(nullptr, ___internal_method);
}
inline ::System::Threading::SynchronizationContext* System::Threading::SynchronizationContext::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::SynchronizationContext*>());
}
// Ctor Parameters []
constexpr ::System::Threading::SynchronizationContext::SynchronizationContext() {}
