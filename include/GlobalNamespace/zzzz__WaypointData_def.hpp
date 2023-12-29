#pragma once
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
struct NoteLineLayer;
}
namespace GlobalNamespace {
struct OffsetDirection;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class WaypointData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WaypointData);
// Type: ::WaypointData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14975)), TypeDefinitionIndex(TypeDefinitionIndex(14973)), TypeDefinitionIndex(TypeDefinitionIndex(14964))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14981))
// CS Name: ::WaypointData*
class CORDL_TYPE WaypointData : public ::GlobalNamespace::BeatmapObjectData {
public:
  // Declarations
  /// @brief Field <offsetDirection>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __get__offsetDirection_k__BackingField, put = __set__offsetDirection_k__BackingField))::GlobalNamespace::OffsetDirection _offsetDirection_k__BackingField;

  /// @brief Field <lineIndex>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __get__lineIndex_k__BackingField, put = __set__lineIndex_k__BackingField)) int32_t _lineIndex_k__BackingField;

  /// @brief Field <lineLayer>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __get__lineLayer_k__BackingField, put = __set__lineLayer_k__BackingField))::GlobalNamespace::NoteLineLayer _lineLayer_k__BackingField;

  __declspec(property(get = get_offsetDirection, put = set_offsetDirection))::GlobalNamespace::OffsetDirection offsetDirection;

  __declspec(property(get = get_lineIndex, put = set_lineIndex)) int32_t lineIndex;

  __declspec(property(get = get_lineLayer, put = set_lineLayer))::GlobalNamespace::NoteLineLayer lineLayer;

  constexpr ::GlobalNamespace::OffsetDirection& __get__offsetDirection_k__BackingField();

  constexpr ::GlobalNamespace::OffsetDirection const& __get__offsetDirection_k__BackingField() const;

  constexpr void __set__offsetDirection_k__BackingField(::GlobalNamespace::OffsetDirection value);

  constexpr int32_t& __get__lineIndex_k__BackingField();

  constexpr int32_t const& __get__lineIndex_k__BackingField() const;

  constexpr void __set__lineIndex_k__BackingField(int32_t value);

  constexpr ::GlobalNamespace::NoteLineLayer& __get__lineLayer_k__BackingField();

  constexpr ::GlobalNamespace::NoteLineLayer const& __get__lineLayer_k__BackingField() const;

  constexpr void __set__lineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value);

  /// @brief Method get_offsetDirection addr 0xd9c294 size 0x8 virtual false final false
  inline ::GlobalNamespace::OffsetDirection get_offsetDirection();

  /// @brief Method set_offsetDirection addr 0xd9c29c size 0x8 virtual false final false
  inline void set_offsetDirection(::GlobalNamespace::OffsetDirection value);

  /// @brief Method get_lineIndex addr 0xd9c2a4 size 0x8 virtual false final false
  inline int32_t get_lineIndex();

  /// @brief Method set_lineIndex addr 0xd9c2ac size 0x8 virtual false final false
  inline void set_lineIndex(int32_t value);

  /// @brief Method get_lineLayer addr 0xd9c2b4 size 0x8 virtual false final false
  inline ::GlobalNamespace::NoteLineLayer get_lineLayer();

  /// @brief Method set_lineLayer addr 0xd9c2bc size 0x8 virtual false final false
  inline void set_lineLayer(::GlobalNamespace::NoteLineLayer value);

  /// @brief Method GetCopy addr 0xd9c2c4 size 0x90 virtual true final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  static inline ::GlobalNamespace::WaypointData* New_ctor(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, ::GlobalNamespace::OffsetDirection offsetDirection);

  /// @brief Method .ctor addr 0xd9c354 size 0x58 virtual false final false
  inline void _ctor(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, ::GlobalNamespace::OffsetDirection offsetDirection);

  /// @brief Method Mirror addr 0xd9c3ac size 0x14 virtual true final false
  inline void Mirror(int32_t lineCount);

  /// @brief Method MirrorTransformOffsetDirection addr 0xd9c3c0 size 0x24 virtual false final false
  inline void MirrorTransformOffsetDirection();

  // Ctor Parameters [CppParam { name: "", ty: "WaypointData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaypointData(WaypointData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaypointData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaypointData(WaypointData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaypointData();

public:
  /// @brief Field <offsetDirection>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::OffsetDirection ____offsetDirection_k__BackingField;

  /// @brief Field <lineIndex>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t ____lineIndex_k__BackingField;

  /// @brief Field <lineLayer>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ____lineLayer_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WaypointData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointData, ____offsetDirection_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointData, ____lineIndex_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointData, ____lineLayer_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WaypointData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WaypointData*, "", "WaypointData");
