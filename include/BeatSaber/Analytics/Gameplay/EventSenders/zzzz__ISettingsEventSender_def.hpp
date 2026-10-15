#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/ISettingsEventSender.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ISettingsEventSender)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class ISettingsEventSender;
}
// Write type traits
MARK_REF_T(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*, "BeatSaber.Analytics.Gameplay.EventSenders", "ISettingsEventSender");
// [NullableContext(1)]
// Dependencies
namespace BeatSaber::Analytics::Gameplay::EventSenders {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventSenders.ISettingsEventSender
class CORDL_TYPE ISettingsEventSender {
public:
  // Declarations
  /// @brief Method SendChange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void
  SendChange(/* [TupleElementNames(new[] { "metricName", "value" })] [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* metrics);

  /// @brief Method SendColorsOverride, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SendColorsOverride(::StringW configPayload);

  /// @brief Method SendEnvironmentOverride, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SendEnvironmentOverride(::StringW configPayload);

  /// @brief Method SendSnapshot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool
  SendSnapshot(/* [TupleElementNames(new[] { "metricName", "value" })] [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* metrics);

  // Ctor Parameters [CppParam { name: "", ty: "ISettingsEventSender", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISettingsEventSender(ISettingsEventSender const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22879 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::Analytics::Gameplay::EventSenders
