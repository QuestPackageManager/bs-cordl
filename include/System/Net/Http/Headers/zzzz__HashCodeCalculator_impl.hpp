#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/HashCodeCalculator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HashCodeCalculator_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
template <typename T> inline int32_t System::Net::Http::Headers::HashCodeCalculator::Calculate(::System::Collections::Generic::ICollection_1<T>* list) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HashCodeCalculator*>(),
                                                           { "Calculate", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::ICollection_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::HashCodeCalculator::HashCodeCalculator() {}
