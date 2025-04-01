#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataNoArrowsTransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapDataNoArrowsTransform)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataNoArrowsTransform;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataNoArrowsTransform);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDataNoArrowsTransform
class CORDL_TYPE BeatmapDataNoArrowsTransform : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateTransformedData, addr 0x26a9334, size 0xf0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);

  /// @brief Method <CreateTransformedData>g__ProcessData|0_0, addr 0x26a9424, size 0xe4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapDataItem* _CreateTransformedData_g__ProcessData_0_0(::GlobalNamespace::BeatmapDataItem* beatmapDataItem);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataNoArrowsTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataNoArrowsTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataNoArrowsTransform(BeatmapDataNoArrowsTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataNoArrowsTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataNoArrowsTransform(BeatmapDataNoArrowsTransform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12792 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataNoArrowsTransform, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataNoArrowsTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataNoArrowsTransform*, "", "BeatmapDataNoArrowsTransform");
