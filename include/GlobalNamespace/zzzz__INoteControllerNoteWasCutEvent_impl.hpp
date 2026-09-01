#pragma once
// IWYU pragma private; include "GlobalNamespace\INoteControllerNoteWasCutEvent.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteWasCutEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::INoteControllerNoteWasCutEvent.HandleNoteControllerNoteWasCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::INoteControllerNoteWasCutEvent::*)(::GlobalNamespace::NoteController*, ::by_ref<::GlobalNamespace::NoteCutInfo>)>(
    &::GlobalNamespace::INoteControllerNoteWasCutEvent::HandleNoteControllerNoteWasCut)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::INoteControllerNoteWasCutEvent*>(), { ::i2c::class_of<::GlobalNamespace::INoteControllerNoteWasCutEvent*>(), 0 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::INoteControllerNoteWasCutEvent::HandleNoteControllerNoteWasCut(::GlobalNamespace::NoteController* noteController, ::by_ref<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::INoteControllerNoteWasCutEvent*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController, noteCutInfo);
}
