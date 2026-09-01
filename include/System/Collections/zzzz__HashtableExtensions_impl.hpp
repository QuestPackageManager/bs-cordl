#pragma once
// IWYU pragma private; include "System\Collections\HashtableExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/zzzz__HashtableExtensions_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline bool System::Collections::HashtableExtensions::TryGetValue(::System::Collections::Hashtable* table, ::System::Object* key, ::by_ref<T> value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::HashtableExtensions*>(),
                          { "TryGetValue", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, table, key, value);
}
// Ctor Parameters []
constexpr ::System::Collections::HashtableExtensions::HashtableExtensions() {}
