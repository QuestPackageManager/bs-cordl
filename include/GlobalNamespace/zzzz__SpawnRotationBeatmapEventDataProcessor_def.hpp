#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationBeatmapEventData_def.hpp"
CORDL_MODULE_EXPORT(SpawnRotationBeatmapEventDataProcessor)
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class SpawnRotationBeatmapEventDataProcessor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SpawnRotationBeatmapEventDataProcessor);
// Type: ::SpawnRotationBeatmapEventDataProcessor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14739)), TypeDefinitionIndex(TypeDefinitionIndex(14741)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14741), inst:
// 953 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(14748)) CS Name: ::SpawnRotationBeatmapEventDataProcessor*
class CORDL_TYPE SpawnRotationBeatmapEventDataProcessor : public ::GlobalNamespace::BeatmapEventDataProcessor_1<::GlobalNamespace::SpawnRotationBeatmapEventData*> {
public:
  // Declarations
  /// @brief Method ProcessInsertedEventDataInternal addr 0xe000bc size 0x1f0 virtual true final false
  inline void ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode);

  /// @brief Method ProcessBeforeDeleteEventDataInternal addr 0xe002ac size 0x240 virtual true final false
  inline void ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete);

  static inline ::GlobalNamespace::SpawnRotationBeatmapEventDataProcessor* New_ctor();

  /// @brief Method .ctor addr 0xe004ec size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SpawnRotationBeatmapEventDataProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpawnRotationBeatmapEventDataProcessor(SpawnRotationBeatmapEventDataProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpawnRotationBeatmapEventDataProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpawnRotationBeatmapEventDataProcessor(SpawnRotationBeatmapEventDataProcessor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpawnRotationBeatmapEventDataProcessor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpawnRotationBeatmapEventDataProcessor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpawnRotationBeatmapEventDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnRotationBeatmapEventDataProcessor*, "", "SpawnRotationBeatmapEventDataProcessor");
