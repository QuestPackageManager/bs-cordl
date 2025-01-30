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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate::*)(
    ::System::Object*, ::System::IntPtr)>(&::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3e58654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate::*)(::System::IntPtr)>(
    &::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3e587c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate*>::get(), 13));
    return ___internal_method;
  }
};
inline void System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate::Invoke(::System::IntPtr arg) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arg);
}
inline ::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate* System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                            ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate::OSSpecificSynchronizationContext_InvocationEntryDelegate() {}
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext_InvocationContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::OSSpecificSynchronizationContext_InvocationContext::*)(
    ::System::Threading::SendOrPostCallback*, ::System::Object*)>(&::System::Threading::OSSpecificSynchronizationContext_InvocationContext::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3e586e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext_InvocationContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SendOrPostCallback*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext_InvocationContext.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::OSSpecificSynchronizationContext_InvocationContext::*)()>(
    &::System::Threading::OSSpecificSynchronizationContext_InvocationContext::Invoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3e58710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext_InvocationContext*>::get(), "Invoke",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Delegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_State)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Threading::OSSpecificSynchronizationContext_InvocationContext::_ctor(::System::Threading::SendOrPostCallback* d, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext_InvocationContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SendOrPostCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, d, state);
}
inline void System::Threading::OSSpecificSynchronizationContext_InvocationContext::Invoke() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext_InvocationContext*>::get(), "Invoke",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::OSSpecificSynchronizationContext_InvocationContext*
System::Threading::OSSpecificSynchronizationContext_InvocationContext::New_ctor(::System::Threading::SendOrPostCallback* d, ::System::Object* state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::OSSpecificSynchronizationContext_InvocationContext*>(d, state));
}
// Ctor Parameters []
constexpr ::System::Threading::OSSpecificSynchronizationContext_InvocationContext::OSSpecificSynchronizationContext_InvocationContext() {}
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::OSSpecificSynchronizationContext___c::*)()>(
    &::System::Threading::OSSpecificSynchronizationContext___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e58834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext___c._Get_b__3_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::OSSpecificSynchronizationContext* (
    ::System::Threading::OSSpecificSynchronizationContext___c::*)(::System::Object*)>(&::System::Threading::OSSpecificSynchronizationContext___c::_Get_b__3_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3e5883c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext___c*>::get(), "<Get>b__3_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void System::Threading::OSSpecificSynchronizationContext___c::setStaticF___9(::System::Threading::OSSpecificSynchronizationContext___c* value) {
  ::cordl_internals::setStaticField<::System::Threading::OSSpecificSynchronizationContext___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext___c*>::get>(
      std::forward<::System::Threading::OSSpecificSynchronizationContext___c*>(value));
}
inline ::System::Threading::OSSpecificSynchronizationContext___c* System::Threading::OSSpecificSynchronizationContext___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Threading::OSSpecificSynchronizationContext___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext___c*>::get>();
}
inline void System::Threading::OSSpecificSynchronizationContext___c::setStaticF___9__3_0(
    ::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>* value) {
  ::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*,
                                    "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext___c*>::get>(
      std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*>(value));
}
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*
System::Threading::OSSpecificSynchronizationContext___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*,
                                           "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext___c*>::get>();
}
inline void System::Threading::OSSpecificSynchronizationContext___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::OSSpecificSynchronizationContext* System::Threading::OSSpecificSynchronizationContext___c::_Get_b__3_0(::System::Object* _osContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext___c*>::get(), "<Get>b__3_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::OSSpecificSynchronizationContext*, false>(this, ___internal_method, _osContext);
}
inline ::System::Threading::OSSpecificSynchronizationContext___c* System::Threading::OSSpecificSynchronizationContext___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::OSSpecificSynchronizationContext___c*>());
}
// Ctor Parameters []
constexpr ::System::Threading::OSSpecificSynchronizationContext___c::OSSpecificSynchronizationContext___c() {}
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::OSSpecificSynchronizationContext::*)(::System::Object*)>(
    &::System::Threading::OSSpecificSynchronizationContext::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3e5843c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::OSSpecificSynchronizationContext* (*)()>(
    &::System::Threading::OSSpecificSynchronizationContext::Get)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3e58124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(),
                                                                               "Get", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.CreateCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext* (::System::Threading::OSSpecificSynchronizationContext::*)()>(
    &::System::Threading::OSSpecificSynchronizationContext::CreateCopy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3e58468;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::OSSpecificSynchronizationContext::*)(
    ::System::Threading::SendOrPostCallback*, ::System::Object*)>(&::System::Threading::OSSpecificSynchronizationContext::Send)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3e584c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.Post
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::OSSpecificSynchronizationContext::*)(
    ::System::Threading::SendOrPostCallback*, ::System::Object*)>(&::System::Threading::OSSpecificSynchronizationContext::Post)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3e58500;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.InvocationEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::System::Threading::OSSpecificSynchronizationContext::InvocationEntry)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x3e582d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), "InvocationEntry",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.GetOSContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)()>(&::System::Threading::OSSpecificSynchronizationContext::GetOSContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e58464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(),
                                                                               "GetOSContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.PostInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::System::IntPtr, ::System::IntPtr)>(
    &::System::Threading::OSSpecificSynchronizationContext::PostInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e5870c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(),
                                                                               "PostInternal", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OSSynchronizationContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Threading::OSSpecificSynchronizationContext::setStaticF_s_ContextCache(
    ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>* value) {
  ::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*, "s_ContextCache",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get>(
      std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*>(value));
}
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*
System::Threading::OSSpecificSynchronizationContext::getStaticF_s_ContextCache() {
  return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*, "s_ContextCache",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get>();
}
inline void System::Threading::OSSpecificSynchronizationContext::_ctor(::System::Object* osContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, osContext);
}
inline ::System::Threading::OSSpecificSynchronizationContext* System::Threading::OSSpecificSynchronizationContext::Get() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(),
                                                                             "Get", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::OSSpecificSynchronizationContext*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::SynchronizationContext* System::Threading::OSSpecificSynchronizationContext::CreateCopy() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*, false>(this, ___internal_method);
}
inline void System::Threading::OSSpecificSynchronizationContext::Send(::System::Threading::SendOrPostCallback* d, ::System::Object* state) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, d, state);
}
inline void System::Threading::OSSpecificSynchronizationContext::Post(::System::Threading::SendOrPostCallback* d, ::System::Object* state) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, d, state);
}
inline void System::Threading::OSSpecificSynchronizationContext::InvocationEntry(::System::IntPtr arg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), "InvocationEntry",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, arg);
}
inline ::System::Object* System::Threading::OSSpecificSynchronizationContext::GetOSContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(),
                                                                             "GetOSContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method);
}
inline void System::Threading::OSSpecificSynchronizationContext::PostInternal(::System::Object* osSynchronizationContext, ::System::IntPtr callback, ::System::IntPtr arg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(),
                                                                             "PostInternal", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, osSynchronizationContext, callback, arg);
}
inline ::System::Threading::OSSpecificSynchronizationContext* System::Threading::OSSpecificSynchronizationContext::New_ctor(::System::Object* osContext) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::OSSpecificSynchronizationContext*>(osContext));
}
// Ctor Parameters []
constexpr ::System::Threading::OSSpecificSynchronizationContext::OSSpecificSynchronizationContext() {}
