#pragma once
// IWYU pragma private; include "System\Threading\CancellationCallbackInfo.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationCallbackInfo::*)(::System::Action_1<::System::Object*>*, ::System::Object*,
                                                                                                               ::System::Threading::ExecutionContext*, ::System::Threading::CancellationTokenSource*)>(
    &::System::Threading::CancellationCallbackInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cac408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationCallbackInfo*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::Threading::ExecutionContext*>(), ::i2c::type_of<::System::Threading::CancellationTokenSource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationCallbackInfo.ExecuteCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationCallbackInfo::*)()>(&::System::Threading::CancellationCallbackInfo::ExecuteCallback)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5caca24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationCallbackInfo*>(), { "ExecuteCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationCallbackInfo.ExecutionContextCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::CancellationCallbackInfo::ExecutionContextCallback)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5cad888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationCallbackInfo*>(), { "ExecutionContextCallback", {}, { ::i2c::type_of<::System::Object*>() } })));
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
  this->___Callback = value;
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
  this->___StateForCallback = value;
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
  this->___TargetExecutionContext = value;
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
  this->___CancellationTokenSource = value;
}
inline void System::Threading::CancellationCallbackInfo::setStaticF_s_executionContextCallback(::System::Threading::ContextCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "s_executionContextCallback", ::System::Threading::CancellationCallbackInfo*>(
      std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Threading::CancellationCallbackInfo::getStaticF_s_executionContextCallback() {
  return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "s_executionContextCallback", ::System::Threading::CancellationCallbackInfo*>();
}
inline void System::Threading::CancellationCallbackInfo::_ctor(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback,
                                                               ::System::Threading::ExecutionContext* targetExecutionContext, ::System::Threading::CancellationTokenSource* cancellationTokenSource) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationCallbackInfo*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::Threading::ExecutionContext*>(), ::i2c::type_of<::System::Threading::CancellationTokenSource*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, stateForCallback, targetExecutionContext, cancellationTokenSource);
}
inline void System::Threading::CancellationCallbackInfo::ExecuteCallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationCallbackInfo*>(), { "ExecuteCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::CancellationCallbackInfo::ExecutionContextCallback(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationCallbackInfo*>(), { "ExecutionContextCallback", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline ::System::Threading::CancellationCallbackInfo* System::Threading::CancellationCallbackInfo::New_ctor(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback,
                                                                                                            ::System::Threading::ExecutionContext* targetExecutionContext,
                                                                                                            ::System::Threading::CancellationTokenSource* cancellationTokenSource) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::CancellationCallbackInfo*>(callback, stateForCallback, targetExecutionContext, cancellationTokenSource));
}
// Ctor Parameters []
constexpr ::System::Threading::CancellationCallbackInfo::CancellationCallbackInfo() {}
