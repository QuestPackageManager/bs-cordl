#pragma once
// IWYU pragma private; include "System/Threading/CancellationCallbackInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__CancellationCallbackInfo_def.hpp"
#include "System/Threading/zzzz__CancellationCallbackInfo_WithSyncContext_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::CancellationCallbackInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationCallbackInfo::*)(
    ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::ExecutionContext*, ::System::Threading::CancellationTokenSource*)>(
    &::System::Threading::CancellationCallbackInfo::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3e4f204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationCallbackInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationTokenSource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationCallbackInfo.ExecuteCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationCallbackInfo::*)()>(
    &::System::Threading::CancellationCallbackInfo::ExecuteCallback)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3e4f890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationCallbackInfo*>::get(),
                                                                               "ExecuteCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationCallbackInfo.ExecutionContextCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Threading::CancellationCallbackInfo::ExecutionContextCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3e502f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationCallbackInfo*>::get(), "ExecutionContextCallback",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::System::Object*>*& System::Threading::CancellationCallbackInfo::__cordl_internal_get_Callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Callback;
}
constexpr ::System::Action_1<::System::Object*>* const& System::Threading::CancellationCallbackInfo::__cordl_internal_get_Callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Callback;
}
constexpr void System::Threading::CancellationCallbackInfo::__cordl_internal_set_Callback(::System::Action_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Threading::CancellationCallbackInfo::__cordl_internal_get_StateForCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StateForCallback;
}
constexpr ::System::Object* const& System::Threading::CancellationCallbackInfo::__cordl_internal_get_StateForCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StateForCallback;
}
constexpr void System::Threading::CancellationCallbackInfo::__cordl_internal_set_StateForCallback(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___StateForCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ExecutionContext*& System::Threading::CancellationCallbackInfo::__cordl_internal_get_TargetExecutionContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetExecutionContext;
}
constexpr ::System::Threading::ExecutionContext* const& System::Threading::CancellationCallbackInfo::__cordl_internal_get_TargetExecutionContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetExecutionContext;
}
constexpr void System::Threading::CancellationCallbackInfo::__cordl_internal_set_TargetExecutionContext(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TargetExecutionContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& System::Threading::CancellationCallbackInfo::__cordl_internal_get_CancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& System::Threading::CancellationCallbackInfo::__cordl_internal_get_CancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CancellationTokenSource;
}
constexpr void System::Threading::CancellationCallbackInfo::__cordl_internal_set_CancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Threading::CancellationCallbackInfo::setStaticF_s_executionContextCallback(::System::Threading::ContextCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "s_executionContextCallback",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationCallbackInfo*>::get>(
      std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Threading::CancellationCallbackInfo::getStaticF_s_executionContextCallback() {
  return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "s_executionContextCallback",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationCallbackInfo*>::get>();
}
inline void System::Threading::CancellationCallbackInfo::_ctor(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback,
                                                               ::System::Threading::ExecutionContext* targetExecutionContext, ::System::Threading::CancellationTokenSource* cancellationTokenSource) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationCallbackInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationTokenSource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, stateForCallback, targetExecutionContext, cancellationTokenSource);
}
inline void System::Threading::CancellationCallbackInfo::ExecuteCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationCallbackInfo*>::get(),
                                                                             "ExecuteCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::CancellationCallbackInfo::ExecutionContextCallback(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationCallbackInfo*>::get(), "ExecutionContextCallback",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
inline ::System::Threading::CancellationCallbackInfo* System::Threading::CancellationCallbackInfo::New_ctor(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback,
                                                                                                            ::System::Threading::ExecutionContext* targetExecutionContext,
                                                                                                            ::System::Threading::CancellationTokenSource* cancellationTokenSource) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::CancellationCallbackInfo*>(callback, stateForCallback, targetExecutionContext, cancellationTokenSource));
}
// Ctor Parameters []
constexpr ::System::Threading::CancellationCallbackInfo::CancellationCallbackInfo() {}
