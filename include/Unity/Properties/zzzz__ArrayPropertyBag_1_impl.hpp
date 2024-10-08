#pragma once
// IWYU pragma private; include "Unity/Properties/ArrayPropertyBag_1.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionPropertyBag_2_impl.hpp"
#include "Unity/Properties/zzzz__ArrayPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__InstantiationKind_def.hpp"
template <typename TElement> inline ::Unity::Properties::InstantiationKind Unity::Properties::ArrayPropertyBag_1<TElement>::get_InstantiationKind() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ArrayPropertyBag_1<TElement>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::InstantiationKind, false>(this, ___internal_method);
}
template <typename TElement> inline ::ArrayW<TElement, ::Array<TElement>*> Unity::Properties::ArrayPropertyBag_1<TElement>::InstantiateWithCount(int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ArrayPropertyBag_1<TElement>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<TElement, ::Array<TElement>*>, false>(this, ___internal_method, count);
}
template <typename TElement> inline ::ArrayW<TElement, ::Array<TElement>*> Unity::Properties::ArrayPropertyBag_1<TElement>::Instantiate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ArrayPropertyBag_1<TElement>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<TElement, ::Array<TElement>*>, false>(this, ___internal_method);
}
template <typename TElement> inline ::Unity::Properties::ArrayPropertyBag_1<TElement>* Unity::Properties::ArrayPropertyBag_1<TElement>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::ArrayPropertyBag_1<TElement>*>());
}
template <typename TElement> inline void Unity::Properties::ArrayPropertyBag_1<TElement>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ArrayPropertyBag_1<TElement>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TElement> constexpr ::Unity::Properties::ArrayPropertyBag_1<TElement>::ArrayPropertyBag_1() {}
