#pragma once
// IWYU pragma private; include "Unity\Properties\IListPropertyAccept_1.hpp"
#include "Unity/Properties/zzzz__IListPropertyAccept_1_def.hpp"
#include "Unity/Properties/zzzz__IListPropertyVisitor_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
template <typename TList>
template <typename TContainer>
inline void Unity::Properties::IListPropertyAccept_1<TList>::Accept(::Unity::Properties::IListPropertyVisitor* visitor, ::Unity::Properties::Property_2<TContainer, TList>* property,
                                                                    ::by_ref<TContainer> container, ::by_ref<TList> list) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IListPropertyAccept_1<TList>*>(), 0 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visitor, property, container, list);
}
