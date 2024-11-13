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
inline ::System::Data::__Listeners_1__Action_4<TElem, T1, T2, T3, T4>* System::Data::__Listeners_1__Action_4<TElem, T1, T2, T3, T4>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::__Listeners_1__Action_4<TElem, T1, T2, T3, T4>*>(object, method));
}
template <typename TElem, typename T1, typename T2, typename T3, typename T4>
inline void System::Data::__Listeners_1__Action_4<TElem, T1, T2, T3, T4>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Listeners_1__Action_4<TElem, T1, T2, T3, T4>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TElem, typename T1, typename T2, typename T3, typename T4> inline void System::Data::__Listeners_1__Action_4<TElem, T1, T2, T3, T4>::Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Listeners_1__Action_4<TElem, T1, T2, T3, T4>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arg1, arg2, arg3, arg4);
}
// Ctor Parameters []
template <typename TElem, typename T1, typename T2, typename T3, typename T4> constexpr ::System::Data::__Listeners_1__Action_4<TElem, T1, T2, T3, T4>::__Listeners_1__Action_4() {}
template <typename TElem, typename T1, typename TResult>
inline ::System::Data::__Listeners_1__Func_2<TElem, T1, TResult>* System::Data::__Listeners_1__Func_2<TElem, T1, TResult>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::__Listeners_1__Func_2<TElem, T1, TResult>*>(object, method));
}
template <typename TElem, typename T1, typename TResult> inline void System::Data::__Listeners_1__Func_2<TElem, T1, TResult>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Listeners_1__Func_2<TElem, T1, TResult>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TElem, typename T1, typename TResult> inline TResult System::Data::__Listeners_1__Func_2<TElem, T1, TResult>::Invoke(T1 arg1) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Listeners_1__Func_2<TElem, T1, TResult>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method, arg1);
}
// Ctor Parameters []
template <typename TElem, typename T1, typename TResult> constexpr ::System::Data::__Listeners_1__Func_2<TElem, T1, TResult>::__Listeners_1__Func_2() {}
template <typename TElem> constexpr ::System::Collections::Generic::List_1<TElem>*& System::Data::Listeners_1<TElem>::__cordl_internal_get__listeners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listeners;
}
template <typename TElem>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<TElem>*> const& System::Data::Listeners_1<TElem>::__cordl_internal_get__listeners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listeners;
}
template <typename TElem> constexpr void System::Data::Listeners_1<TElem>::__cordl_internal_set__listeners(::System::Collections::Generic::List_1<TElem>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____listeners, value);
}
template <typename TElem> constexpr ::System::Data::__Listeners_1__Func_2<TElem, TElem, bool>*& System::Data::Listeners_1<TElem>::__cordl_internal_get__filter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filter;
}
template <typename TElem>
constexpr ::cordl_internals::to_const_pointer<::System::Data::__Listeners_1__Func_2<TElem, TElem, bool>*> const& System::Data::Listeners_1<TElem>::__cordl_internal_get__filter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filter;
}
template <typename TElem> constexpr void System::Data::Listeners_1<TElem>::__cordl_internal_set__filter(::System::Data::__Listeners_1__Func_2<TElem, TElem, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____filter, value);
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
template <typename TElem>
inline ::System::Data::Listeners_1<TElem>* System::Data::Listeners_1<TElem>::New_ctor(int32_t ObjectID, ::System::Data::__Listeners_1__Func_2<TElem, TElem, bool>* notifyFilter) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::Listeners_1<TElem>*>(ObjectID, notifyFilter));
}
template <typename TElem> inline void System::Data::Listeners_1<TElem>::_ctor(int32_t ObjectID, ::System::Data::__Listeners_1__Func_2<TElem, TElem, bool>* notifyFilter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Listeners_1<TElem>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::__Listeners_1__Func_2<TElem, TElem, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ObjectID, notifyFilter);
}
template <typename TElem> inline bool System::Data::Listeners_1<TElem>::get_HasListeners() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Listeners_1<TElem>*>::get(), "get_HasListeners",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TElem> inline void System::Data::Listeners_1<TElem>::Add(TElem listener) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Listeners_1<TElem>*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TElem>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listener);
}
template <typename TElem> inline int32_t System::Data::Listeners_1<TElem>::IndexOfReference(TElem listener) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Listeners_1<TElem>*>::get(), "IndexOfReference",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TElem>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, listener);
}
template <typename TElem> inline void System::Data::Listeners_1<TElem>::Remove(TElem listener) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Listeners_1<TElem>*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TElem>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listener);
}
template <typename TElem>
template <typename T1, typename T2, typename T3>
inline void System::Data::Listeners_1<TElem>::Notify(T1 arg1, T2 arg2, T3 arg3, ::System::Data::__Listeners_1__Action_4<TElem, TElem, T1, T2, T3>* action) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Listeners_1<TElem>*>::get(), "Notify",
      std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::__Listeners_1__Action_4<TElem, TElem, T1, T2, T3>*>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arg1, arg2, arg3, action);
}
template <typename TElem> inline void System::Data::Listeners_1<TElem>::RemoveNullListeners(int32_t nullIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Listeners_1<TElem>*>::get(), "RemoveNullListeners",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nullIndex);
}
// Ctor Parameters []
template <typename TElem> constexpr ::System::Data::Listeners_1<TElem>::Listeners_1() {}
