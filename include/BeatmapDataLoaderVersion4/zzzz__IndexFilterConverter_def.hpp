#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/IndexFilterConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IndexFilterConverter)
namespace BeatmapSaveDataVersion4 {
struct IndexFilter;
}
namespace GlobalNamespace {
class IndexFilter;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class IndexFilterConverter;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::IndexFilterConverter);
// Type: BeatmapDataLoaderVersion4::IndexFilterConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: ::BeatmapDataLoaderVersion4::IndexFilterConverter*
class CORDL_TYPE IndexFilterConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x26ccdf0, size 0x39c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IndexFilter* Convert(::BeatmapSaveDataVersion4::IndexFilter indexFilter, int32_t groupSize);

  /// @brief Method IsIndexFilterValid, addr 0x26cdd20, size 0xa4, virtual false, abstract: false, final false
  static inline bool IsIndexFilterValid(::BeatmapSaveDataVersion4::IndexFilter indexFilter, int32_t groupSize);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexFilterConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IndexFilterConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IndexFilterConverter(IndexFilterConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IndexFilterConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IndexFilterConverter(IndexFilterConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13451 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::IndexFilterConverter, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::IndexFilterConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::IndexFilterConverter*, "BeatmapDataLoaderVersion4", "IndexFilterConverter");
