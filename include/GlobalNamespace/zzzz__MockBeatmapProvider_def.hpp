#pragma once
// IWYU pragma private; include "GlobalNamespace/MockBeatmapProvider.hpp"
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
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class IServerBeatmapProvider;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MockBeatmapProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockBeatmapProvider);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockBeatmapProvider
class CORDL_TYPE MockBeatmapProvider : public ::System::Object {
public:
// Declarations
/// @brief Field _beatmapLevelsModel, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatmapLevelsModel, put=__cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel*  _beatmapLevelsModel;

/// @brief Convert operator to "::GlobalNamespace::IServerBeatmapProvider"
constexpr operator  ::GlobalNamespace::IServerBeatmapProvider*() noexcept;

/// @brief Method Dispose, addr 0x5893c14, size 0x4, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method GetBeatmapDurationMs, addr 0x5893af4, size 0x120, virtual true, abstract: false, final true
inline int32_t GetBeatmapDurationMs(::GlobalNamespace::BeatmapKeyNetSerializable*  beatmapKeySerializable) ;

static inline ::GlobalNamespace::MockBeatmapProvider* New_ctor(::GlobalNamespace::BeatmapLevelsModel*  beatmapLevelsModel) ;

/// @brief Method SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks, addr 0x5893a68, size 0x8c, virtual true, abstract: false, final true
inline ::GlobalNamespace::BeatmapKeyNetSerializable* SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks(int32_t  playerCount, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BeatmapKeyNetSerializable*>*  suggestedBeatmaps, ::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::SongPackMask>*  ownedSongPacks) ;

/// @brief Method VerifyBeatmapForSelectionMask, addr 0x5893a60, size 0x8, virtual true, abstract: false, final true
inline bool VerifyBeatmapForSelectionMask(::GlobalNamespace::BeatmapKeyNetSerializable*  beatmapKeySerializable, ::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask) ;

constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel() ;

constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel*  value) ;

/// @brief Method .ctor, addr 0x5893a58, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::BeatmapLevelsModel*  beatmapLevelsModel) ;

/// @brief Convert to "::GlobalNamespace::IServerBeatmapProvider"
constexpr ::GlobalNamespace::IServerBeatmapProvider* i___GlobalNamespace__IServerBeatmapProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MockBeatmapProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MockBeatmapProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockBeatmapProvider(MockBeatmapProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockBeatmapProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockBeatmapProvider(MockBeatmapProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6121};

/// @brief Field _beatmapLevelsModel, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::BeatmapLevelsModel*  ____beatmapLevelsModel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockBeatmapProvider, ____beatmapLevelsModel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockBeatmapProvider, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockBeatmapProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockBeatmapProvider*, "", "MockBeatmapProvider");
