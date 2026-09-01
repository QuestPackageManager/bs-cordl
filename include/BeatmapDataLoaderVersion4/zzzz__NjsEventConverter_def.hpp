#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4\NjsEventConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataVersion4/zzzz__NoteJumpMovementSpeedEvent_def.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(NjsEventConverter)
namespace BeatmapSaveDataVersion4 {
class BeatIndex;
}
namespace BeatmapSaveDataVersion4 {
struct NoteJumpMovementSpeedEvent;
}
namespace GlobalNamespace {
class IBeatToTimeConverter;
}
namespace GlobalNamespace {
class NoteJumpSpeedEventData;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class NjsEventConverter;
}
// Write type traits
MARK_REF_T(::BeatmapDataLoaderVersion4::NjsEventConverter*);
DEFINE_IL2CPP_CLASS(::BeatmapDataLoaderVersion4::NjsEventConverter*, "BeatmapDataLoaderVersion4", "NjsEventConverter");
// Dependencies BeatToTimeConverter, BeatmapSaveDataVersion4.NoteJumpMovementSpeedEvent
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion4.NjsEventConverter
class CORDL_TYPE NjsEventConverter : public ::GlobalNamespace::BeatToTimeConverter {
public:
  // Declarations
  /// @brief Field _noteJumpMovementSpeedEvents, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__noteJumpMovementSpeedEvents, put = __cordl_internal_set__noteJumpMovementSpeedEvents)) ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>
      _noteJumpMovementSpeedEvents;

  /// @brief Method Convert, addr 0x37639a4, size 0xe8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteJumpSpeedEventData* Convert(::BeatmapSaveDataVersion4::BeatIndex* index);

  static inline ::BeatmapDataLoaderVersion4::NjsEventConverter* New_ctor(::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent> noteJumpMovementSpeedEvents,
                                                                         ::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor);

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent> const& __cordl_internal_get__noteJumpMovementSpeedEvents() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>& __cordl_internal_get__noteJumpMovementSpeedEvents();

  constexpr void __cordl_internal_set__noteJumpMovementSpeedEvents(::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent> value);

  /// @brief Method .ctor, addr 0x376399c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent> noteJumpMovementSpeedEvents, ::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NjsEventConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NjsEventConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NjsEventConverter(NjsEventConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NjsEventConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NjsEventConverter(NjsEventConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15435 };

  /// @brief Field _noteJumpMovementSpeedEvents, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent> ____noteJumpMovementSpeedEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion4::NjsEventConverter, ____noteJumpMovementSpeedEvents) == 0x18, "Offset mismatch!");

static_assert(sizeof(::BeatmapDataLoaderVersion4::NjsEventConverter) == 0x20, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
