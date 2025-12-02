#pragma once
// IWYU pragma private; include "Unity/Properties/IListPropertyBagVisitor.hpp"
#include "Unity/Properties/zzzz__IListPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__IListPropertyBag_2_def.hpp"
template <typename TList, typename TElement>
inline void Unity::Properties::IListPropertyBagVisitor::Visit(::Unity::Properties::IListPropertyBag_2<TList, TElement>* properties, ::ByRef<TList> container) {
  auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IListPropertyBagVisitor*>::get(), 0)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TList>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, properties, container);
}
