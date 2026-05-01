#pragma once
// IWYU pragma private; include "Unity/Properties/IDictionaryPropertyBagVisitor.hpp"
#include "Unity/Properties/zzzz__IDictionaryPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__IDictionaryPropertyBag_3_def.hpp"
template <typename TDictionary, typename TKey, typename TValue>
inline void Unity::Properties::IDictionaryPropertyBagVisitor::Visit(::Unity::Properties::IDictionaryPropertyBag_3<TDictionary, TKey, TValue>* properties, ::ByRef<TDictionary> container) {
  auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IDictionaryPropertyBagVisitor*>::get(), 0)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDictionary>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, properties, container);
}
