#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/ColorNoteItemConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatToTimeConverterProvider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::ColorNoteItemConverter);
// Type: BeatmapDataLoaderVersion4::ColorNoteItemConverter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: ::BeatmapDataLoaderVersion4::ColorNoteItemConverter*
class CORDL_TYPE ColorNoteItemConverter : public ::GlobalNamespace::BeatToTimeConverterProvider {
public:
  // Declarations
  /// @brief Field _colorNotes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__colorNotes,
                      put = __cordl_internal_set__colorNotes))::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> _colorNotes;

  /// @brief Method Convert, addr 0x14fc9e8, size 0xcc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion4::BeatmapBeatIndex* index);

  static inline ::BeatmapDataLoaderVersion4::ColorNoteItemConverter* New_ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> colorNotes,
                                                                              ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> const& __cordl_internal_get__colorNotes() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*>& __cordl_internal_get__colorNotes();

  constexpr void __cordl_internal_set__colorNotes(::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> value);

  /// @brief Method .ctor, addr 0x14fc8d8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> colorNotes, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

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

  /// @brief Field _colorNotes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> ____colorNotes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::ColorNoteItemConverter, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::ColorNoteItemConverter, ____colorNotes) == 0x18, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::ColorNoteItemConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::ColorNoteItemConverter*, "BeatmapDataLoaderVersion4", "ColorNoteItemConverter");
