#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/BombNoteItemConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatToTimeConverter_def.hpp"
CORDL_MODULE_EXPORT(BombNoteItemConverter)
namespace BeatmapSaveDataVersion4 {
class BeatmapBeatIndex;
}
namespace BeatmapSaveDataVersion4 {
struct BombNote;
}
namespace GlobalNamespace {
class BeatmapObjectData;
}
namespace GlobalNamespace {
class BpmTimeProcessor;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class BombNoteItemConverter;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::BombNoteItemConverter);
// Dependencies BeatToTimeConverter
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion4.BombNoteItemConverter
class CORDL_TYPE BombNoteItemConverter : public ::GlobalNamespace::BeatToTimeConverter {
public:
  // Declarations
  /// @brief Field _bombNotes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__bombNotes, put = __cordl_internal_set__bombNotes)) ::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*>
      _bombNotes;

  /// @brief Method Convert, addr 0x3638964, size 0x7c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion4::BeatmapBeatIndex* index);

  static inline ::BeatmapDataLoaderVersion4::BombNoteItemConverter* New_ctor(::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*> bombNotes,
                                                                             ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*> const& __cordl_internal_get__bombNotes() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*>& __cordl_internal_get__bombNotes();

  constexpr void __cordl_internal_set__bombNotes(::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*> value);

  /// @brief Method .ctor, addr 0x3638854, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*> bombNotes, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BombNoteItemConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BombNoteItemConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BombNoteItemConverter(BombNoteItemConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BombNoteItemConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BombNoteItemConverter(BombNoteItemConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15385 };

  /// @brief Field _bombNotes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*> ____bombNotes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion4::BombNoteItemConverter, ____bombNotes) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::BombNoteItemConverter, 0x20>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::BombNoteItemConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::BombNoteItemConverter*, "BeatmapDataLoaderVersion4", "BombNoteItemConverter");
