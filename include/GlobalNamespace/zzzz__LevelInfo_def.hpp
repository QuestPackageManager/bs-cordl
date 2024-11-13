#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LevelInfo)
namespace GlobalNamespace {
class BeatmapInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelInfo);
// Type: ::LevelInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LevelInfo*
class CORDL_TYPE LevelInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field <beatmaps>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmaps_k__BackingField,
                      put = __cordl_internal_set__beatmaps_k__BackingField)) ::ArrayW<::GlobalNamespace::BeatmapInfo*, ::Array<::GlobalNamespace::BeatmapInfo*>*>
      _beatmaps_k__BackingField;

  /// @brief Field <levelID>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelID_k__BackingField, put = __cordl_internal_set__levelID_k__BackingField)) ::StringW _levelID_k__BackingField;

  __declspec(property(get = get_beatmaps, put = set_beatmaps)) ::ArrayW<::GlobalNamespace::BeatmapInfo*, ::Array<::GlobalNamespace::BeatmapInfo*>*> beatmaps;

  __declspec(property(get = get_levelID, put = set_levelID)) ::StringW levelID;

  static inline ::GlobalNamespace::LevelInfo* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapInfo*, ::Array<::GlobalNamespace::BeatmapInfo*>*> const& __cordl_internal_get__beatmaps_k__BackingField() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapInfo*, ::Array<::GlobalNamespace::BeatmapInfo*>*>& __cordl_internal_get__beatmaps_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__levelID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__levelID_k__BackingField();

  constexpr void __cordl_internal_set__beatmaps_k__BackingField(::ArrayW<::GlobalNamespace::BeatmapInfo*, ::Array<::GlobalNamespace::BeatmapInfo*>*> value);

  constexpr void __cordl_internal_set__levelID_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x22a7a64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_beatmaps, addr 0x22a7a54, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::BeatmapInfo*, ::Array<::GlobalNamespace::BeatmapInfo*>*> get_beatmaps();

  /// @brief Method get_levelID, addr 0x22a7a44, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_levelID();

  /// @brief Method set_beatmaps, addr 0x22a7a5c, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmaps(::ArrayW<::GlobalNamespace::BeatmapInfo*, ::Array<::GlobalNamespace::BeatmapInfo*>*> value);

  /// @brief Method set_levelID, addr 0x22a7a4c, size 0x8, virtual false, abstract: false, final false
  inline void set_levelID(::StringW value);

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

  /// @brief Field <levelID>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelID_k__BackingField;

  /// @brief Field <beatmaps>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapInfo*, ::Array<::GlobalNamespace::BeatmapInfo*>*> ____beatmaps_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14856 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelInfo, ____levelID_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelInfo, ____beatmaps_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelInfo*, "", "LevelInfo");
