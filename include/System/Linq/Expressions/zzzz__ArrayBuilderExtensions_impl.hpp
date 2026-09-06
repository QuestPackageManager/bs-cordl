#pragma once
// IWYU pragma private; include "System/Linq/Expressions/ArrayBuilderExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/zzzz__ArrayBuilderExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__ArrayBuilder_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
template <typename T>
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* System::Linq::Expressions::ArrayBuilderExtensions::ToReadOnly(::System::Collections::Generic::ArrayBuilder_1<T> builder) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ArrayBuilderExtensions*>(),
                                                           { "ToReadOnly", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::ArrayBuilder_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>(nullptr, ___internal_method, builder);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::ArrayBuilderExtensions::ArrayBuilderExtensions() {}
