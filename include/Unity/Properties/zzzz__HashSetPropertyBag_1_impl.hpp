#pragma once
// IWYU pragma private; include "Unity/Properties/HashSetPropertyBag_1.hpp"
#include "Unity/Properties/zzzz__SetPropertyBagBase_2_impl.hpp"
#include "Unity/Properties/zzzz__HashSetPropertyBag_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "Unity/Properties/zzzz__InstantiationKind_def.hpp"
template <typename TElement> inline ::Unity::Properties::InstantiationKind Unity::Properties::HashSetPropertyBag_1<TElement>::get_InstantiationKind() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::HashSetPropertyBag_1<TElement>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::InstantiationKind, false>(this, ___internal_method);
}
template <typename TElement> inline ::System::Collections::Generic::HashSet_1<TElement>* Unity::Properties::HashSetPropertyBag_1<TElement>::Instantiate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::HashSetPropertyBag_1<TElement>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<TElement>*, false>(this, ___internal_method);
}
template <typename TElement> inline ::Unity::Properties::HashSetPropertyBag_1<TElement>* Unity::Properties::HashSetPropertyBag_1<TElement>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::HashSetPropertyBag_1<TElement>*>());
}
template <typename TElement> inline void Unity::Properties::HashSetPropertyBag_1<TElement>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::HashSetPropertyBag_1<TElement>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TElement> constexpr ::Unity::Properties::HashSetPropertyBag_1<TElement>::HashSetPropertyBag_1() {}
