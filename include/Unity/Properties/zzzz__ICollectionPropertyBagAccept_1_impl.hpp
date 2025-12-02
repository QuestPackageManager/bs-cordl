#pragma once
// IWYU pragma private; include "Unity/Properties/ICollectionPropertyBagAccept_1.hpp"
#include "Unity/Properties/zzzz__ICollectionPropertyBagAccept_1_def.hpp"
#include "Unity/Properties/zzzz__ICollectionPropertyBagVisitor_def.hpp"
template <typename TContainer>
inline void Unity::Properties::ICollectionPropertyBagAccept_1<TContainer>::Accept(::Unity::Properties::ICollectionPropertyBagVisitor* visitor, ::ByRef<TContainer> container) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ICollectionPropertyBagAccept_1<TContainer>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visitor, container);
}
