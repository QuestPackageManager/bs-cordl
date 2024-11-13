#pragma once
// IWYU pragma private; include "GlobalNamespace/MockBeatmapData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MockBeatmapData)
namespace GlobalNamespace {
class MockNoteData;
}
namespace GlobalNamespace {
class MockObstacleData;
}
// Forward declare root types
namespace GlobalNamespace {
class MockBeatmapData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockBeatmapData);
// Type: ::MockBeatmapData
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MockBeatmapData*
class CORDL_TYPE MockBeatmapData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <bombNotes>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__bombNotes_k__BackingField,
                      put = __cordl_internal_set__bombNotes_k__BackingField)) ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>
      _bombNotes_k__BackingField;

  /// @brief Field <leftNotes>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__leftNotes_k__BackingField,
                      put = __cordl_internal_set__leftNotes_k__BackingField)) ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>
      _leftNotes_k__BackingField;

  /// @brief Field <numberOfLines>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfLines_k__BackingField, put = __cordl_internal_set__numberOfLines_k__BackingField)) int32_t _numberOfLines_k__BackingField;

  /// @brief Field <obstacles>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacles_k__BackingField,
                      put = __cordl_internal_set__obstacles_k__BackingField)) ::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*>
      _obstacles_k__BackingField;

  /// @brief Field <rightNotes>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rightNotes_k__BackingField,
                      put = __cordl_internal_set__rightNotes_k__BackingField)) ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>
      _rightNotes_k__BackingField;

  /// @brief Field <songEndTime>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__songEndTime_k__BackingField, put = __cordl_internal_set__songEndTime_k__BackingField)) float_t _songEndTime_k__BackingField;

  __declspec(property(get = get_bombNotes, put = set_bombNotes)) ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> bombNotes;

  __declspec(property(get = get_leftNotes, put = set_leftNotes)) ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> leftNotes;

  __declspec(property(get = get_numberOfLines, put = set_numberOfLines)) int32_t numberOfLines;

  __declspec(property(get = get_obstacles, put = set_obstacles)) ::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*> obstacles;

  __declspec(property(get = get_rightNotes, put = set_rightNotes)) ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> rightNotes;

  __declspec(property(get = get_songEndTime, put = set_songEndTime)) float_t songEndTime;

  static inline ::GlobalNamespace::MockBeatmapData* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> const& __cordl_internal_get__bombNotes_k__BackingField() const;

  constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>& __cordl_internal_get__bombNotes_k__BackingField();

  constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> const& __cordl_internal_get__leftNotes_k__BackingField() const;

  constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>& __cordl_internal_get__leftNotes_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__numberOfLines_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__numberOfLines_k__BackingField();

  constexpr ::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*> const& __cordl_internal_get__obstacles_k__BackingField() const;

  constexpr ::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*>& __cordl_internal_get__obstacles_k__BackingField();

  constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> const& __cordl_internal_get__rightNotes_k__BackingField() const;

  constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>& __cordl_internal_get__rightNotes_k__BackingField();

  constexpr float_t const& __cordl_internal_get__songEndTime_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__songEndTime_k__BackingField();

  constexpr void __cordl_internal_set__bombNotes_k__BackingField(::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> value);

  constexpr void __cordl_internal_set__leftNotes_k__BackingField(::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> value);

  constexpr void __cordl_internal_set__numberOfLines_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__obstacles_k__BackingField(::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*> value);

  constexpr void __cordl_internal_set__rightNotes_k__BackingField(::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> value);

  constexpr void __cordl_internal_set__songEndTime_k__BackingField(float_t value);

  /// @brief Method .ctor, addr 0x3bc89c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bombNotes, addr 0x3bc89a0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> get_bombNotes();

  /// @brief Method get_leftNotes, addr 0x3bc8980, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> get_leftNotes();

  /// @brief Method get_numberOfLines, addr 0x3bc8960, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_numberOfLines();

  /// @brief Method get_obstacles, addr 0x3bc89b0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*> get_obstacles();

  /// @brief Method get_rightNotes, addr 0x3bc8990, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> get_rightNotes();

  /// @brief Method get_songEndTime, addr 0x3bc8970, size 0x8, virtual false, abstract: false, final false
  inline float_t get_songEndTime();

  /// @brief Method set_bombNotes, addr 0x3bc89a8, size 0x8, virtual false, abstract: false, final false
  inline void set_bombNotes(::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> value);

  /// @brief Method set_leftNotes, addr 0x3bc8988, size 0x8, virtual false, abstract: false, final false
  inline void set_leftNotes(::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> value);

  /// @brief Method set_numberOfLines, addr 0x3bc8968, size 0x8, virtual false, abstract: false, final false
  inline void set_numberOfLines(int32_t value);

  /// @brief Method set_obstacles, addr 0x3bc89b8, size 0x8, virtual false, abstract: false, final false
  inline void set_obstacles(::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*> value);

  /// @brief Method set_rightNotes, addr 0x3bc8998, size 0x8, virtual false, abstract: false, final false
  inline void set_rightNotes(::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> value);

  /// @brief Method set_songEndTime, addr 0x3bc8978, size 0x8, virtual false, abstract: false, final false
  inline void set_songEndTime(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockBeatmapData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockBeatmapData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockBeatmapData(MockBeatmapData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockBeatmapData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockBeatmapData(MockBeatmapData const&) = delete;

  /// @brief Field <numberOfLines>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____numberOfLines_k__BackingField;

  /// @brief Field <songEndTime>k__BackingField, offset: 0x14, size: 0x4, def value: None
  float_t ____songEndTime_k__BackingField;

  /// @brief Field <leftNotes>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> ____leftNotes_k__BackingField;

  /// @brief Field <rightNotes>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> ____rightNotes_k__BackingField;

  /// @brief Field <bombNotes>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> ____bombNotes_k__BackingField;

  /// @brief Field <obstacles>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*> ____obstacles_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18015 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockBeatmapData, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockBeatmapData, ____numberOfLines_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockBeatmapData, ____songEndTime_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockBeatmapData, ____leftNotes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockBeatmapData, ____rightNotes_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockBeatmapData, ____bombNotes_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockBeatmapData, ____obstacles_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockBeatmapData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockBeatmapData*, "", "MockBeatmapData");
