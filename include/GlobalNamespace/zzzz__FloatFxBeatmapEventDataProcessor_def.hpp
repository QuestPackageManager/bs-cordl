#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventData_def.hpp"
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
// Type: ::FloatFxBeatmapEventDataProcessor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14743)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14743), inst: 2548 }),
// TypeDefinitionIndex(TypeDefinitionIndex(14732))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14744)) CS Name: ::FloatFxBeatmapEventDataProcessor*
class CORDL_TYPE FloatFxBeatmapEventDataProcessor : public ::GlobalNamespace::FxBeatmapEventDataProcessor_1<::GlobalNamespace::FloatFxBeatmapEventData*> {
public:
  // Declarations
  /// @brief Method UpdateByOther addr 0xdff934 size 0x20 virtual true final false
  inline void UpdateByOther(::GlobalNamespace::FloatFxBeatmapEventData* current, ::GlobalNamespace::FloatFxBeatmapEventData* other);

  static inline ::GlobalNamespace::FloatFxBeatmapEventDataProcessor* New_ctor();

  /// @brief Method .ctor addr 0xdff954 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBeatmapEventDataProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxBeatmapEventDataProcessor(FloatFxBeatmapEventDataProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBeatmapEventDataProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxBeatmapEventDataProcessor(FloatFxBeatmapEventDataProcessor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxBeatmapEventDataProcessor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxBeatmapEventDataProcessor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxBeatmapEventDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxBeatmapEventDataProcessor*, "", "FloatFxBeatmapEventDataProcessor");
