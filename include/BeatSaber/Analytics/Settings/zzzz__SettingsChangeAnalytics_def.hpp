#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/SettingsChangeAnalytics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SettingsChangeAnalytics)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class ISettingsEventSender;
}
namespace BeatSaber::Analytics::Gameplay {
class IGameplayEventsDispatcher;
}
namespace BeatSaber::Analytics::Settings {
class AudioSettingsTracker;
}
namespace BeatSaber::Analytics::Settings {
class ColorsSettingsTracker;
}
namespace BeatSaber::Analytics::Settings {
class ControllerSettingsTracker;
}
namespace BeatSaber::Analytics::Settings {
class EnvironmentsSettingsTracker;
}
namespace BeatSaber::Analytics::Settings {
class GraphicsSettingsTracker;
}
namespace BeatSaber::Analytics::Settings {
class MiscSettingsTracker;
}
namespace BeatSaber::Analytics::Settings {
class PlayerSettingsTracker;
}
namespace BeatSaber::Analytics::Settings {
class SettingsChangeAnalytics_ColorsConfigTracker;
}
namespace BeatSaber::Analytics::Settings {
class SettingsChangeAnalytics_EnvironmentsConfigTracker;
}
namespace BeatSaber::Analytics::Settings {
class SettingsChangeAnalytics_LiveSettingsEventSender;
}
namespace GlobalNamespace {
class ColorSchemesSettings;
}
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace BeatSaber::Analytics::Settings {
class SettingsChangeAnalytics;
}
namespace BeatSaber::Analytics::Settings {
class SettingsChangeAnalytics_ColorsConfigTracker;
}
namespace BeatSaber::Analytics::Settings {
class SettingsChangeAnalytics_EnvironmentsConfigTracker;
}
namespace BeatSaber::Analytics::Settings {
class SettingsChangeAnalytics_LiveSettingsEventSender;
}
// Write type traits
MARK_REF_T(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*);
MARK_REF_T(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker*);
MARK_REF_T(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker*);
MARK_REF_T(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*, "BeatSaber.Analytics.Settings", "SettingsChangeAnalytics");
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker*, "BeatSaber.Analytics.Settings", "SettingsChangeAnalytics/ColorsConfigTracker");
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker*, "BeatSaber.Analytics.Settings", "SettingsChangeAnalytics/EnvironmentsConfigTracker");
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender*, "BeatSaber.Analytics.Settings", "SettingsChangeAnalytics/LiveSettingsEventSender");
// Dependencies System.Object
namespace BeatSaber::Analytics::Settings {
// Is value type: false
// CS Name: BeatSaber.Analytics.Settings.SettingsChangeAnalytics/ColorsConfigTracker
class CORDL_TYPE SettingsChangeAnalytics_ColorsConfigTracker : public ::System::Object {
public:
  // Declarations
  /// @brief Field _baseline, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__baseline, put = __cordl_internal_set__baseline)) ::StringW _baseline;

  /// @brief Field _hasSnapshot, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__hasSnapshot, put = __cordl_internal_set__hasSnapshot)) bool _hasSnapshot;

  /// @brief Field _sender, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sender, put = __cordl_internal_set__sender)) ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* _sender;

  /// @brief Method DiffAndSend, addr 0x350acd8, size 0xec, virtual false, abstract: false, final false
  inline void DiffAndSend(::GlobalNamespace::ColorSchemesSettings* colors);

  static inline ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker* New_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

  /// @brief Method TakeSnapshot, addr 0x350ac3c, size 0x24, virtual false, abstract: false, final false
  inline void TakeSnapshot(::GlobalNamespace::ColorSchemesSettings* colors);

  constexpr ::StringW const& __cordl_internal_get__baseline() const;

  constexpr ::StringW& __cordl_internal_get__baseline();

  constexpr bool const& __cordl_internal_get__hasSnapshot() const;

  constexpr bool& __cordl_internal_get__hasSnapshot();

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* const& __cordl_internal_get__sender() const;

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*& __cordl_internal_get__sender();

  constexpr void __cordl_internal_set__baseline(::StringW value);

  constexpr void __cordl_internal_set__hasSnapshot(bool value);

  constexpr void __cordl_internal_set__sender(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* value);

  /// @brief Method .ctor, addr 0x350ac2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsChangeAnalytics_ColorsConfigTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsChangeAnalytics_ColorsConfigTracker", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsChangeAnalytics_ColorsConfigTracker(SettingsChangeAnalytics_ColorsConfigTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsChangeAnalytics_ColorsConfigTracker", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsChangeAnalytics_ColorsConfigTracker(SettingsChangeAnalytics_ColorsConfigTracker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22772 };

  /// @brief Field _sender, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* ____sender;

  /// @brief Field _baseline, offset: 0x18, size: 0x8, def value: None
  ::StringW ____baseline;

  /// @brief Field _hasSnapshot, offset: 0x20, size: 0x1, def value: None
  bool ____hasSnapshot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker, ____sender) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker, ____baseline) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker, ____hasSnapshot) == 0x20, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker) == 0x28, "Size mismatch!");

} // namespace BeatSaber::Analytics::Settings
// Dependencies System.Object
namespace BeatSaber::Analytics::Settings {
// Is value type: false
// CS Name: BeatSaber.Analytics.Settings.SettingsChangeAnalytics/EnvironmentsConfigTracker
class CORDL_TYPE SettingsChangeAnalytics_EnvironmentsConfigTracker : public ::System::Object {
public:
  // Declarations
  /// @brief Field _baseline, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__baseline, put = __cordl_internal_set__baseline)) ::StringW _baseline;

  /// @brief Field _hasSnapshot, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__hasSnapshot, put = __cordl_internal_set__hasSnapshot)) bool _hasSnapshot;

  /// @brief Field _sender, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sender, put = __cordl_internal_set__sender)) ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* _sender;

  /// @brief Method DiffAndSend, addr 0x350ae60, size 0xec, virtual false, abstract: false, final false
  inline void DiffAndSend(::GlobalNamespace::OverrideEnvironmentSettings* environments);

  static inline ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker* New_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

  /// @brief Method TakeSnapshot, addr 0x350adc4, size 0x24, virtual false, abstract: false, final false
  inline void TakeSnapshot(::GlobalNamespace::OverrideEnvironmentSettings* environments);

  constexpr ::StringW const& __cordl_internal_get__baseline() const;

  constexpr ::StringW& __cordl_internal_get__baseline();

  constexpr bool const& __cordl_internal_get__hasSnapshot() const;

  constexpr bool& __cordl_internal_get__hasSnapshot();

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* const& __cordl_internal_get__sender() const;

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*& __cordl_internal_get__sender();

  constexpr void __cordl_internal_set__baseline(::StringW value);

  constexpr void __cordl_internal_set__hasSnapshot(bool value);

  constexpr void __cordl_internal_set__sender(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* value);

  /// @brief Method .ctor, addr 0x350ac34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsChangeAnalytics_EnvironmentsConfigTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsChangeAnalytics_EnvironmentsConfigTracker", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsChangeAnalytics_EnvironmentsConfigTracker(SettingsChangeAnalytics_EnvironmentsConfigTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsChangeAnalytics_EnvironmentsConfigTracker", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsChangeAnalytics_EnvironmentsConfigTracker(SettingsChangeAnalytics_EnvironmentsConfigTracker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22773 };

  /// @brief Field _sender, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* ____sender;

  /// @brief Field _baseline, offset: 0x18, size: 0x8, def value: None
  ::StringW ____baseline;

  /// @brief Field _hasSnapshot, offset: 0x20, size: 0x1, def value: None
  bool ____hasSnapshot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker, ____sender) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker, ____baseline) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker, ____hasSnapshot) == 0x20, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker) == 0x28, "Size mismatch!");

} // namespace BeatSaber::Analytics::Settings
// Dependencies System.Object
namespace BeatSaber::Analytics::Settings {
// Is value type: false
// CS Name: BeatSaber.Analytics.Settings.SettingsChangeAnalytics/LiveSettingsEventSender
class CORDL_TYPE SettingsChangeAnalytics_LiveSettingsEventSender : public ::System::Object {
public:
  // Declarations
  /// @brief Field _dispatcher, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dispatcher, put = __cordl_internal_set__dispatcher)) ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* _dispatcher;

  /// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender"
  constexpr operator ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*() noexcept;

  static inline ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender* New_ctor(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* dispatcher);

  /// @brief Method SendChange, addr 0x350b07c, size 0x134, virtual true, abstract: false, final true
  inline void SendChange(/* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* metrics);

  /// @brief Method SendColorsOverride, addr 0x350b1b0, size 0x134, virtual true, abstract: false, final true
  inline void SendColorsOverride(::StringW configPayload);

  /// @brief Method SendEnvironmentOverride, addr 0x350b2e4, size 0x134, virtual true, abstract: false, final true
  inline void SendEnvironmentOverride(::StringW configPayload);

  /// @brief Method SendSnapshot, addr 0x350af4c, size 0x130, virtual true, abstract: false, final true
  inline bool SendSnapshot(/* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* metrics);

  constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* const& __cordl_internal_get__dispatcher() const;

  constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*& __cordl_internal_get__dispatcher();

  constexpr void __cordl_internal_set__dispatcher(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* value);

  /// @brief Method .ctor, addr 0x350ac24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* dispatcher);

  /// @brief Convert to "::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender"
  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* i___BeatSaber__Analytics__Gameplay__EventSenders__ISettingsEventSender() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsChangeAnalytics_LiveSettingsEventSender();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsChangeAnalytics_LiveSettingsEventSender", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsChangeAnalytics_LiveSettingsEventSender(SettingsChangeAnalytics_LiveSettingsEventSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsChangeAnalytics_LiveSettingsEventSender", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsChangeAnalytics_LiveSettingsEventSender(SettingsChangeAnalytics_LiveSettingsEventSender const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22774 };

  /// @brief Field _dispatcher, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* ____dispatcher;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender, ____dispatcher) == 0x10, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender) == 0x18, "Size mismatch!");

} // namespace BeatSaber::Analytics::Settings
// Dependencies System.Object
namespace BeatSaber::Analytics::Settings {
// Is value type: false
// CS Name: BeatSaber.Analytics.Settings.SettingsChangeAnalytics
class CORDL_TYPE SettingsChangeAnalytics : public ::System::Object {
public:
  // Declarations
  using ColorsConfigTracker = ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker;

  using EnvironmentsConfigTracker = ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker;

  using LiveSettingsEventSender = ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender;

  __declspec(property(get = get_Audio)) ::BeatSaber::Analytics::Settings::AudioSettingsTracker* Audio;

  __declspec(property(get = get_Colors)) ::BeatSaber::Analytics::Settings::ColorsSettingsTracker* Colors;

  __declspec(property(get = get_ColorsConfig)) ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker* ColorsConfig;

  __declspec(property(get = get_Controller)) ::BeatSaber::Analytics::Settings::ControllerSettingsTracker* Controller;

  __declspec(property(get = get_Environments)) ::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker* Environments;

  __declspec(property(get = get_EnvironmentsConfig)) ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker* EnvironmentsConfig;

  __declspec(property(get = get_Graphics)) ::BeatSaber::Analytics::Settings::GraphicsSettingsTracker* Graphics;

  __declspec(property(get = get_Misc)) ::BeatSaber::Analytics::Settings::MiscSettingsTracker* Misc;

  __declspec(property(get = get_Player)) ::BeatSaber::Analytics::Settings::PlayerSettingsTracker* Player;

  /// @brief Field <Audio>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Audio_k__BackingField,
                      put = __cordl_internal_set__Audio_k__BackingField)) ::BeatSaber::Analytics::Settings::AudioSettingsTracker* _Audio_k__BackingField;

  /// @brief Field <ColorsConfig>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__ColorsConfig_k__BackingField,
                      put = __cordl_internal_set__ColorsConfig_k__BackingField)) ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker* _ColorsConfig_k__BackingField;

  /// @brief Field <Colors>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Colors_k__BackingField,
                      put = __cordl_internal_set__Colors_k__BackingField)) ::BeatSaber::Analytics::Settings::ColorsSettingsTracker* _Colors_k__BackingField;

  /// @brief Field <Controller>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Controller_k__BackingField,
                      put = __cordl_internal_set__Controller_k__BackingField)) ::BeatSaber::Analytics::Settings::ControllerSettingsTracker* _Controller_k__BackingField;

  /// @brief Field <EnvironmentsConfig>k__BackingField, offset 0x50, size 0x8
  __declspec(property(
      get = __cordl_internal_get__EnvironmentsConfig_k__BackingField,
      put = __cordl_internal_set__EnvironmentsConfig_k__BackingField)) ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker* _EnvironmentsConfig_k__BackingField;

  /// @brief Field <Environments>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Environments_k__BackingField,
                      put = __cordl_internal_set__Environments_k__BackingField)) ::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker* _Environments_k__BackingField;

  /// @brief Field <Graphics>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Graphics_k__BackingField,
                      put = __cordl_internal_set__Graphics_k__BackingField)) ::BeatSaber::Analytics::Settings::GraphicsSettingsTracker* _Graphics_k__BackingField;

  /// @brief Field <Misc>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Misc_k__BackingField, put = __cordl_internal_set__Misc_k__BackingField)) ::BeatSaber::Analytics::Settings::MiscSettingsTracker* _Misc_k__BackingField;

  /// @brief Field <Player>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Player_k__BackingField,
                      put = __cordl_internal_set__Player_k__BackingField)) ::BeatSaber::Analytics::Settings::PlayerSettingsTracker* _Player_k__BackingField;

  static inline ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics* New_ctor(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* dispatcher);

  constexpr ::BeatSaber::Analytics::Settings::AudioSettingsTracker* const& __cordl_internal_get__Audio_k__BackingField() const;

  constexpr ::BeatSaber::Analytics::Settings::AudioSettingsTracker*& __cordl_internal_get__Audio_k__BackingField();

  constexpr ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker* const& __cordl_internal_get__ColorsConfig_k__BackingField() const;

  constexpr ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker*& __cordl_internal_get__ColorsConfig_k__BackingField();

  constexpr ::BeatSaber::Analytics::Settings::ColorsSettingsTracker* const& __cordl_internal_get__Colors_k__BackingField() const;

  constexpr ::BeatSaber::Analytics::Settings::ColorsSettingsTracker*& __cordl_internal_get__Colors_k__BackingField();

  constexpr ::BeatSaber::Analytics::Settings::ControllerSettingsTracker* const& __cordl_internal_get__Controller_k__BackingField() const;

  constexpr ::BeatSaber::Analytics::Settings::ControllerSettingsTracker*& __cordl_internal_get__Controller_k__BackingField();

  constexpr ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker* const& __cordl_internal_get__EnvironmentsConfig_k__BackingField() const;

  constexpr ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker*& __cordl_internal_get__EnvironmentsConfig_k__BackingField();

  constexpr ::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker* const& __cordl_internal_get__Environments_k__BackingField() const;

  constexpr ::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker*& __cordl_internal_get__Environments_k__BackingField();

  constexpr ::BeatSaber::Analytics::Settings::GraphicsSettingsTracker* const& __cordl_internal_get__Graphics_k__BackingField() const;

  constexpr ::BeatSaber::Analytics::Settings::GraphicsSettingsTracker*& __cordl_internal_get__Graphics_k__BackingField();

  constexpr ::BeatSaber::Analytics::Settings::MiscSettingsTracker* const& __cordl_internal_get__Misc_k__BackingField() const;

  constexpr ::BeatSaber::Analytics::Settings::MiscSettingsTracker*& __cordl_internal_get__Misc_k__BackingField();

  constexpr ::BeatSaber::Analytics::Settings::PlayerSettingsTracker* const& __cordl_internal_get__Player_k__BackingField() const;

  constexpr ::BeatSaber::Analytics::Settings::PlayerSettingsTracker*& __cordl_internal_get__Player_k__BackingField();

  constexpr void __cordl_internal_set__Audio_k__BackingField(::BeatSaber::Analytics::Settings::AudioSettingsTracker* value);

  constexpr void __cordl_internal_set__ColorsConfig_k__BackingField(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker* value);

  constexpr void __cordl_internal_set__Colors_k__BackingField(::BeatSaber::Analytics::Settings::ColorsSettingsTracker* value);

  constexpr void __cordl_internal_set__Controller_k__BackingField(::BeatSaber::Analytics::Settings::ControllerSettingsTracker* value);

  constexpr void __cordl_internal_set__EnvironmentsConfig_k__BackingField(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker* value);

  constexpr void __cordl_internal_set__Environments_k__BackingField(::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker* value);

  constexpr void __cordl_internal_set__Graphics_k__BackingField(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker* value);

  constexpr void __cordl_internal_set__Misc_k__BackingField(::BeatSaber::Analytics::Settings::MiscSettingsTracker* value);

  constexpr void __cordl_internal_set__Player_k__BackingField(::BeatSaber::Analytics::Settings::PlayerSettingsTracker* value);

  /// @brief Method .ctor, addr 0x350ab1c, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* dispatcher);

  /// [CompilerGenerated]
  /// @brief Method get_Audio, addr 0x350aad4, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Analytics::Settings::AudioSettingsTracker* get_Audio();

  /// [CompilerGenerated]
  /// @brief Method get_Colors, addr 0x350aadc, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Analytics::Settings::ColorsSettingsTracker* get_Colors();

  /// [CompilerGenerated]
  /// @brief Method get_ColorsConfig, addr 0x350ab0c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker* get_ColorsConfig();

  /// [CompilerGenerated]
  /// @brief Method get_Controller, addr 0x350aae4, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Analytics::Settings::ControllerSettingsTracker* get_Controller();

  /// [CompilerGenerated]
  /// @brief Method get_Environments, addr 0x350aaec, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker* get_Environments();

  /// [CompilerGenerated]
  /// @brief Method get_EnvironmentsConfig, addr 0x350ab14, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker* get_EnvironmentsConfig();

  /// [CompilerGenerated]
  /// @brief Method get_Graphics, addr 0x350aaf4, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Analytics::Settings::GraphicsSettingsTracker* get_Graphics();

  /// [CompilerGenerated]
  /// @brief Method get_Misc, addr 0x350aafc, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Analytics::Settings::MiscSettingsTracker* get_Misc();

  /// [CompilerGenerated]
  /// @brief Method get_Player, addr 0x350ab04, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Analytics::Settings::PlayerSettingsTracker* get_Player();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsChangeAnalytics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsChangeAnalytics", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsChangeAnalytics(SettingsChangeAnalytics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsChangeAnalytics", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsChangeAnalytics(SettingsChangeAnalytics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22775 };

  /// [CompilerGenerated]
  /// @brief Field <Audio>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Analytics::Settings::AudioSettingsTracker* ____Audio_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <Colors>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::Analytics::Settings::ColorsSettingsTracker* ____Colors_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <Controller>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::Analytics::Settings::ControllerSettingsTracker* ____Controller_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <Environments>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker* ____Environments_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <Graphics>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::Analytics::Settings::GraphicsSettingsTracker* ____Graphics_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <Misc>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::Analytics::Settings::MiscSettingsTracker* ____Misc_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <Player>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::BeatSaber::Analytics::Settings::PlayerSettingsTracker* ____Player_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <ColorsConfig>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker* ____ColorsConfig_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <EnvironmentsConfig>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker* ____EnvironmentsConfig_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics, ____Audio_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics, ____Colors_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics, ____Controller_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics, ____Environments_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics, ____Graphics_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics, ____Misc_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics, ____Player_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics, ____ColorsConfig_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics, ____EnvironmentsConfig_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics) == 0x58, "Size mismatch!");

} // namespace BeatSaber::Analytics::Settings
