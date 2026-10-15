#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/SettingsEventSender.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__EventSenderBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SettingsEventSender)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class ISettingsEventSender;
}
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipEventType;
}
namespace BeatSaber::Analytics::Gameplay {
class EventsBuilderFactory;
}
namespace OSCE::Analytics {
class AnalyticsManager;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class SettingsEventSender;
}
// Write type traits
MARK_REF_T(::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender*, "BeatSaber.Analytics.Gameplay.EventSenders", "SettingsEventSender");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies BeatSaber.Analytics.Gameplay.EventSenders.EventSenderBase
namespace BeatSaber::Analytics::Gameplay::EventSenders {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventSenders.SettingsEventSender
class CORDL_TYPE SettingsEventSender : public ::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase {
public:
  // Declarations
  __declspec(property(get = get_SegmentName)) ::StringW SegmentName;

  /// @brief Field _eventsBuilderFactory, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__eventsBuilderFactory,
                      put = __cordl_internal_set__eventsBuilderFactory)) ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* _eventsBuilderFactory;

  /// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender"
  constexpr operator ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*() noexcept;

  static inline ::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender* New_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager,
                                                                                              ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* eventsBuilderFactory);

  /// @brief Method SendChange, addr 0x35043dc, size 0x4, virtual true, abstract: false, final true
  inline void
  SendChange(/* [TupleElementNames(new[] { "metricName", "value" })] [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* metrics);

  /// @brief Method SendColorsOverride, addr 0x35043e0, size 0x74, virtual true, abstract: false, final true
  inline void SendColorsOverride(::StringW configPayload);

  /// @brief Method SendCustomEvent, addr 0x3504454, size 0x178, virtual false, abstract: false, final false
  inline void SendCustomEvent(::StringW payload, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* eventType);

  /// @brief Method SendEnvironmentOverride, addr 0x35045cc, size 0x74, virtual true, abstract: false, final true
  inline void SendEnvironmentOverride(::StringW configPayload);

  /// @brief Method SendMetrics, addr 0x3504140, size 0x29c, virtual false, abstract: false, final false
  inline bool
  SendMetrics(/* [TupleElementNames(new[] { "metricName", "value" })] [Nullable(new[] { 2, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* metrics);

  /// @brief Method SendSnapshot, addr 0x350413c, size 0x4, virtual true, abstract: false, final true
  inline bool
  SendSnapshot(/* [TupleElementNames(new[] { "metricName", "value" })] [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* metrics);

  constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* const& __cordl_internal_get__eventsBuilderFactory() const;

  constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*& __cordl_internal_get__eventsBuilderFactory();

  constexpr void __cordl_internal_set__eventsBuilderFactory(::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* value);

  /// @brief Method .ctor, addr 0x350192c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager, ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* eventsBuilderFactory);

  /// @brief Method get_SegmentName, addr 0x350412c, size 0x10, virtual false, abstract: false, final false
  inline ::StringW get_SegmentName();

  /// @brief Convert to "::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender"
  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* i___BeatSaber__Analytics__Gameplay__EventSenders__ISettingsEventSender() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsEventSender();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsEventSender", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsEventSender(SettingsEventSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsEventSender", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsEventSender(SettingsEventSender const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22884 };

  /// @brief Field _eventsBuilderFactory, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* ____eventsBuilderFactory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender, ____eventsBuilderFactory) == 0x18, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender) == 0x20, "Size mismatch!");

} // namespace BeatSaber::Analytics::Gameplay::EventSenders
