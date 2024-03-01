#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
CORDL_MODULE_EXPORT(BasicBeatmapEventDataProcessor)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
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
// CS Name: ::BasicBeatmapEventDataProcessor*
class CORDL_TYPE BasicBeatmapEventDataProcessor : public ::GlobalNamespace::BeatmapEventDataProcessor_1<::GlobalNamespace::BasicBeatmapEventData*> {
public:
  // Declarations
  static inline ::GlobalNamespace::BasicBeatmapEventDataProcessor* New_ctor();

  /// @brief Method ProcessBeforeDeleteEventDataInternal, addr 0xe556c8, size 0x234, virtual true, abstract: false, final false
  inline void ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete);

  /// @brief Method ProcessInsertedEventDataInternal, addr 0xe554e0, size 0x1e8, virtual true, abstract: false, final false
  inline void ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode);

  /// @brief Method .ctor, addr 0xe558fc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicBeatmapEventDataProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapEventDataProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicBeatmapEventDataProcessor(BasicBeatmapEventDataProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapEventDataProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicBeatmapEventDataProcessor(BasicBeatmapEventDataProcessor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasicBeatmapEventDataProcessor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BasicBeatmapEventDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicBeatmapEventDataProcessor*, "", "BasicBeatmapEventDataProcessor");
