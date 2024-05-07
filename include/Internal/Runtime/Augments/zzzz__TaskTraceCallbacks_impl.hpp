#pragma once
// IWYU pragma private; include "Internal/Runtime/Augments/TaskTraceCallbacks.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Internal/Runtime/Augments/zzzz__TaskTraceCallbacks_def.hpp"
//  Writing Method size for method: ::Internal::Runtime::Augments::TaskTraceCallbacks.get_Enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Internal::Runtime::Augments::TaskTraceCallbacks::*)()>(
    &::Internal::Runtime::Augments::TaskTraceCallbacks::get_Enabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::TaskTraceCallbacks.TaskWaitBegin_Asynchronous
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Internal::Runtime::Augments::TaskTraceCallbacks::*)(int32_t, int32_t, int32_t)>(
    &::Internal::Runtime::Augments::TaskTraceCallbacks::TaskWaitBegin_Asynchronous)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::TaskTraceCallbacks.TaskWaitBegin_Synchronous
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Internal::Runtime::Augments::TaskTraceCallbacks::*)(int32_t, int32_t, int32_t)>(
    &::Internal::Runtime::Augments::TaskTraceCallbacks::TaskWaitBegin_Synchronous)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::TaskTraceCallbacks.TaskWaitEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Internal::Runtime::Augments::TaskTraceCallbacks::*)(int32_t, int32_t, int32_t)>(
    &::Internal::Runtime::Augments::TaskTraceCallbacks::TaskWaitEnd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::TaskTraceCallbacks.TaskScheduled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Internal::Runtime::Augments::TaskTraceCallbacks::*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::Internal::Runtime::Augments::TaskTraceCallbacks::TaskScheduled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(), 8));
    return ___internal_method;
  }
};
inline bool Internal::Runtime::Augments::TaskTraceCallbacks::get_Enabled() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Internal::Runtime::Augments::TaskTraceCallbacks::TaskWaitBegin_Asynchronous(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, OriginatingTaskSchedulerID, OriginatingTaskID, TaskID);
}
inline void Internal::Runtime::Augments::TaskTraceCallbacks::TaskWaitBegin_Synchronous(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, OriginatingTaskSchedulerID, OriginatingTaskID, TaskID);
}
inline void Internal::Runtime::Augments::TaskTraceCallbacks::TaskWaitEnd(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, OriginatingTaskSchedulerID, OriginatingTaskID, TaskID);
}
inline void Internal::Runtime::Augments::TaskTraceCallbacks::TaskScheduled(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID, int32_t CreatingTaskID,
                                                                           int32_t TaskCreationOptions) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, OriginatingTaskSchedulerID, OriginatingTaskID, TaskID, CreatingTaskID, TaskCreationOptions);
}
// Ctor Parameters []
constexpr ::Internal::Runtime::Augments::TaskTraceCallbacks::TaskTraceCallbacks() {}
