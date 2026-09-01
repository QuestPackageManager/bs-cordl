#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\TrueReadOnlyCollection_1.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TrueReadOnlyCollection_1_def.hpp"
template <typename T> inline void System::Runtime::CompilerServices::TrueReadOnlyCollection_1<T>::_ctor(::ArrayW<T> list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TrueReadOnlyCollection_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
template <typename T> inline ::System::Runtime::CompilerServices::TrueReadOnlyCollection_1<T>* System::Runtime::CompilerServices::TrueReadOnlyCollection_1<T>::New_ctor(::ArrayW<T> list) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::TrueReadOnlyCollection_1<T>*>(list));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Runtime::CompilerServices::TrueReadOnlyCollection_1<T>::TrueReadOnlyCollection_1() {}
