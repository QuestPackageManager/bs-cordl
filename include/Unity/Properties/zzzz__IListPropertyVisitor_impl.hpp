#pragma once
// IWYU pragma private; include "Unity/Properties/IListPropertyVisitor.hpp"
#include "Unity/Properties/zzzz__IListPropertyVisitor_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
template <typename TContainer, typename TList, typename TElement>
inline void Unity::Properties::IListPropertyVisitor::Visit(::Unity::Properties::Property_2<TContainer, TList>* property, ::ByRef<TContainer> container, ::ByRef<TList> list) {
  auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IListPropertyVisitor*>::get(), 0)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TList>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, property, container, list);
}
