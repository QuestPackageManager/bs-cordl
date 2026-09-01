#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\Text\FastAction_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FastAction_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
template <typename A, typename B>
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_2<A, B>*>*& UnityEngine::TextCore::Text::FastAction_2<A, B>::__cordl_internal_get_delegates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegates;
}
template <typename A, typename B>
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_2<A, B>*>* const& UnityEngine::TextCore::Text::FastAction_2<A, B>::__cordl_internal_get_delegates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegates;
}
template <typename A, typename B>
constexpr void UnityEngine::TextCore::Text::FastAction_2<A, B>::__cordl_internal_set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action_2<A, B>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___delegates = value;
}
template <typename A, typename B>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_2<A, B>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_2<A, B>*>*>*&
UnityEngine::TextCore::Text::FastAction_2<A, B>::__cordl_internal_get_lookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
template <typename A, typename B>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_2<A, B>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_2<A, B>*>*>* const&
UnityEngine::TextCore::Text::FastAction_2<A, B>::__cordl_internal_get_lookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
template <typename A, typename B>
constexpr void UnityEngine::TextCore::Text::FastAction_2<A, B>::__cordl_internal_set_lookup(
    ::System::Collections::Generic::Dictionary_2<::System::Action_2<A, B>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_2<A, B>*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lookup = value;
}
template <typename A, typename B> inline void UnityEngine::TextCore::Text::FastAction_2<A, B>::Call(A a, B b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FastAction_2<A, B>*>(), { "Call", {}, { ::i2c::type_of<A>(), ::i2c::type_of<B>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b);
}
template <typename A, typename B> inline void UnityEngine::TextCore::Text::FastAction_2<A, B>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FastAction_2<A, B>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename A, typename B> inline ::UnityEngine::TextCore::Text::FastAction_2<A, B>* UnityEngine::TextCore::Text::FastAction_2<A, B>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::FastAction_2<A, B>*>());
}
// Ctor Parameters []
template <typename A, typename B> constexpr ::UnityEngine::TextCore::Text::FastAction_2<A, B>::FastAction_2() {}
