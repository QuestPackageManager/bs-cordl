#pragma once
// IWYU pragma private; include "GlobalNamespace\LinkedListExtension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LinkedListExtension_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
template <typename T> inline int32_t GlobalNamespace::LinkedListExtension::Index(::System::Collections::Generic::LinkedListNode_1<T>* searchNode) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LinkedListExtension*>(),
                                                           { "Index", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, searchNode);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LinkedListExtension::LinkedListExtension() {}
