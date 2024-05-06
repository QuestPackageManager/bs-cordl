#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/SpawnRotationItemConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatToTimeConverterProvider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SpawnRotationItemConverter)
namespace BeatmapSaveDataVersion4 {
class BeatIndex;
}
namespace BeatmapSaveDataVersion4 {
struct SpawnRotation;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
class IBeatToTimeConverter;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class SpawnRotationItemConverter;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::SpawnRotationItemConverter);
// Type: BeatmapDataLoaderVersion4::SpawnRotationItemConverter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: ::BeatmapDataLoaderVersion4::SpawnRotationItemConverter*
class CORDL_TYPE SpawnRotationItemConverter : public ::GlobalNamespace::BeatToTimeConverterProvider {
public:
  // Declarations
  /// @brief Field _spawnRotations, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__spawnRotations,
                      put = __cordl_internal_set__spawnRotations))::ArrayW<::BeatmapSaveDataVersion4::SpawnRotation, ::Array<::BeatmapSaveDataVersion4::SpawnRotation>*> _spawnRotations;

  /// @brief Method Convert, addr 0x14f6bc4, size 0xcc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* Convert(::BeatmapSaveDataVersion4::BeatIndex* index);

  static inline ::BeatmapDataLoaderVersion4::SpawnRotationItemConverter* New_ctor(::ArrayW<::BeatmapSaveDataVersion4::SpawnRotation, ::Array<::BeatmapSaveDataVersion4::SpawnRotation>*> spawnRotations,
                                                                                  ::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor);

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::SpawnRotation, ::Array<::BeatmapSaveDataVersion4::SpawnRotation>*> const& __cordl_internal_get__spawnRotations() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::SpawnRotation, ::Array<::BeatmapSaveDataVersion4::SpawnRotation>*>& __cordl_internal_get__spawnRotations();

  constexpr void __cordl_internal_set__spawnRotations(::ArrayW<::BeatmapSaveDataVersion4::SpawnRotation, ::Array<::BeatmapSaveDataVersion4::SpawnRotation>*> value);

  /// @brief Method .ctor, addr 0x14f6b98, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::BeatmapSaveDataVersion4::SpawnRotation, ::Array<::BeatmapSaveDataVersion4::SpawnRotation>*> spawnRotations, ::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpawnRotationItemConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpawnRotationItemConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpawnRotationItemConverter(SpawnRotationItemConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpawnRotationItemConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpawnRotationItemConverter(SpawnRotationItemConverter const&) = delete;

  /// @brief Field _spawnRotations, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::SpawnRotation, ::Array<::BeatmapSaveDataVersion4::SpawnRotation>*> ____spawnRotations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::SpawnRotationItemConverter, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::SpawnRotationItemConverter, ____spawnRotations) == 0x18, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::SpawnRotationItemConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::SpawnRotationItemConverter*, "BeatmapDataLoaderVersion4", "SpawnRotationItemConverter");
