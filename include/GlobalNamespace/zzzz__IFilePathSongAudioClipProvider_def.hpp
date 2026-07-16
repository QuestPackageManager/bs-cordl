#pragma once
// IWYU pragma private; include "GlobalNamespace/IFilePathSongAudioClipProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IFilePathSongAudioClipProvider)
// Forward declare root types
namespace GlobalNamespace {
class IFilePathSongAudioClipProvider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IFilePathSongAudioClipProvider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IFilePathSongAudioClipProvider*, "", "IFilePathSongAudioClipProvider");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IFilePathSongAudioClipProvider
class CORDL_TYPE IFilePathSongAudioClipProvider {
public:
  // Declarations
  __declspec(property(get = get_songAudioClipPath)) ::StringW songAudioClipPath;

  /// @brief Method get_songAudioClipPath, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_songAudioClipPath();

  // Ctor Parameters [CppParam { name: "", ty: "IFilePathSongAudioClipProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFilePathSongAudioClipProvider(IFilePathSongAudioClipProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22794 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
