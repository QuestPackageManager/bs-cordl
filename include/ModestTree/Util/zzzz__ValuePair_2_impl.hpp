#pragma once
// IWYU pragma private; include "ModestTree/Util/ValuePair_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ModestTree/Util/zzzz__ValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T1, typename T2> constexpr T1& ModestTree::Util::ValuePair_2<T1, T2>::__cordl_internal_get_First() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___First;
}
template <typename T1, typename T2> constexpr T1 const& ModestTree::Util::ValuePair_2<T1, T2>::__cordl_internal_get_First() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___First;
}
template <typename T1, typename T2> constexpr void ModestTree::Util::ValuePair_2<T1, T2>::__cordl_internal_set_First(T1 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___First = value;
}
template <typename T1, typename T2> constexpr T2& ModestTree::Util::ValuePair_2<T1, T2>::__cordl_internal_get_Second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Second;
}
template <typename T1, typename T2> constexpr T2 const& ModestTree::Util::ValuePair_2<T1, T2>::__cordl_internal_get_Second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Second;
}
template <typename T1, typename T2> constexpr void ModestTree::Util::ValuePair_2<T1, T2>::__cordl_internal_set_Second(T2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Second = value;
}
template <typename T1, typename T2> inline void ModestTree::Util::ValuePair_2<T1, T2>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::ValuePair_2<T1, T2>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T1, typename T2> inline void ModestTree::Util::ValuePair_2<T1, T2>::_ctor(T1 first, T2 second) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::ValuePair_2<T1, T2>*>(), { ".ctor", {}, { ::i2c::type_of<T1>(), ::i2c::type_of<T2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, first, second);
}
template <typename T1, typename T2> inline bool ModestTree::Util::ValuePair_2<T1, T2>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::ModestTree::Util::ValuePair_2<T1, T2>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
template <typename T1, typename T2> inline bool ModestTree::Util::ValuePair_2<T1, T2>::Equals(::ModestTree::Util::ValuePair_2<T1, T2>* that) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::ValuePair_2<T1, T2>*>(), { "Equals", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<T1, T2>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, that);
}
template <typename T1, typename T2> inline int32_t ModestTree::Util::ValuePair_2<T1, T2>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::ModestTree::Util::ValuePair_2<T1, T2>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T1, typename T2> inline ::ModestTree::Util::ValuePair_2<T1, T2>* ModestTree::Util::ValuePair_2<T1, T2>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ModestTree::Util::ValuePair_2<T1, T2>*>());
}
template <typename T1, typename T2> inline ::ModestTree::Util::ValuePair_2<T1, T2>* ModestTree::Util::ValuePair_2<T1, T2>::New_ctor(T1 first, T2 second) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ModestTree::Util::ValuePair_2<T1, T2>*>(first, second));
}
// Ctor Parameters []
template <typename T1, typename T2> constexpr ::ModestTree::Util::ValuePair_2<T1, T2>::ValuePair_2() {}
