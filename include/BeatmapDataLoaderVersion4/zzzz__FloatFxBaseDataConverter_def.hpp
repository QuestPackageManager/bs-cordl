#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/FloatFxBaseDataConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatFxBaseDataConverter)
namespace BeatmapSaveDataVersion4 {
struct FloatFxEvent;
}
namespace GlobalNamespace {
class FloatFxBaseData;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class FloatFxBaseDataConverter;
}
// Write type traits
MARK_REF_T(::BeatmapDataLoaderVersion4::FloatFxBaseDataConverter*);
DEFINE_IL2CPP_CLASS(::BeatmapDataLoaderVersion4::FloatFxBaseDataConverter*, "BeatmapDataLoaderVersion4", "FloatFxBaseDataConverter");
// Dependencies System.Object
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion4.FloatFxBaseDataConverter
class CORDL_TYPE FloatFxBaseDataConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x3760c00, size 0x8c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::FloatFxBaseData* Convert(float_t beat, ::BeatmapSaveDataVersion4::FloatFxEvent floatFxEvent);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxBaseDataConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBaseDataConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxBaseDataConverter(FloatFxBaseDataConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBaseDataConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxBaseDataConverter(FloatFxBaseDataConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15417 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatmapDataLoaderVersion4::FloatFxBaseDataConverter) == 0x10, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
