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
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IAssetSongPreviewAudioClipProvider
class CORDL_TYPE IAssetSongPreviewAudioClipProvider {
public:
  // Declarations
  __declspec(property(get = get_songPreviewAudioClip)) ::UnityW<::UnityEngine::AudioClip> songPreviewAudioClip;

  /// @brief Method get_songPreviewAudioClip, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_songPreviewAudioClip();

  // Ctor Parameters [CppParam { name: "", ty: "IAssetSongPreviewAudioClipProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAssetSongPreviewAudioClipProvider(IAssetSongPreviewAudioClipProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18592 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IAssetSongPreviewAudioClipProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAssetSongPreviewAudioClipProvider*, "", "IAssetSongPreviewAudioClipProvider");
