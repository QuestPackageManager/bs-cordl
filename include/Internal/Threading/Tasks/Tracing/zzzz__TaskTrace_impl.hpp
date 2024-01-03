#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Internal/Threading/Tasks/Tracing/zzzz__TaskTrace_def.hpp"
#include "Internal/Runtime/Augments/zzzz__TaskTraceCallbacks_def.hpp"
//  Writing Method size for method: ::Internal::Threading::Tasks::Tracing::TaskTrace.get_Enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Internal::Threading::Tasks::Tracing::TaskTrace::get_Enabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x242c348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Threading::Tasks::Tracing::TaskTrace*>::get(),
                                                                               "get_Enabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Threading::Tasks::Tracing::TaskTrace.TaskWaitBegin_Asynchronous
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t, int32_t)>(&::Internal::Threading::Tasks::Tracing::TaskTrace::TaskWaitBegin_Asynchronous)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x242c3a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Threading::Tasks::Tracing::TaskTrace*>::get(), "TaskWaitBegin_Asynchronous", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Threading::Tasks::Tracing::TaskTrace.TaskWaitBegin_Synchronous
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t, int32_t)>(&::Internal::Threading::Tasks::Tracing::TaskTrace::TaskWaitBegin_Synchronous)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x242c42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Threading::Tasks::Tracing::TaskTrace*>::get(), "TaskWaitBegin_Synchronous", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Threading::Tasks::Tracing::TaskTrace.TaskWaitEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t, int32_t)>(&::Internal::Threading::Tasks::Tracing::TaskTrace::TaskWaitEnd)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x242c4b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Threading::Tasks::Tracing::TaskTrace*>::get(), "TaskWaitEnd", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Threading::Tasks::Tracing::TaskTrace.TaskScheduled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::Internal::Threading::Tasks::Tracing::TaskTrace::TaskScheduled)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x242c534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Threading::Tasks::Tracing::TaskTrace*>::get(), "TaskScheduled", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void Internal::Threading::Tasks::Tracing::TaskTrace::setStaticF_s_callbacks(::Internal::Runtime::Augments::TaskTraceCallbacks* value) {
  ::cordl_internals::setStaticField<::Internal::Runtime::Augments::TaskTraceCallbacks*, "s_callbacks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Threading::Tasks::Tracing::TaskTrace*>::get>(
      std::forward<::Internal::Runtime::Augments::TaskTraceCallbacks*>(value));
}
inline ::Internal::Runtime::Augments::TaskTraceCallbacks* Internal::Threading::Tasks::Tracing::TaskTrace::getStaticF_s_callbacks() {
  return ::cordl_internals::getStaticField<::Internal::Runtime::Augments::TaskTraceCallbacks*, "s_callbacks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Threading::Tasks::Tracing::TaskTrace*>::get>();
}
inline bool Internal::Threading::Tasks::Tracing::TaskTrace::get_Enabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Threading::Tasks::Tracing::TaskTrace*>::get(),
                                                                             "get_Enabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Internal::Threading::Tasks::Tracing::TaskTrace::TaskWaitBegin_Asynchronous(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Threading::Tasks::Tracing::TaskTrace*>::get(), "TaskWaitBegin_Asynchronous", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, OriginatingTaskSchedulerID, OriginatingTaskID, TaskID);
}
inline void Internal::Threading::Tasks::Tracing::TaskTrace::TaskWaitBegin_Synchronous(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Threading::Tasks::Tracing::TaskTrace*>::get(), "TaskWaitBegin_Synchronous", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, OriginatingTaskSchedulerID, OriginatingTaskID, TaskID);
}
inline void Internal::Threading::Tasks::Tracing::TaskTrace::TaskWaitEnd(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Threading::Tasks::Tracing::TaskTrace*>::get(), "TaskWaitEnd", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, OriginatingTaskSchedulerID, OriginatingTaskID, TaskID);
}
inline void Internal::Threading::Tasks::Tracing::TaskTrace::TaskScheduled(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID, int32_t CreatingTaskID,
                                                                          int32_t TaskCreationOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Threading::Tasks::Tracing::TaskTrace*>::get(), "TaskScheduled", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, OriginatingTaskSchedulerID, OriginatingTaskID, TaskID, CreatingTaskID, TaskCreationOptions);
}
// Ctor Parameters []
constexpr ::Internal::Threading::Tasks::Tracing::TaskTrace::TaskTrace() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
