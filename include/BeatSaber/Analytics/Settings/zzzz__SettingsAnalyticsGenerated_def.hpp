#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/SettingsAnalyticsGenerated.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SettingsAnalyticsGenerated)
namespace BeatSaber::Settings {
struct AudioSettings;
}
namespace BeatSaber::Settings {
struct ControllerSettings;
}
namespace BeatSaber::Settings {
struct MiscSettings;
}
namespace BeatSaber::Settings {
struct QualitySettings;
}
namespace GlobalNamespace {
class ColorSchemesSettings;
}
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace BeatSaber::Analytics::Settings {
class SettingsAnalyticsGenerated;
}
// Write type traits
MARK_REF_T(::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated*, "BeatSaber.Analytics.Settings", "SettingsAnalyticsGenerated");
// Dependencies System.Object
namespace BeatSaber::Analytics::Settings {
// Is value type: false
// CS Name: BeatSaber.Analytics.Settings.SettingsAnalyticsGenerated
class CORDL_TYPE SettingsAnalyticsGenerated : public ::System::Object {
public:
  // Declarations
  /// @brief Method AppendAudioSnapshot, addr 0x3504704, size 0x154, virtual false, abstract: false, final false
  static inline void AppendAudioSnapshot(::BeatSaber::Settings::AudioSettings s,
                                         /* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* results);

  /// @brief Method AppendColorsSnapshot, addr 0x3504858, size 0x1c0, virtual false, abstract: false, final false
  static inline void AppendColorsSnapshot(::GlobalNamespace::ColorSchemesSettings* s,
                                          /* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* results);

  /// @brief Method AppendControllerSnapshot, addr 0x3504a18, size 0xf0, virtual false, abstract: false, final false
  static inline void AppendControllerSnapshot(::BeatSaber::Settings::ControllerSettings s,
                                              /* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* results);

  /// @brief Method AppendEnvironmentsSnapshot, addr 0x3504b08, size 0xf4, virtual false, abstract: false, final false
  static inline void AppendEnvironmentsSnapshot(::GlobalNamespace::OverrideEnvironmentSettings* s,
                                                /* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* results);

  /// @brief Method AppendGraphicsSnapshot, addr 0x3504bfc, size 0x938, virtual false, abstract: false, final false
  static inline void AppendGraphicsSnapshot(::BeatSaber::Settings::QualitySettings s,
                                            /* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* results);

  /// @brief Method AppendMiscSnapshot, addr 0x3505534, size 0x140, virtual false, abstract: false, final false
  static inline void AppendMiscSnapshot(::BeatSaber::Settings::MiscSettings s,
                                        /* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* results);

  /// @brief Method AppendPlayerSnapshot, addr 0x3505674, size 0xab4, virtual false, abstract: false, final false
  static inline void AppendPlayerSnapshot(::GlobalNamespace::PlayerSpecificSettings* s,
                                          /* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* results);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsAnalyticsGenerated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsAnalyticsGenerated", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsAnalyticsGenerated(SettingsAnalyticsGenerated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsAnalyticsGenerated", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsAnalyticsGenerated(SettingsAnalyticsGenerated const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22763 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated) == 0x10, "Size mismatch!");

} // namespace BeatSaber::Analytics::Settings
