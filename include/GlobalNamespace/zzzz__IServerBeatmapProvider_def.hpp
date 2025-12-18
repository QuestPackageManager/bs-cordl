#pragma once
// IWYU pragma private; include "GlobalNamespace/IServerBeatmapProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IServerBeatmapProvider)
namespace GlobalNamespace {
class BeatmapKeyNetSerializable;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class IServerBeatmapProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IServerBeatmapProvider);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IServerBeatmapProvider
class CORDL_TYPE IServerBeatmapProvider {
public:
  // Declarations
  /// @brief Method SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKeyNetSerializable* SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks(
      int32_t playerCount, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* beatmapsSuggestedByPlayers,
      ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>* playerOwnedSongPacks);

  /// @brief Method VerifyBeatmapForSelectionMask, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool VerifyBeatmapForSelectionMask(::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask);

  // Ctor Parameters [CppParam { name: "", ty: "IServerBeatmapProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IServerBeatmapProvider(IServerBeatmapProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18871 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IServerBeatmapProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IServerBeatmapProvider*, "", "IServerBeatmapProvider");
