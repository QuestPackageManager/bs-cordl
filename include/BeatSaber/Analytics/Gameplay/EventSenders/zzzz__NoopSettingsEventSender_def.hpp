#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/NoopSettingsEventSender.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoopSettingsEventSender)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class ISettingsEventSender;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class NoopSettingsEventSender;
}
// Write type traits
MARK_REF_T(::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender*, "BeatSaber.Analytics.Gameplay.EventSenders", "NoopSettingsEventSender");
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay::EventSenders {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventSenders.NoopSettingsEventSender
class CORDL_TYPE NoopSettingsEventSender : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender"
  constexpr operator ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*() noexcept;

  static inline ::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender* New_ctor();

  /// @brief Method SendChange, addr 0x3504120, size 0x4, virtual true, abstract: false, final true
  inline void
  SendChange(/* [TupleElementNames(new[] { "metricName", "value" })] [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* metrics);

  /// [NullableContext(1)]
  /// @brief Method SendColorsOverride, addr 0x3504124, size 0x4, virtual true, abstract: false, final true
  inline void SendColorsOverride(::StringW configPayload);

  /// [NullableContext(1)]
  /// @brief Method SendEnvironmentOverride, addr 0x3504128, size 0x4, virtual true, abstract: false, final true
  inline void SendEnvironmentOverride(::StringW configPayload);

  /// @brief Method SendSnapshot, addr 0x3504118, size 0x8, virtual true, abstract: false, final true
  inline bool
  SendSnapshot(/* [TupleElementNames(new[] { "metricName", "value" })] [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* metrics);

  /// @brief Method .ctor, addr 0x3500f04, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender"
  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* i___BeatSaber__Analytics__Gameplay__EventSenders__ISettingsEventSender() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoopSettingsEventSender();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoopSettingsEventSender", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoopSettingsEventSender(NoopSettingsEventSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoopSettingsEventSender", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoopSettingsEventSender(NoopSettingsEventSender const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22883 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender) == 0x10, "Size mismatch!");

} // namespace BeatSaber::Analytics::Gameplay::EventSenders
