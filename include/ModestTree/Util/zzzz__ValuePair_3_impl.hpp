#pragma once
// IWYU pragma private; include "ModestTree\Util\ValuePair_3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ModestTree/Util/zzzz__ValuePair_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T1, typename T2, typename T3> constexpr T1& ModestTree::Util::ValuePair_3<T1, T2, T3>::__cordl_internal_get_First() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___First;
}
template <typename T1, typename T2, typename T3> constexpr T1 const& ModestTree::Util::ValuePair_3<T1, T2, T3>::__cordl_internal_get_First() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___First;
}
template <typename T1, typename T2, typename T3> constexpr void ModestTree::Util::ValuePair_3<T1, T2, T3>::__cordl_internal_set_First(T1 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___First = value;
}
template <typename T1, typename T2, typename T3> constexpr T2& ModestTree::Util::ValuePair_3<T1, T2, T3>::__cordl_internal_get_Second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Second;
}
template <typename T1, typename T2, typename T3> constexpr T2 const& ModestTree::Util::ValuePair_3<T1, T2, T3>::__cordl_internal_get_Second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Second;
}
template <typename T1, typename T2, typename T3> constexpr void ModestTree::Util::ValuePair_3<T1, T2, T3>::__cordl_internal_set_Second(T2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Second = value;
}
template <typename T1, typename T2, typename T3> constexpr T3& ModestTree::Util::ValuePair_3<T1, T2, T3>::__cordl_internal_get_Third() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Third;
}
template <typename T1, typename T2, typename T3> constexpr T3 const& ModestTree::Util::ValuePair_3<T1, T2, T3>::__cordl_internal_get_Third() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Third;
}
template <typename T1, typename T2, typename T3> constexpr void ModestTree::Util::ValuePair_3<T1, T2, T3>::__cordl_internal_set_Third(T3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Third = value;
}
template <typename T1, typename T2, typename T3> inline void ModestTree::Util::ValuePair_3<T1, T2, T3>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3> inline void ModestTree::Util::ValuePair_3<T1, T2, T3>::_ctor(T1 first, T2 second, T3 third) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>(), { ".ctor", {}, { ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, first, second, third);
}
template <typename T1, typename T2, typename T3> inline bool ModestTree::Util::ValuePair_3<T1, T2, T3>::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
template <typename T1, typename T2, typename T3> inline bool ModestTree::Util::ValuePair_3<T1, T2, T3>::Equals(::ModestTree::Util::ValuePair_3<T1, T2, T3>* that) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>(), { "Equals", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, that);
}
template <typename T1, typename T2, typename T3> inline int32_t ModestTree::Util::ValuePair_3<T1, T2, T3>::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3> inline ::ModestTree::Util::ValuePair_3<T1, T2, T3>* ModestTree::Util::ValuePair_3<T1, T2, T3>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>());
}
template <typename T1, typename T2, typename T3> inline ::ModestTree::Util::ValuePair_3<T1, T2, T3>* ModestTree::Util::ValuePair_3<T1, T2, T3>::New_ctor(T1 first, T2 second, T3 third) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>(first, second, third));
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3> constexpr ::ModestTree::Util::ValuePair_3<T1, T2, T3>::ValuePair_3() {}
