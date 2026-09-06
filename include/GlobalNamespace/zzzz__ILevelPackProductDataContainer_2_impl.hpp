#pragma once
// IWYU pragma private; include "GlobalNamespace/ILevelPackProductDataContainer_2.hpp"
#include "GlobalNamespace/zzzz__ILevelPackProductDataContainer_2_def.hpp"
template <typename TLevelPackProductData, typename TLevelProductData>
inline TLevelPackProductData GlobalNamespace::ILevelPackProductDataContainer_2<TLevelPackProductData, TLevelProductData>::get_levelPackProductData() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILevelPackProductDataContainer_2<TLevelPackProductData, TLevelProductData>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<TLevelPackProductData>(this, ___internal_method);
}
template <typename TLevelPackProductData, typename TLevelProductData>
inline void GlobalNamespace::ILevelPackProductDataContainer_2<TLevelPackProductData, TLevelProductData>::SetLevelPackProductData(TLevelPackProductData newProductPack) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILevelPackProductDataContainer_2<TLevelPackProductData, TLevelProductData>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newProductPack);
}
