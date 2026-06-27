#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventsBuilderSharedCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventsBuilderSharedCache)
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipSegmentEventSettingsField;
}
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipSegmentType;
}
namespace BeatSaber::Analytics::Gameplay {
class SegmentState;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay {
class EventsBuilderSharedCache;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache);
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventsBuilderSharedCache
class CORDL_TYPE EventsBuilderSharedCache : public ::System::Object {
public:
// Declarations
/// @brief Field _finishedSegmentIds, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__finishedSegmentIds, put=__cordl_internal_set__finishedSegmentIds)) ::System::Collections::Generic::HashSet_1<::StringW>*  _finishedSegmentIds;

/// @brief Field _segmentIdToState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__segmentIdToState, put=__cordl_internal_set__segmentIdToState)) ::System::Collections::Generic::Dictionary_2<::StringW,::BeatSaber::Analytics::Gameplay::SegmentState*>*  _segmentIdToState;

/// @brief Field _segmentNameToId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__segmentNameToId, put=__cordl_internal_set__segmentNameToId)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _segmentNameToId;

/// @brief Method AddSegment, addr 0x31cdd24, size 0xf4, virtual false, abstract: false, final false
inline void AddSegment(::StringW  segmentId, ::StringW  segmentName, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  type, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*  settings) ;

/// @brief Method Clear, addr 0x31ced1c, size 0xa4, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetSegmentState, addr 0x31cdfe0, size 0x74, virtual false, abstract: false, final false
inline ::BeatSaber::Analytics::Gameplay::SegmentState* GetSegmentState(::StringW  segmentId) ;

/// @brief Method IsSegmentFinished, addr 0x31cdcc0, size 0x64, virtual false, abstract: false, final false
inline bool IsSegmentFinished(::StringW  segmentId) ;

/// @brief Method MarkSegmentAsFinished, addr 0x31cea8c, size 0x70, virtual false, abstract: false, final false
inline void MarkSegmentAsFinished(::StringW  segmentId) ;

static inline ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache* New_ctor() ;

/// @brief Method RemoveSegment, addr 0x31ce9cc, size 0xc0, virtual false, abstract: false, final false
inline bool RemoveSegment(::StringW  segmentName) ;

/// @brief Method TryGetSegmentId, addr 0x31cdc54, size 0x6c, virtual false, abstract: false, final false
inline bool TryGetSegmentId(::StringW  segmentName, ::ByRef<::StringW>  segmentId) ;

/// @brief Method UpdateSeqNum, addr 0x31ce958, size 0x74, virtual false, abstract: false, final false
inline void UpdateSeqNum(::StringW  segmentId, int32_t  seqNum) ;

/// @brief Method UpdateSettings, addr 0x31cd8a4, size 0x1c, virtual false, abstract: false, final false
inline void UpdateSettings(::StringW  segmentId, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*  settings) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__finishedSegmentIds() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__finishedSegmentIds() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::BeatSaber::Analytics::Gameplay::SegmentState*>* const& __cordl_internal_get__segmentIdToState() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::BeatSaber::Analytics::Gameplay::SegmentState*>*& __cordl_internal_get__segmentIdToState() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__segmentNameToId() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__segmentNameToId() ;

constexpr void __cordl_internal_set__finishedSegmentIds(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__segmentIdToState(::System::Collections::Generic::Dictionary_2<::StringW,::BeatSaber::Analytics::Gameplay::SegmentState*>*  value) ;

constexpr void __cordl_internal_set__segmentNameToId(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x31cebc8, size 0x14c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventsBuilderSharedCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventsBuilderSharedCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventsBuilderSharedCache(EventsBuilderSharedCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventsBuilderSharedCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventsBuilderSharedCache(EventsBuilderSharedCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22085};

/// @brief Field _segmentNameToId, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____segmentNameToId;

/// @brief Field _finishedSegmentIds, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ____finishedSegmentIds;

/// @brief Field _segmentIdToState, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::BeatSaber::Analytics::Gameplay::SegmentState*>*  ____segmentIdToState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache, ____segmentNameToId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache, ____finishedSegmentIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache, ____segmentIdToState) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache, 0x28>, "Size mismatch!");

} // namespace end def BeatSaber::Analytics::Gameplay
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*, "BeatSaber.Analytics.Gameplay", "EventsBuilderSharedCache");
