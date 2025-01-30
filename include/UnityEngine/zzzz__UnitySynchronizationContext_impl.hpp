#pragma once
// IWYU pragma private; include "UnityEngine/UnitySynchronizationContext.hpp"
#include "System/Threading/zzzz__SynchronizationContext_impl.hpp"
#include "UnityEngine/zzzz__UnitySynchronizationContext_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__UnitySynchronizationContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext_WorkRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext_WorkRequest::*)(
    ::System::Threading::SendOrPostCallback*, ::System::Object*, ::System::Threading::ManualResetEvent*)>(&::UnityEngine::UnitySynchronizationContext_WorkRequest::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x48b3934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext_WorkRequest>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SendOrPostCallback*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ManualResetEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext_WorkRequest.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext_WorkRequest::*)()>(
    &::UnityEngine::UnitySynchronizationContext_WorkRequest::Invoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x48b3d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext_WorkRequest>::get(),
                                                                               "Invoke", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UnitySynchronizationContext_WorkRequest::_ctor(::System::Threading::SendOrPostCallback* callback, ::System::Object* state, ::System::Threading::ManualResetEvent* waitHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext_WorkRequest>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SendOrPostCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ManualResetEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, state, waitHandle);
}
inline void UnityEngine::UnitySynchronizationContext_WorkRequest::Invoke() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext_WorkRequest>::get(),
                                                                             "Invoke", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_DelagateCallback", ty: "::System::Threading::SendOrPostCallback*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DelagateState", ty:
// "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_WaitHandle", ty: "::System::Threading::ManualResetEvent*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UnitySynchronizationContext_WorkRequest::UnitySynchronizationContext_WorkRequest(::System::Threading::SendOrPostCallback* m_DelagateCallback,
                                                                                                          ::System::Object* m_DelagateState,
                                                                                                          ::System::Threading::ManualResetEvent* m_WaitHandle) noexcept {
  this->m_DelagateCallback = m_DelagateCallback;
  this->m_DelagateState = m_DelagateState;
  this->m_WaitHandle = m_WaitHandle;
}
// Ctor Parameters []
constexpr ::UnityEngine::UnitySynchronizationContext_WorkRequest::UnitySynchronizationContext_WorkRequest() {}
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)(int32_t)>(&::UnityEngine::UnitySynchronizationContext::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x48b34cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>*, int32_t)>(&::UnityEngine::UnitySynchronizationContext::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x48b3578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)(::System::Threading::SendOrPostCallback*, ::System::Object*)>(
    &::UnityEngine::UnitySynchronizationContext::Send)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x48b3618;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.OperationStarted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)()>(
    &::UnityEngine::UnitySynchronizationContext::OperationStarted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x48b3940;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.OperationCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)()>(
    &::UnityEngine::UnitySynchronizationContext::OperationCompleted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x48b394c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.Post
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)(::System::Threading::SendOrPostCallback*, ::System::Object*)>(
    &::UnityEngine::UnitySynchronizationContext::Post)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x48b3958;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.CreateCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext* (::UnityEngine::UnitySynchronizationContext::*)()>(
    &::UnityEngine::UnitySynchronizationContext::CreateCopy)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x48b3abc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.Exec
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)()>(&::UnityEngine::UnitySynchronizationContext::Exec)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x48b3b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(), "Exec",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.HasPendingTasks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UnitySynchronizationContext::*)()>(
    &::UnityEngine::UnitySynchronizationContext::HasPendingTasks)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x48b3dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                                                                               "HasPendingTasks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.InitializeSynchronizationContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UnitySynchronizationContext::InitializeSynchronizationContext)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x48b3e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(), "InitializeSynchronizationContext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.ExecuteTasks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UnitySynchronizationContext::ExecuteTasks)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x48b3e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                                                                               "ExecuteTasks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.ExecutePendingTasks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int64_t)>(&::UnityEngine::UnitySynchronizationContext::ExecutePendingTasks)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x48b3edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(), "ExecutePendingTasks",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>*& UnityEngine::UnitySynchronizationContext::__cordl_internal_get_m_AsyncWorkQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AsyncWorkQueue;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* const&
UnityEngine::UnitySynchronizationContext::__cordl_internal_get_m_AsyncWorkQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AsyncWorkQueue;
}
constexpr void UnityEngine::UnitySynchronizationContext::__cordl_internal_set_m_AsyncWorkQueue(::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AsyncWorkQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>*& UnityEngine::UnitySynchronizationContext::__cordl_internal_get_m_CurrentFrameWork() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFrameWork;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* const&
UnityEngine::UnitySynchronizationContext::__cordl_internal_get_m_CurrentFrameWork() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFrameWork;
}
constexpr void
UnityEngine::UnitySynchronizationContext::__cordl_internal_set_m_CurrentFrameWork(::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentFrameWork)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UnitySynchronizationContext::__cordl_internal_get_m_MainThreadID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainThreadID;
}
constexpr int32_t const& UnityEngine::UnitySynchronizationContext::__cordl_internal_get_m_MainThreadID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainThreadID;
}
constexpr void UnityEngine::UnitySynchronizationContext::__cordl_internal_set_m_MainThreadID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MainThreadID = value;
}
constexpr int32_t& UnityEngine::UnitySynchronizationContext::__cordl_internal_get_m_TrackedCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedCount;
}
constexpr int32_t const& UnityEngine::UnitySynchronizationContext::__cordl_internal_get_m_TrackedCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedCount;
}
constexpr void UnityEngine::UnitySynchronizationContext::__cordl_internal_set_m_TrackedCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrackedCount = value;
}
inline void UnityEngine::UnitySynchronizationContext::_ctor(int32_t mainThreadID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mainThreadID);
}
inline void UnityEngine::UnitySynchronizationContext::_ctor(::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* queue, int32_t mainThreadID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, queue, mainThreadID);
}
inline void UnityEngine::UnitySynchronizationContext::Send(::System::Threading::SendOrPostCallback* callback, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, state);
}
inline void UnityEngine::UnitySynchronizationContext::OperationStarted() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UnitySynchronizationContext::OperationCompleted() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UnitySynchronizationContext::Post(::System::Threading::SendOrPostCallback* callback, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, state);
}
inline ::System::Threading::SynchronizationContext* UnityEngine::UnitySynchronizationContext::CreateCopy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*, false>(this, ___internal_method);
}
inline void UnityEngine::UnitySynchronizationContext::Exec() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(), "Exec",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UnitySynchronizationContext::HasPendingTasks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                                                                             "HasPendingTasks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UnitySynchronizationContext::InitializeSynchronizationContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                                                                             "InitializeSynchronizationContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UnitySynchronizationContext::ExecuteTasks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(), "ExecuteTasks",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::UnitySynchronizationContext::ExecutePendingTasks(int64_t millisecondsTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(), "ExecutePendingTasks",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, millisecondsTimeout);
}
inline ::UnityEngine::UnitySynchronizationContext* UnityEngine::UnitySynchronizationContext::New_ctor(int32_t mainThreadID) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UnitySynchronizationContext*>(mainThreadID));
}
inline ::UnityEngine::UnitySynchronizationContext*
UnityEngine::UnitySynchronizationContext::New_ctor(::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* queue, int32_t mainThreadID) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UnitySynchronizationContext*>(queue, mainThreadID));
}
// Ctor Parameters []
constexpr ::UnityEngine::UnitySynchronizationContext::UnitySynchronizationContext() {}
