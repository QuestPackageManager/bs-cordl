#pragma once
// IWYU pragma private; include "GlobalNamespace/IAssetSongPreviewAudioClipProvider.hpp"
#include "GlobalNamespace/zzzz__IAssetSongPreviewAudioClipProvider_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IAssetSongPreviewAudioClipProvider.get_songPreviewAudioClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::GlobalNamespace::IAssetSongPreviewAudioClipProvider::*)()>(
    &::GlobalNamespace::IAssetSongPreviewAudioClipProvider::get_songPreviewAudioClip)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::AudioClip> GlobalNamespace::IAssetSongPreviewAudioClipProvider::get_songPreviewAudioClip() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
