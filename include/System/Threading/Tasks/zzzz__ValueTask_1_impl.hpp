#pragma once
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
template <typename TResult>
inline void GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>::setStaticF___9(::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>*>::get>(
      std::forward<::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>*>(value));
}
template <typename TResult> inline ::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>* GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>*>::get>();
}
template <typename TResult> inline ::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>* GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>*>());
}
template <typename TResult> inline void GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline void GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>::__cctor_b__4_0(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>*>::get(), "<.cctor>b__4_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
// Ctor Parameters []
template <typename TResult> constexpr ::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>::__ValueTask_1__ValueTaskSourceAsTask____c() {}
template <typename TResult> constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*& System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<TResult>::__get__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____source;
}
template <typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*> const&
System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<TResult>::__get__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____source;
}
template <typename TResult>
constexpr void System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<TResult>::__set__source(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr int16_t& System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<TResult>::__get__token() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____token;
}
template <typename TResult> constexpr int16_t const& System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<TResult>::__get__token() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____token;
}
template <typename TResult> constexpr void System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<TResult>::__set__token(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____token = value;
}
template <typename TResult> inline void System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<TResult>::setStaticF_s_completionAction(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "s_completionAction",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<TResult>*>::get>(
      std::forward<::System::Action_1<::System::Object*>*>(value));
}
template <typename TResult> inline ::System::Action_1<::System::Object*>* System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<TResult>::getStaticF_s_completionAction() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "s_completionAction",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<TResult>*>::get>();
}
template <typename TResult>
inline ::System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<TResult>*
System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<TResult>::New_ctor(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* source, int16_t token) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<TResult>*>(source, token));
}
template <typename TResult>
inline void System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<TResult>::_ctor(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* source, int16_t token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, token);
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<TResult>::__ValueTask_1__ValueTaskSourceAsTask() {}
/// @brief Convert operator to "::System::IEquatable_1<::System::Threading::Tasks::ValueTask_1<TResult>>"
template <typename TResult> constexpr System::Threading::Tasks::ValueTask_1<TResult>::operator ::System::IEquatable_1<::System::Threading::Tasks::ValueTask_1<TResult>>*() {
  return static_cast<::System::IEquatable_1<::System::Threading::Tasks::ValueTask_1<TResult>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename TResult> inline void System::Threading::Tasks::ValueTask_1<TResult>::setStaticF_s_canceledTask(::System::Threading::Tasks::Task_1<TResult>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<TResult>*, "s_canceledTask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ValueTask_1<TResult>>::get>(
      std::forward<::System::Threading::Tasks::Task_1<TResult>*>(value));
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::ValueTask_1<TResult>::getStaticF_s_canceledTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<TResult>*, "s_canceledTask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ValueTask_1<TResult>>::get>();
}
template <typename TResult> inline void System::Threading::Tasks::ValueTask_1<TResult>::_ctor(TResult result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ValueTask_1<TResult>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template <typename TResult> inline void System::Threading::Tasks::ValueTask_1<TResult>::_ctor(::System::Threading::Tasks::Task_1<TResult>* task) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ValueTask_1<TResult>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
template <typename TResult> inline void System::Threading::Tasks::ValueTask_1<TResult>::_ctor(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* source, int16_t token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ValueTask_1<TResult>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, token);
}
template <typename TResult> inline void System::Threading::Tasks::ValueTask_1<TResult>::_ctor(::System::Object* obj, TResult result, int16_t token, bool continueOnCapturedContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ValueTask_1<TResult>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, result, token, continueOnCapturedContext);
}
template <typename TResult> inline int32_t System::Threading::Tasks::ValueTask_1<TResult>::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ValueTask_1<TResult>>::get(),
                                                                             "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TResult> inline bool System::Threading::Tasks::ValueTask_1<TResult>::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ValueTask_1<TResult>>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename TResult> inline bool System::Threading::Tasks::ValueTask_1<TResult>::Equals(::System::Threading::Tasks::ValueTask_1<TResult> other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ValueTask_1<TResult>>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::ValueTask_1<TResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::ValueTask_1<TResult>::AsTask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ValueTask_1<TResult>>::get(), "AsTask",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(this, ___internal_method);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::ValueTask_1<TResult>::GetTaskForValueTaskSource(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ValueTask_1<TResult>>::get(), "GetTaskForValueTaskSource", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(this, ___internal_method, t);
}
template <typename TResult> inline bool System::Threading::Tasks::ValueTask_1<TResult>::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ValueTask_1<TResult>>::get(),
                                                                             "get_IsCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> inline bool System::Threading::Tasks::ValueTask_1<TResult>::get_IsCompletedSuccessfully() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ValueTask_1<TResult>>::get(),
                                                                             "get_IsCompletedSuccessfully", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> inline TResult System::Threading::Tasks::ValueTask_1<TResult>::get_Result() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ValueTask_1<TResult>>::get(),
                                                                             "get_Result", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method);
}
template <typename TResult> inline ::System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult> System::Threading::Tasks::ValueTask_1<TResult>::GetAwaiter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ValueTask_1<TResult>>::get(),
                                                                             "GetAwaiter", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult>, false>(this, ___internal_method);
}
template <typename TResult>
inline ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult> System::Threading::Tasks::ValueTask_1<TResult>::ConfigureAwait(bool continueOnCapturedContext) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ValueTask_1<TResult>>::get(), "ConfigureAwait",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>, false>(this, ___internal_method, continueOnCapturedContext);
}
template <typename TResult> inline ::StringW System::Threading::Tasks::ValueTask_1<TResult>::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ValueTask_1<TResult>>::get(),
                                                                             "ToString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_obj", ty: "::System::Object*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_result", ty: "TResult", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "_token", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: Some("{}") }]
template <typename TResult> constexpr ::System::Threading::Tasks::ValueTask_1<TResult>::ValueTask_1(::System::Object* _obj, TResult _result, int16_t _token, bool _continueOnCapturedContext) noexcept {
  this->_obj = _obj;
  this->_result = _result;
  this->_token = _token;
  this->_continueOnCapturedContext = _continueOnCapturedContext;
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Threading::Tasks::ValueTask_1<TResult>::ValueTask_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
