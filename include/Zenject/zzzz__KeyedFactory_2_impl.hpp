#pragma once
#include "Zenject/zzzz__KeyedFactoryBase_2_impl.hpp"
#include "Zenject/zzzz__KeyedFactory_2_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
template <typename TBase, typename TKey> inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::KeyedFactory_2<TBase, TKey>::get_ProvidedTypes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactory_2<TBase, TKey>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(this, ___internal_method);
}
template <typename TBase, typename TKey> inline TBase Zenject::KeyedFactory_2<TBase, TKey>::Create(TKey key) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactory_2<TBase, TKey>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<TBase, false>(this, ___internal_method, key);
}
template <typename TBase, typename TKey> inline ::Zenject::KeyedFactory_2<TBase, TKey>* Zenject::KeyedFactory_2<TBase, TKey>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::KeyedFactory_2<TBase, TKey>*>());
}
template <typename TBase, typename TKey> inline void Zenject::KeyedFactory_2<TBase, TKey>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactory_2<TBase, TKey>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBase, typename TKey> inline ::System::Object* Zenject::KeyedFactory_2<TBase, TKey>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactory_2<TBase, TKey>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TBase, typename TKey> inline ::Zenject::InjectTypeInfo* Zenject::KeyedFactory_2<TBase, TKey>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactory_2<TBase, TKey>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TBase, typename TKey> constexpr ::Zenject::KeyedFactory_2<TBase, TKey>::KeyedFactory_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
