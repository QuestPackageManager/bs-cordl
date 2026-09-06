#pragma once
// IWYU pragma private; include "System/Collections/Generic/CollectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__CollectionExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
template <typename TKey, typename TValue>
inline TValue System::Collections::Generic::CollectionExtensions::GetValueOrDefault(::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* dictionary, TKey key) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::CollectionExtensions*>(),
                                                           { "GetValueOrDefault",
                                                             { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() },
                                                             { ::i2c::type_of<::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*>(), ::i2c::type_of<TKey>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(nullptr, ___internal_method, dictionary, key);
}
template <typename TKey, typename TValue>
inline TValue System::Collections::Generic::CollectionExtensions::GetValueOrDefault(::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* dictionary, TKey key, TValue defaultValue) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::CollectionExtensions*>(),
                                              { "GetValueOrDefault",
                                                { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() },
                                                { ::i2c::type_of<::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*>(), ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(nullptr, ___internal_method, dictionary, key, defaultValue);
}
// Ctor Parameters []
constexpr ::System::Collections::Generic::CollectionExtensions::CollectionExtensions() {}
