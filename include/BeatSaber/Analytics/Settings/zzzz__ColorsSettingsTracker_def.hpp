#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/ColorsSettingsTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ColorsSettingsTracker)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class ISettingsEventSender;
}
namespace GlobalNamespace {
class ColorSchemesSettings;
}
// Forward declare root types
namespace BeatSaber::Analytics::Settings {
class ColorsSettingsTracker;
}
// Write type traits
MARK_REF_T(::BeatSaber::Analytics::Settings::ColorsSettingsTracker*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Settings::ColorsSettingsTracker*, "BeatSaber.Analytics.Settings", "ColorsSettingsTracker");
// Dependencies System.Object
namespace BeatSaber::Analytics::Settings {
// Is value type: false
// CS Name: BeatSaber.Analytics.Settings.ColorsSettingsTracker
class CORDL_TYPE ColorsSettingsTracker : public ::System::Object {
public:
  // Declarations
  /// @brief Field _colorOverrideType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__colorOverrideType, put = __cordl_internal_set__colorOverrideType)) ::StringW _colorOverrideType;

  /// @brief Field _hasSnapshot, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__hasSnapshot, put = __cordl_internal_set__hasSnapshot)) bool _hasSnapshot;

  /// @brief Field _overrideDefaultColors, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideDefaultColors, put = __cordl_internal_set__overrideDefaultColors)) bool _overrideDefaultColors;

  /// @brief Field _sender, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sender, put = __cordl_internal_set__sender)) ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* _sender;

  /// @brief Method DiffAndSend, addr 0x350688c, size 0x414, virtual false, abstract: false, final false
  inline void DiffAndSend(::GlobalNamespace::ColorSchemesSettings* s);

  static inline ::BeatSaber::Analytics::Settings::ColorsSettingsTracker* New_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

  /// @brief Method TakeSnapshot, addr 0x35067ec, size 0xa0, virtual false, abstract: false, final false
  inline void TakeSnapshot(::GlobalNamespace::ColorSchemesSettings* s);

  constexpr ::StringW const& __cordl_internal_get__colorOverrideType() const;

  constexpr ::StringW& __cordl_internal_get__colorOverrideType();

  constexpr bool const& __cordl_internal_get__hasSnapshot() const;

  constexpr bool& __cordl_internal_get__hasSnapshot();

  constexpr bool const& __cordl_internal_get__overrideDefaultColors() const;

  constexpr bool& __cordl_internal_get__overrideDefaultColors();

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* const& __cordl_internal_get__sender() const;

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*& __cordl_internal_get__sender();

  constexpr void __cordl_internal_set__colorOverrideType(::StringW value);

  constexpr void __cordl_internal_set__hasSnapshot(bool value);

  constexpr void __cordl_internal_set__overrideDefaultColors(bool value);

  constexpr void __cordl_internal_set__sender(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* value);

  /// @brief Method .ctor, addr 0x35061d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorsSettingsTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorsSettingsTracker", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorsSettingsTracker(ColorsSettingsTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorsSettingsTracker", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorsSettingsTracker(ColorsSettingsTracker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22766 };

  /// @brief Field _sender, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* ____sender;

  /// @brief Field _hasSnapshot, offset: 0x18, size: 0x1, def value: None
  bool ____hasSnapshot;

  /// @brief Field _colorOverrideType, offset: 0x20, size: 0x8, def value: None
  ::StringW ____colorOverrideType;

  /// @brief Field _overrideDefaultColors, offset: 0x28, size: 0x1, def value: None
  bool ____overrideDefaultColors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Settings::ColorsSettingsTracker, ____sender) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::ColorsSettingsTracker, ____hasSnapshot) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::ColorsSettingsTracker, ____colorOverrideType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::ColorsSettingsTracker, ____overrideDefaultColors) == 0x28, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Analytics::Settings::ColorsSettingsTracker) == 0x30, "Size mismatch!");

} // namespace BeatSaber::Analytics::Settings
