#pragma once
// IWYU pragma private; include "System\Linq\Buffer_1.hpp"
#include "System/Linq/zzzz__Buffer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
template <typename TElement> inline void System::Linq::Buffer_1<TElement>::_ctor(::System::Collections::Generic::IEnumerable_1<TElement>* source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Buffer_1<TElement>>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TElement>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source);
}
template <typename TElement> inline ::ArrayW<TElement> System::Linq::Buffer_1<TElement>::ToArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Buffer_1<TElement>>(), { "ToArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<TElement>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<TElement>", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename TElement> constexpr ::System::Linq::Buffer_1<TElement>::Buffer_1(::ArrayW<TElement> items, int32_t count) noexcept {
  this->items = items;
  this->count = count;
}
// Ctor Parameters []
template <typename TElement> constexpr ::System::Linq::Buffer_1<TElement>::Buffer_1() {}
