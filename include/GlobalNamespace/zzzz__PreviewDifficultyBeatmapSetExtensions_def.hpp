#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PreviewDifficultyBeatmapSetExtensions)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSetExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions);
// Type: ::PreviewDifficultyBeatmapSetExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4242))
// CS Name: ::PreviewDifficultyBeatmapSetExtensions*
class CORDL_TYPE PreviewDifficultyBeatmapSetExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetBeatmapCharacteristics, addr 0x232d1a0, size 0xec, virtual false, abstract: false, final false
  static inline ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>
  GetBeatmapCharacteristics(::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*> previewDifficultyBeatmapSet);

  /// @brief Method GetPreviewDifficultyBeatmapSetWithout360Movement, addr 0x232d28c, size 0x144, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*
  GetPreviewDifficultyBeatmapSetWithout360Movement(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSet);

  // Ctor Parameters [CppParam { name: "", ty: "PreviewDifficultyBeatmapSetExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreviewDifficultyBeatmapSetExtensions(PreviewDifficultyBeatmapSetExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreviewDifficultyBeatmapSetExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreviewDifficultyBeatmapSetExtensions(PreviewDifficultyBeatmapSetExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreviewDifficultyBeatmapSetExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions*, "", "PreviewDifficultyBeatmapSetExtensions");
