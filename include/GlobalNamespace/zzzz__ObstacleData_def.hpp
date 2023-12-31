#pragma once
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
// Type: ::ObstacleData
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14751)), TypeDefinitionIndex(TypeDefinitionIndex(14760))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14761))
// CS Name: ::ObstacleData*
class CORDL_TYPE ObstacleData : public ::GlobalNamespace::BeatmapObjectData {
public:
  // Declarations
  /// @brief Field <lineIndex>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __get__lineIndex_k__BackingField, put = __set__lineIndex_k__BackingField)) int32_t _lineIndex_k__BackingField;

  /// @brief Field <lineLayer>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __get__lineLayer_k__BackingField, put = __set__lineLayer_k__BackingField))::GlobalNamespace::NoteLineLayer _lineLayer_k__BackingField;

  /// @brief Field <duration>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __get__duration_k__BackingField, put = __set__duration_k__BackingField)) float_t _duration_k__BackingField;

  /// @brief Field <width>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __get__width_k__BackingField, put = __set__width_k__BackingField)) int32_t _width_k__BackingField;

  /// @brief Field <height>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __get__height_k__BackingField, put = __set__height_k__BackingField)) int32_t _height_k__BackingField;

  __declspec(property(get = get_lineIndex, put = set_lineIndex)) int32_t lineIndex;

  __declspec(property(get = get_lineLayer, put = set_lineLayer))::GlobalNamespace::NoteLineLayer lineLayer;

  __declspec(property(get = get_duration, put = set_duration)) float_t duration;

  __declspec(property(get = get_width, put = set_width)) int32_t width;

  __declspec(property(get = get_height, put = set_height)) int32_t height;

  constexpr int32_t& __get__lineIndex_k__BackingField();

  constexpr int32_t const& __get__lineIndex_k__BackingField() const;

  constexpr void __set__lineIndex_k__BackingField(int32_t value);

  constexpr ::GlobalNamespace::NoteLineLayer& __get__lineLayer_k__BackingField();

  constexpr ::GlobalNamespace::NoteLineLayer const& __get__lineLayer_k__BackingField() const;

  constexpr void __set__lineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value);

  constexpr float_t& __get__duration_k__BackingField();

  constexpr float_t const& __get__duration_k__BackingField() const;

  constexpr void __set__duration_k__BackingField(float_t value);

  constexpr int32_t& __get__width_k__BackingField();

  constexpr int32_t const& __get__width_k__BackingField() const;

  constexpr void __set__width_k__BackingField(int32_t value);

  constexpr int32_t& __get__height_k__BackingField();

  constexpr int32_t const& __get__height_k__BackingField() const;

  constexpr void __set__height_k__BackingField(int32_t value);

  /// @brief Method get_lineIndex, addr 0xe0140c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lineIndex();

  /// @brief Method set_lineIndex, addr 0xe01414, size 0x8, virtual false, abstract: false, final false
  inline void set_lineIndex(int32_t value);

  /// @brief Method get_lineLayer, addr 0xe0141c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteLineLayer get_lineLayer();

  /// @brief Method set_lineLayer, addr 0xe01424, size 0x8, virtual false, abstract: false, final false
  inline void set_lineLayer(::GlobalNamespace::NoteLineLayer value);

  /// @brief Method get_duration, addr 0xe0142c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_duration();

  /// @brief Method set_duration, addr 0xe01434, size 0x8, virtual false, abstract: false, final false
  inline void set_duration(float_t value);

  /// @brief Method get_width, addr 0xe0143c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_width();

  /// @brief Method set_width, addr 0xe01444, size 0x8, virtual false, abstract: false, final false
  inline void set_width(int32_t value);

  /// @brief Method get_height, addr 0xe0144c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_height();

  /// @brief Method set_height, addr 0xe01454, size 0x8, virtual false, abstract: false, final false
  inline void set_height(int32_t value);

  static inline ::GlobalNamespace::ObstacleData* New_ctor(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, float_t duration, int32_t width, int32_t height);

  /// @brief Method .ctor, addr 0xe0145c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, float_t duration, int32_t width, int32_t height);

  /// @brief Method UpdateDuration, addr 0xe014c4, size 0x8, virtual false, abstract: false, final false
  inline void UpdateDuration(float_t duration);

  /// @brief Method GetCopy, addr 0xe014cc, size 0x9c, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method Mirror, addr 0xe01568, size 0x18, virtual true, abstract: false, final false
  inline void Mirror(int32_t lineCount);

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleData(ObstacleData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleData(ObstacleData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleData();

public:
  /// @brief Field <lineIndex>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____lineIndex_k__BackingField;

  /// @brief Field <lineLayer>k__BackingField, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ____lineLayer_k__BackingField;

  /// @brief Field <duration>k__BackingField, offset: 0x28, size: 0x4, def value: None
  float_t ____duration_k__BackingField;

  /// @brief Field <width>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  int32_t ____width_k__BackingField;

  /// @brief Field <height>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t ____height_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleData, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleData, ____lineIndex_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleData, ____lineLayer_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleData, ____duration_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleData, ____width_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleData, ____height_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleData*, "", "ObstacleData");
