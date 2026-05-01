#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventsBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EventsBuilder)
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipEventType;
}
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipMetricType;
}
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipSegmentEventSettingsField;
}
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipSegmentType;
}
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipUserEventBase;
}
namespace BeatSaber::Analytics::Gameplay {
class EventsBuilderSharedCache;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay {
class EventsBuilder;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::EventsBuilder);
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventsBuilder
class CORDL_TYPE EventsBuilder : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_HasEndEvent)) bool HasEndEvent;

  /// @brief Field _cache, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__cache, put = __cordl_internal_set__cache)) ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache* _cache;

  /// @brief Field _currentSeqNum, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__currentSeqNum, put = __cordl_internal_set__currentSeqNum)) int32_t _currentSeqNum;

  /// @brief Field _events, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__events,
                      put = __cordl_internal_set__events)) ::System::Collections::Generic::List_1<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>* _events;

  /// @brief Field _segmentId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__segmentId, put = __cordl_internal_set__segmentId)) ::StringW _segmentId;

  /// @brief Field _segmentName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__segmentName, put = __cordl_internal_set__segmentName)) ::StringW _segmentName;

  /// @brief Field _segmentSettings, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__segmentSettings,
                      put = __cordl_internal_set__segmentSettings)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* _segmentSettings;

  /// @brief Field _segmentType, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__segmentType, put = __cordl_internal_set__segmentType)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* _segmentType;

  /// @brief Method AbortSegment, addr 0x31cd540, size 0x1b0, virtual false, abstract: false, final false
  inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* AbortSegment(uint32_t durationInSeconds);

  /// @brief Method Build, addr 0x31cdaa8, size 0x190, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>* Build();

  /// @brief Method EndSegment, addr 0x31cd334, size 0x1b0, virtual false, abstract: false, final false
  inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* EndSegment(uint32_t durationInSeconds);

  /// @brief Method ForSegment, addr 0x31cd144, size 0x17c, virtual false, abstract: false, final false
  inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* ForSegment(::StringW segmentName);

  /// @brief Method HasOngoingSegment, addr 0x31cd6f0, size 0x54, virtual false, abstract: false, final false
  inline bool HasOngoingSegment(::StringW segmentName);

  /// @brief Method IsEndEvent, addr 0x31cca40, size 0x108, virtual false, abstract: false, final false
  inline bool IsEndEvent(::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase* evt);

  static inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* New_ctor(::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache* cache);

  /// @brief Method SetMatchId, addr 0x31ccb48, size 0x3c, virtual false, abstract: false, final false
  inline void SetMatchId(::StringW matchId);

  /// @brief Method SetupSegmentFields, addr 0x31ccba0, size 0xc, virtual false, abstract: false, final false
  inline void SetupSegmentFields(::StringW segmentName, ::StringW segmentId, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* currentSegmentType,
                                 ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* currentSegmentSettings);

  /// @brief Method StartSegment, addr 0x31ccc34, size 0x300, virtual false, abstract: false, final false
  inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* StartSegment(::StringW segmentName, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* type,
                                                                       ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* settings);

  /// @brief Method ThrowIfAlreadyContainsEndEvent, addr 0x31cd4e4, size 0x5c, virtual false, abstract: false, final false
  inline void ThrowIfAlreadyContainsEndEvent();

  /// @brief Method TryFlushSegmentData, addr 0x31cdddc, size 0x14, virtual false, abstract: false, final false
  inline bool TryFlushSegmentData(::StringW segmentName);

  /// @brief Method WithCustomEvent, addr 0x31cd8fc, size 0x160, virtual false, abstract: false, final false
  inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* WithCustomEvent(::StringW payload, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* eventType);

  /// @brief Method WithMetric, addr 0x31cd744, size 0x16c, virtual false, abstract: false, final false
  inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* WithMetric(::StringW metricName, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* spaceshipMetricType, float_t value);

  constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache* const& __cordl_internal_get__cache() const;

  constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*& __cordl_internal_get__cache();

  constexpr int32_t const& __cordl_internal_get__currentSeqNum() const;

  constexpr int32_t& __cordl_internal_get__currentSeqNum();

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>* const& __cordl_internal_get__events() const;

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>*& __cordl_internal_get__events();

  constexpr ::StringW const& __cordl_internal_get__segmentId() const;

  constexpr ::StringW& __cordl_internal_get__segmentId();

  constexpr ::StringW const& __cordl_internal_get__segmentName() const;

  constexpr ::StringW& __cordl_internal_get__segmentName();

  constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* const& __cordl_internal_get__segmentSettings() const;

  constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*& __cordl_internal_get__segmentSettings();

  constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* const& __cordl_internal_get__segmentType() const;

  constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*& __cordl_internal_get__segmentType();

  constexpr void __cordl_internal_set__cache(::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache* value);

  constexpr void __cordl_internal_set__currentSeqNum(int32_t value);

  constexpr void __cordl_internal_set__events(::System::Collections::Generic::List_1<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>* value);

  constexpr void __cordl_internal_set__segmentId(::StringW value);

  constexpr void __cordl_internal_set__segmentName(::StringW value);

  constexpr void __cordl_internal_set__segmentSettings(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* value);

  constexpr void __cordl_internal_set__segmentType(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* value);

  /// @brief Method .ctor, addr 0x31ccbac, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache* cache);

  /// @brief Method get_HasEndEvent, addr 0x31cc940, size 0x100, virtual false, abstract: false, final false
  inline bool get_HasEndEvent();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventsBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventsBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventsBuilder(EventsBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventsBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventsBuilder(EventsBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22078 };

  /// @brief Field _currentSeqNum, offset: 0x10, size: 0x4, def value: None
  int32_t ____currentSeqNum;

  /// @brief Field _segmentId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____segmentId;

  /// @brief Field _segmentName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____segmentName;

  /// @brief Field _segmentType, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* ____segmentType;

  /// @brief Field _segmentSettings, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* ____segmentSettings;

  /// @brief Field _cache, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache* ____cache;

  /// @brief Field _events, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>* ____events;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventsBuilder, ____currentSeqNum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventsBuilder, ____segmentId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventsBuilder, ____segmentName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventsBuilder, ____segmentType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventsBuilder, ____segmentSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventsBuilder, ____cache) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventsBuilder, ____events) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::EventsBuilder, 0x48>, "Size mismatch!");

} // namespace BeatSaber::Analytics::Gameplay
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::EventsBuilder);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::EventsBuilder*, "BeatSaber.Analytics.Gameplay", "EventsBuilder");
