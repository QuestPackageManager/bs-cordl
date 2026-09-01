#pragma once
// IWYU pragma private; include "System\Threading\CancellationCallbackInfo_WithSyncContext.hpp"
#include "System/Threading/zzzz__CancellationCallbackInfo_impl.hpp"
#include "System/Threading/zzzz__CancellationCallbackInfo_WithSyncContext_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CancellationCallbackInfo_WithSyncContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CancellationCallbackInfo_WithSyncContext::*)(
    ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::ExecutionContext*, ::System::Threading::CancellationTokenSource*, ::System::Threading::SynchronizationContext*)>(
    &::GlobalNamespace::CancellationCallbackInfo_WithSyncContext::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cac414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CancellationCallbackInfo_WithSyncContext*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::ExecutionContext*>(),
                                             ::i2c::type_of<::System::Threading::CancellationTokenSource*>(), ::i2c::type_of<::System::Threading::SynchronizationContext*>() } })));
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
  this->___TargetSyncContext = value;
}
inline void GlobalNamespace::CancellationCallbackInfo_WithSyncContext::_ctor(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback,
                                                                             ::System::Threading::ExecutionContext* targetExecutionContext,
                                                                             ::System::Threading::CancellationTokenSource* cancellationTokenSource,
                                                                             ::System::Threading::SynchronizationContext* targetSyncContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CancellationCallbackInfo_WithSyncContext*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::ExecutionContext*>(),
                                           ::i2c::type_of<::System::Threading::CancellationTokenSource*>(), ::i2c::type_of<::System::Threading::SynchronizationContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, stateForCallback, targetExecutionContext, cancellationTokenSource, targetSyncContext);
}
inline ::GlobalNamespace::CancellationCallbackInfo_WithSyncContext* GlobalNamespace::CancellationCallbackInfo_WithSyncContext::New_ctor(
    ::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback, ::System::Threading::ExecutionContext* targetExecutionContext,
    ::System::Threading::CancellationTokenSource* cancellationTokenSource, ::System::Threading::SynchronizationContext* targetSyncContext) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::CancellationCallbackInfo_WithSyncContext*>(callback, stateForCallback, targetExecutionContext, cancellationTokenSource, targetSyncContext));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CancellationCallbackInfo_WithSyncContext::CancellationCallbackInfo_WithSyncContext() {}
