#pragma once
// IWYU pragma private; include "GlobalNamespace\NoteJumpDurationTypeSettingsDropdown.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettings_impl.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_impl.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettingsDropdown_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettings_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown.GetNamedValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::NoteJumpDurationTypeSettings, ::StringW>*>* (
    ::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown::*)()>(&::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown::GetNamedValues)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5a157fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown::*)()>(&::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a158f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::NoteJumpDurationTypeSettings, ::StringW>*>*
GlobalNamespace::NoteJumpDurationTypeSettingsDropdown::GetNamedValues() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::NoteJumpDurationTypeSettings, ::StringW>*>*>(this,
                                                                                                                                                                               ___internal_method);
}
inline void GlobalNamespace::NoteJumpDurationTypeSettingsDropdown::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown* GlobalNamespace::NoteJumpDurationTypeSettingsDropdown::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown::NoteJumpDurationTypeSettingsDropdown() {}
