#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__QueueSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::LinkedList_1<T>*& GlobalNamespace::QueueSet_1<T>::__cordl_internal_get__linkedList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____linkedList;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<T>*> const& GlobalNamespace::QueueSet_1<T>::__cordl_internal_get__linkedList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____linkedList;
}
template <typename T> constexpr void GlobalNamespace::QueueSet_1<T>::__cordl_internal_set__linkedList(::System::Collections::Generic::LinkedList_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____linkedList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::HashSet_1<T>*& GlobalNamespace::QueueSet_1<T>::__cordl_internal_get__set() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____set;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> const& GlobalNamespace::QueueSet_1<T>::__cordl_internal_get__set() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____set;
}
template <typename T> constexpr void GlobalNamespace::QueueSet_1<T>::__cordl_internal_set__set(::System::Collections::Generic::HashSet_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____set)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline int32_t GlobalNamespace::QueueSet_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QueueSet_1<T>*>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::QueueSet_1<T>::Enqueue(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QueueSet_1<T>*>::get(), "Enqueue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline T GlobalNamespace::QueueSet_1<T>::Dequeue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QueueSet_1<T>*>::get(), "Dequeue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::QueueSet_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QueueSet_1<T>*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::QueueSet_1<T>* GlobalNamespace::QueueSet_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::QueueSet_1<T>*>());
}
template <typename T> inline void GlobalNamespace::QueueSet_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QueueSet_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::QueueSet_1<T>::QueueSet_1() {}
