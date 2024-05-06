#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/LightColorBaseDataConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LightColorBaseDataConverter)
namespace BeatmapSaveDataVersion4 {
struct LightColorEvent;
}
namespace GlobalNamespace {
class LightColorBaseData;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class LightColorBaseDataConverter;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::LightColorBaseDataConverter);
// Type: BeatmapDataLoaderVersion4::LightColorBaseDataConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: ::BeatmapDataLoaderVersion4::LightColorBaseDataConverter*
class CORDL_TYPE LightColorBaseDataConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x14f7bb0, size 0xe4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LightColorBaseData* Convert(float_t beat, ::BeatmapSaveDataVersion4::LightColorEvent lightColorEvent);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorBaseDataConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightColorBaseDataConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorBaseDataConverter(LightColorBaseDataConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorBaseDataConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorBaseDataConverter(LightColorBaseDataConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::LightColorBaseDataConverter, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::LightColorBaseDataConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::LightColorBaseDataConverter*, "BeatmapDataLoaderVersion4", "LightColorBaseDataConverter");
