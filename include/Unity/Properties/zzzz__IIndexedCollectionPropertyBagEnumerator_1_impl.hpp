#pragma once
// IWYU pragma private; include "Unity/Properties/IIndexedCollectionPropertyBagEnumerator_1.hpp"
#include "Unity/Properties/zzzz__IIndexedCollectionPropertyBagEnumerator_1_def.hpp"
#include "Unity/Properties/zzzz__IProperty_1_def.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionSharedPropertyState_def.hpp"
template <typename TContainer> inline int32_t Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>::GetCount(::ByRef<TContainer> container) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, container);
}
template <typename TContainer> inline ::Unity::Properties::IProperty_1<TContainer>* Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>::GetSharedProperty() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IProperty_1<TContainer>*, false>(this, ___internal_method);
}
template <typename TContainer> inline ::Unity::Properties::IndexedCollectionSharedPropertyState Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>::GetSharedPropertyState() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IndexedCollectionSharedPropertyState, false>(this, ___internal_method);
}
template <typename TContainer>
inline void Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>::SetSharedPropertyState(::Unity::Properties::IndexedCollectionSharedPropertyState state) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
