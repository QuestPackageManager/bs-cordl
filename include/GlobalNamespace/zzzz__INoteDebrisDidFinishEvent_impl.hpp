#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteDebrisDidFinishEvent.hpp"
#include "GlobalNamespace/zzzz__INoteDebrisDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteDebris_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::INoteDebrisDidFinishEvent.HandleNoteDebrisDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::INoteDebrisDidFinishEvent::*)(::GlobalNamespace::NoteDebris*)>(
    &::GlobalNamespace::INoteDebrisDidFinishEvent::HandleNoteDebrisDidFinish)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::INoteDebrisDidFinishEvent*>(), { ::i2c::class_of<::GlobalNamespace::INoteDebrisDidFinishEvent*>(), 0 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::INoteDebrisDidFinishEvent::HandleNoteDebrisDidFinish(::GlobalNamespace::NoteDebris* noteDebris) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::INoteDebrisDidFinishEvent*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteDebris);
}
