#pragma once
// IWYU pragma private; include "Unity/Properties/IListPropertyVisitor.hpp"
#include "System/Collections/Generic/zzzz__IList_1_impl.hpp"
#include "Unity/Properties/zzzz__IListPropertyVisitor_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
template <typename TContainer, typename TList, typename TElement>
  requires(::cordl_internals::type_constraint<TList, ::System::Collections::Generic::IList_1<TElement>*>)
inline void Unity::Properties::IListPropertyVisitor::Visit(::Unity::Properties::Property_2<TContainer, TList>* property, ::by_ref<TContainer> container, ::by_ref<TList> list) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IListPropertyVisitor*>(), 0 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>(), ::i2c::class_of<TList>(), ::i2c::class_of<TElement>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, container, list);
}
