#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatFxBeatmapEventDataProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FxBeatmapEventDataProcessor_1_def.hpp"
CORDL_MODULE_EXPORT(FloatFxBeatmapEventDataProcessor)
namespace GlobalNamespace {
class FloatFxBeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatFxBeatmapEventDataProcessor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatFxBeatmapEventDataProcessor);
// Dependencies FxBeatmapEventDataProcessor`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatFxBeatmapEventDataProcessor
class CORDL_TYPE FloatFxBeatmapEventDataProcessor : public ::GlobalNamespace::FxBeatmapEventDataProcessor_1<::GlobalNamespace::FloatFxBeatmapEventData*> {
public:
  // Declarations
  static inline ::GlobalNamespace::FloatFxBeatmapEventDataProcessor* New_ctor();

  /// @brief Method UpdateByOther, addr 0x224474c, size 0x28, virtual true, abstract: false, final false
  inline void UpdateByOther(::GlobalNamespace::FloatFxBeatmapEventData* current, ::GlobalNamespace::FloatFxBeatmapEventData* other);

  /// @brief Method .ctor, addr 0x2244774, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxBeatmapEventDataProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBeatmapEventDataProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxBeatmapEventDataProcessor(FloatFxBeatmapEventDataProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBeatmapEventDataProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxBeatmapEventDataProcessor(FloatFxBeatmapEventDataProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17069 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxBeatmapEventDataProcessor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxBeatmapEventDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxBeatmapEventDataProcessor*, "", "FloatFxBeatmapEventDataProcessor");
