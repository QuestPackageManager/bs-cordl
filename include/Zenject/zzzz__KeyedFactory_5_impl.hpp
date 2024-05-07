#pragma once
// IWYU pragma private; include "Zenject/KeyedFactory_5.hpp"
#include "Zenject/zzzz__KeyedFactoryBase_2_impl.hpp"
#include "Zenject/zzzz__KeyedFactory_5_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TBase, typename TKey, typename TParam1, typename TParam2, typename TParam3>
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::KeyedFactory_5<TBase, TKey, TParam1, TParam2, TParam3>::get_ProvidedTypes() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactory_5<TBase, TKey, TParam1, TParam2, TParam3>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(this, ___internal_method);
}
template <typename TBase, typename TKey, typename TParam1, typename TParam2, typename TParam3>
inline TBase Zenject::KeyedFactory_5<TBase, TKey, TParam1, TParam2, TParam3>::Create(TKey key, TParam1 param1, TParam2 param2, TParam3 param3) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactory_5<TBase, TKey, TParam1, TParam2, TParam3>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<TBase, false>(this, ___internal_method, key, param1, param2, param3);
}
template <typename TBase, typename TKey, typename TParam1, typename TParam2, typename TParam3>
inline ::Zenject::KeyedFactory_5<TBase, TKey, TParam1, TParam2, TParam3>* Zenject::KeyedFactory_5<TBase, TKey, TParam1, TParam2, TParam3>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::KeyedFactory_5<TBase, TKey, TParam1, TParam2, TParam3>*>());
}
template <typename TBase, typename TKey, typename TParam1, typename TParam2, typename TParam3> inline void Zenject::KeyedFactory_5<TBase, TKey, TParam1, TParam2, TParam3>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactory_5<TBase, TKey, TParam1, TParam2, TParam3>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBase, typename TKey, typename TParam1, typename TParam2, typename TParam3>
inline ::System::Object* Zenject::KeyedFactory_5<TBase, TKey, TParam1, TParam2, TParam3>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactory_5<TBase, TKey, TParam1, TParam2, TParam3>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TBase, typename TKey, typename TParam1, typename TParam2, typename TParam3>
inline ::Zenject::InjectTypeInfo* Zenject::KeyedFactory_5<TBase, TKey, TParam1, TParam2, TParam3>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactory_5<TBase, TKey, TParam1, TParam2, TParam3>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TBase, typename TKey, typename TParam1, typename TParam2, typename TParam3> constexpr ::Zenject::KeyedFactory_5<TBase, TKey, TParam1, TParam2, TParam3>::KeyedFactory_5() {}
