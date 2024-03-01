#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MockBeatmapProvider)
namespace GlobalNamespace {
class BeatmapKeyNetSerializable;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
class IServerBeatmapProvider;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MockBeatmapProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockBeatmapProvider);
// Type: ::MockBeatmapProvider
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MockBeatmapProvider*
class CORDL_TYPE MockBeatmapProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IServerBeatmapProvider"
  constexpr operator ::GlobalNamespace::IServerBeatmapProvider*() noexcept;

  /// @brief Method Dispose, addr 0x246ca54, size 0x4, virtual false, abstract: false, final false
  inline void Dispose();

  static inline ::GlobalNamespace::MockBeatmapProvider* New_ctor();

  /// @brief Method SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks, addr 0x246c9c4, size 0x90, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapKeyNetSerializable* SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks(
      int32_t playerCount, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* suggestedBeatmaps,
      ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>* ownedSongPacks);

  /// @brief Method VerifyBeatmapForSelectionMask, addr 0x246c9bc, size 0x8, virtual true, abstract: false, final true
  inline bool VerifyBeatmapForSelectionMask(::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask);

  /// @brief Method .ctor, addr 0x246ca58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IServerBeatmapProvider"
  constexpr ::GlobalNamespace::IServerBeatmapProvider* i___GlobalNamespace__IServerBeatmapProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockBeatmapProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockBeatmapProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockBeatmapProvider(MockBeatmapProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockBeatmapProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockBeatmapProvider(MockBeatmapProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockBeatmapProvider, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockBeatmapProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockBeatmapProvider*, "", "MockBeatmapProvider");
