#pragma once
// IWYU pragma private; include "GlobalNamespace/IFilePathSongPreviewAudioClipProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IFilePathSongPreviewAudioClipProvider)
// Forward declare root types
namespace GlobalNamespace {
class IFilePathSongPreviewAudioClipProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IFilePathSongPreviewAudioClipProvider
class CORDL_TYPE IFilePathSongPreviewAudioClipProvider {
public:
  // Declarations
  __declspec(property(get = get_songPreviewAudioClipPath)) ::StringW songPreviewAudioClipPath;

  /// @brief Method get_songPreviewAudioClipPath, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_songPreviewAudioClipPath();

  // Ctor Parameters [CppParam { name: "", ty: "IFilePathSongPreviewAudioClipProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFilePathSongPreviewAudioClipProvider(IFilePathSongPreviewAudioClipProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18586 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*, "", "IFilePathSongPreviewAudioClipProvider");
