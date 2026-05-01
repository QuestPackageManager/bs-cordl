#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipSegmentEventSettingsField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SpaceshipSegmentEventSettingsField)
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipSegmentEventSettingsField;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField);
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay::Events {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.Events.SpaceshipSegmentEventSettingsField
class CORDL_TYPE SpaceshipSegmentEventSettingsField : public ::System::Object {
public:
  // Declarations
  /// @brief Field cosmetics, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmetics, put = __cordl_internal_set_cosmetics)) ::ArrayW<::StringW, ::Array<::StringW>*> cosmetics;

  /// @brief Field difficulty, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_difficulty, put = __cordl_internal_set_difficulty)) ::StringW difficulty;

  /// @brief Field game_mode, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_game_mode, put = __cordl_internal_set_game_mode)) ::StringW game_mode;

  /// @brief Field match_id, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_match_id, put = __cordl_internal_set_match_id)) ::StringW match_id;

  static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* New_ctor();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_cosmetics() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_cosmetics();

  constexpr ::StringW const& __cordl_internal_get_difficulty() const;

  constexpr ::StringW& __cordl_internal_get_difficulty();

  constexpr ::StringW const& __cordl_internal_get_game_mode() const;

  constexpr ::StringW& __cordl_internal_get_game_mode();

  constexpr ::StringW const& __cordl_internal_get_match_id() const;

  constexpr ::StringW& __cordl_internal_get_match_id();

  constexpr void __cordl_internal_set_cosmetics(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_difficulty(::StringW value);

  constexpr void __cordl_internal_set_game_mode(::StringW value);

  constexpr void __cordl_internal_set_match_id(::StringW value);

  /// @brief Method .ctor, addr 0x31cef7c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpaceshipSegmentEventSettingsField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpaceshipSegmentEventSettingsField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpaceshipSegmentEventSettingsField(SpaceshipSegmentEventSettingsField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpaceshipSegmentEventSettingsField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpaceshipSegmentEventSettingsField(SpaceshipSegmentEventSettingsField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22109 };

  /// @brief Field difficulty, offset: 0x10, size: 0x8, def value: None
  ::StringW ___difficulty;

  /// @brief Field game_mode, offset: 0x18, size: 0x8, def value: None
  ::StringW ___game_mode;

  /// @brief Field match_id, offset: 0x20, size: 0x8, def value: None
  ::StringW ___match_id;

  /// @brief Field cosmetics, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___cosmetics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField, ___difficulty) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField, ___game_mode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField, ___match_id) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField, ___cosmetics) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField, 0x30>, "Size mismatch!");

} // namespace BeatSaber::Analytics::Gameplay::Events
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*, "BeatSaber.Analytics.Gameplay.Events", "SpaceshipSegmentEventSettingsField");
