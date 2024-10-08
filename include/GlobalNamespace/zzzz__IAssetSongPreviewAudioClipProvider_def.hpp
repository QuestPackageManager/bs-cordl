#pragma once
// IWYU pragma private; include "GlobalNamespace/IAssetSongPreviewAudioClipProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAssetSongPreviewAudioClipProvider)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class IAssetSongPreviewAudioClipProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IAssetSongPreviewAudioClipProvider);
// Type: ::IAssetSongPreviewAudioClipProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IAssetSongPreviewAudioClipProvider*
class CORDL_TYPE IAssetSongPreviewAudioClipProvider {
public:
  // Declarations
  __declspec(property(get = get_songPreviewAudioClip)) ::UnityW<::UnityEngine::AudioClip> songPreviewAudioClip;

  /// @brief Method get_songPreviewAudioClip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_songPreviewAudioClip();

  // Ctor Parameters [CppParam { name: "", ty: "IAssetSongPreviewAudioClipProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAssetSongPreviewAudioClipProvider(IAssetSongPreviewAudioClipProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAssetSongPreviewAudioClipProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAssetSongPreviewAudioClipProvider(IAssetSongPreviewAudioClipProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18464 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IAssetSongPreviewAudioClipProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAssetSongPreviewAudioClipProvider*, "", "IAssetSongPreviewAudioClipProvider");
