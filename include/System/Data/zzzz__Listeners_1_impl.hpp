#pragma once
// IWYU pragma private; include "System/Data/Listeners_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__Listeners_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Data/zzzz__Listeners_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TElem, typename T1, typename T2, typename T3, typename T4>
inline void System::Data::Listeners_1_Action_4<TElem, T1, T2, T3, T4>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Listeners_1_Action_4<TElem, T1, T2, T3, T4>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TElem, typename T1, typename T2, typename T3, typename T4> inline void System::Data::Listeners_1_Action_4<TElem, T1, T2, T3, T4>::Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Listeners_1_Action_4<TElem, T1, T2, T3, T4>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg1, arg2, arg3, arg4);
}
template <typename TElem, typename T1, typename T2, typename T3, typename T4>
inline ::System::Data::Listeners_1_Action_4<TElem, T1, T2, T3, T4>* System::Data::Listeners_1_Action_4<TElem, T1, T2, T3, T4>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Listeners_1_Action_4<TElem, T1, T2, T3, T4>*>(object, method));
}
// Ctor Parameters []
template <typename TElem, typename T1, typename T2, typename T3, typename T4> constexpr ::System::Data::Listeners_1_Action_4<TElem, T1, T2, T3, T4>::Listeners_1_Action_4() {}
template <typename TElem, typename T1, typename TResult> inline void System::Data::Listeners_1_Func_2<TElem, T1, TResult>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Listeners_1_Func_2<TElem, T1, TResult>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TElem, typename T1, typename TResult> inline TResult System::Data::Listeners_1_Func_2<TElem, T1, TResult>::Invoke(T1 arg1) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Listeners_1_Func_2<TElem, T1, TResult>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method, arg1);
}
template <typename TElem, typename T1, typename TResult>
inline ::System::Data::Listeners_1_Func_2<TElem, T1, TResult>* System::Data::Listeners_1_Func_2<TElem, T1, TResult>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Listeners_1_Func_2<TElem, T1, TResult>*>(object, method));
}
// Ctor Parameters []
template <typename TElem, typename T1, typename TResult> constexpr ::System::Data::Listeners_1_Func_2<TElem, T1, TResult>::Listeners_1_Func_2() {}
template <typename TElem> constexpr ::System::Collections::Generic::List_1<TElem>*& System::Data::Listeners_1<TElem>::__cordl_internal_get__listeners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listeners;
}
template <typename TElem> constexpr ::System::Collections::Generic::List_1<TElem>* const& System::Data::Listeners_1<TElem>::__cordl_internal_get__listeners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listeners;
}
template <typename TElem> constexpr void System::Data::Listeners_1<TElem>::__cordl_internal_set__listeners(::System::Collections::Generic::List_1<TElem>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____listeners = value;
}
template <typename TElem> constexpr ::System::Data::Listeners_1_Func_2<TElem, TElem, bool>*& System::Data::Listeners_1<TElem>::__cordl_internal_get__filter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filter;
}
template <typename TElem> constexpr ::System::Data::Listeners_1_Func_2<TElem, TElem, bool>* const& System::Data::Listeners_1<TElem>::__cordl_internal_get__filter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filter;
}
template <typename TElem> constexpr void System::Data::Listeners_1<TElem>::__cordl_internal_set__filter(::System::Data::Listeners_1_Func_2<TElem, TElem, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filter = value;
}
template <typename TElem> constexpr int32_t& System::Data::Listeners_1<TElem>::__cordl_internal_get__objectID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectID;
}
template <typename TElem> constexpr int32_t const& System::Data::Listeners_1<TElem>::__cordl_internal_get__objectID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectID;
}
template <typename TElem> constexpr void System::Data::Listeners_1<TElem>::__cordl_internal_set__objectID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectID = value;
}
template <typename TElem> constexpr int32_t& System::Data::Listeners_1<TElem>::__cordl_internal_get__listenerReaderCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listenerReaderCount;
}
template <typename TElem> constexpr int32_t const& System::Data::Listeners_1<TElem>::__cordl_internal_get__listenerReaderCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listenerReaderCount;
}
template <typename TElem> constexpr void System::Data::Listeners_1<TElem>::__cordl_internal_set__listenerReaderCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____listenerReaderCount = value;
}
template <typename TElem> inline void System::Data::Listeners_1<TElem>::_ctor(int32_t ObjectID, ::System::Data::Listeners_1_Func_2<TElem, TElem, bool>* notifyFilter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Listeners_1<TElem>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::Listeners_1_Func_2<TElem, TElem, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ObjectID, notifyFilter);
}
template <typename TElem> inline bool System::Data::Listeners_1<TElem>::get_HasListeners() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Listeners_1<TElem>*>(), { "get_HasListeners", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TElem> inline void System::Data::Listeners_1<TElem>::Add(TElem listener) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Listeners_1<TElem>*>(), { "Add", {}, { ::i2c::type_of<TElem>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
template <typename TElem> inline int32_t System::Data::Listeners_1<TElem>::IndexOfReference(TElem listener) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Listeners_1<TElem>*>(), { "IndexOfReference", {}, { ::i2c::type_of<TElem>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, listener);
}
template <typename TElem> inline void System::Data::Listeners_1<TElem>::Remove(TElem listener) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Listeners_1<TElem>*>(), { "Remove", {}, { ::i2c::type_of<TElem>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
template <typename TElem>
template <typename T1, typename T2, typename T3>
inline void System::Data::Listeners_1<TElem>::Notify(T1 arg1, T2 arg2, T3 arg3, ::System::Data::Listeners_1_Action_4<TElem, TElem, T1, T2, T3>* action) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::Listeners_1<TElem>*>(),
                                       { "Notify",
                                         { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() },
                                         { ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<::System::Data::Listeners_1_Action_4<TElem, TElem, T1, T2, T3>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg1, arg2, arg3, action);
}
template <typename TElem> inline void System::Data::Listeners_1<TElem>::RemoveNullListeners(int32_t nullIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Listeners_1<TElem>*>(), { "RemoveNullListeners", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nullIndex);
}
template <typename TElem>
inline ::System::Data::Listeners_1<TElem>* System::Data::Listeners_1<TElem>::New_ctor(int32_t ObjectID, ::System::Data::Listeners_1_Func_2<TElem, TElem, bool>* notifyFilter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Listeners_1<TElem>*>(ObjectID, notifyFilter));
}
// Ctor Parameters []
template <typename TElem> constexpr ::System::Data::Listeners_1<TElem>::Listeners_1() {}
