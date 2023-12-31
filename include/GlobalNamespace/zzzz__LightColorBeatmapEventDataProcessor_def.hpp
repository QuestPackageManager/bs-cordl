#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventData_def.hpp"
CORDL_MODULE_EXPORT(LightColorBeatmapEventDataProcessor)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorBeatmapEventDataProcessor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightColorBeatmapEventDataProcessor);
// Type: ::LightColorBeatmapEventDataProcessor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14734)), TypeDefinitionIndex(TypeDefinitionIndex(14741)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14741), inst:
// 951 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(14745)) CS Name: ::LightColorBeatmapEventDataProcessor*
class CORDL_TYPE LightColorBeatmapEventDataProcessor : public ::GlobalNamespace::BeatmapEventDataProcessor_1<::GlobalNamespace::LightColorBeatmapEventData*> {
public:
  // Declarations
  /// @brief Method ProcessInsertedEventDataInternal, addr 0xdff99c, size 0x128, virtual true, abstract: false, final false
  inline void ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode);

  /// @brief Method ProcessBeforeDeleteEventDataInternal, addr 0xdffac4, size 0x108, virtual true, abstract: false, final false
  inline void ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete);

  static inline ::GlobalNamespace::LightColorBeatmapEventDataProcessor* New_ctor();

  /// @brief Method .ctor, addr 0xdffbcc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightColorBeatmapEventDataProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorBeatmapEventDataProcessor(LightColorBeatmapEventDataProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorBeatmapEventDataProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorBeatmapEventDataProcessor(LightColorBeatmapEventDataProcessor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorBeatmapEventDataProcessor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightColorBeatmapEventDataProcessor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightColorBeatmapEventDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorBeatmapEventDataProcessor*, "", "LightColorBeatmapEventDataProcessor");
