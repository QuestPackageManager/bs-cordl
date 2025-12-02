#pragma once
// IWYU pragma private; include "Unity/Properties/IListPropertyBagAccept_1.hpp"
#include "Unity/Properties/zzzz__IListPropertyBagAccept_1_def.hpp"
#include "Unity/Properties/zzzz__IListPropertyBagVisitor_def.hpp"
template <typename TContainer> inline void Unity::Properties::IListPropertyBagAccept_1<TContainer>::Accept(::Unity::Properties::IListPropertyBagVisitor* visitor, ::ByRef<TContainer> container) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IListPropertyBagAccept_1<TContainer>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visitor, container);
}
