#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\Text\FastAction_3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FastAction_3_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
template <typename A, typename B, typename C>
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_3<A, B, C>*>*& UnityEngine::TextCore::Text::FastAction_3<A, B, C>::__cordl_internal_get_delegates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegates;
}
template <typename A, typename B, typename C>
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_3<A, B, C>*>* const& UnityEngine::TextCore::Text::FastAction_3<A, B, C>::__cordl_internal_get_delegates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegates;
}
template <typename A, typename B, typename C>
constexpr void UnityEngine::TextCore::Text::FastAction_3<A, B, C>::__cordl_internal_set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action_3<A, B, C>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___delegates = value;
}
template <typename A, typename B, typename C>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_3<A, B, C>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_3<A, B, C>*>*>*&
UnityEngine::TextCore::Text::FastAction_3<A, B, C>::__cordl_internal_get_lookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
template <typename A, typename B, typename C>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_3<A, B, C>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_3<A, B, C>*>*>* const&
UnityEngine::TextCore::Text::FastAction_3<A, B, C>::__cordl_internal_get_lookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
template <typename A, typename B, typename C>
constexpr void UnityEngine::TextCore::Text::FastAction_3<A, B, C>::__cordl_internal_set_lookup(
    ::System::Collections::Generic::Dictionary_2<::System::Action_3<A, B, C>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_3<A, B, C>*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lookup = value;
}
template <typename A, typename B, typename C> inline void UnityEngine::TextCore::Text::FastAction_3<A, B, C>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FastAction_3<A, B, C>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename A, typename B, typename C> inline ::UnityEngine::TextCore::Text::FastAction_3<A, B, C>* UnityEngine::TextCore::Text::FastAction_3<A, B, C>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::FastAction_3<A, B, C>*>());
}
// Ctor Parameters []
template <typename A, typename B, typename C> constexpr ::UnityEngine::TextCore::Text::FastAction_3<A, B, C>::FastAction_3() {}
