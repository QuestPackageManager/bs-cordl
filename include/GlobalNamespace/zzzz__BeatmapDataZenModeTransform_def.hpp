#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapDataZenModeTransform)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataZenModeTransform;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataZenModeTransform);
// Type: ::BeatmapDataZenModeTransform
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapDataZenModeTransform*
class CORDL_TYPE BeatmapDataZenModeTransform : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateTransformedData, addr 0x13a6bdc, size 0xec, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);

  /// @brief Method <CreateTransformedData>g__ProcessData|0_0, addr 0x13a6f48, size 0xb0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapDataItem* _CreateTransformedData_g__ProcessData_0_0(::GlobalNamespace::BeatmapDataItem* beatmapDataItem);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataZenModeTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataZenModeTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataZenModeTransform(BeatmapDataZenModeTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataZenModeTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataZenModeTransform(BeatmapDataZenModeTransform const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataZenModeTransform, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataZenModeTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataZenModeTransform*, "", "BeatmapDataZenModeTransform");
