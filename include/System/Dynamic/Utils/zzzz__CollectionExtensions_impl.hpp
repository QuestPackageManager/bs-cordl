#pragma once
// IWYU pragma private; include "System\Dynamic\Utils\CollectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Dynamic/Utils/zzzz__CollectionExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TrueReadOnlyCollection_1_def.hpp"
template <typename T>
inline ::System::Runtime::CompilerServices::TrueReadOnlyCollection_1<T>* System::Dynamic::Utils::CollectionExtensions::AddFirst(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* list,
                                                                                                                                T item) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::CollectionExtensions*>(),
                                              { "AddFirst", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::TrueReadOnlyCollection_1<T>*>(nullptr, ___internal_method, list, item);
}
template <typename T> inline ::ArrayW<T> System::Dynamic::Utils::CollectionExtensions::AddLast(::ArrayW<T> array, T item) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::CollectionExtensions*>(),
                                                                                              { "AddLast", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array, item);
}
template <typename T> inline ::ArrayW<T> System::Dynamic::Utils::CollectionExtensions::RemoveFirst(::ArrayW<T> array) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::CollectionExtensions*>(), { "RemoveFirst", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array);
}
template <typename T> inline ::ArrayW<T> System::Dynamic::Utils::CollectionExtensions::RemoveLast(::ArrayW<T> array) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::CollectionExtensions*>(), { "RemoveLast", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array);
}
template <typename T>
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* System::Dynamic::Utils::CollectionExtensions::ToReadOnly(::System::Collections::Generic::IEnumerable_1<T>* enumerable) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::CollectionExtensions*>(),
                                                           { "ToReadOnly", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>(nullptr, ___internal_method, enumerable);
}
// Ctor Parameters []
constexpr ::System::Dynamic::Utils::CollectionExtensions::CollectionExtensions() {}
