#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__AsyncCausalityTracer_def.hpp"
#include "System/Threading/Tasks/zzzz__AsyncCausalityStatus_def.hpp"
#include "System/Threading/Tasks/zzzz__CausalitySynchronousWork_def.hpp"
#include "System/Threading/Tasks/zzzz__CausalityTraceLevel_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::AsyncCausalityTracer.get_LoggingOn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Threading::Tasks::AsyncCausalityTracer::get_LoggingOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x262a984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AsyncCausalityTracer*>::get(),
                                                                               "get_LoggingOn", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AsyncCausalityTracer.TraceOperationCreation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::CausalityTraceLevel, int32_t, ::StringW, uint64_t)>(
    &::System::Threading::Tasks::AsyncCausalityTracer::TraceOperationCreation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x262ded8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AsyncCausalityTracer*>::get(), "TraceOperationCreation", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalityTraceLevel>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AsyncCausalityTracer.TraceOperationCompletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::CausalityTraceLevel, int32_t, ::System::Threading::Tasks::AsyncCausalityStatus)>(
    &::System::Threading::Tasks::AsyncCausalityTracer::TraceOperationCompletion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x262dedc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AsyncCausalityTracer*>::get(), "TraceOperationCompletion", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalityTraceLevel>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::AsyncCausalityStatus>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AsyncCausalityTracer.TraceSynchronousWorkStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Threading::Tasks::CausalityTraceLevel, int32_t, ::System::Threading::Tasks::CausalitySynchronousWork)>(&::System::Threading::Tasks::AsyncCausalityTracer::TraceSynchronousWorkStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x262dee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AsyncCausalityTracer*>::get(), "TraceSynchronousWorkStart", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalityTraceLevel>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalitySynchronousWork>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AsyncCausalityTracer.TraceSynchronousWorkCompletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Threading::Tasks::CausalitySynchronousWork)>(
    &::System::Threading::Tasks::AsyncCausalityTracer::TraceSynchronousWorkCompletion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x262a98c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AsyncCausalityTracer*>::get(), "TraceSynchronousWorkCompletion", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalityTraceLevel>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalitySynchronousWork>::get() })));
    return ___internal_method;
  }
};
inline bool System::Threading::Tasks::AsyncCausalityTracer::get_LoggingOn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AsyncCausalityTracer*>::get(),
                                                                             "get_LoggingOn", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void System::Threading::Tasks::AsyncCausalityTracer::TraceOperationCreation(::System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId, ::StringW operationName,
                                                                                   uint64_t relatedContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AsyncCausalityTracer*>::get(), "TraceOperationCreation", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalityTraceLevel>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, traceLevel, taskId, operationName, relatedContext);
}
inline void System::Threading::Tasks::AsyncCausalityTracer::TraceOperationCompletion(::System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId,
                                                                                     ::System::Threading::Tasks::AsyncCausalityStatus status) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AsyncCausalityTracer*>::get(), "TraceOperationCompletion", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalityTraceLevel>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::AsyncCausalityStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, traceLevel, taskId, status);
}
inline void System::Threading::Tasks::AsyncCausalityTracer::TraceSynchronousWorkStart(::System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId,
                                                                                      ::System::Threading::Tasks::CausalitySynchronousWork work) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AsyncCausalityTracer*>::get(), "TraceSynchronousWorkStart", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalityTraceLevel>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalitySynchronousWork>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, traceLevel, taskId, work);
}
inline void System::Threading::Tasks::AsyncCausalityTracer::TraceSynchronousWorkCompletion(::System::Threading::Tasks::CausalityTraceLevel traceLevel,
                                                                                           ::System::Threading::Tasks::CausalitySynchronousWork work) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AsyncCausalityTracer*>::get(), "TraceSynchronousWorkCompletion", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalityTraceLevel>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalitySynchronousWork>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, traceLevel, work);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::AsyncCausalityTracer::AsyncCausalityTracer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
