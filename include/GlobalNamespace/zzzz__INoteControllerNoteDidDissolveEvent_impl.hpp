#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteControllerNoteDidDissolveEvent.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidDissolveEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::INoteControllerNoteDidDissolveEvent.HandleNoteControllerNoteDidDissolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::INoteControllerNoteDidDissolveEvent::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::INoteControllerNoteDidDissolveEvent::HandleNoteControllerNoteDidDissolve)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>::get(), 0));
    return ___internal_method;
  }
};
inline void GlobalNamespace::INoteControllerNoteDidDissolveEvent::HandleNoteControllerNoteDidDissolve(::GlobalNamespace::NoteController* noteController) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
