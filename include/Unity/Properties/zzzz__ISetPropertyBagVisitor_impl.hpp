#pragma once
// IWYU pragma private; include "Unity/Properties/ISetPropertyBagVisitor.hpp"
#include "Unity/Properties/zzzz__ISetPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__ISetPropertyBag_2_def.hpp"
template <typename TSet, typename TValue> inline void Unity::Properties::ISetPropertyBagVisitor::Visit(::Unity::Properties::ISetPropertyBag_2<TSet, TValue>* properties, ::ByRef<TSet> container) {
  auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ISetPropertyBagVisitor*>::get(), 0)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSet>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, properties, container);
}
