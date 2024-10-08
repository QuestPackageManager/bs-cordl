#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/ChainItemConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatToTimeConverterProvider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ChainItemConverter)
namespace BeatmapSaveDataVersion4 {
class ChainBeatIndex;
}
namespace BeatmapSaveDataVersion4 {
struct Chain;
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
class ChainItemConverter;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::ChainItemConverter);
// Type: BeatmapDataLoaderVersion4::ChainItemConverter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: ::BeatmapDataLoaderVersion4::ChainItemConverter*
class CORDL_TYPE ChainItemConverter : public ::GlobalNamespace::BeatToTimeConverterProvider {
public:
  // Declarations
  /// @brief Field _chains, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__chains, put = __cordl_internal_set__chains)) ::ArrayW<::BeatmapSaveDataVersion4::Chain, ::Array<::BeatmapSaveDataVersion4::Chain>*> _chains;

  /// @brief Field _colorNotes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__colorNotes, put = __cordl_internal_set__colorNotes)) ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*>
      _colorNotes;

  /// @brief Method Convert, addr 0x26cbe08, size 0x174, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion4::ChainBeatIndex* index);

  static inline ::BeatmapDataLoaderVersion4::ChainItemConverter* New_ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> colorNotes,
                                                                          ::ArrayW<::BeatmapSaveDataVersion4::Chain, ::Array<::BeatmapSaveDataVersion4::Chain>*> chains,
                                                                          ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::Chain, ::Array<::BeatmapSaveDataVersion4::Chain>*> const& __cordl_internal_get__chains() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::Chain, ::Array<::BeatmapSaveDataVersion4::Chain>*>& __cordl_internal_get__chains();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> const& __cordl_internal_get__colorNotes() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*>& __cordl_internal_get__colorNotes();

  constexpr void __cordl_internal_set__chains(::ArrayW<::BeatmapSaveDataVersion4::Chain, ::Array<::BeatmapSaveDataVersion4::Chain>*> value);

  constexpr void __cordl_internal_set__colorNotes(::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> value);

  /// @brief Method .ctor, addr 0x26cbacc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> colorNotes,
                    ::ArrayW<::BeatmapSaveDataVersion4::Chain, ::Array<::BeatmapSaveDataVersion4::Chain>*> chains, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChainItemConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChainItemConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChainItemConverter(ChainItemConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChainItemConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChainItemConverter(ChainItemConverter const&) = delete;

  /// @brief Field _colorNotes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> ____colorNotes;

  /// @brief Field _chains, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::Chain, ::Array<::BeatmapSaveDataVersion4::Chain>*> ____chains;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13434 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::ChainItemConverter, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::ChainItemConverter, ____colorNotes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::ChainItemConverter, ____chains) == 0x20, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::ChainItemConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::ChainItemConverter*, "BeatmapDataLoaderVersion4", "ChainItemConverter");
