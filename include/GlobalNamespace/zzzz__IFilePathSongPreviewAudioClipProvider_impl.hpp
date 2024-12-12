#pragma once
// IWYU pragma private; include "GlobalNamespace/IFilePathSongPreviewAudioClipProvider.hpp"
#include "GlobalNamespace/zzzz__IFilePathSongPreviewAudioClipProvider_def.hpp"
inline ::StringW GlobalNamespace::IFilePathSongPreviewAudioClipProvider::get_songPreviewAudioClipPath() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
