#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/ArcItemConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatToTimeConverterProvider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ArcItemConverter)
namespace BeatmapSaveDataVersion4 {
class ArcBeatIndex;
}
namespace BeatmapSaveDataVersion4 {
struct Arc;
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
class ArcItemConverter;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::ArcItemConverter);
// Type: BeatmapDataLoaderVersion4::ArcItemConverter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: ::BeatmapDataLoaderVersion4::ArcItemConverter*
class CORDL_TYPE ArcItemConverter : public ::GlobalNamespace::BeatToTimeConverterProvider {
public:
  // Declarations
  /// @brief Field _arcs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__arcs, put = __cordl_internal_set__arcs))::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*> _arcs;

  /// @brief Field _colorNotes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__colorNotes,
                      put = __cordl_internal_set__colorNotes))::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> _colorNotes;

  /// @brief Method Convert, addr 0x14fcd90, size 0x1ac, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion4::ArcBeatIndex* index);

  static inline ::BeatmapDataLoaderVersion4::ArcItemConverter* New_ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> colorNotes,
                                                                        ::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*> arcs,
                                                                        ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*> const& __cordl_internal_get__arcs() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*>& __cordl_internal_get__arcs();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> const& __cordl_internal_get__colorNotes() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*>& __cordl_internal_get__colorNotes();

  constexpr void __cordl_internal_set__arcs(::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*> value);

  constexpr void __cordl_internal_set__colorNotes(::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> value);

  /// @brief Method .ctor, addr 0x14fc98c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> colorNotes,
                    ::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*> arcs, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArcItemConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArcItemConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArcItemConverter(ArcItemConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArcItemConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArcItemConverter(ArcItemConverter const&) = delete;

  /// @brief Field _colorNotes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> ____colorNotes;

  /// @brief Field _arcs, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*> ____arcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::ArcItemConverter, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::ArcItemConverter, ____colorNotes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::ArcItemConverter, ____arcs) == 0x20, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::ArcItemConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::ArcItemConverter*, "BeatmapDataLoaderVersion4", "ArcItemConverter");
