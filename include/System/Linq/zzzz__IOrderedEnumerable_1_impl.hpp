#pragma once
// IWYU pragma private; include "System\Linq\IOrderedEnumerable_1.hpp"
#include "System/Linq/zzzz__IOrderedEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template <typename TElement>
template <typename TKey>
inline ::System::Linq::IOrderedEnumerable_1<TElement>*
System::Linq::IOrderedEnumerable_1<TElement>::CreateOrderedEnumerable(::System::Func_2<TElement, TKey>* keySelector, ::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::IOrderedEnumerable_1<TElement>*>(), 0 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>() }));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::IOrderedEnumerable_1<TElement>*>(this, ___internal_method, keySelector, comparer, descending);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TElement>"
template <typename TElement> constexpr System::Linq::IOrderedEnumerable_1<TElement>::operator ::System::Collections::Generic::IEnumerable_1<TElement>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TElement>"
template <typename TElement>
constexpr ::System::Collections::Generic::IEnumerable_1<TElement>* System::Linq::IOrderedEnumerable_1<TElement>::i___System__Collections__Generic__IEnumerable_1_TElement_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TElement> constexpr System::Linq::IOrderedEnumerable_1<TElement>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TElement> constexpr ::System::Collections::IEnumerable* System::Linq::IOrderedEnumerable_1<TElement>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
