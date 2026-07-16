#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LevelInfo)
namespace GlobalNamespace {
class BeatmapInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelInfo;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LevelInfo*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LevelInfo*, "", "LevelInfo");
// Dependencies BeatmapInfo, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelInfo
class CORDL_TYPE LevelInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field <beatmaps>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmaps_k__BackingField, put = __cordl_internal_set__beatmaps_k__BackingField)) ::ArrayW<::GlobalNamespace::BeatmapInfo*> _beatmaps_k__BackingField;

  /// @brief Field <levelID>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelID_k__BackingField, put = __cordl_internal_set__levelID_k__BackingField)) ::StringW _levelID_k__BackingField;

  /// @brief Field <songDurationMs>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__songDurationMs_k__BackingField, put = __cordl_internal_set__songDurationMs_k__BackingField)) int32_t _songDurationMs_k__BackingField;

  __declspec(property(get = get_beatmaps, put = set_beatmaps)) ::ArrayW<::GlobalNamespace::BeatmapInfo*> beatmaps;

  __declspec(property(get = get_levelID, put = set_levelID)) ::StringW levelID;

  __declspec(property(get = get_songDurationMs, put = set_songDurationMs)) int32_t songDurationMs;

  static inline ::GlobalNamespace::LevelInfo* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapInfo*> const& __cordl_internal_get__beatmaps_k__BackingField() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapInfo*>& __cordl_internal_get__beatmaps_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__levelID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__levelID_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__songDurationMs_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__songDurationMs_k__BackingField();

  constexpr void __cordl_internal_set__beatmaps_k__BackingField(::ArrayW<::GlobalNamespace::BeatmapInfo*> value);

  constexpr void __cordl_internal_set__levelID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__songDurationMs_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x32b7654, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_beatmaps, addr 0x32b7634, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::BeatmapInfo*> get_beatmaps();

  /// @brief Method get_levelID, addr 0x32b7624, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_levelID();

  /// @brief Method get_songDurationMs, addr 0x32b7644, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_songDurationMs();

  /// @brief Method set_beatmaps, addr 0x32b763c, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmaps(::ArrayW<::GlobalNamespace::BeatmapInfo*> value);

  /// @brief Method set_levelID, addr 0x32b762c, size 0x8, virtual false, abstract: false, final false
  inline void set_levelID(::StringW value);

  /// @brief Method set_songDurationMs, addr 0x32b764c, size 0x8, virtual false, abstract: false, final false
  inline void set_songDurationMs(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelInfo(LevelInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelInfo(LevelInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18933 };

  /// @brief Field <levelID>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelID_k__BackingField;

  /// @brief Field <beatmaps>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapInfo*> ____beatmaps_k__BackingField;

  /// @brief Field <songDurationMs>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____songDurationMs_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelInfo, ____levelID_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelInfo, ____beatmaps_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelInfo, ____songDurationMs_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LevelInfo) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
