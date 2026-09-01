#pragma once
// IWYU pragma private; include "GlobalNamespace\INoteMovementProvider.hpp"
#include "GlobalNamespace/zzzz__INoteMovementProvider_def.hpp"
#include "GlobalNamespace/zzzz__NoteMovement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::INoteMovementProvider.get_noteMovement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::NoteMovement> (::GlobalNamespace::INoteMovementProvider::*)()>(
    &::GlobalNamespace::INoteMovementProvider::get_noteMovement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::INoteMovementProvider*>(), { ::i2c::class_of<::GlobalNamespace::INoteMovementProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityW<::GlobalNamespace::NoteMovement> GlobalNamespace::INoteMovementProvider::get_noteMovement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::INoteMovementProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::NoteMovement>>(this, ___internal_method);
}
