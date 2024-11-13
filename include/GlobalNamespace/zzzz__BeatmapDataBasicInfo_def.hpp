#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataBasicInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataBasicInfo)
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataBasicInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataBasicInfo);
// Type: ::BeatmapDataBasicInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapDataBasicInfo*
class CORDL_TYPE BeatmapDataBasicInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field <bombsCount>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__bombsCount_k__BackingField, put = __cordl_internal_set__bombsCount_k__BackingField)) int32_t _bombsCount_k__BackingField;

  /// @brief Field <cuttableNotesCount>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__cuttableNotesCount_k__BackingField, put = __cordl_internal_set__cuttableNotesCount_k__BackingField)) int32_t _cuttableNotesCount_k__BackingField;

  /// @brief Field <cuttableScoringObjectsCount>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__cuttableScoringObjectsCount_k__BackingField,
                      put = __cordl_internal_set__cuttableScoringObjectsCount_k__BackingField)) int32_t _cuttableScoringObjectsCount_k__BackingField;

  /// @brief Field <numberOfLines>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfLines_k__BackingField, put = __cordl_internal_set__numberOfLines_k__BackingField)) int32_t _numberOfLines_k__BackingField;

  /// @brief Field <obstaclesCount>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__obstaclesCount_k__BackingField, put = __cordl_internal_set__obstaclesCount_k__BackingField)) int32_t _obstaclesCount_k__BackingField;

  __declspec(property(get = get_bombsCount)) int32_t bombsCount;

  __declspec(property(get = get_cuttableNotesCount)) int32_t cuttableNotesCount;

  __declspec(property(get = get_cuttableScoringObjectsCount)) int32_t cuttableScoringObjectsCount;

  __declspec(property(get = get_numberOfLines)) int32_t numberOfLines;

  __declspec(property(get = get_obstaclesCount)) int32_t obstaclesCount;

  static inline ::GlobalNamespace::BeatmapDataBasicInfo* New_ctor(int32_t numberOfLines, int32_t cuttableNotesCount, int32_t cuttableScoringObjectsCount, int32_t obstaclesCount, int32_t bombsCount);

  constexpr int32_t const& __cordl_internal_get__bombsCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__bombsCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__cuttableNotesCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__cuttableNotesCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__cuttableScoringObjectsCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__cuttableScoringObjectsCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__numberOfLines_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__numberOfLines_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__obstaclesCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__obstaclesCount_k__BackingField();

  constexpr void __cordl_internal_set__bombsCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__cuttableNotesCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__cuttableScoringObjectsCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__numberOfLines_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__obstaclesCount_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x2680968, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(int32_t numberOfLines, int32_t cuttableNotesCount, int32_t cuttableScoringObjectsCount, int32_t obstaclesCount, int32_t bombsCount);

  /// @brief Method get_bombsCount, addr 0x2680960, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_bombsCount();

  /// @brief Method get_cuttableNotesCount, addr 0x2680948, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cuttableNotesCount();

  /// @brief Method get_cuttableScoringObjectsCount, addr 0x2680950, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cuttableScoringObjectsCount();

  /// @brief Method get_numberOfLines, addr 0x2680940, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_numberOfLines();

  /// @brief Method get_obstaclesCount, addr 0x2680958, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_obstaclesCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataBasicInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataBasicInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataBasicInfo(BeatmapDataBasicInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataBasicInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataBasicInfo(BeatmapDataBasicInfo const&) = delete;

  /// @brief Field <numberOfLines>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____numberOfLines_k__BackingField;

  /// @brief Field <cuttableNotesCount>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____cuttableNotesCount_k__BackingField;

  /// @brief Field <cuttableScoringObjectsCount>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____cuttableScoringObjectsCount_k__BackingField;

  /// @brief Field <obstaclesCount>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____obstaclesCount_k__BackingField;

  /// @brief Field <bombsCount>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____bombsCount_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12836 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataBasicInfo, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataBasicInfo, ____numberOfLines_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataBasicInfo, ____cuttableNotesCount_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataBasicInfo, ____cuttableScoringObjectsCount_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataBasicInfo, ____obstaclesCount_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataBasicInfo, ____bombsCount_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataBasicInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataBasicInfo*, "", "BeatmapDataBasicInfo");
