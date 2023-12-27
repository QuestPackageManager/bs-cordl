#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_2_def.hpp"
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
template <typename T0, typename T1> constexpr ::GlobalNamespace::LazyCopyHashSet_1<T1>*& GlobalNamespace::MemoryPoolContainer_2<T0, T1>::__get__activeItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____activeItems;
}
template <typename T0, typename T1>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<T1>*> const& GlobalNamespace::MemoryPoolContainer_2<T0, T1>::__get__activeItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____activeItems;
}
template <typename T0, typename T1> constexpr void GlobalNamespace::MemoryPoolContainer_2<T0, T1>::__set__activeItems(::GlobalNamespace::LazyCopyHashSet_1<T1>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T0, typename T1> constexpr ::Zenject::IMemoryPool_1<T0>*& GlobalNamespace::MemoryPoolContainer_2<T0, T1>::__get__memoryPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____memoryPool;
}
template <typename T0, typename T1> constexpr ::cordl_internals::to_const_pointer<::Zenject::IMemoryPool_1<T0>*> const& GlobalNamespace::MemoryPoolContainer_2<T0, T1>::__get__memoryPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____memoryPool;
}
template <typename T0, typename T1> constexpr void GlobalNamespace::MemoryPoolContainer_2<T0, T1>::__set__memoryPool(::Zenject::IMemoryPool_1<T0>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____memoryPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T0, typename T1> inline ::System::Collections::Generic::List_1<T1>* GlobalNamespace::MemoryPoolContainer_2<T0, T1>::get_activeItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_2<T0, T1>*>::get(),
                                                                             "get_activeItems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T1>*, false>(this, ___internal_method);
}
template <typename T0, typename T1> inline ::GlobalNamespace::MemoryPoolContainer_2<T0, T1>* GlobalNamespace::MemoryPoolContainer_2<T0, T1>::New_ctor(::Zenject::IMemoryPool_1<T0>* memoryPool) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MemoryPoolContainer_2<T0, T1>*>(memoryPool));
}
template <typename T0, typename T1> inline void GlobalNamespace::MemoryPoolContainer_2<T0, T1>::_ctor(::Zenject::IMemoryPool_1<T0>* memoryPool) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_2<T0, T1>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IMemoryPool_1<T0>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, memoryPool);
}
template <typename T0, typename T1> inline T0 GlobalNamespace::MemoryPoolContainer_2<T0, T1>::Spawn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_2<T0, T1>*>::get(), "Spawn",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T0, false>(this, ___internal_method);
}
template <typename T0, typename T1> inline void GlobalNamespace::MemoryPoolContainer_2<T0, T1>::Despawn(T0 item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_2<T0, T1>*>::get(), "Despawn", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
// Ctor Parameters []
template <typename T0, typename T1> constexpr ::GlobalNamespace::MemoryPoolContainer_2<T0, T1>::MemoryPoolContainer_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
