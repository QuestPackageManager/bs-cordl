#pragma once
// IWYU pragma private; include "GlobalNamespace/ILevelPackProductDataContainer_2.hpp"
#include "GlobalNamespace/zzzz__ILevelPackProductDataContainer_2_def.hpp"
template <typename TLevelPackProductData, typename TLevelProductData>
inline TLevelPackProductData GlobalNamespace::ILevelPackProductDataContainer_2<TLevelPackProductData, TLevelProductData>::get_levelPackProductData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ILevelPackProductDataContainer_2<TLevelPackProductData, TLevelProductData>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<TLevelPackProductData, false>(this, ___internal_method);
}
template <typename TLevelPackProductData, typename TLevelProductData>
inline void GlobalNamespace::ILevelPackProductDataContainer_2<TLevelPackProductData, TLevelProductData>::SetLevelPackProductData(TLevelPackProductData newProductPack) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ILevelPackProductDataContainer_2<TLevelPackProductData, TLevelProductData>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newProductPack);
}
