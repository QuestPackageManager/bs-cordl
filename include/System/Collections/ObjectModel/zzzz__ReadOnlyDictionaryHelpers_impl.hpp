#pragma once
// IWYU pragma private; include "System/Collections/ObjectModel/ReadOnlyDictionaryHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyDictionaryHelpers_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
template <typename T>
inline void System::Collections::ObjectModel::ReadOnlyDictionaryHelpers::CopyToNonGenericICollectionHelper(::System::Collections::Generic::ICollection_1<T>* collection, ::System::Array* array,
                                                                                                           int32_t index) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionaryHelpers*>(),
                                              { "CopyToNonGenericICollectionHelper",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::System::Collections::Generic::ICollection_1<T>*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, collection, array, index);
}
// Ctor Parameters []
constexpr ::System::Collections::ObjectModel::ReadOnlyDictionaryHelpers::ReadOnlyDictionaryHelpers() {}
