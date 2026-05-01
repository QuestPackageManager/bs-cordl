#pragma once
// IWYU pragma private; include "Unity/Properties/IListPropertyAccept_1.hpp"
#include "Unity/Properties/zzzz__IListPropertyAccept_1_def.hpp"
#include "Unity/Properties/zzzz__IListPropertyVisitor_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
template <typename TList>
template <typename TContainer>
inline void Unity::Properties::IListPropertyAccept_1<TList>::Accept(::Unity::Properties::IListPropertyVisitor* visitor, ::Unity::Properties::Property_2<TContainer, TList>* property,
                                                                    ::ByRef<TContainer> container, ::ByRef<TList> list) {
  auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IListPropertyAccept_1<TList>*>::get(), 0)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visitor, property, container, list);
}
