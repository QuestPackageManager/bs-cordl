#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleMemoryPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleMemoryPool_1_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
template <typename T> constexpr ::GlobalNamespace::LazyCopyHashSet_1<T>*& GlobalNamespace::SimpleMemoryPool_1<T>::__cordl_internal_get__activeElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeElements;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<T>*> const& GlobalNamespace::SimpleMemoryPool_1<T>::__cordl_internal_get__activeElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeElements;
}
template <typename T> constexpr void GlobalNamespace::SimpleMemoryPool_1<T>::__cordl_internal_set__activeElements(::GlobalNamespace::LazyCopyHashSet_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeElements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& GlobalNamespace::SimpleMemoryPool_1<T>::__cordl_internal_get__inactiveElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inactiveElements;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& GlobalNamespace::SimpleMemoryPool_1<T>::__cordl_internal_get__inactiveElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inactiveElements;
}
template <typename T> constexpr void GlobalNamespace::SimpleMemoryPool_1<T>::__cordl_internal_set__inactiveElements(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inactiveElements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Func_1<T>*& GlobalNamespace::SimpleMemoryPool_1<T>::__cordl_internal_get__createNewItemFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createNewItemFunc;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& GlobalNamespace::SimpleMemoryPool_1<T>::__cordl_internal_get__createNewItemFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createNewItemFunc;
}
template <typename T> constexpr void GlobalNamespace::SimpleMemoryPool_1<T>::__cordl_internal_set__createNewItemFunc(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____createNewItemFunc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::SimpleMemoryPool_1<T>::get_items() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleMemoryPool_1<T>*>::get(), "get_items",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::SimpleMemoryPool_1<T>* GlobalNamespace::SimpleMemoryPool_1<T>::New_ctor(int32_t startCapacity, ::System::Func_1<T>* createNewItemFunc) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SimpleMemoryPool_1<T>*>(startCapacity, createNewItemFunc));
}
template <typename T> inline void GlobalNamespace::SimpleMemoryPool_1<T>::_ctor(int32_t startCapacity, ::System::Func_1<T>* createNewItemFunc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleMemoryPool_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startCapacity, createNewItemFunc);
}
template <typename T> inline T GlobalNamespace::SimpleMemoryPool_1<T>::Spawn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleMemoryPool_1<T>*>::get(), "Spawn",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::SimpleMemoryPool_1<T>::Despawn(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleMemoryPool_1<T>*>::get(), "Despawn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::SimpleMemoryPool_1<T>::SimpleMemoryPool_1() {}
