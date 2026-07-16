#pragma once
// IWYU pragma private; include "Notepad/NotepadComponent.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Notepad/zzzz__NotepadComponent_def.hpp"
#include "Notepad/zzzz__NoteSO_def.hpp"
//  Writing Method size for method: ::Notepad::NotepadComponent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Notepad::NotepadComponent::*)()>(&::Notepad::NotepadComponent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33193d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Notepad::NotepadComponent*>(), { ".ctor", {}, {} })));
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
  this->___note = value;
}
inline void Notepad::NotepadComponent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Notepad::NotepadComponent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Notepad::NotepadComponent* Notepad::NotepadComponent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Notepad::NotepadComponent*>());
}
// Ctor Parameters []
constexpr ::Notepad::NotepadComponent::NotepadComponent() {}
