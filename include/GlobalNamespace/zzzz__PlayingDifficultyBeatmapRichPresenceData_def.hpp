#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayingDifficultyBeatmapRichPresenceData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayingDifficultyBeatmapRichPresenceData)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class IRichPresenceData;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayingDifficultyBeatmapRichPresenceData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData);
// Type: ::PlayingDifficultyBeatmapRichPresenceData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayingDifficultyBeatmapRichPresenceData*
class CORDL_TYPE PlayingDifficultyBeatmapRichPresenceData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <apiName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__apiName_k__BackingField, put = __cordl_internal_set__apiName_k__BackingField))::StringW _apiName_k__BackingField;

  /// @brief Field _beatmapKey, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get__beatmapKey, put = __cordl_internal_set__beatmapKey))::GlobalNamespace::BeatmapKey _beatmapKey;

  /// @brief Field _beatmapLevel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevel, put = __cordl_internal_set__beatmapLevel))::GlobalNamespace::BeatmapLevel* _beatmapLevel;

  /// @brief Field _localizedDescription, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__localizedDescription, put = __cordl_internal_set__localizedDescription))::StringW _localizedDescription;

  __declspec(property(get = get_apiName))::StringW apiName;

  __declspec(property(get = get_localizedDescription))::StringW localizedDescription;

  /// @brief Convert operator to "::GlobalNamespace::IRichPresenceData"
  constexpr operator ::GlobalNamespace::IRichPresenceData*() noexcept;

  /// @brief Method GetDestinationLocalizedString, addr 0x26c3ebc, size 0x148, virtual false, abstract: false, final false
  static inline ::StringW GetDestinationLocalizedString(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

  static inline ::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData* New_ctor(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

  constexpr ::StringW const& __cordl_internal_get__apiName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__apiName_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get__beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get__beatmapKey();

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get__beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& __cordl_internal_get__beatmapLevel() const;

  constexpr ::StringW const& __cordl_internal_get__localizedDescription() const;

  constexpr ::StringW& __cordl_internal_get__localizedDescription();

  constexpr void __cordl_internal_set__apiName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set__beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set__localizedDescription(::StringW value);

  /// @brief Method .ctor, addr 0x26c4004, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

  /// @brief Method get_apiName, addr 0x26c3e8c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_apiName();

  /// @brief Method get_localizedDescription, addr 0x26c3e94, size 0x28, virtual true, abstract: false, final true
  inline ::StringW get_localizedDescription();

  /// @brief Convert to "::GlobalNamespace::IRichPresenceData"
  constexpr ::GlobalNamespace::IRichPresenceData* i___GlobalNamespace__IRichPresenceData() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayingDifficultyBeatmapRichPresenceData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayingDifficultyBeatmapRichPresenceData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayingDifficultyBeatmapRichPresenceData(PlayingDifficultyBeatmapRichPresenceData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayingDifficultyBeatmapRichPresenceData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayingDifficultyBeatmapRichPresenceData(PlayingDifficultyBeatmapRichPresenceData const&) = delete;

  /// @brief Field <apiName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____apiName_k__BackingField;

  /// @brief Field _localizedDescription, offset: 0x18, size: 0x8, def value: None
  ::StringW ____localizedDescription;

  /// @brief Field _beatmapKey, offset: 0x20, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ____beatmapKey;

  /// @brief Field _beatmapLevel, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ____beatmapLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData, ____apiName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData, ____localizedDescription) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData, ____beatmapKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData, ____beatmapLevel) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData*, "", "PlayingDifficultyBeatmapRichPresenceData");
