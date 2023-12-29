#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CustomPreviewBeatmapLevel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CustomBeatmapLevel)
namespace GlobalNamespace {
class CustomPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelData;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class IFilePathSongAudioClipProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomBeatmapLevel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomBeatmapLevel);
// Type: ::CustomBeatmapLevel
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4407))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4405))
// CS Name: ::CustomBeatmapLevel*
class CORDL_TYPE CustomBeatmapLevel : public ::GlobalNamespace::CustomPreviewBeatmapLevel {
public:
  // Declarations
  /// @brief Field _beatmapLevelData, offset 0x98, size 0x8
  __declspec(property(get = __get__beatmapLevelData, put = __set__beatmapLevelData))::GlobalNamespace::BeatmapLevelData* _beatmapLevelData;

  __declspec(property(get = get_beatmapLevelData))::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  __declspec(property(get = get_songAudioClipPath))::StringW songAudioClipPath;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevel"
  constexpr operator ::GlobalNamespace::IBeatmapLevel*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPreviewBeatmapLevel"
  constexpr operator ::GlobalNamespace::IPreviewBeatmapLevel*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IFilePathSongAudioClipProvider"
  constexpr operator ::GlobalNamespace::IFilePathSongAudioClipProvider*() noexcept;

  constexpr ::GlobalNamespace::BeatmapLevelData*& __get__beatmapLevelData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelData*> const& __get__beatmapLevelData() const;

  constexpr void __set__beatmapLevelData(::GlobalNamespace::BeatmapLevelData* value);

  /// @brief Method get_beatmapLevelData addr 0x21fce10 size 0x8 virtual true final true
  inline ::GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();

  /// @brief Method get_songAudioClipPath addr 0x21fce18 size 0x4 virtual true final true
  inline ::StringW get_songAudioClipPath();

  static inline ::GlobalNamespace::CustomBeatmapLevel* New_ctor(::GlobalNamespace::CustomPreviewBeatmapLevel* customPreviewBeatmapLevel);

  /// @brief Method .ctor addr 0x21fce8c size 0xb0 virtual false final false
  inline void _ctor(::GlobalNamespace::CustomPreviewBeatmapLevel* customPreviewBeatmapLevel);

  /// @brief Method SetBeatmapLevelData addr 0x21fd014 size 0x8 virtual false final false
  inline void SetBeatmapLevelData(::GlobalNamespace::BeatmapLevelData* beatmapLevelData);

  // Ctor Parameters [CppParam { name: "", ty: "CustomBeatmapLevel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomBeatmapLevel(CustomBeatmapLevel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomBeatmapLevel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomBeatmapLevel(CustomBeatmapLevel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomBeatmapLevel();

public:
  /// @brief Field _beatmapLevelData, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelData* ____beatmapLevelData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomBeatmapLevel, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomBeatmapLevel, ____beatmapLevelData) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomBeatmapLevel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomBeatmapLevel*, "", "CustomBeatmapLevel");
