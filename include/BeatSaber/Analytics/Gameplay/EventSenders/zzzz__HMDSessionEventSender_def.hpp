#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/HMDSessionEventSender.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__EventSenderBase_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HMDSessionEventSender)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class IHMDSessionEventSender;
}
namespace BeatSaber::Analytics::Gameplay {
class EventsBuilderFactory;
}
namespace BeatSaber::Analytics::Gameplay {
class EventsBuilder;
}
namespace OSCE::Analytics {
class AnalyticsManager;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class HMDSessionEventSender;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender);
// Dependencies BeatSaber.Analytics.Gameplay.EventSenders.EventSenderBase, System.DateTime
namespace BeatSaber::Analytics::Gameplay::EventSenders {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventSenders.HMDSessionEventSender
class CORDL_TYPE HMDSessionEventSender : public ::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase {
public:
  // Declarations
  __declspec(property(get = get_CurrentSegment)) ::StringW CurrentSegment;

  /// @brief Field _eventsBuilderFactory, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__eventsBuilderFactory,
                      put = __cordl_internal_set__eventsBuilderFactory)) ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* _eventsBuilderFactory;

  /// @brief Field _hasOngoingSession, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__hasOngoingSession, put = __cordl_internal_set__hasOngoingSession)) bool _hasOngoingSession;

  /// @brief Field _platform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__platform, put = __cordl_internal_set__platform)) ::StringW _platform;

  /// @brief Field _startSessionTime, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__startSessionTime, put = __cordl_internal_set__startSessionTime)) ::System::DateTime _startSessionTime;

  /// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender"
  constexpr operator ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*() noexcept;

  /// @brief Method NewEventsBuilder, addr 0x31cfbf0, size 0x14, virtual false, abstract: false, final false
  inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* NewEventsBuilder();

  static inline ::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender* New_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager,
                                                                                                ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* eventsBuilderFactory, ::StringW platform);

  /// @brief Method SendHMDSessionEnd, addr 0x31cfdf0, size 0x218, virtual true, abstract: false, final true
  inline void SendHMDSessionEnd();

  /// @brief Method SendHMDSessionStart, addr 0x31cfc04, size 0x1ec, virtual true, abstract: false, final true
  inline void SendHMDSessionStart();

  constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* const& __cordl_internal_get__eventsBuilderFactory() const;

  constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*& __cordl_internal_get__eventsBuilderFactory();

  constexpr bool const& __cordl_internal_get__hasOngoingSession() const;

  constexpr bool& __cordl_internal_get__hasOngoingSession();

  constexpr ::StringW const& __cordl_internal_get__platform() const;

  constexpr ::StringW& __cordl_internal_get__platform();

  constexpr ::System::DateTime const& __cordl_internal_get__startSessionTime() const;

  constexpr ::System::DateTime& __cordl_internal_get__startSessionTime();

  constexpr void __cordl_internal_set__eventsBuilderFactory(::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* value);

  constexpr void __cordl_internal_set__hasOngoingSession(bool value);

  constexpr void __cordl_internal_set__platform(::StringW value);

  constexpr void __cordl_internal_set__startSessionTime(::System::DateTime value);

  /// @brief Method .ctor, addr 0x31cea94, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager, ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* eventsBuilderFactory, ::StringW platform);

  /// @brief Method get_CurrentSegment, addr 0x31cfba0, size 0x50, virtual false, abstract: false, final false
  inline ::StringW get_CurrentSegment();

  /// @brief Convert to "::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender"
  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* i___BeatSaber__Analytics__Gameplay__EventSenders__IHMDSessionEventSender() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HMDSessionEventSender();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HMDSessionEventSender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HMDSessionEventSender(HMDSessionEventSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HMDSessionEventSender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HMDSessionEventSender(HMDSessionEventSender const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22095 };

  /// @brief Field _eventsBuilderFactory, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* ____eventsBuilderFactory;

  /// @brief Field _platform, offset: 0x20, size: 0x8, def value: None
  ::StringW ____platform;

  /// @brief Field _startSessionTime, offset: 0x28, size: 0x8, def value: None
  ::System::DateTime ____startSessionTime;

  /// @brief Field _hasOngoingSession, offset: 0x30, size: 0x1, def value: None
  bool ____hasOngoingSession;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender, ____eventsBuilderFactory) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender, ____platform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender, ____startSessionTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender, ____hasOngoingSession) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender, 0x38>, "Size mismatch!");

} // namespace BeatSaber::Analytics::Gameplay::EventSenders
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender*, "BeatSaber.Analytics.Gameplay.EventSenders", "HMDSessionEventSender");
