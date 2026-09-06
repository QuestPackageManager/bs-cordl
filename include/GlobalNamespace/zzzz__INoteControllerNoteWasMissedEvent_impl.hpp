#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteControllerNoteWasMissedEvent.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteWasMissedEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::INoteControllerNoteWasMissedEvent.HandleNoteControllerNoteWasMissed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::INoteControllerNoteWasMissedEvent::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::INoteControllerNoteWasMissedEvent::HandleNoteControllerNoteWasMissed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>(), 0 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::INoteControllerNoteWasMissedEvent::HandleNoteControllerNoteWasMissed(::GlobalNamespace::NoteController* noteController) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
