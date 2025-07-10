#pragma once
// IWYU pragma private; include "System/Threading/CancellationCallbackInfo_WithSyncContext.hpp"
#include "System/Threading/zzzz__CancellationCallbackInfo_impl.hpp"
#include "System/Threading/zzzz__CancellationCallbackInfo_WithSyncContext_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CancellationCallbackInfo_WithSyncContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CancellationCallbackInfo_WithSyncContext::*)(
    ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::ExecutionContext*, ::System::Threading::CancellationTokenSource*, ::System::Threading::SynchronizationContext*)>(
    &::GlobalNamespace::CancellationCallbackInfo_WithSyncContext::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3e50694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CancellationCallbackInfo_WithSyncContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationTokenSource*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SynchronizationContext*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::SynchronizationContext*& GlobalNamespace::CancellationCallbackInfo_WithSyncContext::__cordl_internal_get_TargetSyncContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetSyncContext;
}
constexpr ::System::Threading::SynchronizationContext* const& GlobalNamespace::CancellationCallbackInfo_WithSyncContext::__cordl_internal_get_TargetSyncContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetSyncContext;
}
constexpr void GlobalNamespace::CancellationCallbackInfo_WithSyncContext::__cordl_internal_set_TargetSyncContext(::System::Threading::SynchronizationContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TargetSyncContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CancellationCallbackInfo_WithSyncContext::_ctor(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback,
                                                                             ::System::Threading::ExecutionContext* targetExecutionContext,
                                                                             ::System::Threading::CancellationTokenSource* cancellationTokenSource,
                                                                             ::System::Threading::SynchronizationContext* targetSyncContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CancellationCallbackInfo_WithSyncContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationTokenSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SynchronizationContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, stateForCallback, targetExecutionContext, cancellationTokenSource, targetSyncContext);
}
inline ::GlobalNamespace::CancellationCallbackInfo_WithSyncContext* GlobalNamespace::CancellationCallbackInfo_WithSyncContext::New_ctor(
    ::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback, ::System::Threading::ExecutionContext* targetExecutionContext,
    ::System::Threading::CancellationTokenSource* cancellationTokenSource, ::System::Threading::SynchronizationContext* targetSyncContext) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::GlobalNamespace::CancellationCallbackInfo_WithSyncContext*>(callback, stateForCallback, targetExecutionContext, cancellationTokenSource, targetSyncContext));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CancellationCallbackInfo_WithSyncContext::CancellationCallbackInfo_WithSyncContext() {}
