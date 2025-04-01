#pragma once
// IWYU pragma private; include "GlobalNamespace/LightRotationBeatmapEventDataProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
CORDL_MODULE_EXPORT(LightRotationBeatmapEventDataProcessor)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class LightRotationBeatmapEventData;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationBeatmapEventDataProcessor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightRotationBeatmapEventDataProcessor);
// Dependencies BeatmapEventDataProcessor`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightRotationBeatmapEventDataProcessor
class CORDL_TYPE LightRotationBeatmapEventDataProcessor : public ::GlobalNamespace::BeatmapEventDataProcessor_1<::GlobalNamespace::LightRotationBeatmapEventData*> {
public:
  // Declarations
  static inline ::GlobalNamespace::LightRotationBeatmapEventDataProcessor* New_ctor();

  /// @brief Method ProcessBeforeDeleteEventDataInternal, addr 0x22410d0, size 0xfc, virtual true, abstract: false, final false
  inline void ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete);

  /// @brief Method ProcessInsertedEventDataInternal, addr 0x2240fc0, size 0x110, virtual true, abstract: false, final false
  inline void ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode);

  /// @brief Method .ctor, addr 0x22411cc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationBeatmapEventDataProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightRotationBeatmapEventDataProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationBeatmapEventDataProcessor(LightRotationBeatmapEventDataProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationBeatmapEventDataProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationBeatmapEventDataProcessor(LightRotationBeatmapEventDataProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17069 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightRotationBeatmapEventDataProcessor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightRotationBeatmapEventDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationBeatmapEventDataProcessor*, "", "LightRotationBeatmapEventDataProcessor");
