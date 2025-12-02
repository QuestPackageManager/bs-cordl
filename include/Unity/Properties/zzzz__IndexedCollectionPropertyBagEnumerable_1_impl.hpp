#pragma once
// IWYU pragma private; include "Unity/Properties/IndexedCollectionPropertyBagEnumerable_1.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionPropertyBagEnumerable_1_def.hpp"
#include "Unity/Properties/zzzz__IIndexedCollectionPropertyBagEnumerator_1_def.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionPropertyBagEnumerator_1_def.hpp"
template <typename TContainer>
inline void Unity::Properties::IndexedCollectionPropertyBagEnumerable_1<TContainer>::_ctor(::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>* impl, TContainer container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBagEnumerable_1<TContainer>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TContainer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, impl, container);
}
template <typename TContainer>
inline ::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer> Unity::Properties::IndexedCollectionPropertyBagEnumerable_1<TContainer>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBagEnumerable_1<TContainer>>::get(),
                                               "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Impl", ty: "::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_Container", ty: "TContainer", modifiers: "", def_value: Some("{}") }]
template <typename TContainer>
constexpr ::Unity::Properties::IndexedCollectionPropertyBagEnumerable_1<TContainer>::IndexedCollectionPropertyBagEnumerable_1(
    ::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>* m_Impl, TContainer m_Container) noexcept {
  this->m_Impl = m_Impl;
  this->m_Container = m_Container;
}
// Ctor Parameters []
template <typename TContainer> constexpr ::Unity::Properties::IndexedCollectionPropertyBagEnumerable_1<TContainer>::IndexedCollectionPropertyBagEnumerable_1() {}
