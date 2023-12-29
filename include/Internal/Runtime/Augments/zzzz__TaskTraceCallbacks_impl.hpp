#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Internal/Runtime/Augments/zzzz__TaskTraceCallbacks_def.hpp"
//  Writing Method size for method: ::Internal::Runtime::Augments::TaskTraceCallbacks.get_Enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Internal::Runtime::Augments::TaskTraceCallbacks::*)()>(
    &::Internal::Runtime::Augments::TaskTraceCallbacks::get_Enabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

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

  inline static const ::MethodInfo* methodInfo() {

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

  inline static const ::MethodInfo* methodInfo() {

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

  inline static const ::MethodInfo* methodInfo() {

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

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(), 8));
    return ___internal_method;
  }
};
inline bool Internal::Runtime::Augments::TaskTraceCallbacks::get_Enabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(),
                                                                             "get_Enabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Internal::Runtime::Augments::TaskTraceCallbacks::TaskWaitBegin_Asynchronous(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(), "TaskWaitBegin_Asynchronous", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, OriginatingTaskSchedulerID, OriginatingTaskID, TaskID);
}
inline void Internal::Runtime::Augments::TaskTraceCallbacks::TaskWaitBegin_Synchronous(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(), "TaskWaitBegin_Synchronous", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, OriginatingTaskSchedulerID, OriginatingTaskID, TaskID);
}
inline void Internal::Runtime::Augments::TaskTraceCallbacks::TaskWaitEnd(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(), "TaskWaitEnd", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, OriginatingTaskSchedulerID, OriginatingTaskID, TaskID);
}
inline void Internal::Runtime::Augments::TaskTraceCallbacks::TaskScheduled(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID, int32_t CreatingTaskID,
                                                                           int32_t TaskCreationOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::TaskTraceCallbacks*>::get(), "TaskScheduled", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, OriginatingTaskSchedulerID, OriginatingTaskID, TaskID, CreatingTaskID, TaskCreationOptions);
}
// Ctor Parameters []
constexpr ::Internal::Runtime::Augments::TaskTraceCallbacks::TaskTraceCallbacks() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
