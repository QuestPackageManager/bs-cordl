#pragma once
// IWYU pragma private; include "Unity\Properties\ListPropertyBag_1.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionPropertyBag_2_impl.hpp"
#include "Unity/Properties/zzzz__ListPropertyBag_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Properties/zzzz__InstantiationKind_def.hpp"
template <typename TElement> inline ::Unity::Properties::InstantiationKind Unity::Properties::ListPropertyBag_1<TElement>::get_InstantiationKind() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::ListPropertyBag_1<TElement>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::InstantiationKind>(this, ___internal_method);
}
template <typename TElement> inline ::System::Collections::Generic::List_1<TElement>* Unity::Properties::ListPropertyBag_1<TElement>::InstantiateWithCount(int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::ListPropertyBag_1<TElement>*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TElement>*>(this, ___internal_method, count);
}
template <typename TElement> inline ::System::Collections::Generic::List_1<TElement>* Unity::Properties::ListPropertyBag_1<TElement>::Instantiate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::ListPropertyBag_1<TElement>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TElement>*>(this, ___internal_method);
}
template <typename TElement> inline void Unity::Properties::ListPropertyBag_1<TElement>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ListPropertyBag_1<TElement>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TElement> inline ::Unity::Properties::ListPropertyBag_1<TElement>* Unity::Properties::ListPropertyBag_1<TElement>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::ListPropertyBag_1<TElement>*>());
}
// Ctor Parameters []
template <typename TElement> constexpr ::Unity::Properties::ListPropertyBag_1<TElement>::ListPropertyBag_1() {}
