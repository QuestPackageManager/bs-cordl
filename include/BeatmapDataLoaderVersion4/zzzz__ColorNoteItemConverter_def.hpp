#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/ColorNoteItemConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataVersion4/zzzz__ColorNote_def.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ColorNoteItemConverter)
namespace BeatmapSaveDataVersion4 {
class BeatmapBeatIndex;
}
namespace BeatmapSaveDataVersion4 {
struct ColorNote;
}
namespace GlobalNamespace {
class BeatmapObjectData;
}
namespace GlobalNamespace {
class BpmTimeProcessor;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class ColorNoteItemConverter;
}
// Write type traits
MARK_REF_T(::BeatmapDataLoaderVersion4::ColorNoteItemConverter*);
DEFINE_IL2CPP_CLASS(::BeatmapDataLoaderVersion4::ColorNoteItemConverter*, "BeatmapDataLoaderVersion4", "ColorNoteItemConverter");
// Dependencies BeatToTimeConverter, BeatmapSaveDataVersion4.ColorNote
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion4.ColorNoteItemConverter
class CORDL_TYPE ColorNoteItemConverter : public ::GlobalNamespace::BeatToTimeConverter {
public:
  // Declarations
  /// @brief Field _colorNotes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__colorNotes, put = __cordl_internal_set__colorNotes)) ::ArrayW<::BeatmapSaveDataVersion4::ColorNote> _colorNotes;

  /// @brief Method Convert, addr 0x375eb98, size 0xe0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion4::BeatmapBeatIndex* index);

  static inline ::BeatmapDataLoaderVersion4::ColorNoteItemConverter* New_ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorNote> colorNotes, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorNote> const& __cordl_internal_get__colorNotes() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorNote>& __cordl_internal_get__colorNotes();

  constexpr void __cordl_internal_set__colorNotes(::ArrayW<::BeatmapSaveDataVersion4::ColorNote> value);

  /// @brief Method .ctor, addr 0x375eb60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorNote> colorNotes, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorNoteItemConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorNoteItemConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorNoteItemConverter(ColorNoteItemConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorNoteItemConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorNoteItemConverter(ColorNoteItemConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15398 };

  /// @brief Field _colorNotes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::ColorNote> ____colorNotes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion4::ColorNoteItemConverter, ____colorNotes) == 0x18, "Offset mismatch!");

static_assert(sizeof(::BeatmapDataLoaderVersion4::ColorNoteItemConverter) == 0x20, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
