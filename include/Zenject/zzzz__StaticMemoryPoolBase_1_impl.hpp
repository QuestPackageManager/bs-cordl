#pragma once
// IWYU pragma private; include "Zenject/StaticMemoryPoolBase_1.hpp"
#include "Zenject/zzzz__StaticMemoryPoolBaseBase_1_impl.hpp"
#include "Zenject/zzzz__StaticMemoryPoolBase_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template <typename TValue> inline void Zenject::StaticMemoryPoolBase_1<TValue>::_ctor(::System::Action_1<TValue>* onDespawnedMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBase_1<TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onDespawnedMethod);
}
template <typename TValue> inline TValue Zenject::StaticMemoryPoolBase_1<TValue>::Alloc() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBase_1<TValue>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TValue> inline ::Zenject::StaticMemoryPoolBase_1<TValue>* Zenject::StaticMemoryPoolBase_1<TValue>::New_ctor(::System::Action_1<TValue>* onDespawnedMethod) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::StaticMemoryPoolBase_1<TValue>*>(onDespawnedMethod));
}
// Ctor Parameters []
template <typename TValue> constexpr ::Zenject::StaticMemoryPoolBase_1<TValue>::StaticMemoryPoolBase_1() {}
