#pragma once
// IWYU pragma private; include "Notepad/NotepadComponent.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Notepad/zzzz__NotepadComponent_def.hpp"
#include "Notepad/zzzz__NoteSO_def.hpp"
//  Writing Method size for method: ::Notepad::NotepadComponent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Notepad::NotepadComponent::*)()>(&::Notepad::NotepadComponent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22afcb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Notepad::NotepadComponent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Notepad::NoteSO>& Notepad::NotepadComponent::__cordl_internal_get_note() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___note;
}
constexpr ::UnityW<::Notepad::NoteSO> const& Notepad::NotepadComponent::__cordl_internal_get_note() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___note;
}
constexpr void Notepad::NotepadComponent::__cordl_internal_set_note(::UnityW<::Notepad::NoteSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___note)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Notepad::NotepadComponent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Notepad::NotepadComponent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Notepad::NotepadComponent* Notepad::NotepadComponent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Notepad::NotepadComponent*>());
}
// Ctor Parameters []
constexpr ::Notepad::NotepadComponent::NotepadComponent() {}
