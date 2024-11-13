#pragma once
// IWYU pragma private; include "GlobalNamespace/MemoryPoolContainer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
template <typename T> constexpr ::GlobalNamespace::LazyCopyHashSet_1<T>*& GlobalNamespace::MemoryPoolContainer_1<T>::__cordl_internal_get__activeItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeItems;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<T>*> const& GlobalNamespace::MemoryPoolContainer_1<T>::__cordl_internal_get__activeItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeItems;
}
template <typename T> constexpr void GlobalNamespace::MemoryPoolContainer_1<T>::__cordl_internal_set__activeItems(::GlobalNamespace::LazyCopyHashSet_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____activeItems, value);
}
template <typename T> constexpr ::Zenject::IMemoryPool_1<T>*& GlobalNamespace::MemoryPoolContainer_1<T>::__cordl_internal_get__memoryPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memoryPool;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::Zenject::IMemoryPool_1<T>*> const& GlobalNamespace::MemoryPoolContainer_1<T>::__cordl_internal_get__memoryPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memoryPool;
}
template <typename T> constexpr void GlobalNamespace::MemoryPoolContainer_1<T>::__cordl_internal_set__memoryPool(::Zenject::IMemoryPool_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____memoryPool, value);
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::MemoryPoolContainer_1<T>::get_activeItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_1<T>*>::get(),
                                                                             "get_activeItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::MemoryPoolContainer_1<T>* GlobalNamespace::MemoryPoolContainer_1<T>::New_ctor(::Zenject::IMemoryPool_1<T>* memoryPool) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MemoryPoolContainer_1<T>*>(memoryPool));
}
template <typename T> inline void GlobalNamespace::MemoryPoolContainer_1<T>::_ctor(::Zenject::IMemoryPool_1<T>* memoryPool) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IMemoryPool_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, memoryPool);
}
template <typename T> inline T GlobalNamespace::MemoryPoolContainer_1<T>::Spawn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_1<T>*>::get(), "Spawn",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MemoryPoolContainer_1<T>::Despawn(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_1<T>*>::get(), "Despawn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::MemoryPoolContainer_1<T>::DespawnAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_1<T>*>::get(), "DespawnAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MemoryPoolContainer_1<T>::DestroyAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_1<T>*>::get(), "DestroyAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::MemoryPoolContainer_1<T>::MemoryPoolContainer_1() {}
