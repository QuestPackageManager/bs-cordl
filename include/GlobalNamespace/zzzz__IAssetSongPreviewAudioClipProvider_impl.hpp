#pragma once
// IWYU pragma private; include "GlobalNamespace/IAssetSongPreviewAudioClipProvider.hpp"
#include "GlobalNamespace/zzzz__IAssetSongPreviewAudioClipProvider_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
inline ::UnityW<::UnityEngine::AudioClip> GlobalNamespace::IAssetSongPreviewAudioClipProvider::get_songPreviewAudioClip() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}
