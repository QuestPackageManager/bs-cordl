#pragma once
// IWYU pragma private; include "System/Threading/OSSpecificSynchronizationContext.hpp"
#include "System/Threading/zzzz__SynchronizationContext_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__OSSpecificSynchronizationContext_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
#include "System/Threading/zzzz__OSSpecificSynchronizationContext_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cb03fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate::*)(::System::IntPtr)>(
    &::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate::Invoke)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5cb0528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate*>(),
                                                                                          { ::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate::Invoke(::System::IntPtr arg) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg);
}
inline ::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate* System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                            ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate::OSSpecificSynchronizationContext_InvocationEntryDelegate() {}
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext_InvocationContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::OSSpecificSynchronizationContext_InvocationContext::*)(::System::Threading::SendOrPostCallback*, ::System::Object*)>(
    &::System::Threading::OSSpecificSynchronizationContext_InvocationContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb0468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext_InvocationContext*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Threading::SendOrPostCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext_InvocationContext.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::OSSpecificSynchronizationContext_InvocationContext::*)()>(
    &::System::Threading::OSSpecificSynchronizationContext_InvocationContext::Invoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cb0474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext_InvocationContext*>(), { "Invoke", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::SendOrPostCallback*& System::Threading::OSSpecificSynchronizationContext_InvocationContext::__cordl_internal_get_m_Delegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Delegate;
}
constexpr ::System::Threading::SendOrPostCallback* const& System::Threading::OSSpecificSynchronizationContext_InvocationContext::__cordl_internal_get_m_Delegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Delegate;
}
constexpr void System::Threading::OSSpecificSynchronizationContext_InvocationContext::__cordl_internal_set_m_Delegate(::System::Threading::SendOrPostCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Delegate = value;
}
constexpr ::System::Object*& System::Threading::OSSpecificSynchronizationContext_InvocationContext::__cordl_internal_get_m_State() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_State;
}
constexpr ::System::Object* const& System::Threading::OSSpecificSynchronizationContext_InvocationContext::__cordl_internal_get_m_State() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_State;
}
constexpr void System::Threading::OSSpecificSynchronizationContext_InvocationContext::__cordl_internal_set_m_State(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_State = value;
}
inline void System::Threading::OSSpecificSynchronizationContext_InvocationContext::_ctor(::System::Threading::SendOrPostCallback* d, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext_InvocationContext*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Threading::SendOrPostCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d, state);
}
inline void System::Threading::OSSpecificSynchronizationContext_InvocationContext::Invoke() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext_InvocationContext*>(), { "Invoke", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::OSSpecificSynchronizationContext_InvocationContext*
System::Threading::OSSpecificSynchronizationContext_InvocationContext::New_ctor(::System::Threading::SendOrPostCallback* d, ::System::Object* state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::OSSpecificSynchronizationContext_InvocationContext*>(d, state));
}
// Ctor Parameters []
constexpr ::System::Threading::OSSpecificSynchronizationContext_InvocationContext::OSSpecificSynchronizationContext_InvocationContext() {}
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::OSSpecificSynchronizationContext___c::*)()>(&::System::Threading::OSSpecificSynchronizationContext___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb0814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext___c._Get_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::OSSpecificSynchronizationContext* (::System::Threading::OSSpecificSynchronizationContext___c::*)(::System::Object*)>(
    &::System::Threading::OSSpecificSynchronizationContext___c::_Get_b__3_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5cb0818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext___c*>(), { "<Get>b__3_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Threading::OSSpecificSynchronizationContext___c::setStaticF___9(::System::Threading::OSSpecificSynchronizationContext___c* value) {
  ::cordl_internals::setStaticField<::System::Threading::OSSpecificSynchronizationContext___c*, "<>9", ::System::Threading::OSSpecificSynchronizationContext___c*>(
      std::forward<::System::Threading::OSSpecificSynchronizationContext___c*>(value));
}
inline ::System::Threading::OSSpecificSynchronizationContext___c* System::Threading::OSSpecificSynchronizationContext___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Threading::OSSpecificSynchronizationContext___c*, "<>9", ::System::Threading::OSSpecificSynchronizationContext___c*>();
}
inline void System::Threading::OSSpecificSynchronizationContext___c::setStaticF___9__3_0(
    ::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>* value) {
  ::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*,
                                    "<>9__3_0", ::System::Threading::OSSpecificSynchronizationContext___c*>(
      std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*>(value));
}
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*
System::Threading::OSSpecificSynchronizationContext___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*,
                                           "<>9__3_0", ::System::Threading::OSSpecificSynchronizationContext___c*>();
}
inline void System::Threading::OSSpecificSynchronizationContext___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::OSSpecificSynchronizationContext* System::Threading::OSSpecificSynchronizationContext___c::_Get_b__3_0(::System::Object* _osContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext___c*>(), { "<Get>b__3_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::OSSpecificSynchronizationContext*>(this, ___internal_method, _osContext);
}
inline ::System::Threading::OSSpecificSynchronizationContext___c* System::Threading::OSSpecificSynchronizationContext___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::OSSpecificSynchronizationContext___c*>());
}
// Ctor Parameters []
constexpr ::System::Threading::OSSpecificSynchronizationContext___c::OSSpecificSynchronizationContext___c() {}
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::OSSpecificSynchronizationContext::*)(::System::Object*)>(
    &::System::Threading::OSSpecificSynchronizationContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb0230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::OSSpecificSynchronizationContext* (*)()>(&::System::Threading::OSSpecificSynchronizationContext::Get)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5caff68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext*>(), { "Get", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.CreateCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SynchronizationContext* (::System::Threading::OSSpecificSynchronizationContext::*)()>(
    &::System::Threading::OSSpecificSynchronizationContext::CreateCopy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5cb0240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext*>(),
                                                                                          { ::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::OSSpecificSynchronizationContext::*)(::System::Threading::SendOrPostCallback*, ::System::Object*)>(
    &::System::Threading::OSSpecificSynchronizationContext::Send)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5cb0294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext*>(),
                                                                                          { ::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.Post
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::OSSpecificSynchronizationContext::*)(::System::Threading::SendOrPostCallback*, ::System::Object*)>(
    &::System::Threading::OSSpecificSynchronizationContext::Post)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5cb02cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext*>(),
                                                                                          { ::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.InvocationEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::System::Threading::OSSpecificSynchronizationContext::InvocationEntry)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5cb0054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext*>(), { "InvocationEntry", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.GetOSContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)()>(&::System::Threading::OSSpecificSynchronizationContext::GetOSContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb0238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext*>(), { "GetOSContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.PostInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::IntPtr, ::System::IntPtr)>(&::System::Threading::OSSpecificSynchronizationContext::PostInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb0470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext*>(),
                                                             { "PostInternal", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Threading::OSSpecificSynchronizationContext::__cordl_internal_get_m_OSSynchronizationContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OSSynchronizationContext;
}
constexpr ::System::Object* const& System::Threading::OSSpecificSynchronizationContext::__cordl_internal_get_m_OSSynchronizationContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OSSynchronizationContext;
}
constexpr void System::Threading::OSSpecificSynchronizationContext::__cordl_internal_set_m_OSSynchronizationContext(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OSSynchronizationContext = value;
}
inline void System::Threading::OSSpecificSynchronizationContext::setStaticF_s_ContextCache(
    ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>* value) {
  ::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*, "s_ContextCache",
                                    ::System::Threading::OSSpecificSynchronizationContext*>(
      std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*>(value));
}
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*
System::Threading::OSSpecificSynchronizationContext::getStaticF_s_ContextCache() {
  return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*, "s_ContextCache",
                                           ::System::Threading::OSSpecificSynchronizationContext*>();
}
inline void System::Threading::OSSpecificSynchronizationContext::_ctor(::System::Object* osContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, osContext);
}
inline ::System::Threading::OSSpecificSynchronizationContext* System::Threading::OSSpecificSynchronizationContext::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::OSSpecificSynchronizationContext*>(nullptr, ___internal_method);
}
inline ::System::Threading::SynchronizationContext* System::Threading::OSSpecificSynchronizationContext::CreateCopy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*>(this, ___internal_method);
}
inline void System::Threading::OSSpecificSynchronizationContext::Send(::System::Threading::SendOrPostCallback* d, ::System::Object* state) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d, state);
}
inline void System::Threading::OSSpecificSynchronizationContext::Post(::System::Threading::SendOrPostCallback* d, ::System::Object* state) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d, state);
}
inline void System::Threading::OSSpecificSynchronizationContext::InvocationEntry(::System::IntPtr arg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext*>(), { "InvocationEntry", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arg);
}
inline ::System::Object* System::Threading::OSSpecificSynchronizationContext::GetOSContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext*>(), { "GetOSContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method);
}
inline void System::Threading::OSSpecificSynchronizationContext::PostInternal(::System::Object* osSynchronizationContext, ::System::IntPtr callback, ::System::IntPtr arg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::OSSpecificSynchronizationContext*>(),
                                                           { "PostInternal", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, osSynchronizationContext, callback, arg);
}
inline ::System::Threading::OSSpecificSynchronizationContext* System::Threading::OSSpecificSynchronizationContext::New_ctor(::System::Object* osContext) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::OSSpecificSynchronizationContext*>(osContext));
}
// Ctor Parameters []
constexpr ::System::Threading::OSSpecificSynchronizationContext::OSSpecificSynchronizationContext() {}
