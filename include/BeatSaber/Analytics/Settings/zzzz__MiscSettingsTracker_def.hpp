#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/MiscSettingsTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MiscSettingsTracker)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class ISettingsEventSender;
}
namespace BeatSaber::Settings {
struct MiscSettings;
}
// Forward declare root types
namespace BeatSaber::Analytics::Settings {
class MiscSettingsTracker;
}
// Write type traits
MARK_REF_T(::BeatSaber::Analytics::Settings::MiscSettingsTracker*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Settings::MiscSettingsTracker*, "BeatSaber.Analytics.Settings", "MiscSettingsTracker");
// Dependencies System.Object
namespace BeatSaber::Analytics::Settings {
// Is value type: false
// CS Name: BeatSaber.Analytics.Settings.MiscSettingsTracker
class CORDL_TYPE MiscSettingsTracker : public ::System::Object {
public:
  // Declarations
  /// @brief Field _hasSnapshot, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__hasSnapshot, put = __cordl_internal_set__hasSnapshot)) bool _hasSnapshot;

  /// @brief Field _pauseButtonResponse, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseButtonResponse, put = __cordl_internal_set__pauseButtonResponse)) ::StringW _pauseButtonResponse;

  /// @brief Field _sender, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sender, put = __cordl_internal_set__sender)) ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* _sender;

  /// @brief Method DiffAndSend, addr 0x3508c58, size 0x314, virtual false, abstract: false, final false
  inline void DiffAndSend(::BeatSaber::Settings::MiscSettings s);

  static inline ::BeatSaber::Analytics::Settings::MiscSettingsTracker* New_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

  /// @brief Method TakeSnapshot, addr 0x3508bc4, size 0x94, virtual false, abstract: false, final false
  inline void TakeSnapshot(::BeatSaber::Settings::MiscSettings s);

  constexpr bool const& __cordl_internal_get__hasSnapshot() const;

  constexpr bool& __cordl_internal_get__hasSnapshot();

  constexpr ::StringW const& __cordl_internal_get__pauseButtonResponse() const;

  constexpr ::StringW& __cordl_internal_get__pauseButtonResponse();

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* const& __cordl_internal_get__sender() const;

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*& __cordl_internal_get__sender();

  constexpr void __cordl_internal_set__hasSnapshot(bool value);

  constexpr void __cordl_internal_set__pauseButtonResponse(::StringW value);

  constexpr void __cordl_internal_set__sender(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* value);

  /// @brief Method .ctor, addr 0x3506330, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MiscSettingsTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MiscSettingsTracker", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MiscSettingsTracker(MiscSettingsTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MiscSettingsTracker", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MiscSettingsTracker(MiscSettingsTracker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22770 };

  /// @brief Field _sender, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* ____sender;

  /// @brief Field _hasSnapshot, offset: 0x18, size: 0x1, def value: None
  bool ____hasSnapshot;

  /// @brief Field _pauseButtonResponse, offset: 0x20, size: 0x8, def value: None
  ::StringW ____pauseButtonResponse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Settings::MiscSettingsTracker, ____sender) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::MiscSettingsTracker, ____hasSnapshot) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::MiscSettingsTracker, ____pauseButtonResponse) == 0x20, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Analytics::Settings::MiscSettingsTracker) == 0x28, "Size mismatch!");

} // namespace BeatSaber::Analytics::Settings
