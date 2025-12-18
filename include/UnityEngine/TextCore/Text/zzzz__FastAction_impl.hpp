#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/FastAction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FastAction_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FastAction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FastAction::*)()>(&::UnityEngine::TextCore::Text::FastAction::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x69fafc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FastAction*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action*>*& UnityEngine::TextCore::Text::FastAction::__cordl_internal_get_delegates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegates;
}
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action*>* const& UnityEngine::TextCore::Text::FastAction::__cordl_internal_get_delegates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegates;
}
constexpr void UnityEngine::TextCore::Text::FastAction::__cordl_internal_set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___delegates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>*&
UnityEngine::TextCore::Text::FastAction::__cordl_internal_get_lookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* const&
UnityEngine::TextCore::Text::FastAction::__cordl_internal_get_lookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
constexpr void UnityEngine::TextCore::Text::FastAction::__cordl_internal_set_lookup(
    ::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::TextCore::Text::FastAction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FastAction*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::FastAction* UnityEngine::TextCore::Text::FastAction::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TextCore::Text::FastAction*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::FastAction::FastAction() {}
