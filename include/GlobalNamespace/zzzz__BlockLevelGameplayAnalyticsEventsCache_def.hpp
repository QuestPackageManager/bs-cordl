#pragma once
// IWYU pragma private; include "GlobalNamespace/BlockLevelGameplayAnalyticsEventsCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlockLevelGameplayAnalyticsEventsCache)
namespace GlobalNamespace {
struct BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData;
}
namespace GlobalNamespace {
struct BlockLevelGameplayAnalyticsEventsCache_BombHitData;
}
namespace GlobalNamespace {
struct BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData;
}
namespace GlobalNamespace {
struct BlockLevelGameplayAnalyticsEventsCache_MissedBlockData;
}
namespace GlobalNamespace {
struct BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
class IBlockLevelGameplayAnalyticsEventsCache;
}
namespace GlobalNamespace {
struct NoteCutInfo_FailReason;
}
namespace GlobalNamespace {
struct NoteData_GameplayType;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace Newtonsoft::Json {
class JsonTextWriter;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BlockLevelGameplayAnalyticsEventsCache;
}
namespace GlobalNamespace {
struct BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData;
}
namespace GlobalNamespace {
struct BlockLevelGameplayAnalyticsEventsCache_BombHitData;
}
namespace GlobalNamespace {
struct BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData;
}
namespace GlobalNamespace {
struct BlockLevelGameplayAnalyticsEventsCache_MissedBlockData;
}
namespace GlobalNamespace {
struct BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache);
MARK_VAL_T(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData);
MARK_VAL_T(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData);
MARK_VAL_T(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData);
MARK_VAL_T(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData);
MARK_VAL_T(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData);
// Dependencies System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: BlockLevelGameplayAnalyticsEventsCache/GoodHitBlockData
struct CORDL_TYPE BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData {
public:
// Declarations
/// @brief Method WriteFieldsToJson, addr 0x58bba1c, size 0xa0, virtual false, abstract: false, final false
inline void WriteFieldsToJson(::Newtonsoft::Json::JsonWriter*  jsonWriter) ;

/// @brief Method .ctor, addr 0x58ba7ec, size 0x18, virtual false, abstract: false, final false
inline void _ctor(float_t  beat, float_t  score, uint8_t  colorType, uint8_t  gameplayType, ::System::Nullable_1<uint8_t>  lineIndex, ::System::Nullable_1<uint8_t>  lineLayer) ;

// Ctor Parameters []
// @brief default ctor
constexpr BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData() ;

// Ctor Parameters [CppParam { name: "Beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Score", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ColorType", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "GameplayType", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "LineIndex", ty: "::System::Nullable_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "LineLayer", ty: "::System::Nullable_1<uint8_t>", modifiers: "", def_value: None }]
constexpr BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData(float_t  Beat, float_t  Score, uint8_t  ColorType, uint8_t  GameplayType, ::System::Nullable_1<uint8_t>  LineIndex, ::System::Nullable_1<uint8_t>  LineLayer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6255};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Beat, offset: 0x0, size: 0x4, def value: None
 float_t  Beat;

/// @brief Field Score, offset: 0x4, size: 0x4, def value: None
 float_t  Score;

/// @brief Field ColorType, offset: 0x8, size: 0x1, def value: None
 uint8_t  ColorType;

/// @brief Field GameplayType, offset: 0x9, size: 0x1, def value: None
 uint8_t  GameplayType;

/// @brief Field LineIndex, offset: 0xa, size: 0x2, def value: None
 ::System::Nullable_1<uint8_t>  LineIndex;

/// @brief Field LineLayer, offset: 0xc, size: 0x2, def value: None
 ::System::Nullable_1<uint8_t>  LineLayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData, Beat) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData, Score) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData, ColorType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData, GameplayType) == 0x9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData, LineIndex) == 0xa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData, LineLayer) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: BlockLevelGameplayAnalyticsEventsCache/BadHitBlockData
struct CORDL_TYPE BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData {
public:
// Declarations
/// @brief Method WriteFieldsToJson, addr 0x58bb97c, size 0xa0, virtual false, abstract: false, final false
inline void WriteFieldsToJson(::Newtonsoft::Json::JsonWriter*  jsonWriter) ;

/// @brief Method .ctor, addr 0x58ba9b4, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(float_t  beat, uint8_t  failReason, uint8_t  colorType, uint8_t  gameplayType, ::System::Nullable_1<uint8_t>  lineIndex, ::System::Nullable_1<uint8_t>  lineLayer) ;

// Ctor Parameters []
// @brief default ctor
constexpr BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData() ;

// Ctor Parameters [CppParam { name: "Beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "FailReason", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "ColorType", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "GameplayType", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "LineIndex", ty: "::System::Nullable_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "LineLayer", ty: "::System::Nullable_1<uint8_t>", modifiers: "", def_value: None }]
constexpr BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData(float_t  Beat, uint8_t  FailReason, uint8_t  ColorType, uint8_t  GameplayType, ::System::Nullable_1<uint8_t>  LineIndex, ::System::Nullable_1<uint8_t>  LineLayer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6256};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Beat, offset: 0x0, size: 0x4, def value: None
 float_t  Beat;

/// @brief Field FailReason, offset: 0x4, size: 0x1, def value: None
 uint8_t  FailReason;

/// @brief Field ColorType, offset: 0x5, size: 0x1, def value: None
 uint8_t  ColorType;

/// @brief Field GameplayType, offset: 0x6, size: 0x1, def value: None
 uint8_t  GameplayType;

/// @brief Field LineIndex, offset: 0x7, size: 0x2, def value: None
 ::System::Nullable_1<uint8_t>  LineIndex;

/// @brief Field LineLayer, offset: 0x9, size: 0x2, def value: None
 ::System::Nullable_1<uint8_t>  LineLayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData, Beat) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData, FailReason) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData, ColorType) == 0x5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData, GameplayType) == 0x6, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData, LineIndex) == 0x7, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData, LineLayer) == 0x9, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData, 0xc>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: BlockLevelGameplayAnalyticsEventsCache/MissedBlockData
struct CORDL_TYPE BlockLevelGameplayAnalyticsEventsCache_MissedBlockData {
public:
// Declarations
/// @brief Method WriteFieldsToJson, addr 0x58bb80c, size 0x20, virtual false, abstract: false, final false
inline void WriteFieldsToJson(::Newtonsoft::Json::JsonWriter*  jsonWriter) ;

/// @brief Method .ctor, addr 0x58bab58, size 0x18, virtual false, abstract: false, final false
inline void _ctor(float_t  beat, uint8_t  colorType, uint8_t  gameplayType, ::System::Nullable_1<uint8_t>  lineIndex, ::System::Nullable_1<uint8_t>  lineLayer) ;

// Ctor Parameters []
// @brief default ctor
constexpr BlockLevelGameplayAnalyticsEventsCache_MissedBlockData() ;

// Ctor Parameters [CppParam { name: "Beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ColorType", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "GameplayType", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "LineIndex", ty: "::System::Nullable_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "LineLayer", ty: "::System::Nullable_1<uint8_t>", modifiers: "", def_value: None }]
constexpr BlockLevelGameplayAnalyticsEventsCache_MissedBlockData(float_t  Beat, uint8_t  ColorType, uint8_t  GameplayType, ::System::Nullable_1<uint8_t>  LineIndex, ::System::Nullable_1<uint8_t>  LineLayer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6257};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Beat, offset: 0x0, size: 0x4, def value: None
 float_t  Beat;

/// @brief Field ColorType, offset: 0x4, size: 0x1, def value: None
 uint8_t  ColorType;

/// @brief Field GameplayType, offset: 0x5, size: 0x1, def value: None
 uint8_t  GameplayType;

/// @brief Field LineIndex, offset: 0x6, size: 0x2, def value: None
 ::System::Nullable_1<uint8_t>  LineIndex;

/// @brief Field LineLayer, offset: 0x8, size: 0x2, def value: None
 ::System::Nullable_1<uint8_t>  LineLayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData, Beat) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData, ColorType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData, GameplayType) == 0x5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData, LineIndex) == 0x6, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData, LineLayer) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData, 0xc>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BlockLevelGameplayAnalyticsEventsCache/BombHitData
struct CORDL_TYPE BlockLevelGameplayAnalyticsEventsCache_BombHitData {
public:
// Declarations
/// @brief Method WriteFieldsToJson, addr 0x58bb82c, size 0x84, virtual false, abstract: false, final false
inline void WriteFieldsToJson(::Newtonsoft::Json::JsonWriter*  jsonWriter) ;

/// @brief Method .ctor, addr 0x58bbce8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(float_t  beat) ;

// Ctor Parameters []
// @brief default ctor
constexpr BlockLevelGameplayAnalyticsEventsCache_BombHitData() ;

// Ctor Parameters [CppParam { name: "Beat", ty: "float_t", modifiers: "", def_value: None }]
constexpr BlockLevelGameplayAnalyticsEventsCache_BombHitData(float_t  Beat) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6258};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Beat, offset: 0x0, size: 0x4, def value: None
 float_t  Beat;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData, Beat) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BlockLevelGameplayAnalyticsEventsCache/ObstacleHitData
struct CORDL_TYPE BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData {
public:
// Declarations
/// @brief Method WriteFieldsToJson, addr 0x58bb8b0, size 0xcc, virtual false, abstract: false, final false
inline void WriteFieldsToJson(::Newtonsoft::Json::JsonWriter*  jsonWriter) ;

/// @brief Method .ctor, addr 0x58bace0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(float_t  beat, float_t  duration) ;

// Ctor Parameters []
// @brief default ctor
constexpr BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData() ;

// Ctor Parameters [CppParam { name: "Beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Duration", ty: "float_t", modifiers: "", def_value: None }]
constexpr BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData(float_t  Beat, float_t  Duration) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6259};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Beat, offset: 0x0, size: 0x4, def value: None
 float_t  Beat;

/// @brief Field Duration, offset: 0x4, size: 0x4, def value: None
 float_t  Duration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData, Beat) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData, Duration) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData, 0x8>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BlockLevelGameplayAnalyticsEventsCache
class CORDL_TYPE BlockLevelGameplayAnalyticsEventsCache : public ::System::Object {
public:
// Declarations
using BadHitBlockData = ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData;

using BombHitData = ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData;

using GoodHitBlockData = ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData;

using MissedBlockData = ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData;

using ObstacleHitData = ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData;

/// @brief Field _badCuts, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__badCuts, put=__cordl_internal_set__badCuts)) ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData>*  _badCuts;

/// @brief Field _bombHits, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__bombHits, put=__cordl_internal_set__bombHits)) ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData>*  _bombHits;

/// @brief Field _goodCuts, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__goodCuts, put=__cordl_internal_set__goodCuts)) ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData>*  _goodCuts;

/// @brief Field _missedBlocks, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__missedBlocks, put=__cordl_internal_set__missedBlocks)) ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData>*  _missedBlocks;

/// @brief Field _obstacleHits, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__obstacleHits, put=__cordl_internal_set__obstacleHits)) ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData>*  _obstacleHits;

/// @brief Convert operator to "::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache"
constexpr operator  ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*() noexcept;

/// @brief Method AddBadCut, addr 0x58ba804, size 0x1b0, virtual true, abstract: false, final true
inline void AddBadCut(float_t  beat, ::GlobalNamespace::NoteCutInfo_FailReason  failReason, ::GlobalNamespace::ColorType  colorType, ::GlobalNamespace::NoteData_GameplayType  gameplayType, ::System::Nullable_1<int32_t>  lineIndex, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer>  lineLayer) ;

/// @brief Method AddBlockMiss, addr 0x58ba9d0, size 0x188, virtual true, abstract: false, final true
inline void AddBlockMiss(float_t  beat, ::GlobalNamespace::ColorType  colorType, ::GlobalNamespace::NoteData_GameplayType  gameplayType, ::System::Nullable_1<int32_t>  lineIndex, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer>  lineLayer) ;

/// @brief Method AddBombCut, addr 0x58bab70, size 0xb4, virtual true, abstract: false, final true
inline void AddBombCut(float_t  beat) ;

/// @brief Method AddGoodCut, addr 0x58ba668, size 0x184, virtual true, abstract: false, final true
inline void AddGoodCut(float_t  beat, float_t  score, ::GlobalNamespace::ColorType  colorType, ::GlobalNamespace::NoteData_GameplayType  gameplayType, ::System::Nullable_1<int32_t>  lineIndex, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer>  lineLayer) ;

/// @brief Method AddObstacleHit, addr 0x58bac24, size 0xbc, virtual true, abstract: false, final true
inline void AddObstacleHit(float_t  beat, float_t  duration) ;

/// @brief Method IsEmpty, addr 0x58bb710, size 0xfc, virtual true, abstract: false, final true
inline bool IsEmpty() ;

static inline ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache* New_ctor(int32_t  maxBlocks, int32_t  maxBombs, int32_t  maxObstacles) ;

/// @brief Method SerializeJSON, addr 0x58bace8, size 0x224, virtual true, abstract: false, final true
inline ::StringW SerializeJSON() ;

/// @brief Method WriteBadHitBlocksArray, addr 0x58bb0a0, size 0x1a0, virtual false, abstract: false, final false
inline void WriteBadHitBlocksArray(::Newtonsoft::Json::JsonTextWriter*  jsonWriter, ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData>*  blocks) ;

/// @brief Method WriteBombsHitArray, addr 0x58bb3e8, size 0x194, virtual false, abstract: false, final false
inline void WriteBombsHitArray(::Newtonsoft::Json::JsonTextWriter*  jsonWriter, ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData>*  bombHits) ;

/// @brief Method WriteCommonBlockFieldsToJson, addr 0x58bbabc, size 0x22c, virtual false, abstract: false, final false
static inline void WriteCommonBlockFieldsToJson(::Newtonsoft::Json::JsonWriter*  jsonWriter, float_t  beat, uint8_t  colorType, uint8_t  gameplayType, ::System::Nullable_1<uint8_t>  lineIndex, ::System::Nullable_1<uint8_t>  lineLayer) ;

/// @brief Method WriteGoodCutsArray, addr 0x58baf0c, size 0x194, virtual false, abstract: false, final false
static inline void WriteGoodCutsArray(::Newtonsoft::Json::JsonTextWriter*  jsonWriter, ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData>*  blocks) ;

/// @brief Method WriteMissedBlocksArray, addr 0x58bb240, size 0x1a8, virtual false, abstract: false, final false
inline void WriteMissedBlocksArray(::Newtonsoft::Json::JsonTextWriter*  jsonWriter, ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData>*  missedBlocks) ;

/// @brief Method WriteObstaclesHitArray, addr 0x58bb57c, size 0x194, virtual false, abstract: false, final false
inline void WriteObstaclesHitArray(::Newtonsoft::Json::JsonTextWriter*  jsonWriter, ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData>*  obstacleHits) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData>* const& __cordl_internal_get__badCuts() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData>*& __cordl_internal_get__badCuts() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData>* const& __cordl_internal_get__bombHits() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData>*& __cordl_internal_get__bombHits() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData>* const& __cordl_internal_get__goodCuts() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData>*& __cordl_internal_get__goodCuts() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData>* const& __cordl_internal_get__missedBlocks() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData>*& __cordl_internal_get__missedBlocks() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData>* const& __cordl_internal_get__obstacleHits() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData>*& __cordl_internal_get__obstacleHits() ;

constexpr void __cordl_internal_set__badCuts(::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData>*  value) ;

constexpr void __cordl_internal_set__bombHits(::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData>*  value) ;

constexpr void __cordl_internal_set__goodCuts(::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData>*  value) ;

constexpr void __cordl_internal_set__missedBlocks(::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData>*  value) ;

constexpr void __cordl_internal_set__obstacleHits(::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData>*  value) ;

/// @brief Method .ctor, addr 0x58ba498, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(int32_t  maxBlocks, int32_t  maxBombs, int32_t  maxObstacles) ;

/// @brief Convert to "::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache"
constexpr ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache* i___GlobalNamespace__IBlockLevelGameplayAnalyticsEventsCache() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BlockLevelGameplayAnalyticsEventsCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BlockLevelGameplayAnalyticsEventsCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BlockLevelGameplayAnalyticsEventsCache(BlockLevelGameplayAnalyticsEventsCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BlockLevelGameplayAnalyticsEventsCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BlockLevelGameplayAnalyticsEventsCache(BlockLevelGameplayAnalyticsEventsCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6260};

/// @brief Field kDefaultBlocksCacheCapacity offset 0xffffffff size 0x4
static constexpr int32_t  kDefaultBlocksCacheCapacity{static_cast<int32_t>(0x200)};

/// @brief Field kDefaultBombsCacheCapacity offset 0xffffffff size 0x4
static constexpr int32_t  kDefaultBombsCacheCapacity{static_cast<int32_t>(0x14)};

/// @brief Field kDefaultObstaclesCacheCapacity offset 0xffffffff size 0x4
static constexpr int32_t  kDefaultObstaclesCacheCapacity{static_cast<int32_t>(0x32)};

/// @brief Field _goodCuts, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData>*  ____goodCuts;

/// @brief Field _badCuts, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData>*  ____badCuts;

/// @brief Field _missedBlocks, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData>*  ____missedBlocks;

/// @brief Field _bombHits, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData>*  ____bombHits;

/// @brief Field _obstacleHits, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData>*  ____obstacleHits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache, ____goodCuts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache, ____badCuts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache, ____missedBlocks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache, ____bombHits) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache, ____obstacleHits) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*, "", "BlockLevelGameplayAnalyticsEventsCache");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData, "", "BlockLevelGameplayAnalyticsEventsCache/BadHitBlockData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData, "", "BlockLevelGameplayAnalyticsEventsCache/BombHitData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData, "", "BlockLevelGameplayAnalyticsEventsCache/GoodHitBlockData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData, "", "BlockLevelGameplayAnalyticsEventsCache/MissedBlockData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData, "", "BlockLevelGameplayAnalyticsEventsCache/ObstacleHitData");
