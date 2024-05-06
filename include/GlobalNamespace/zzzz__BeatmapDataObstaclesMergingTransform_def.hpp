#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataObstaclesMergingTransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(BeatmapDataObstaclesMergingTransform)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class __BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataObstaclesMergingTransform;
}
namespace GlobalNamespace {
class __BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataObstaclesMergingTransform);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0);
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapDataObstaclesMergingTransform::<>c__DisplayClass0_0*
class CORDL_TYPE __BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field prevObstacleDataInLines, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_prevObstacleDataInLines,
                      put = __cordl_internal_set_prevObstacleDataInLines))::ArrayW<::GlobalNamespace::ObstacleData*, ::Array<::GlobalNamespace::ObstacleData*>*> prevObstacleDataInLines;

  static inline ::GlobalNamespace::__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0* New_ctor();

  /// @brief Method <CreateTransformedData>g__ProcessData|0, addr 0x149b190, size 0x238, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* _CreateTransformedData_g__ProcessData_0(::GlobalNamespace::BeatmapDataItem* beatmapDataItem);

  constexpr ::ArrayW<::GlobalNamespace::ObstacleData*, ::Array<::GlobalNamespace::ObstacleData*>*> const& __cordl_internal_get_prevObstacleDataInLines() const;

  constexpr ::ArrayW<::GlobalNamespace::ObstacleData*, ::Array<::GlobalNamespace::ObstacleData*>*>& __cordl_internal_get_prevObstacleDataInLines();

  constexpr void __cordl_internal_set_prevObstacleDataInLines(::ArrayW<::GlobalNamespace::ObstacleData*, ::Array<::GlobalNamespace::ObstacleData*>*> value);

  /// @brief Method .ctor, addr 0x149b108, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0(__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0(__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0 const&) = delete;

  /// @brief Field prevObstacleDataInLines, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::ObstacleData*, ::Array<::GlobalNamespace::ObstacleData*>*> ___prevObstacleDataInLines;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0, ___prevObstacleDataInLines) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapDataObstaclesMergingTransform
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapDataObstaclesMergingTransform*
class CORDL_TYPE BeatmapDataObstaclesMergingTransform : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::GlobalNamespace::__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0;

  /// @brief Method CanBeMerged, addr 0x149b110, size 0x80, virtual false, abstract: false, final false
  static inline bool CanBeMerged(::GlobalNamespace::ObstacleData* firstObstacle, ::GlobalNamespace::ObstacleData* secondObstacle);

  /// @brief Method CreateTransformedData, addr 0x149af68, size 0x1a0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataObstaclesMergingTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataObstaclesMergingTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataObstaclesMergingTransform(BeatmapDataObstaclesMergingTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataObstaclesMergingTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataObstaclesMergingTransform(BeatmapDataObstaclesMergingTransform const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataObstaclesMergingTransform, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataObstaclesMergingTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataObstaclesMergingTransform*, "", "BeatmapDataObstaclesMergingTransform");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0*, "", "BeatmapDataObstaclesMergingTransform/<>c__DisplayClass0_0");
