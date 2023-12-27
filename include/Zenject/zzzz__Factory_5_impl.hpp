#pragma once
#include "Zenject/zzzz__PlaceholderFactory_5_impl.hpp"
#include "Zenject/zzzz__Factory_5_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
inline ::Zenject::Factory_5<TParam1, TParam2, TParam3, TParam4, TValue>* Zenject::Factory_5<TParam1, TParam2, TParam3, TParam4, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::Factory_5<TParam1, TParam2, TParam3, TParam4, TValue>*>());
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue> inline void Zenject::Factory_5<TParam1, TParam2, TParam3, TParam4, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Factory_5<TParam1, TParam2, TParam3, TParam4, TValue>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
inline ::System::Object* Zenject::Factory_5<TParam1, TParam2, TParam3, TParam4, TValue>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Factory_5<TParam1, TParam2, TParam3, TParam4, TValue>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
inline ::Zenject::InjectTypeInfo* Zenject::Factory_5<TParam1, TParam2, TParam3, TParam4, TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Factory_5<TParam1, TParam2, TParam3, TParam4, TValue>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue> constexpr ::Zenject::Factory_5<TParam1, TParam2, TParam3, TParam4, TValue>::Factory_5() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
