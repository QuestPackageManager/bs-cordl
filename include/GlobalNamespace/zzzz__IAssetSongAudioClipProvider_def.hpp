#pragma once
// IWYU pragma private; include "GlobalNamespace/IAssetSongAudioClipProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAssetSongAudioClipProvider)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class IAssetSongAudioClipProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IAssetSongAudioClipProvider);
// Type: ::IAssetSongAudioClipProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IAssetSongAudioClipProvider*
class CORDL_TYPE IAssetSongAudioClipProvider {
public:
  // Declarations
  __declspec(property(get = get_songAudioClip))::UnityW<::UnityEngine::AudioClip> songAudioClip;

  /// @brief Method get_songAudioClip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_songAudioClip();

  // Ctor Parameters [CppParam { name: "", ty: "IAssetSongAudioClipProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAssetSongAudioClipProvider(IAssetSongAudioClipProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAssetSongAudioClipProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAssetSongAudioClipProvider(IAssetSongAudioClipProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IAssetSongAudioClipProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAssetSongAudioClipProvider*, "", "IAssetSongAudioClipProvider");
