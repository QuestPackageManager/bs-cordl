#pragma once
// IWYU pragma private; include "Unity/Properties/DictionaryPropertyBag_2.hpp"
#include "Unity/Properties/zzzz__KeyValueCollectionPropertyBag_3_impl.hpp"
#include "Unity/Properties/zzzz__DictionaryPropertyBag_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Unity/Properties/zzzz__InstantiationKind_def.hpp"
template <typename TKey, typename TValue> inline ::Unity::Properties::InstantiationKind Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>::get_InstantiationKind() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::InstantiationKind, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>::Instantiate() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey, TValue>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>* Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>*>());
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>::DictionaryPropertyBag_2() {}
