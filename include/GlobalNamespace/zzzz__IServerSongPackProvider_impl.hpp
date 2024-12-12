#pragma once
// IWYU pragma private; include "GlobalNamespace/IServerSongPackProvider.hpp"
#include "GlobalNamespace/zzzz__IServerSongPackProvider_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
inline ::ArrayW<::GlobalNamespace::SongPackMask, ::Array<::GlobalNamespace::SongPackMask>*>
GlobalNamespace::IServerSongPackProvider::DecomposeSongPackMask(::GlobalNamespace::SongPackMask songPackMask) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IServerSongPackProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::SongPackMask, ::Array<::GlobalNamespace::SongPackMask>*>, false>(this, ___internal_method, songPackMask);
}
