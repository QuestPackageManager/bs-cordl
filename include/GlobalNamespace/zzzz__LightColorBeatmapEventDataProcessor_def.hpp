#pragma once
// IWYU pragma private; include "GlobalNamespace\LightColorBeatmapEventDataProcessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
CORDL_MODULE_EXPORT(LightColorBeatmapEventDataProcessor)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class LightColorBeatmapEventData;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorBeatmapEventDataProcessor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LightColorBeatmapEventDataProcessor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightColorBeatmapEventDataProcessor*, "", "LightColorBeatmapEventDataProcessor");
// Dependencies BeatmapEventDataProcessor`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightColorBeatmapEventDataProcessor
class CORDL_TYPE LightColorBeatmapEventDataProcessor : public ::GlobalNamespace::BeatmapEventDataProcessor_1<::GlobalNamespace::LightColorBeatmapEventData*> {
public:
  // Declarations
  static inline ::GlobalNamespace::LightColorBeatmapEventDataProcessor* New_ctor();

  /// @brief Method ProcessBeforeDeleteEventDataInternal, addr 0x325bda0, size 0x104, virtual true, abstract: false, final false
  inline void ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete);

  /// @brief Method ProcessInsertedEventDataInternal, addr 0x325bc6c, size 0x134, virtual true, abstract: false, final false
  inline void ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode);

  /// @brief Method .ctor, addr 0x325bea4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorBeatmapEventDataProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightColorBeatmapEventDataProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorBeatmapEventDataProcessor(LightColorBeatmapEventDataProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorBeatmapEventDataProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorBeatmapEventDataProcessor(LightColorBeatmapEventDataProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21256 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LightColorBeatmapEventDataProcessor) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
