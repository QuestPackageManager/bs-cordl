#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteJumpStartBeatOffsetDropdown.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_impl.hpp"
#include "GlobalNamespace/zzzz__NoteJumpStartBeatOffsetDropdown_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteJumpStartBeatOffsetDropdown.GetNamedValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<float_t, ::StringW>*>* (
    ::GlobalNamespace::NoteJumpStartBeatOffsetDropdown::*)()>(&::GlobalNamespace::NoteJumpStartBeatOffsetDropdown::GetNamedValues)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5a0f400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown*>(), { ::i2c::class_of<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteJumpStartBeatOffsetDropdown._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteJumpStartBeatOffsetDropdown::*)()>(&::GlobalNamespace::NoteJumpStartBeatOffsetDropdown::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a0f5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<float_t, ::StringW>*>* GlobalNamespace::NoteJumpStartBeatOffsetDropdown::GetNamedValues() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<float_t, ::StringW>*>*>(this, ___internal_method);
}
inline void GlobalNamespace::NoteJumpStartBeatOffsetDropdown::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteJumpStartBeatOffsetDropdown* GlobalNamespace::NoteJumpStartBeatOffsetDropdown::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteJumpStartBeatOffsetDropdown::NoteJumpStartBeatOffsetDropdown() {}
