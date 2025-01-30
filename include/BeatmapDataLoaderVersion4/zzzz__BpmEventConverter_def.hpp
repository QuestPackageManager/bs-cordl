#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/BpmEventConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatToTimeConverter_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BpmEventConverter)
namespace BeatmapLevelSaveDataVersion4 {
class BpmData;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
class BpmTimeProcessor;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class BpmEventConverter;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::BpmEventConverter);
// Dependencies BeatToTimeConverter
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion4.BpmEventConverter
class CORDL_TYPE BpmEventConverter : public ::GlobalNamespace::BeatToTimeConverter {
public:
  // Declarations
  /// @brief Field _songFrequency, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__songFrequency, put = __cordl_internal_set__songFrequency)) int32_t _songFrequency;

  /// @brief Method Convert, addr 0x270b588, size 0xb4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* Convert(::BeatmapLevelSaveDataVersion4::BpmData* bpmData);

  static inline ::BeatmapDataLoaderVersion4::BpmEventConverter* New_ctor(int32_t songFrequency, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  constexpr int32_t const& __cordl_internal_get__songFrequency() const;

  constexpr int32_t& __cordl_internal_get__songFrequency();

  constexpr void __cordl_internal_set__songFrequency(int32_t value);

  /// @brief Method .ctor, addr 0x270b55c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t songFrequency, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BpmEventConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BpmEventConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BpmEventConverter(BpmEventConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BpmEventConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BpmEventConverter(BpmEventConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13482 };

  /// @brief Field _songFrequency, offset: 0x18, size: 0x4, def value: None
  int32_t ____songFrequency;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion4::BpmEventConverter, ____songFrequency) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::BpmEventConverter, 0x20>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::BpmEventConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::BpmEventConverter*, "BeatmapDataLoaderVersion4", "BpmEventConverter");
