#pragma once
#include "GlobalNamespace/zzzz__INoteControllerNoteDidStartDissolvingEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent.HandleNoteControllerNoteDidStartDissolving
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent::*)(
    ::GlobalNamespace::NoteControllerBase*, float_t)>(&::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent::HandleNoteControllerNoteDidStartDissolving)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>::get(), 0));
    return ___internal_method;
  }
};
inline void GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent::HandleNoteControllerNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase* noteController, float_t duration) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController, duration);
}
