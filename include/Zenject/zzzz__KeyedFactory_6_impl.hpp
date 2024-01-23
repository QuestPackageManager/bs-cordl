#pragma once
#include "Zenject/zzzz__KeyedFactoryBase_2_impl.hpp"
#include "Zenject/zzzz__KeyedFactory_6_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TBase, typename TKey, typename TParam1, typename TParam2, typename TParam3, typename TParam4>
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::KeyedFactory_6<TBase, TKey, TParam1, TParam2, TParam3, TParam4>::get_ProvidedTypes() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactory_6<TBase, TKey, TParam1, TParam2, TParam3, TParam4>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(this, ___internal_method);
}
template <typename TBase, typename TKey, typename TParam1, typename TParam2, typename TParam3, typename TParam4>
inline TBase Zenject::KeyedFactory_6<TBase, TKey, TParam1, TParam2, TParam3, TParam4>::Create(TKey key, TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactory_6<TBase, TKey, TParam1, TParam2, TParam3, TParam4>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<TBase, false>(this, ___internal_method, key, param1, param2, param3, param4);
}
template <typename TBase, typename TKey, typename TParam1, typename TParam2, typename TParam3, typename TParam4>
inline ::Zenject::KeyedFactory_6<TBase, TKey, TParam1, TParam2, TParam3, TParam4>* Zenject::KeyedFactory_6<TBase, TKey, TParam1, TParam2, TParam3, TParam4>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::KeyedFactory_6<TBase, TKey, TParam1, TParam2, TParam3, TParam4>*>());
}
template <typename TBase, typename TKey, typename TParam1, typename TParam2, typename TParam3, typename TParam4>
inline void Zenject::KeyedFactory_6<TBase, TKey, TParam1, TParam2, TParam3, TParam4>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactory_6<TBase, TKey, TParam1, TParam2, TParam3, TParam4>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBase, typename TKey, typename TParam1, typename TParam2, typename TParam3, typename TParam4>
inline ::System::Object* Zenject::KeyedFactory_6<TBase, TKey, TParam1, TParam2, TParam3, TParam4>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactory_6<TBase, TKey, TParam1, TParam2, TParam3, TParam4>*>::get(), "__zenCreate",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TBase, typename TKey, typename TParam1, typename TParam2, typename TParam3, typename TParam4>
inline ::Zenject::InjectTypeInfo* Zenject::KeyedFactory_6<TBase, TKey, TParam1, TParam2, TParam3, TParam4>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactory_6<TBase, TKey, TParam1, TParam2, TParam3, TParam4>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TBase, typename TKey, typename TParam1, typename TParam2, typename TParam3, typename TParam4>
constexpr ::Zenject::KeyedFactory_6<TBase, TKey, TParam1, TParam2, TParam3, TParam4>::KeyedFactory_6() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
