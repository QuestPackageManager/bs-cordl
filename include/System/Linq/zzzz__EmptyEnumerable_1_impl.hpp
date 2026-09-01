#pragma once
// IWYU pragma private; include "System\Linq\EmptyEnumerable_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/zzzz__EmptyEnumerable_1_def.hpp"
template <typename TElement> inline void System::Linq::EmptyEnumerable_1<TElement>::setStaticF_Instance(::ArrayW<TElement> value) {
  ::cordl_internals::setStaticField<::ArrayW<TElement>, "Instance", ::System::Linq::EmptyEnumerable_1<TElement>*>(std::forward<::ArrayW<TElement>>(value));
}
template <typename TElement> inline ::ArrayW<TElement> System::Linq::EmptyEnumerable_1<TElement>::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::ArrayW<TElement>, "Instance", ::System::Linq::EmptyEnumerable_1<TElement>*>();
}
// Ctor Parameters []
template <typename TElement> constexpr ::System::Linq::EmptyEnumerable_1<TElement>::EmptyEnumerable_1() {}
