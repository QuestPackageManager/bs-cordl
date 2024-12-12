#pragma once
// IWYU pragma private; include "GlobalNamespace/WaypointData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__OffsetDirection_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WaypointData)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
struct OffsetDirection;
}
// Forward declare root types
namespace GlobalNamespace {
class WaypointData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WaypointData);
// Dependencies BeatmapObjectData, NoteLineLayer, OffsetDirection
namespace GlobalNamespace {
// Is value type: false
// CS Name: WaypointData
class CORDL_TYPE WaypointData : public ::GlobalNamespace::BeatmapObjectData {
public:
  // Declarations
  /// @brief Field <lineIndex>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__lineIndex_k__BackingField, put = __cordl_internal_set__lineIndex_k__BackingField)) int32_t _lineIndex_k__BackingField;

  /// @brief Field <lineLayer>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__lineLayer_k__BackingField, put = __cordl_internal_set__lineLayer_k__BackingField)) ::GlobalNamespace::NoteLineLayer _lineLayer_k__BackingField;

  /// @brief Field <offsetDirection>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__offsetDirection_k__BackingField,
                      put = __cordl_internal_set__offsetDirection_k__BackingField)) ::GlobalNamespace::OffsetDirection _offsetDirection_k__BackingField;

  __declspec(property(get = get_lineIndex, put = set_lineIndex)) int32_t lineIndex;

  __declspec(property(get = get_lineLayer, put = set_lineLayer)) ::GlobalNamespace::NoteLineLayer lineLayer;

  __declspec(property(get = get_offsetDirection, put = set_offsetDirection)) ::GlobalNamespace::OffsetDirection offsetDirection;

  /// @brief Method GetCopy, addr 0x2244a4c, size 0x98, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method Mirror, addr 0x2244b4c, size 0x20, virtual true, abstract: false, final false
  inline void Mirror(int32_t lineCount);

  /// @brief Method MirrorTransformOffsetDirection, addr 0x2244b6c, size 0x24, virtual false, abstract: false, final false
  inline void MirrorTransformOffsetDirection();

  static inline ::GlobalNamespace::WaypointData* New_ctor(float_t time, float_t beat, int32_t rotation, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer,
                                                          ::GlobalNamespace::OffsetDirection offsetDirection);

  constexpr int32_t const& __cordl_internal_get__lineIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__lineIndex_k__BackingField();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get__lineLayer_k__BackingField() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get__lineLayer_k__BackingField();

  constexpr ::GlobalNamespace::OffsetDirection const& __cordl_internal_get__offsetDirection_k__BackingField() const;

  constexpr ::GlobalNamespace::OffsetDirection& __cordl_internal_get__offsetDirection_k__BackingField();

  constexpr void __cordl_internal_set__lineIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__lineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set__offsetDirection_k__BackingField(::GlobalNamespace::OffsetDirection value);

  /// @brief Method .ctor, addr 0x2244ae4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(float_t time, float_t beat, int32_t rotation, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, ::GlobalNamespace::OffsetDirection offsetDirection);

  /// @brief Method get_lineIndex, addr 0x2244a2c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lineIndex();

  /// @brief Method get_lineLayer, addr 0x2244a3c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteLineLayer get_lineLayer();

  /// @brief Method get_offsetDirection, addr 0x2244a1c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OffsetDirection get_offsetDirection();

  /// @brief Method set_lineIndex, addr 0x2244a34, size 0x8, virtual false, abstract: false, final false
  inline void set_lineIndex(int32_t value);

  /// @brief Method set_lineLayer, addr 0x2244a44, size 0x8, virtual false, abstract: false, final false
  inline void set_lineLayer(::GlobalNamespace::NoteLineLayer value);

  /// @brief Method set_offsetDirection, addr 0x2244a24, size 0x8, virtual false, abstract: false, final false
  inline void set_offsetDirection(::GlobalNamespace::OffsetDirection value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaypointData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WaypointData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaypointData(WaypointData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaypointData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaypointData(WaypointData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17082 };

  /// @brief Field <offsetDirection>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::OffsetDirection ____offsetDirection_k__BackingField;

  /// @brief Field <lineIndex>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  int32_t ____lineIndex_k__BackingField;

  /// @brief Field <lineLayer>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ____lineLayer_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WaypointData, ____offsetDirection_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointData, ____lineIndex_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointData, ____lineLayer_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WaypointData, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WaypointData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WaypointData*, "", "WaypointData");
