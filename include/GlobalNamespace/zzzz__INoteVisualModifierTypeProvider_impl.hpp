#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteVisualModifierTypeProvider.hpp"
#include "GlobalNamespace/zzzz__INoteVisualModifierTypeProvider_def.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::INoteVisualModifierTypeProvider.get_noteVisualModifierType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteVisualModifierType (::GlobalNamespace::INoteVisualModifierTypeProvider::*)()>(
    &::GlobalNamespace::INoteVisualModifierTypeProvider::get_noteVisualModifierType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::INoteVisualModifierTypeProvider*>(), { ::i2c::class_of<::GlobalNamespace::INoteVisualModifierTypeProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::NoteVisualModifierType GlobalNamespace::INoteVisualModifierTypeProvider::get_noteVisualModifierType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::INoteVisualModifierTypeProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteVisualModifierType>(this, ___internal_method);
}
