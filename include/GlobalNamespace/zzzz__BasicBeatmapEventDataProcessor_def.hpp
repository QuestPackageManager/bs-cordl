#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
CORDL_MODULE_EXPORT(BasicBeatmapEventDataProcessor)
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicBeatmapEventDataProcessor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BasicBeatmapEventDataProcessor);
// Type: ::BasicBeatmapEventDataProcessor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14721)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14741), inst: 949 }),
// TypeDefinitionIndex(TypeDefinitionIndex(14741))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14740)) CS Name: ::BasicBeatmapEventDataProcessor*
class CORDL_TYPE BasicBeatmapEventDataProcessor : public ::GlobalNamespace::BeatmapEventDataProcessor_1<::GlobalNamespace::BasicBeatmapEventData*> {
public:
  // Declarations
  /// @brief Method ProcessInsertedEventDataInternal, addr 0xdff488, size 0x1e8, virtual true, abstract: false, final false
  inline void ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode);

  /// @brief Method ProcessBeforeDeleteEventDataInternal, addr 0xdff670, size 0x234, virtual true, abstract: false, final false
  inline void ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete);

  static inline ::GlobalNamespace::BasicBeatmapEventDataProcessor* New_ctor();

  /// @brief Method .ctor, addr 0xdff8a4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapEventDataProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicBeatmapEventDataProcessor(BasicBeatmapEventDataProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapEventDataProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicBeatmapEventDataProcessor(BasicBeatmapEventDataProcessor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicBeatmapEventDataProcessor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasicBeatmapEventDataProcessor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BasicBeatmapEventDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicBeatmapEventDataProcessor*, "", "BasicBeatmapEventDataProcessor");
