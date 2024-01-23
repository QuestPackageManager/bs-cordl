#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__FastAction_3_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
template <typename A, typename B, typename C> constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_3<A, B, C>*>*& TMPro::FastAction_3<A, B, C>::__cordl_internal_get_delegates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegates;
}
template <typename A, typename B, typename C>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Action_3<A, B, C>*>*> const& TMPro::FastAction_3<A, B, C>::__cordl_internal_get_delegates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegates;
}
template <typename A, typename B, typename C>
constexpr void TMPro::FastAction_3<A, B, C>::__cordl_internal_set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action_3<A, B, C>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___delegates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename A, typename B, typename C>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_3<A, B, C>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_3<A, B, C>*>*>*&
TMPro::FastAction_3<A, B, C>::__cordl_internal_get_lookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
template <typename A, typename B, typename C>
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::System::Action_3<A, B, C>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_3<A, B, C>*>*>*> const&
TMPro::FastAction_3<A, B, C>::__cordl_internal_get_lookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
template <typename A, typename B, typename C>
constexpr void TMPro::FastAction_3<A, B, C>::__cordl_internal_set_lookup(
    ::System::Collections::Generic::Dictionary_2<::System::Action_3<A, B, C>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_3<A, B, C>*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename A, typename B, typename C> inline void TMPro::FastAction_3<A, B, C>::Add(::System::Action_3<A, B, C>* rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction_3<A, B, C>*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<A, B, C>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rhs);
}
template <typename A, typename B, typename C> inline void TMPro::FastAction_3<A, B, C>::Remove(::System::Action_3<A, B, C>* rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction_3<A, B, C>*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<A, B, C>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rhs);
}
template <typename A, typename B, typename C> inline void TMPro::FastAction_3<A, B, C>::Call(A a, B b, C c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction_3<A, B, C>*>::get(), "Call", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<B>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<C>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a, b, c);
}
template <typename A, typename B, typename C> inline ::TMPro::FastAction_3<A, B, C>* TMPro::FastAction_3<A, B, C>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::FastAction_3<A, B, C>*>());
}
template <typename A, typename B, typename C> inline void TMPro::FastAction_3<A, B, C>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction_3<A, B, C>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename A, typename B, typename C> constexpr ::TMPro::FastAction_3<A, B, C>::FastAction_3() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
