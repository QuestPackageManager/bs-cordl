#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LightTranslationBaseDataConverter)
namespace BeatmapSaveDataVersion4 {
struct LightTranslationEvent;
}
namespace GlobalNamespace {
class LightTranslationBaseData;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class LightTranslationBaseDataConverter;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::LightTranslationBaseDataConverter);
// Type: BeatmapDataLoaderVersion4::LightTranslationBaseDataConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: ::BeatmapDataLoaderVersion4::LightTranslationBaseDataConverter*
class CORDL_TYPE LightTranslationBaseDataConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x1405c14, size 0xa4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LightTranslationBaseData* Convert(float_t beat, ::BeatmapSaveDataVersion4::LightTranslationEvent lightTranslationEvent);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationBaseDataConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationBaseDataConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationBaseDataConverter(LightTranslationBaseDataConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationBaseDataConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationBaseDataConverter(LightTranslationBaseDataConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::LightTranslationBaseDataConverter, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::LightTranslationBaseDataConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::LightTranslationBaseDataConverter*, "BeatmapDataLoaderVersion4", "LightTranslationBaseDataConverter");
