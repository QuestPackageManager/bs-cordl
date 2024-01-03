#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapDataNoArrowsTransform)
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataNoArrowsTransform;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataNoArrowsTransform);
// Type: ::BeatmapDataNoArrowsTransform
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4126))
// CS Name: ::BeatmapDataNoArrowsTransform*
class CORDL_TYPE BeatmapDataNoArrowsTransform : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateTransformedData, addr 0x223a374, size 0xec, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);

  /// @brief Method <CreateTransformedData>g__ProcessData|0_0, addr 0x223a460, size 0xe4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapDataItem* _CreateTransformedData_g__ProcessData_0_0(::GlobalNamespace::BeatmapDataItem* beatmapDataItem);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataNoArrowsTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataNoArrowsTransform(BeatmapDataNoArrowsTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataNoArrowsTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataNoArrowsTransform(BeatmapDataNoArrowsTransform const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataNoArrowsTransform();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataNoArrowsTransform, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataNoArrowsTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataNoArrowsTransform*, "", "BeatmapDataNoArrowsTransform");
