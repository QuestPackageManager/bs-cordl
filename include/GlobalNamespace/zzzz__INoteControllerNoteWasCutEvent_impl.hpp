#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteControllerNoteWasCutEvent.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteWasCutEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::INoteControllerNoteWasCutEvent.HandleNoteControllerNoteWasCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::INoteControllerNoteWasCutEvent::*)(
    ::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&::GlobalNamespace::INoteControllerNoteWasCutEvent::HandleNoteControllerNoteWasCut)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteWasCutEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteWasCutEvent*>::get(), 0));
    return ___internal_method;
  }
};
inline void GlobalNamespace::INoteControllerNoteWasCutEvent::HandleNoteControllerNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteWasCutEvent*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController, noteCutInfo);
}
