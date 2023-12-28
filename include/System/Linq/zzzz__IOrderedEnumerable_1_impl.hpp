#pragma once
#include "System/Linq/zzzz__IOrderedEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TElement>"
template <typename TElement> constexpr System::Linq::IOrderedEnumerable_1<TElement>::operator ::System::Collections::Generic::IEnumerable_1<TElement>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TElement> constexpr System::Linq::IOrderedEnumerable_1<TElement>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template <typename TElement>
template <typename TKey>
inline ::System::Linq::IOrderedEnumerable_1<TElement>*
System::Linq::IOrderedEnumerable_1<TElement>::CreateOrderedEnumerable(::System::Func_2<TElement, TKey>* keySelector, ::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::IOrderedEnumerable_1<TElement>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::IOrderedEnumerable_1<TElement>*, false>(this, ___internal_method, keySelector, comparer, descending);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
