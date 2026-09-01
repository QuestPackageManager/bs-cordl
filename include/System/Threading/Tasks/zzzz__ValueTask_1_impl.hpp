#pragma once
// IWYU pragma private; include "System\Threading\Tasks\ValueTask_1.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TResult>
inline void System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>::setStaticF___9(::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>*, "<>9", ::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>*>(
      std::forward<::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>*>(value));
}
template <typename TResult>
inline ::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>* System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>*, "<>9",
                                           ::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>*>();
}
template <typename TResult> inline void System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TResult> inline void System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>::__cctor_b__4_0(::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>*>(),
                                                                                         { "<.cctor>b__4_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
template <typename TResult> inline ::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>* System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>*>());
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>::ValueTaskSourceAsTask_ValueTask_1___c() {}
template <typename TResult>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*& System::Threading::Tasks::ValueTask_1_ValueTaskSourceAsTask<TResult>::__cordl_internal_get__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____source;
}
template <typename TResult>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* const& System::Threading::Tasks::ValueTask_1_ValueTaskSourceAsTask<TResult>::__cordl_internal_get__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____source;
}
template <typename TResult>
constexpr void System::Threading::Tasks::ValueTask_1_ValueTaskSourceAsTask<TResult>::__cordl_internal_set__source(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____source = value;
}
template <typename TResult> constexpr int16_t& System::Threading::Tasks::ValueTask_1_ValueTaskSourceAsTask<TResult>::__cordl_internal_get__token() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token;
}
template <typename TResult> constexpr int16_t const& System::Threading::Tasks::ValueTask_1_ValueTaskSourceAsTask<TResult>::__cordl_internal_get__token() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token;
}
template <typename TResult> constexpr void System::Threading::Tasks::ValueTask_1_ValueTaskSourceAsTask<TResult>::__cordl_internal_set__token(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____token = value;
}
template <typename TResult> inline void System::Threading::Tasks::ValueTask_1_ValueTaskSourceAsTask<TResult>::setStaticF_s_completionAction(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "s_completionAction", ::System::Threading::Tasks::ValueTask_1_ValueTaskSourceAsTask<TResult>*>(
      std::forward<::System::Action_1<::System::Object*>*>(value));
}
template <typename TResult> inline ::System::Action_1<::System::Object*>* System::Threading::Tasks::ValueTask_1_ValueTaskSourceAsTask<TResult>::getStaticF_s_completionAction() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "s_completionAction", ::System::Threading::Tasks::ValueTask_1_ValueTaskSourceAsTask<TResult>*>();
}
template <typename TResult>
inline void System::Threading::Tasks::ValueTask_1_ValueTaskSourceAsTask<TResult>::_ctor(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* source, int16_t token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask_1_ValueTaskSourceAsTask<TResult>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*>(), ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, token);
}
template <typename TResult>
inline ::System::Threading::Tasks::ValueTask_1_ValueTaskSourceAsTask<TResult>*
System::Threading::Tasks::ValueTask_1_ValueTaskSourceAsTask<TResult>::New_ctor(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* source, int16_t token) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::ValueTask_1_ValueTaskSourceAsTask<TResult>*>(source, token));
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Threading::Tasks::ValueTask_1_ValueTaskSourceAsTask<TResult>::ValueTask_1_ValueTaskSourceAsTask() {}
template <typename TResult> inline void System::Threading::Tasks::ValueTask_1<TResult>::setStaticF_s_canceledTask(::System::Threading::Tasks::Task_1<TResult>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<TResult>*, "s_canceledTask", ::System::Threading::Tasks::ValueTask_1<TResult>>(
      std::forward<::System::Threading::Tasks::Task_1<TResult>*>(value));
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::ValueTask_1<TResult>::getStaticF_s_canceledTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<TResult>*, "s_canceledTask", ::System::Threading::Tasks::ValueTask_1<TResult>>();
}
template <typename TResult> inline void System::Threading::Tasks::ValueTask_1<TResult>::_ctor(TResult result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask_1<TResult>>(), { ".ctor", {}, { ::i2c::type_of<TResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result);
}
template <typename TResult> inline void System::Threading::Tasks::ValueTask_1<TResult>::_ctor(::System::Threading::Tasks::Task_1<TResult>* task) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask_1<TResult>>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<TResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, task);
}
template <typename TResult> inline void System::Threading::Tasks::ValueTask_1<TResult>::_ctor(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* source, int16_t token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask_1<TResult>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*>(), ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, token);
}
template <typename TResult> inline void System::Threading::Tasks::ValueTask_1<TResult>::_ctor(::System::Object* obj, TResult result, int16_t token, bool continueOnCapturedContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask_1<TResult>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<TResult>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, obj, result, token, continueOnCapturedContext);
}
template <typename TResult> inline int32_t System::Threading::Tasks::ValueTask_1<TResult>::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::ValueTask_1<TResult>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename TResult> inline bool System::Threading::Tasks::ValueTask_1<TResult>::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::ValueTask_1<TResult>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename TResult> inline bool System::Threading::Tasks::ValueTask_1<TResult>::Equals(::System::Threading::Tasks::ValueTask_1<TResult> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask_1<TResult>>(), { "Equals", {}, { ::i2c::type_of<::System::Threading::Tasks::ValueTask_1<TResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::ValueTask_1<TResult>::AsTask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask_1<TResult>>(), { "AsTask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(*this, ___internal_method);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::ValueTask_1<TResult>::GetTaskForValueTaskSource(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask_1<TResult>>(),
                                                           { "GetTaskForValueTaskSource", {}, { ::i2c::type_of<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(*this, ___internal_method, t);
}
template <typename TResult> inline bool System::Threading::Tasks::ValueTask_1<TResult>::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask_1<TResult>>(), { "get_IsCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TResult> inline bool System::Threading::Tasks::ValueTask_1<TResult>::get_IsCompletedSuccessfully() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask_1<TResult>>(), { "get_IsCompletedSuccessfully", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TResult> inline TResult System::Threading::Tasks::ValueTask_1<TResult>::get_Result() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask_1<TResult>>(), { "get_Result", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TResult>(*this, ___internal_method);
}
template <typename TResult> inline ::System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult> System::Threading::Tasks::ValueTask_1<TResult>::GetAwaiter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask_1<TResult>>(), { "GetAwaiter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult>>(*this, ___internal_method);
}
template <typename TResult>
inline ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult> System::Threading::Tasks::ValueTask_1<TResult>::ConfigureAwait(bool continueOnCapturedContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask_1<TResult>>(), { "ConfigureAwait", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>>(*this, ___internal_method, continueOnCapturedContext);
}
template <typename TResult> inline ::StringW System::Threading::Tasks::ValueTask_1<TResult>::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::ValueTask_1<TResult>>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Threading::Tasks::ValueTask_1<TResult>>"
template <typename TResult> constexpr System::Threading::Tasks::ValueTask_1<TResult>::operator ::System::IEquatable_1<::System::Threading::Tasks::ValueTask_1<TResult>>*() {
  return static_cast<::System::IEquatable_1<::System::Threading::Tasks::ValueTask_1<TResult>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Threading::Tasks::ValueTask_1<TResult>>"
template <typename TResult>
constexpr ::System::IEquatable_1<::System::Threading::Tasks::ValueTask_1<TResult>>*
System::Threading::Tasks::ValueTask_1<TResult>::i___System__IEquatable_1___System__Threading__Tasks__ValueTask_1_TResult__() {
  return static_cast<::System::IEquatable_1<::System::Threading::Tasks::ValueTask_1<TResult>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_obj", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_result", ty: "TResult", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_token", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: Some("{}") }]
template <typename TResult> constexpr ::System::Threading::Tasks::ValueTask_1<TResult>::ValueTask_1(::System::Object* _obj, TResult _result, int16_t _token, bool _continueOnCapturedContext) noexcept {
  this->_obj = _obj;
  this->_result = _result;
  this->_token = _token;
  this->_continueOnCapturedContext = _continueOnCapturedContext;
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Threading::Tasks::ValueTask_1<TResult>::ValueTask_1() {}
