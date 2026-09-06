#pragma once
// IWYU pragma private; include "GlobalNamespace/ILevelPackProductData_1.hpp"
#include "GlobalNamespace/zzzz__ILevelPackProductData_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
template <typename TLevelProductData> inline ::StringW GlobalNamespace::ILevelPackProductData_1<TLevelProductData>::get_levelPackId() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILevelPackProductData_1<TLevelProductData>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TLevelProductData> inline ::System::Collections::Generic::IReadOnlyList_1<TLevelProductData>* GlobalNamespace::ILevelPackProductData_1<TLevelProductData>::get_levelProductsData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILevelPackProductData_1<TLevelProductData>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<TLevelProductData>*>(this, ___internal_method);
}
