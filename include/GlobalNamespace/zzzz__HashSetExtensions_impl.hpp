#pragma once
#include "System/Reflection/zzzz__BindingFlags_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__HashSetExtensions_def.hpp"
#include "GlobalNamespace/zzzz__HashSetExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
template <typename T> inline void GlobalNamespace::__HashSetExtensions__HashSetDelegateHolder_1<T>::setStaticF__InitializeMethod_k__BackingField(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "<InitializeMethod>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HashSetExtensions__HashSetDelegateHolder_1<T>*>::get>(
      std::forward<::System::Reflection::MethodInfo*>(value));
}
template <typename T> inline ::System::Reflection::MethodInfo* GlobalNamespace::__HashSetExtensions__HashSetDelegateHolder_1<T>::getStaticF__InitializeMethod_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "<InitializeMethod>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HashSetExtensions__HashSetDelegateHolder_1<T>*>::get>();
}
template <typename T> inline ::System::Reflection::MethodInfo* GlobalNamespace::__HashSetExtensions__HashSetDelegateHolder_1<T>::get_InitializeMethod() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HashSetExtensions__HashSetDelegateHolder_1<T>*>::get(),
                                               "get_InitializeMethod", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__HashSetExtensions__HashSetDelegateHolder_1<T>::__HashSetExtensions__HashSetDelegateHolder_1() {}
template <typename T> constexpr ::System::Reflection::BindingFlags GlobalNamespace::__HashSetExtensions__HashSetDelegateHolder_1<T>::Flags{ static_cast<int32_t>(0x24) };
template <typename T> inline void GlobalNamespace::HashSetExtensions::SetCapacity(::System::Collections::Generic::HashSet_1<T>* hs, int32_t capacity) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HashSetExtensions*>::get(), "SetCapacity",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<T>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hs, capacity);
}
template <typename T> inline ::System::Collections::Generic::HashSet_1<T>* GlobalNamespace::HashSetExtensions::GetHashSet(int32_t capacity) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HashSetExtensions*>::get(), "GetHashSet",
                                                                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<T>*, false>(nullptr, ___internal_method, capacity);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HashSetExtensions::HashSetExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
