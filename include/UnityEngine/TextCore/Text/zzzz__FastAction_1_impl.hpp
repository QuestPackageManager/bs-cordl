#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/FastAction_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FastAction_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template <typename A> constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_1<A>*>*& UnityEngine::TextCore::Text::FastAction_1<A>::__cordl_internal_get_delegates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegates;
}
template <typename A> constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_1<A>*>* const& UnityEngine::TextCore::Text::FastAction_1<A>::__cordl_internal_get_delegates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegates;
}
template <typename A> constexpr void UnityEngine::TextCore::Text::FastAction_1<A>::__cordl_internal_set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action_1<A>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___delegates, value);
}
template <typename A>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_1<A>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<A>*>*>*&
UnityEngine::TextCore::Text::FastAction_1<A>::__cordl_internal_get_lookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
template <typename A>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_1<A>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<A>*>*>* const&
UnityEngine::TextCore::Text::FastAction_1<A>::__cordl_internal_get_lookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
template <typename A>
constexpr void UnityEngine::TextCore::Text::FastAction_1<A>::__cordl_internal_set_lookup(
    ::System::Collections::Generic::Dictionary_2<::System::Action_1<A>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<A>*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___lookup, value);
}
template <typename A> inline void UnityEngine::TextCore::Text::FastAction_1<A>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FastAction_1<A>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename A> inline ::UnityEngine::TextCore::Text::FastAction_1<A>* UnityEngine::TextCore::Text::FastAction_1<A>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TextCore::Text::FastAction_1<A>*>());
}
// Ctor Parameters []
template <typename A> constexpr ::UnityEngine::TextCore::Text::FastAction_1<A>::FastAction_1() {}
