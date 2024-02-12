#pragma once
#include "GlobalNamespace/zzzz__ILevelPackProductData_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
template <typename TLevelProductData> inline ::StringW GlobalNamespace::ILevelPackProductData_1<TLevelProductData>::get_levelPackId() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ILevelPackProductData_1<TLevelProductData>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TLevelProductData> inline ::System::Collections::Generic::IReadOnlyList_1<TLevelProductData>* GlobalNamespace::ILevelPackProductData_1<TLevelProductData>::get_levelProductsData() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ILevelPackProductData_1<TLevelProductData>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<TLevelProductData>*, false>(this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
