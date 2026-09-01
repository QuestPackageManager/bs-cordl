#pragma once
// IWYU pragma private; include "Unity\Collections\CollectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__CollectionExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Unity/Collections/zzzz__CollectionExtensions_def.hpp"
template <typename T> constexpr ::System::Func_2<T, ::StringW>*& Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>::__cordl_internal_get_serializeElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializeElement;
}
template <typename T> constexpr ::System::Func_2<T, ::StringW>* const& Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>::__cordl_internal_get_serializeElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializeElement;
}
template <typename T> constexpr void Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>::__cordl_internal_set_serializeElement(::System::Func_2<T, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serializeElement = value;
}
template <typename T> inline void Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::StringW Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>::_SerializedView_b__0(T t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>*>(), { "<SerializedView>b__0", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, t);
}
template <typename T> inline ::Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>* Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>::CollectionExtensions___c__DisplayClass3_0_1() {}
template <typename T>
inline ::StringW Unity::Collections::CollectionExtensions::SerializedView(::System::Collections::Generic::IEnumerable_1<T>* collection, ::System::Func_2<T, ::StringW>* serializeElement) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionExtensions*>(),
                          { "SerializedView", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::System::Func_2<T, ::StringW>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, collection, serializeElement);
}
// Ctor Parameters []
constexpr ::Unity::Collections::CollectionExtensions::CollectionExtensions() {}
