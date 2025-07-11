#pragma once
// IWYU pragma private; include "GlobalNamespace/LightTranslationBeatmapEventDataProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
CORDL_MODULE_EXPORT(LightTranslationBeatmapEventDataProcessor)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class LightTranslationBeatmapEventData;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LightTranslationBeatmapEventDataProcessor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightTranslationBeatmapEventDataProcessor);
// Dependencies BeatmapEventDataProcessor`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightTranslationBeatmapEventDataProcessor
class CORDL_TYPE LightTranslationBeatmapEventDataProcessor : public ::GlobalNamespace::BeatmapEventDataProcessor_1<::GlobalNamespace::LightTranslationBeatmapEventData*> {
public:
  // Declarations
  static inline ::GlobalNamespace::LightTranslationBeatmapEventDataProcessor* New_ctor();

  /// @brief Method ProcessBeforeDeleteEventDataInternal, addr 0x2244e24, size 0xfc, virtual true, abstract: false, final false
  inline void ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete);

  /// @brief Method ProcessInsertedEventDataInternal, addr 0x2244d14, size 0x110, virtual true, abstract: false, final false
  inline void ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode);

  /// @brief Method .ctor, addr 0x2244f20, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationBeatmapEventDataProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationBeatmapEventDataProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationBeatmapEventDataProcessor(LightTranslationBeatmapEventDataProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationBeatmapEventDataProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationBeatmapEventDataProcessor(LightTranslationBeatmapEventDataProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17072 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightTranslationBeatmapEventDataProcessor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightTranslationBeatmapEventDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationBeatmapEventDataProcessor*, "", "LightTranslationBeatmapEventDataProcessor");
