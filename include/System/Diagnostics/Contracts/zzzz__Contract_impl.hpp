#pragma once
// IWYU pragma private; include "System/Diagnostics/Contracts/Contract.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/Contracts/zzzz__Contract_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
template <typename T> inline bool System::Diagnostics::Contracts::Contract::ForAll(::System::Collections::Generic::IEnumerable_1<T>* collection, ::System::Predicate_1<T>* predicate) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Contracts::Contract*>(),
                                       { "ForAll", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::System::Predicate_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, collection, predicate);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Contracts::Contract::Contract() {}
