#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/ObstacleItemConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatToTimeConverterProvider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ObstacleItemConverter)
namespace BeatmapSaveDataVersion4 {
class BeatmapBeatIndex;
}
namespace BeatmapSaveDataVersion4 {
struct Obstacle;
}
namespace GlobalNamespace {
class BeatmapObjectData;
}
namespace GlobalNamespace {
class BpmTimeProcessor;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class ObstacleItemConverter;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::ObstacleItemConverter);
// Type: BeatmapDataLoaderVersion4::ObstacleItemConverter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: ::BeatmapDataLoaderVersion4::ObstacleItemConverter*
class CORDL_TYPE ObstacleItemConverter : public ::GlobalNamespace::BeatToTimeConverterProvider {
public:
  // Declarations
  /// @brief Field _obstacles, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacles, put = __cordl_internal_set__obstacles)) ::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*>
      _obstacles;

  /// @brief Method Convert, addr 0x26cbcb8, size 0x150, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion4::BeatmapBeatIndex* index);

  static inline ::BeatmapDataLoaderVersion4::ObstacleItemConverter* New_ctor(::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*> obstacles,
                                                                             ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*> const& __cordl_internal_get__obstacles() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*>& __cordl_internal_get__obstacles();

  constexpr void __cordl_internal_set__obstacles(::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*> value);

  /// @brief Method .ctor, addr 0x26cbaa0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*> obstacles, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleItemConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObstacleItemConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleItemConverter(ObstacleItemConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleItemConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleItemConverter(ObstacleItemConverter const&) = delete;

  /// @brief Field _obstacles, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*> ____obstacles;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13433 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::ObstacleItemConverter, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::ObstacleItemConverter, ____obstacles) == 0x18, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::ObstacleItemConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::ObstacleItemConverter*, "BeatmapDataLoaderVersion4", "ObstacleItemConverter");
