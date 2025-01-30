#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataObstaclesMergingTransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapDataObstaclesMergingTransform)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class ObstacleData;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataObstaclesMergingTransform;
}
namespace GlobalNamespace {
class BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataObstaclesMergingTransform);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDataObstaclesMergingTransform/<>c__DisplayClass0_0
class CORDL_TYPE BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapData, put = __cordl_internal_set_beatmapData)) ::GlobalNamespace::IReadonlyBeatmapData* beatmapData;

  /// @brief Field prevObstacleDataInLines, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_prevObstacleDataInLines,
                      put = __cordl_internal_set_prevObstacleDataInLines)) ::ArrayW<::GlobalNamespace::ObstacleData*, ::Array<::GlobalNamespace::ObstacleData*>*>
      prevObstacleDataInLines;

  static inline ::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0* New_ctor();

  /// @brief Method <CreateTransformedData>g__ProcessData|0, addr 0x26abd3c, size 0x260, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* _CreateTransformedData_g__ProcessData_0(::GlobalNamespace::BeatmapDataItem* beatmapDataItem);

  constexpr ::GlobalNamespace::IReadonlyBeatmapData* const& __cordl_internal_get_beatmapData() const;

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __cordl_internal_get_beatmapData();

  constexpr ::ArrayW<::GlobalNamespace::ObstacleData*, ::Array<::GlobalNamespace::ObstacleData*>*> const& __cordl_internal_get_prevObstacleDataInLines() const;

  constexpr ::ArrayW<::GlobalNamespace::ObstacleData*, ::Array<::GlobalNamespace::ObstacleData*>*>& __cordl_internal_get_prevObstacleDataInLines();

  constexpr void __cordl_internal_set_beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr void __cordl_internal_set_prevObstacleDataInLines(::ArrayW<::GlobalNamespace::ObstacleData*, ::Array<::GlobalNamespace::ObstacleData*>*> value);

  /// @brief Method .ctor, addr 0x26abca4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0(BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0(BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12793 };

  /// @brief Field beatmapData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ___beatmapData;

  /// @brief Field prevObstacleDataInLines, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::ObstacleData*, ::Array<::GlobalNamespace::ObstacleData*>*> ___prevObstacleDataInLines;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0, ___beatmapData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0, ___prevObstacleDataInLines) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDataObstaclesMergingTransform
class CORDL_TYPE BeatmapDataObstaclesMergingTransform : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0;

  /// @brief Method CanBeMerged, addr 0x26abcac, size 0x90, virtual false, abstract: false, final false
  static inline bool CanBeMerged(::GlobalNamespace::ObstacleData* firstObstacle, ::GlobalNamespace::ObstacleData* secondObstacle);

  /// @brief Method CreateTransformedData, addr 0x26abaf0, size 0x1b4, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12794 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataObstaclesMergingTransform, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataObstaclesMergingTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataObstaclesMergingTransform*, "", "BeatmapDataObstaclesMergingTransform");
NEED_NO_BOX(::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0*, "", "BeatmapDataObstaclesMergingTransform/<>c__DisplayClass0_0");
