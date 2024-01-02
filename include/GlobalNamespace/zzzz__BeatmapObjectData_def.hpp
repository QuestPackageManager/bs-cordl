#pragma once
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14716))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14751))
// CS Name: ::BeatmapObjectData*
class CORDL_TYPE BeatmapObjectData : public ::GlobalNamespace::BeatmapDataItem {
public:
  // Declarations
  static inline ::GlobalNamespace::BeatmapObjectData* New_ctor(float_t time, int32_t subtypeIdentifier);

  /// @brief Method .ctor, addr 0xe0069c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(float_t time, int32_t subtypeIdentifier);

  /// @brief Method Mirror, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Mirror(int32_t lineCount);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectData(BeatmapObjectData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectData(BeatmapObjectData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectData();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectData*, "", "BeatmapObjectData");
