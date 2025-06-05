#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteJumpSpeedEventDataProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
CORDL_MODULE_EXPORT(NoteJumpSpeedEventDataProcessor)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class NoteJumpSpeedEventData;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteJumpSpeedEventDataProcessor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteJumpSpeedEventDataProcessor);
// Dependencies BeatmapEventDataProcessor`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteJumpSpeedEventDataProcessor
class CORDL_TYPE NoteJumpSpeedEventDataProcessor : public ::GlobalNamespace::BeatmapEventDataProcessor_1<::GlobalNamespace::NoteJumpSpeedEventData*> {
public:
  // Declarations
  static inline ::GlobalNamespace::NoteJumpSpeedEventDataProcessor* New_ctor();

  /// @brief Method ProcessBeforeDeleteEventDataInternal, addr 0x2244fd8, size 0xfc, virtual true, abstract: false, final false
  inline void ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete);

  /// @brief Method ProcessInsertedEventDataInternal, addr 0x2244ed8, size 0x100, virtual true, abstract: false, final false
  inline void ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode);

  /// @brief Method .ctor, addr 0x22450d4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteJumpSpeedEventDataProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteJumpSpeedEventDataProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteJumpSpeedEventDataProcessor(NoteJumpSpeedEventDataProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteJumpSpeedEventDataProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteJumpSpeedEventDataProcessor(NoteJumpSpeedEventDataProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17073 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteJumpSpeedEventDataProcessor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteJumpSpeedEventDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteJumpSpeedEventDataProcessor*, "", "NoteJumpSpeedEventDataProcessor");
