#pragma once
// IWYU pragma private; include "TMPro\FastAction_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__FastAction_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template <typename A> constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_1<A>*>*& TMPro::FastAction_1<A>::__cordl_internal_get_delegates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegates;
}
template <typename A> constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_1<A>*>* const& TMPro::FastAction_1<A>::__cordl_internal_get_delegates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegates;
}
template <typename A> constexpr void TMPro::FastAction_1<A>::__cordl_internal_set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action_1<A>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___delegates = value;
}
template <typename A>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_1<A>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<A>*>*>*&
TMPro::FastAction_1<A>::__cordl_internal_get_lookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
template <typename A>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_1<A>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<A>*>*>* const&
TMPro::FastAction_1<A>::__cordl_internal_get_lookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
template <typename A>
constexpr void TMPro::FastAction_1<A>::__cordl_internal_set_lookup(
    ::System::Collections::Generic::Dictionary_2<::System::Action_1<A>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<A>*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lookup = value;
}
template <typename A> inline void TMPro::FastAction_1<A>::Add(::System::Action_1<A>* rhs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::FastAction_1<A>*>(), { "Add", {}, { ::i2c::type_of<::System::Action_1<A>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rhs);
}
template <typename A> inline void TMPro::FastAction_1<A>::Remove(::System::Action_1<A>* rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::FastAction_1<A>*>(), { "Remove", {}, { ::i2c::type_of<::System::Action_1<A>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rhs);
}
template <typename A> inline void TMPro::FastAction_1<A>::Call(A a) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::FastAction_1<A>*>(), { "Call", {}, { ::i2c::type_of<A>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a);
}
template <typename A> inline void TMPro::FastAction_1<A>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::FastAction_1<A>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename A> inline ::TMPro::FastAction_1<A>* TMPro::FastAction_1<A>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::FastAction_1<A>*>());
}
// Ctor Parameters []
template <typename A> constexpr ::TMPro::FastAction_1<A>::FastAction_1() {}
