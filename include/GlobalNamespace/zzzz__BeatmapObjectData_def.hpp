#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapObjectData)
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectData);
// Type: ::BeatmapObjectData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapObjectData*
class CORDL_TYPE BeatmapObjectData : public ::GlobalNamespace::BeatmapDataItem {
public:
  // Declarations
  /// @brief Field <beat>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__beat_k__BackingField, put = __cordl_internal_set__beat_k__BackingField)) float_t _beat_k__BackingField;

  /// @brief Field <rotation>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__rotation_k__BackingField, put = __cordl_internal_set__rotation_k__BackingField)) int32_t _rotation_k__BackingField;

  __declspec(property(get = get_beat)) float_t beat;

  __declspec(property(get = get_rotation, put = set_rotation)) int32_t rotation;

  /// @brief Method Mirror, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Mirror(int32_t lineCount);

  static inline ::GlobalNamespace::BeatmapObjectData* New_ctor(float_t time, float_t beat, int32_t rotation, int32_t subtypeIdentifier);

  constexpr float_t const& __cordl_internal_get__beat_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__beat_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__rotation_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__rotation_k__BackingField();

  constexpr void __cordl_internal_set__beat_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__rotation_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x2217d34, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(float_t time, float_t beat, int32_t rotation, int32_t subtypeIdentifier);

  /// @brief Method get_beat, addr 0x2217d1c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_beat();

  /// @brief Method get_rotation, addr 0x2217d24, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_rotation();

  /// @brief Method set_rotation, addr 0x2217d2c, size 0x8, virtual false, abstract: false, final false
  inline void set_rotation(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectData(BeatmapObjectData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectData(BeatmapObjectData const&) = delete;

  /// @brief Field <beat>k__BackingField, offset: 0x20, size: 0x4, def value: None
  float_t ____beat_k__BackingField;

  /// @brief Field <rotation>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t ____rotation_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17024 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectData, ____beat_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectData, ____rotation_k__BackingField) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectData*, "", "BeatmapObjectData");
