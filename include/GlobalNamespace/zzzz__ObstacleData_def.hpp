#pragma once
// IWYU pragma private; include "GlobalNamespace/ObstacleData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ObstacleData)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleData);
// Dependencies BeatmapObjectData, NoteLineLayer
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObstacleData
class CORDL_TYPE ObstacleData : public ::GlobalNamespace::BeatmapObjectData {
public:
  // Declarations
  /// @brief Field <duration>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__duration_k__BackingField, put = __cordl_internal_set__duration_k__BackingField)) float_t _duration_k__BackingField;

  /// @brief Field <endBeat>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__endBeat_k__BackingField, put = __cordl_internal_set__endBeat_k__BackingField)) float_t _endBeat_k__BackingField;

  /// @brief Field <height>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__height_k__BackingField, put = __cordl_internal_set__height_k__BackingField)) int32_t _height_k__BackingField;

  /// @brief Field <lineIndex>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__lineIndex_k__BackingField, put = __cordl_internal_set__lineIndex_k__BackingField)) int32_t _lineIndex_k__BackingField;

  /// @brief Field <lineLayer>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__lineLayer_k__BackingField, put = __cordl_internal_set__lineLayer_k__BackingField)) ::GlobalNamespace::NoteLineLayer _lineLayer_k__BackingField;

  /// @brief Field <width>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__width_k__BackingField, put = __cordl_internal_set__width_k__BackingField)) int32_t _width_k__BackingField;

  __declspec(property(get = get_duration, put = set_duration)) float_t duration;

  __declspec(property(get = get_endBeat, put = set_endBeat)) float_t endBeat;

  __declspec(property(get = get_height, put = set_height)) int32_t height;

  __declspec(property(get = get_lineIndex, put = set_lineIndex)) int32_t lineIndex;

  __declspec(property(get = get_lineLayer, put = set_lineLayer)) ::GlobalNamespace::NoteLineLayer lineLayer;

  __declspec(property(get = get_width, put = set_width)) int32_t width;

  /// @brief Method GetCopy, addr 0x22462f0, size 0xb8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method Mirror, addr 0x22463a8, size 0x24, virtual true, abstract: false, final false
  inline void Mirror(int32_t lineCount);

  static inline ::GlobalNamespace::ObstacleData* New_ctor(float_t time, float_t startBeat, float_t endBeat, int32_t rotation, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer,
                                                          float_t duration, int32_t width, int32_t height);

  /// @brief Method UpdateDuration, addr 0x22462e8, size 0x8, virtual false, abstract: false, final false
  inline void UpdateDuration(float_t duration);

  constexpr float_t const& __cordl_internal_get__duration_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__duration_k__BackingField();

  constexpr float_t const& __cordl_internal_get__endBeat_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__endBeat_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__height_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__height_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__lineIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__lineIndex_k__BackingField();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get__lineLayer_k__BackingField() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get__lineLayer_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__width_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__width_k__BackingField();

  constexpr void __cordl_internal_set__duration_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__endBeat_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__height_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__lineIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__lineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set__width_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x2246258, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(float_t time, float_t startBeat, float_t endBeat, int32_t rotation, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, float_t duration, int32_t width, int32_t height);

  /// @brief Method get_duration, addr 0x2246228, size 0x8, virtual false, abstract: false, final false
  inline float_t get_duration();

  /// @brief Method get_endBeat, addr 0x22461f8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_endBeat();

  /// @brief Method get_height, addr 0x2246248, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_height();

  /// @brief Method get_lineIndex, addr 0x2246208, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lineIndex();

  /// @brief Method get_lineLayer, addr 0x2246218, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteLineLayer get_lineLayer();

  /// @brief Method get_width, addr 0x2246238, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_width();

  /// @brief Method set_duration, addr 0x2246230, size 0x8, virtual false, abstract: false, final false
  inline void set_duration(float_t value);

  /// @brief Method set_endBeat, addr 0x2246200, size 0x8, virtual false, abstract: false, final false
  inline void set_endBeat(float_t value);

  /// @brief Method set_height, addr 0x2246250, size 0x8, virtual false, abstract: false, final false
  inline void set_height(int32_t value);

  /// @brief Method set_lineIndex, addr 0x2246210, size 0x8, virtual false, abstract: false, final false
  inline void set_lineIndex(int32_t value);

  /// @brief Method set_lineLayer, addr 0x2246220, size 0x8, virtual false, abstract: false, final false
  inline void set_lineLayer(::GlobalNamespace::NoteLineLayer value);

  /// @brief Method set_width, addr 0x2246240, size 0x8, virtual false, abstract: false, final false
  inline void set_width(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObstacleData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleData(ObstacleData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleData(ObstacleData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17086 };

  /// @brief Field <endBeat>k__BackingField, offset: 0x28, size: 0x4, def value: None
  float_t ____endBeat_k__BackingField;

  /// @brief Field <lineIndex>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  int32_t ____lineIndex_k__BackingField;

  /// @brief Field <lineLayer>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ____lineLayer_k__BackingField;

  /// @brief Field <duration>k__BackingField, offset: 0x34, size: 0x4, def value: None
  float_t ____duration_k__BackingField;

  /// @brief Field <width>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t ____width_k__BackingField;

  /// @brief Field <height>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  int32_t ____height_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObstacleData, ____endBeat_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleData, ____lineIndex_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleData, ____lineLayer_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleData, ____duration_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleData, ____width_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleData, ____height_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleData, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleData*, "", "ObstacleData");
