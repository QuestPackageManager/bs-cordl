#pragma once
// IWYU pragma private; include "GlobalNamespace/DelegateList_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DelegateList_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template <typename T>
constexpr ::System::Func_2<::System::Action_1<T>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*&
GlobalNamespace::DelegateList_1<T>::__cordl_internal_get_m_acquireFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_acquireFunc;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Action_1<T>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*> const&
GlobalNamespace::DelegateList_1<T>::__cordl_internal_get_m_acquireFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_acquireFunc;
}
template <typename T>
constexpr void
GlobalNamespace::DelegateList_1<T>::__cordl_internal_set_m_acquireFunc(::System::Func_2<::System::Action_1<T>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_acquireFunc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*& GlobalNamespace::DelegateList_1<T>::__cordl_internal_get_m_releaseFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_releaseFunc;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*> const&
GlobalNamespace::DelegateList_1<T>::__cordl_internal_get_m_releaseFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_releaseFunc;
}
template <typename T>
constexpr void GlobalNamespace::DelegateList_1<T>::__cordl_internal_set_m_releaseFunc(::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_releaseFunc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_1<T>*>*& GlobalNamespace::DelegateList_1<T>::__cordl_internal_get_m_callbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_callbacks;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Action_1<T>*>*> const&
GlobalNamespace::DelegateList_1<T>::__cordl_internal_get_m_callbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_callbacks;
}
template <typename T> constexpr void GlobalNamespace::DelegateList_1<T>::__cordl_internal_set_m_callbacks(::System::Collections::Generic::LinkedList_1<::System::Action_1<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_callbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr bool& GlobalNamespace::DelegateList_1<T>::__cordl_internal_get_m_invoking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_invoking;
}
template <typename T> constexpr bool const& GlobalNamespace::DelegateList_1<T>::__cordl_internal_get_m_invoking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_invoking;
}
template <typename T> constexpr void GlobalNamespace::DelegateList_1<T>::__cordl_internal_set_m_invoking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_invoking = value;
}
template <typename T>
inline ::GlobalNamespace::DelegateList_1<T>*
GlobalNamespace::DelegateList_1<T>::New_ctor(::System::Func_2<::System::Action_1<T>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* acquireFunc,
                                             ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* releaseFunc) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DelegateList_1<T>*>(acquireFunc, releaseFunc));
}
template <typename T>
inline void GlobalNamespace::DelegateList_1<T>::_ctor(::System::Func_2<::System::Action_1<T>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* acquireFunc,
                                                      ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* releaseFunc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Action_1<T>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, acquireFunc, releaseFunc);
}
template <typename T> inline int32_t GlobalNamespace::DelegateList_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<T>*>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::DelegateList_1<T>::Add(::System::Action_1<T>* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<T>*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
template <typename T> inline void GlobalNamespace::DelegateList_1<T>::Remove(::System::Action_1<T>* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<T>*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
template <typename T> inline void GlobalNamespace::DelegateList_1<T>::Invoke(T res) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<T>*>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res);
}
template <typename T> inline void GlobalNamespace::DelegateList_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<T>*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::DelegateList_1<T>* GlobalNamespace::DelegateList_1<T>::CreateWithGlobalCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<T>*>::get(),
                                                                             "CreateWithGlobalCache", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DelegateList_1<T>*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::DelegateList_1<T>::DelegateList_1() {}
